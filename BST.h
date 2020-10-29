#ifndef BST_H
#define BST_H


struct BST {
	int value;
	struct BST* left;
	struct BST* right;
};

BST* createNode(BST* root, int value);
void printInOrder(BST* root);
void printPreOrder(BST* root);
void printPostOrder(BST* root);






#endif
