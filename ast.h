#include <stdio.h>

typedef struct _ast ast;
typedef struct _ast *past;
struct _ast
{
	int ivalue;
	char* svalue;
	char* typeValue;
	char *nodeTypeStr;
	past left;
	past right;
	past if_cond;
	past next;
};

past newAstNode();
past newBinaryExp(char* oper, past left, past right);
past newBasicNode(char* NodeType, char * sVal, int iVal, past left, past right, past Next);
past newIfNode(past if_cond, past if_body, past else_body);