%{

#include <stdio.h>
#include "ast.h"

int yylex(void);
void yyerror(char *);
extern char *yytext;

past root;

int n = 0;

void ShowYes()
{
	n++;
	printf("%d: Yes!\n",n);
}

void show(char* str)
{
	printf("str: %s \n", str);
}

%}

%union{
	int iValue;
	char* sValue;
	past pAst;
}

%token num_INT
%token num_FLOAT
%token INT
%token FLOAT
%token VOID
%token CONST
%token IF
%token ELSE
%token WHILE
%token BREAK
%token CONTINUE
%token RETURN
%token ADD
%token SUB
%token MUL
%token DIV
%token MODULO
%token LESS
%token LESSEQ
%token GREAT
%token GREATEQ
%token NOTEQ
%token EQ
%token NOT
%token AND
%token OR
%token ASSIGN
%token LPAR
%token RPAR
%token LBRACKET
%token RBRACKET
%token LSQUARE
%token RSQUARE
%token COMMA
%token SEMICOLON

%token <iValue> NUMBER
%token <sValue> ID

%type <pAst> ConstExp ConstExps AddExp LOrExp LAndExp EqExp RelExp MulExp UnaryExp PrimaryExp Exp
%type <pAst> CallParams LVal ArraySubscripts Block Stmt BlockItem BlockItems FuncFParam FuncFParams
%type <pAst> FuncDef InitVal InitVals VarDef VarDecls VarDecl ConstInitVals ConstInitVal ConstDef ConstDefs ConstDecl Decl
%type <pAst> CompUnit

%%
CompUnit: Decl CompUnit		{ $$ = $1; $$->next = $2; }
        | FuncDef CompUnit	{ $$ = $1; $$->next = $2; }
        | Decl				{ $$ = $1; }
        | FuncDef			{ $$ = $1; }
		;

Decl: ConstDecl	{ $$ = newBasicNode("DECL_STMT", NULL, -1, $1, NULL, NULL); }
    | VarDecl	{ $$ = newBasicNode("DECL_STMT", NULL, -1, $1, NULL, NULL); }
	;

ConstDecl: CONST INT ConstDef SEMICOLON		{ $$ = $3; $3->typeValue = "const int"; }
        | CONST INT ConstDefs SEMICOLON		{ $$ = $3; $3->typeValue = "const int"; }
		;

ConstDefs: ConstDef COMMA ConstDef			{ $$ = $1; $$->next = $3; }
        | ConstDefs COMMA ConstDef			{ $$ = $1; $$->next = $3; }
		;

ConstDef: ID ASSIGN ConstInitVal			{ $$ = newBasicNode("VAR_DECL", "ID", -1, $3, NULL, NULL); }
        | ID ConstExps ASSIGN ConstInitVal	{ $$ = newBasicNode("VAR_DECL", "ID_ConstExps", -1, $4, NULL, NULL); }
		;

ConstExps: LSQUARE ConstExp RSQUARE				{ $$ = $2; }
        | LSQUARE ConstExp RSQUARE ConstExps	{ $$ = $2; $$->next = $4; }
		;

ConstInitVal: ConstExp										{ $$ = $1; }
            | LBRACKET RBRACKET								{ $$ = newBasicNode("INIT_LIST_EXPR", NULL, -1, NULL, NULL, NULL); }
            | LBRACKET ConstInitVal RBRACKET				{ $$ = newBasicNode("INIT_LIST_EXPR", NULL, -1, $2, NULL, NULL); }
            | LBRACKET ConstInitVal ConstInitVals RBRACKET	{ $$ = newBasicNode("INIT_LIST_EXPR", NULL, -1, $2, $3, NULL); }
			;

ConstInitVals: COMMA ConstInitVal				{ $$ = $2; }
            |COMMA ConstInitVal ConstInitVals	{ $$ = $2; $$->next = $3; }
			;

	//type : int or float
VarDecl: INT VarDef SEMICOLON				{ $$ = $2; $$->typeValue = "INT"; }
		| FLOAT VarDef SEMICOLON			{ $$ = $2; $$->typeValue = "FLOAT"; }
		| INT VarDef VarDecls SEMICOLON		{ $$ = $2; $$->typeValue = "INT"; $$->next = $3;}
		| FLOAT VarDef VarDecls SEMICOLON	{ $$ = $2; $$->typeValue = "FLOAT"; $$->next = $3;}
		;

VarDecls: COMMA VarDef					{ $$ = $2; }
        | COMMA VarDef VarDecls			{ $$ = $2; $$->next = $3; }
		;

VarDef: ID								{ $$ = newBasicNode("VAR_DECL", "VarDefId", -1, NULL, NULL, NULL); }
	| ID ASSIGN InitVal					{ $$ = newBasicNode("VAR_DECL", "VarDefId", -1, $3, NULL, NULL); }
	| ID ConstExps						{ $$ = newBasicNode("VAR_DECL", "VarDefId_ConstExps", -1, NULL, NULL, NULL); }
	| ID ConstExps ASSIGN InitVal		{ $$ = newBasicNode("VAR_DECL", "VarDefId_ConstExps", -1, $4, NULL, NULL); }
	;

InitVal: Exp									{ $$ = $1; }
		| LBRACKET RBRACKET						{ $$ = newBasicNode("INIT_LIST_EXPR", NULL, -1, NULL, NULL, NULL); }
		| LBRACKET InitVal RBRACKET				{ $$ = newBasicNode("INIT_LIST_EXPR", NULL, -1, $2, NULL, NULL); }
		| LBRACKET InitVal InitVals RBRACKET	{ $$ = newBasicNode("INIT_LIST_EXPR", NULL, -1, $2, $3, NULL); }
		;

InitVals: COMMA InitVal							{ $$ = $2; }
        | COMMA InitVal InitVals				{ $$ = $2; $$->next = $3; }
		;

FuncDef: INT ID LPAR RPAR Block					{ $$ = newBasicNode("FUNCTION_DECL", "ID", -1, NULL, $5, NULL); }
		| FLOAT ID LPAR RPAR Block				{ $$ = newBasicNode("FUNCTION_DECL", "ID", -1, NULL, $5, NULL); }
		| INT ID LPAR FuncFParams RPAR Block	{ $$ = newBasicNode("FUNCTION_DECL", "ID", -1, $4, $6, NULL); }
		| FLOAT ID LPAR FuncFParams RPAR Block	{ $$ = newBasicNode("FUNCTION_DECL", "ID", -1, $4, $6, NULL); }
		;

FuncFParams: FuncFParam					{ $$ = $1; }
        | FuncFParam COMMA FuncFParams 	{ $$ = $1; $$->next = $3; }
		; // sequence of FuncParams changed

FuncFParam: INT ID									{ $$ = newBasicNode("PARM_DECL", "ID", -1, NULL, NULL, NULL); }
        | INT ID LSQUARE RSQUARE					{ $$ = newBasicNode("PARM_DECL", "ID", -1, NULL, NULL, NULL); }
        | INT ID ArraySubscripts					{ $$ = newBasicNode("PARM_DECL", "ID", -1, NULL, NULL, NULL); }
        | INT ID LSQUARE RSQUARE ArraySubscripts	{ $$ = newBasicNode("PARM_DECL", "ID", -1, NULL, NULL, NULL); }
		;

Block: LBRACKET BlockItems RBRACKET		{ $$ = newBasicNode("COMPOUND_STMT", NULL, -1, NULL, NULL, $2); }
    | LBRACKET RBRACKET					{ $$ = newBasicNode("COMPOUND_STMT", NULL, -1, NULL, NULL, NULL); }
	;

BlockItems: BlockItem			{ $$ = $1; }
        | BlockItem BlockItems	{ $$ = $1; $$->next = $2; }
		;

BlockItem: Decl					{ $$ = $1; }
        | Stmt					{ $$ = $1; }
		;

Stmt: LVal ASSIGN Exp SEMICOLON				{ $$ = newBasicNode("BINARY_OPERATOR", "=", -1, $1, $3, NULL); }	
    | Exp SEMICOLON							{ $$ = $1; }
    | Block									{ $$ = $1; }
    | WHILE LPAR LOrExp RPAR Stmt			{ $$ = newIfNode($3, $5, NULL);}
    | IF LPAR LOrExp RPAR Stmt				{ $$ = newIfNode($3, $5, NULL);}
    | IF LPAR LOrExp RPAR Stmt ELSE Stmt	{ $$ = newIfNode($3, $5, $7);}
    | BREAK SEMICOLON						{ $$ = newBasicNode("BREAK_STMT", NULL, -1, NULL, NULL, NULL); }	
    | CONTINUE SEMICOLON					{ $$ = newBasicNode("CONTINUE_STMT", NULL, -1, NULL, NULL, NULL); }
    | RETURN Exp SEMICOLON					{ $$ = newBasicNode("RETURN_STMT", NULL, -1, $2, NULL, NULL); }
    | RETURN SEMICOLON						{ $$ = newBasicNode("RETURN_STMT", NULL, -1, NULL, NULL, NULL); }
	;

Exp: AddExp
	;

LVal: ID						{ $$ = newBasicNode("DECL_REF_EXPR", NULL, -1, NULL, NULL, NULL); }
    | ID ArraySubscripts		{ $$ = newBasicNode("ARRASUBSCRIPT_EXPR", NULL, -1, $2, NULL, NULL); }
	;

ArraySubscripts: LSQUARE Exp RSQUARE			{ $$ = newBasicNode("DECL_REF_EXPR", NULL, -1, NULL, NULL, $2); }
		| ArraySubscripts LSQUARE Exp RSQUARE	{ $$ = newBasicNode("ARRASUBSCRIPT_EXPR", NULL, -1, $1, $3, NULL); }
		; // sequence of ArraySubscripts changed

PrimaryExp: LPAR Exp RPAR		{ $$ = $2; }
        | LVal					{ $$ = $1; }
        | num_INT				{ $$ = newBasicNode("INTEGER_LITERAL", NULL, yylval.iValue, NULL, NULL, NULL); }
        | num_FLOAT				{ $$ = newBasicNode("FLOAT_LITERAL", NULL, yylval.iValue, NULL, NULL, NULL); }
		;


UnaryExp: PrimaryExp			{ $$ = $1; }
    | ID LPAR RPAR				{ $$ = newBasicNode("CALL_EXPR", NULL, -1,newBasicNode("DECL_REF_EXPR", "ID", -1, NULL, NULL, NULL), NULL, NULL); }
    | ID LPAR CallParams RPAR	{ $$ = newBasicNode("CALL_EXPR", NULL, -1,newBasicNode("DECL_REF_EXPR", "ID", -1, NULL, NULL, NULL), $3  , NULL); }
    | ADD UnaryExp				{ $$ = newBasicNode("UNARY_EXPR", "+", -1, NULL, NULL, $2); }
    | SUB UnaryExp				{ $$ = newBasicNode("UNARY_EXPR", "+", -1, NULL, NULL, $2); }
    | NOT UnaryExp				{ $$ = newBasicNode("UNARY_EXPR", "!", -1, NULL, NULL, $2); }
	;


CallParams: Exp					{ $$ = $1; }
        | Exp COMMA CallParams	{ $$ = $1; $$->next = $3; }
		;


MulExp: UnaryExp				{ $$ = $1;}
    | MulExp MUL UnaryExp		{ $$ = newBinaryExp("*", $1, $3); }
    | MulExp DIV UnaryExp		{ $$ = newBinaryExp("/", $1, $3); }
    | MulExp MODULO UnaryExp	{ $$ = newBinaryExp("%", $1, $3); }
	;

AddExp: MulExp
    | AddExp ADD MulExp			{ $$ = newBinaryExp("+", $1, $3); }
    | AddExp SUB MulExp			{ $$ = newBinaryExp("-", $1, $3); }
	;

RelExp: AddExp
    | AddExp LESS RelExp		{ $$ = newBinaryExp("<", $1, $3); }
    | AddExp GREAT RelExp		{ $$ = newBinaryExp(">", $1, $3); }
    | AddExp LESSEQ RelExp		{ $$ = newBinaryExp("<=", $1, $3); }
    | AddExp GREATEQ RelExp		{ $$ = newBinaryExp(">=", $1, $3); }
	;

EqExp: RelExp
	| RelExp EQ EqExp			{ $$ = newBinaryExp("==", $1, $3); }
	| RelExp NOTEQ EqExp		{ $$ = newBinaryExp("!=", $1, $3); }
	;

LAndExp: EqExp
	| EqExp AND LAndExp			{ $$ = newBinaryExp("&&", $1, $3); }
	;

LOrExp:	LAndExp					
	|LAndExp OR LOrExp			{ $$ = newBinaryExp("||", $1, $3);}
	;


ConstExp: AddExp 				{ $$ = $1; }
	;
%%
void yyerror(char *s) 
{
	fprintf(stderr, "%s\n", s);
}


