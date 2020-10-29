#include <iostream>
#include <stdlib.h>
#include "BST.h"
using namespace std;

int main() {

	BST* root = NULL;
	root = createNode(root, 3);
	root = createNode(root, 2);
	root = createNode(root, 10);
	root = createNode(root, 20);
	root = createNode(root, 100);
	printInOrder(root);
	cout << endl;
	printPreOrder(root);
	cout << endl;
	printPostOrder(root);



	return 0;
}