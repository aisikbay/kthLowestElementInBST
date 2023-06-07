//ARAM ISIKBAY

#include <iostream>
#define WIDTH 10; //padding for printing

class Node {
public:
	int value;
	Node* left;
	Node* right;
	//Deconstructor
	~Node() {
		delete left;
		delete right;
	}
};

//Node constructor with passed-in value
Node* newNode(int value) {
	Node* node = new Node();
	node->value = value;
	node->left = NULL;
	node->right = NULL;
	return node;
}

//Recursive function to create BST
Node* toBST(int arr[], int start, int end) {
	if (start > end) {
		return NULL;
	}
	//Root of the (sub)tree is the median between 'start' and 'end'
	int median = (start + end) / 2;
	Node* root = newNode(arr[median]);
	//Create left and right subtrees
	root->left = toBST(arr, start, median - 1);
	root->right = toBST(arr, median + 1, end);
	return root;
}

//Traverse tree and print kth element
int traverseTree(Node* node, const int k, int space, int& size, int& output) {
	if (node == NULL) {
		return output;
	}
	space += WIDTH;
	traverseTree(node->right, k, space, size, output);
	std::cout << std::endl;
	for (int i = 0; i < space; i++) {
		std::cout << " ";
	}
	if (size == k) {
		output = node->value;
		std::cout << "\033[;33m";
	}
	std::cout << node->value << "\033[0m\n" << std::endl;
	size--;
	traverseTree(node->left, k, space, size, output);
}


int main() {
	int k;
	int arr[15] = { 6, 17, 20, 41, 45, 52, 57, 65, 71, 76, 79, 87, 92, 95, 99 };
	std::cout << "k: ";
	std::cin >> k;
	int size = sizeof(arr) / sizeof(arr[0]);
	Node* root = toBST(arr, 0, size - 1);
	int output;
	int element = traverseTree(root, k, 0, size, output);
	delete root;
	std::cout << "The " << k << " smallest element is " << element << std::endl;
}