#include "bst.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
	Node *root = NULL;

	printf("START OF INSERTION\n");
	printf("==================\n");
	root = insertNode(root, 14);
	printf("ROOT DATA IS %d\n\n", root->data);
	root = insertNode(root, 12);
	printf("ROOT DATA IS %d\n\n", root->data);
	root = insertNode(root, 6);
	printf("ROOT DATA IS %d\n\n", root->data);
	root = insertNode(root, 1);
	printf("ROOT DATA IS %d\n\n", root->data);
	root = insertNode(root, 5);
	printf("ROOT DATA IS %d\n\n", root->data);
	root = insertNode(root, 26);
	printf("ROOT DATA IS %d\n\n", root->data);
	root = insertNode(root, 99);
	printf("END OF INSERTION\n");
	printf("==================\n\n");
	printSubtree(root);
	printf("\n");
	// printf("START OF DELETION\n");
	// printf("==================\n");
	// root = deleteNode(root, 12);
	// printf("ROOT DATA IS %d\n\n", root->data);
	// root = deleteNode(root, 14);
	// printf("ROOT DATA IS %d\n\n", root->data);
	// printf("END OF DELETION\n");
	printf("==================\n");
	printSubtree(root);
	printf("Number of nodes=%d\n", countNodes(root));
	printf("Running sum subtree\n");
	printf("Sum = %d\n", sumSubtree(root));
	printf("Running balance tree\n");
	root = balanceTree(root);
	printf("Running sum subtree\n");
	printf("Sum = %d\n", sumSubtree(root));
	printf("Running free subtree\n");
	root = freeSubtree(root);
	printf("Number of nodes=%d\n", countNodes(root));

	return 0;
}