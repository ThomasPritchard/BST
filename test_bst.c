#include "bst.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void clean(Node* root);
void task_1(Node* root);
void task_2(Node* root);
void task_3(Node* root);
void *serveClient(char *clientCommand);

void printBreak(){
	printf("==================\n");
}

int main()
{
	printf("START OF TESTS\n");
	printBreak();

	Node *root = NULL;
	task_1(root);
	task_2(root);
	task_3(root);

	clean(root);
	return 0;
}

void task_1(Node* root){
	printf("START OF TASK 1 \n\n");
	printBreak();

	printf("START OF INSERTION\n");
	printBreak();
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
	printBreak();
	printSubtree(root);
	printf("\n");
	printf("START OF DELETION\n");
	printBreak();
	root = deleteNode(root, 12);
	printf("ROOT DATA IS %d\n\n", root->data);
	root = deleteNode(root, 14);
	printf("ROOT DATA IS %d\n\n", root->data);
	printf("END OF DELETION\n");
	printBreak();
	printSubtree(root);
	printf("Number of nodes=%d\n", countNodes(root));
	printBreak();
	printf("END OF TASK 1\n\n");
}

void task_2(Node* root){
	printf("START OF TASK 2\n\n");
	printBreak();
	printf("Running sum subtree\n");
	printf("Sum = %d\n", sumSubtree(root));
	printf("Running balance tree\n");
	root = balanceTree(root);
	printf("Running sum subtree\n");
	printf("Sum = %d\n", sumSubtree(root));
	printBreak();
	printf("END OF TASK 2\n\n");
	clean(root);
}

void task_3(Node* root){
	printf("START OF TASK 3\n\n");
	printBreak();
	char* client_names[5] = {"client1_commands", "client2_commands", "client3_commands", "client4_commands", "client5_commands"};

	pthread_t threads[6];

	pthread_create(&threads[0], NULL, (void *) serveClient, client_names[0]);
	pthread_create(&threads[1], NULL, (void *) serveClient, client_names[1]);
	pthread_create(&threads[2], NULL, (void *) serveClient, client_names[2]);
	pthread_create(&threads[3], NULL, (void *) serveClient, client_names[3]);
	pthread_create(&threads[4], NULL, (void *) serveClient, client_names[4]);
	//pthread_create(&threads[5], NULL, (void *) downtime, NULL);

	for(int i = 0; i < 6; i++){
		pthread_join(threads[i], NULL);
	}

	printBreak();
	printf("END OF TASK 3\n\n");

	clean(root);
}

void clean(Node* root){
	printf("Running free subtree\n");
	root = freeSubtree(root);
	root = NULL;
	printf("Number of nodes=%d\n", countNodes(root));
}
