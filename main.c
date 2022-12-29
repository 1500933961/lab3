#include <stdio.h>

#include "ast.h"

extern int yyparse();

int main(int argc, char **argv)
{
	yyparse();
	
	return 0;
}