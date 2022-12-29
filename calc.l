%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ast.h"
#include "calc.tab.h"

void yyerror(char *);
%}

DIGIT		[0-9]
INT		    [0-9][0-9]*
FLOAT		{DIGIT}*(\.{DIGIT}+)?(e|E[+|-]?{DIGIT}+)?

WORD        [a-zA-Z]
ID          [a-zA-Z_][a-zA-Z0-9_]*

%% 


{INT}           {return num_INT;}
{FLOAT}         {return num_FLOAT;} 

"int"           {return INT;}
"float"         {return FLOAT;}
"void"          {return VOID;}
"const"         {return CONST;}
"if"            {return IF;}
"else"          {return ELSE;}
"while"         {return WHILE;}
"break"         {return BREAK;}
"continue"      {return CONTINUE;}
"return"        {return RETURN;}

[+]  	        {return ADD;}
[-]				{return SUB;}
[*] 	        {return MUL;}
[/]	            {return DIV;}
[%]	            {return MODULO;}
[<]		        {return LESS;}
[<][=]	        {return LESSEQ;}
[>]     	    {return GREAT;}
[>][=]          {return GREATEQ;}
[!][=]          {return NOTEQ;}
[=][=]          {return EQ;}
[!]             {return NOT;}
[&][&]          {return AND;}
[|][|]          {return OR;}
[=]             {return ASSIGN;}

\(              {return LPAR;}
\)              {return RPAR;}
\[              {return LBRACKET;}
\]              {return RBRACKET;}
\{              {return LSQUARE;}
\}              {return RSQUARE;}
[,]             {return COMMA;}
[;]             {return SEMICOLON;}

{ID}            {return ID;}

[-+*/\n] 		return *yytext;
[ \t] ; 	/* skip whitespace */
[[:space:]]	{return -1;}

. yyerror("invalid character");

%%

int yywrap(void) 
{
	return 1;
}