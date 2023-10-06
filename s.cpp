#include<bits/stdc++.h>
using namespace std;
#define printarr(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
#define bl_ cerr<<endl;
#define debug(x) cerr<<#x<<" "<<x<<endl;

enum Color { RED , BLACK} ;
class Node {
public:
	int data, height;
	Node * left, *right, *parent;
	Color color; // red =0 , black =1

	Node(int data) {
		this->data = data;
		height = 1;
		right = left = parent = NULL;
		color = RED;
	}
};
class RBTree {
public:
	Node * root;
	RBTree() {
		root = NULL;
	}

	// Insert a node into the Red-Black Tree
	void insert(int data) {
		// Step 1: If the tree is empty, create a new node as the root with color black
		if (root == nullptr) {
			root = new Node(data);
			root->color = BLACK;
			return;
		}

		// Step 2: Perform a standard BST insertion
		Node* newNode = insertBST(root, data);

		// Step 3: If the parent of the new node is black, exit (no violation)
		if (newNode->parent == nullptr || newNode->parent->color == BLACK) {
			return;
		}

		// Step 4: If the parent of the new node is red, check the color of parent's sibling
		Node* grandparent = newNode->parent->parent;
		Node* uncle = (newNode->parent == grandparent->left) ? grandparent->right : grandparent->left;

		// Step 5: If uncle's color is black (or null), make suitable rotation and recolor
		if (uncle == nullptr || uncle->color == BLACK) {
			performRotationAndRecolor(newNode);
		}
		// Step 6: If uncle's color is red, recolor it
		else {
			recolor(newNode, grandparent, uncle);
		}
	}
	void inOrderPrint() {
		inOrderPrint(root); cout << endl;
	}
private:
	// Perform a standard BST insertion
	Node* insertBST(Node* root, int data) {
		if (data < root->data) {
			if (root->left == nullptr) {
				root->left = new Node(data);
				root->left->parent = root;
				return root->left;
			}
			return insertBST(root->left, data);
		} else if (data > root->data) {
			if (root->right == nullptr) {
				root->right = new Node(data);
				root->right->parent = root;
				return root->right;
			}
			return insertBST(root->right, data);
		}
		return root;
	}

	// Perform rotation and recoloring
	void performRotationAndRecolor(Node* newNode) {
		Node* parent = newNode->parent;
		Node* grandparent = parent->parent;

		if (parent == grandparent->left) {
			if (newNode == parent->right) {
				// Left rotation
				rotateLeft(parent);
				newNode = parent;
				parent = newNode->parent;
			}

			// Right rotation
			rotateRight(grandparent);
			::swap(parent->color, grandparent->color);
		} else {
			if (newNode == parent->left) {
				// Right rotation
				rotateRight(parent);
				newNode = parent;
				parent = newNode->parent;
			}

			// Left rotation
			rotateLeft(grandparent);
			std::swap(parent->color, grandparent->color);
		}

		root->color = BLACK; // Ensure the root is always black
	}

	// Recolor the nodes
	void recolor(Node* newNode, Node* grandparent, Node* uncle) {
		grandparent->color = RED;
		newNode->parent->color = BLACK;
		uncle->color = BLACK;

		// Recursively check for violations higher up the tree
		if (grandparent != root) {
			Node* newGrandparent = grandparent->parent;
			if (newGrandparent->color == RED) {
				performRotationAndRecolor(grandparent);
			}
		}
	}

	// Left rotation
	void rotateLeft(Node* node) {
		Node* rightChild = node->right;
		node->right = rightChild->left;

		if (rightChild->left != nullptr) {
			rightChild->left->parent = node;
		}

		rightChild->parent = node->parent;

		if (node->parent == nullptr) {
			root = rightChild;
		} else if (node == node->parent->left) {
			node->parent->left = rightChild;
		} else {
			node->parent->right = rightChild;
		}

		rightChild->left = node;
		node->parent = rightChild;
	}

	// Right rotation
	void rotateRight(Node* node) {
		Node* leftChild = node->left;
		node->left = leftChild->right;

		if (leftChild->right != nullptr) {
			leftChild->right->parent = node;
		}

		leftChild->parent = node->parent;

		if (node->parent == nullptr) {
			root = leftChild;
		} else if (node == node->parent->left) {
			node->parent->left = leftChild;
		} else {
			node->parent->right = leftChild;
		}

		leftChild->right = node;
		node->parent = leftChild;
	}
	void inOrderPrint(Node * node) {
		if (node == NULL) return;
		inOrderPrint(node->left);
		cout << node->data << " ";
		inOrderPrint(node->right);
	}
};

int main() {
	RBTree root;
	root.insert(10);
	root.insert(18);
	root.insert(5);
	root.insert(4);
	root.insert(15);
	root.insert(17);


	root.inOrderPrint();

	return 0;
}
