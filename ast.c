#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ast.h"

past newAstNode()
{
	past node = malloc(sizeof(ast));
	if (node == NULL)
	{
		printf("run out of memory.\n");
		exit(0);
	}
	memset(node, 0, sizeof(ast));
	return node;
}

past newBinaryExp(char* oper, past left, past right)
{
	past var = newAstNode();
	var->nodeTypeStr = "BINARY_OPERATOR";
	var->svalue = strdup(oper);
	var->left = left;
	var->right = right;
	return var;
}

past newBasicNode(char* NodeType, char* sVal, int iVal, past left, past right, past Next)
{
	past var = newAstNode();
	var->nodeTypeStr = NodeType;
	var->svalue = sVal;
	var->ivalue = iVal;
	var->left = left;
	var->right = right;
	var->next = Next;
	return var;
}

past newIfNode(past if_cond,past if_body,past else_body)
{
	past var = newAstNode();
	var->nodeTypeStr = "IF_STMT";
	var->if_cond = if_cond;
	var->left = if_body;
	var->right = else_body;
	return var;
}