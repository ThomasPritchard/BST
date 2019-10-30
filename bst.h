#ifndef BST_H
#define BST_H
typedef struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}Node;

Node* insertNode(Node *root, int value);
Node* deleteNode(Node* root, int value);
Node* inorderSuccessor(Node* root, int value);
Node* findMinimum(Node* root);
void printSubtree(Node *N);
int countNodes(Node *N);
Node* freeSubtree(Node *N);

#endif
