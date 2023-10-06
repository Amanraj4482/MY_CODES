// BULDING THE BINARY TREE AND ITS TRAVERSALS -------------->

// A. create Root Node
// B. root-> left = Recursion
// C. root->right = Recursion

// 20 11 -1 -1 13 -1 -1 50 -1 -1
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node * left , * right;

	Node(int data) {
		this->data = data;
		this->right = this->left = NULL;
	}
};
Node * buildTree() {
	int data;
	cout << "Enter the data : " << endl;
	cin >> data;

	// base case
	if (data == -1 ) return NULL;

	// perform the A, B , C
	Node * root = new Node ( data);

	cout << "left part of : " << data << " node " << endl;
	root->left = buildTree();

	cout << "right part of : " << data << " node " << endl;
	root->right = buildTree();
	return root;

}
int main() {
	Node* root = NULL;
	root = buildTree();

	/* Level order traversal */
	return 0;
}



