%{

#include <stdio.h>
int yylex(void);
void yyerror(char *);

%}

%union{
	int iValue;
	past pAst;
};

%token <iValue> NUMBER
%type <pAst>	program expr factor term

%%

/*
%token OP CP  in the declaration section
...
%%
term: NUMBER
| ABS term { $$ = $2 >= 0? $2 : - $2; }
| OP exp CP { $$ = $2; } New rule
;

"("     { return OP; }
")"     { return CP; }
"//".*  // ignore comments 
*/

program: program expr '\n'	{showAsr($2, 0); }
    |
    ;

expr: factor			  
	| expr '+' factor     {$$ = newExpr('+', $1, $3);}
	| expr '-' factor     {$$ = newExpr('-', $1, $3);}
	;
	
factor: term
	| factor '*' term    {$$ = newExpr('*', $1, $3);} 
	| factor '/' term    {$$ = newExpr('/', $1, $3);}
	;
	
term: NUMBER            {$$ = newNum($1);}
	| '-' term          {$$ = newExpr('-', NULL, $2); }
	;


%%
void yyerror(char *s) 
{
	fprintf(stderr, "%s\n", s);
}
int main(void) 
{
    yyparse();
    return 0;
}
