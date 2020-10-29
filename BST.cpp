#include <iostream>
#include <stdlib.h>
#include "BST.h"
using namespace std;

BST* createNode(BST* root, int value) {
	BST* newNode = (BST*)malloc(sizeof(BST));
	if (root == NULL) {
		newNode->value = value;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	else if (value <= root->value) {
		root->left = createNode(root->left, value);
	}
	else {
		root->right = createNode(root->right, value);
	}
	return root;
}

void printInOrder(BST* root) {
	BST* curr = root;
	if (curr == NULL) {
		return;
	}
	printInOrder(curr->left);
	cout << root->value << " ";
	printInOrder(curr->right);
}

void printPreOrder(BST* root) {
	BST* curr = root;
	if (curr == NULL) {
		return;
	}
	cout << root->value << " ";
	printInOrder(curr->left);
	printInOrder(curr->right);
}

void printPostOrder(BST* root) {
	BST* curr = root;
	if (curr == NULL) {
		return;
	}
	printInOrder(curr->left);
	printInOrder(curr->right);
	cout << root->value << " ";
}