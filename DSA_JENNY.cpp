// tress & grp are non linear data structure
// mutliple hierarchy


// implementation of the tree in the c

// #include<bits/stdc++.h>
// using namespace std;

// typedef struct node {
// 	int data;
// 	struct node *left , *right;
// } Node;

// Node * create_node(int value) {
// 	Node * new_node = (Node * )malloc(sizeof(Node ));
// 	new_node ->data  = value;
// 	new_node ->left  = NULL;
// 	new_node ->right = NULL;
// 	return new_node;
// }
// void add_left_node(Node* &new_node, int value) {
// 	new_node->left = create_node(value);
// }

// void add_right_node(Node* &new_node, int value) {
// 	new_node->right = create_node(value);
// }

// void inorder_traversal(Node* &new_node) {
// 	if (new_node == NULL)
// 		return;
// 	inorder_traversal(new_node->left);
// 	printf("%d ", new_node->data);
// 	inorder_traversal(new_node->right);
// }

// void preorder_traversal(Node* &new_node) {
// 	if (new_node == NULL)
// 		return;
// 	printf("%d ", new_node->data);
// 	preorder_traversal(new_node->left);
// 	preorder_traversal(new_node->right);
// }

// void postorder_traversal(Node* &new_node) {
// 	if (new_node == NULL)
// 		return;
// 	postorder_traversal(new_node->left);
// 	postorder_traversal(new_node->right);
// 	printf("%d ", new_node->data);
// }

// int main() {
// 	Node * root = create_node(1);

// 	add_left_node(root, 2);
// 	add_left_node(root->left, 4);
// 	add_right_node(root->left, 5);

// 	add_right_node(root, 3);
// 	add_left_node(root->right, 6);
// 	add_right_node(root->right, 7);

// 	printf("Inorder   =>  ");
// 	inorder_traversal(root);
// 	printf("\n");
// 	printf("preorder  =>  ");
// 	preorder_traversal(root);
// 	printf("\n");
// 	printf("postorder =>  ");
// 	postorder_traversal(root);
// 	return 0;
// }

//     1
//    / \
//   2   3
//  / \ / \
// 4  5 6  7


// Inorder   =>  4 2 5 1 6 3 7
// preorder  =>  1 2 4 5 3 6 7
// postorder =>  4 5 2 6 7 3 1

// different copies of all the local varible would be created for each function call

// Array representation of Binary Tree (Sequntial Representation)

/*--------------------------------------------------------------------*/

// AVL TREES INSERTION AND DELETION------>



#include<bits/stdc++.h>
using namespace std;
// These lines include necessary standard libraries for input and output operations and memory allocation.
struct Node {
	int key;
	struct Node* left;
	struct Node* right;
	int height;
};
// Here, a structure `Node` is defined to represent each node of the AVL tree. Each node has an integer `key` representing its value, pointers to its left and right children (`left` and `right`), and an `int` `height` which stores the height of the subtree rooted at this node.

int height(struct Node* node) {
	if (node == NULL)
		return 0;
	return node->height;
}
// This function calculates and returns the height of a node. If the node is `NULL`, it returns 0; otherwise, it returns the `height` attribute of the node.

int max(int a, int b) {
	return (a > b) ? a : b;
}
// The `max` function returns the maximum of two integers `a` and `b`.
struct Node* newNode(int key) {
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1; // New node is initially added at leaf
	return node;
}
// This function creates a new AVL tree node with the given `key`. It allocates memory for the node, initializes its `left` and `right` pointers to `NULL`, and sets its height to 1 since it's initially added as a leaf node.
struct Node* rightRotate(struct Node* y) {
	struct Node* x = y->left;
	struct Node* T2 = x->right;

	x->right = y;
	y->left = T2;

	// Update heights
	y->height = max(height(y->left), height(y->right)) + 1;
	x->height = max(height(x->left), height(x->right)) + 1;

	return x;
}
// This function performs a right rotation on the subtree rooted at node `y`. It takes `y` as input and returns the new root of the rotated subtree.
// - It starts by storing `y`'s left child as `x` and `x`'s right child as `T2`.
// - Then, it adjusts the pointers to perform the rotation: `x` becomes the new root, `y`'s left child becomes `T2`, and `y` becomes `x`'s right child.
// - After the rotation, it updates the heights of `y` and `x` based on the heights of their children.

struct Node* leftRotate(struct Node* x) {
	struct Node* y = x->right;
	struct Node* T2 = y->left;

	y->left = x;
	x->right = T2;

	// Update heights
	x->height = max(height(x->left), height(x->right)) + 1;
	y->height = max(height(y->left), height(y->right)) + 1;

	return y;
}

// This function performs a left rotation on the subtree rooted at node `x`. It takes `x` as input and returns the new root of the rotated subtree. The rotation is similar to the `rightRotate` function but in the opposite direction.

int balanceFactor(struct Node* node) {
	if (node == NULL)
		return 0;
	return height(node->left) - height(node->right);
}
// The `balanceFactor` function calculates and returns the balance factor of a given node. The balance factor is the difference in heights between the left and right subtrees. It is used to check if the tree becomes unbalanced after insertion or deletion.
struct Node* insert(struct Node* node, int key) {
	// Perform standard BST insertion
	if (node == NULL)
		return newNode(key);

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else // Duplicate keys not allowed
		return node;

	// Update height of the current node
	node->height = 1 + max(height(node->left), height(node->right));

	// Get the balance factor of this node to check if it's unbalanced
	int balance = balanceFactor(node);

// The `insert` function inserts a new node with the given `key` into the AVL tree rooted at `node`.
// - It starts by performing standard binary search tree (BST) insertion, which ensures that the new node is placed in the correct position based on its `key`.
// - It then updates the height of the current node based on the heights of its left and right children.
// - Next, it calculates the balance factor for the current node to check if it's unbalanced.

// If this node becomes unbalanced, there are four cases

// Left Left Case
	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

// Right Right Case
	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

// Left Right

// Case
	if (balance > 1 && key > node->left->key) {
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

// Right Left Case
	if (balance < -1 && key < node->right->key) {
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

// This section of code handles the four possible cases when the AVL tree becomes unbalanced after insertion.

// - **Left Left Case**: If the balance factor is greater than 1 and the new key is less than the left child's key, it's a left-left case. A single right rotation (`rightRotate`) is performed on the current node.

// - **Right Right Case**: If the balance factor is less than -1 and the new key is greater than the right child's key, it's a right-right case. A single left rotation (`leftRotate`) is performed on the current node.

// - **Left Right Case**: If the balance factor is greater than 1 and the new key is greater than the left child's key, it's a left-right case. First, a left rotation (`leftRotate`) is performed on the left child, and then a right rotation (`rightRotate`) is performed on the current node.

// - **Right Left Case**: If the balance factor is less than -1 and the new key is less than the right child's key, it's a right-left case. First, a right rotation (`rightRotate`) is performed on the right child, and then a left rotation (`leftRotate`) is performed on the current node.

// These rotations rebalance the tree while preserving the AVL property.

	return node;
}
// After handling the unbalanced cases, the function returns the current node.

struct Node* minValueNode(struct Node * node) {
	struct Node* current = node;
	while (current->left != NULL)
		current = current->left;
	return current;
}

// The `minValueNode` function finds and returns the node with the minimum key value in a given AVL tree. It starts from the given node and traverses to the leftmost node in the tree to find the minimum.

struct Node* deleteNode(struct Node * root, int key) {
	// Perform standard BST delete
	if (root == NULL)
		return root;

	if (key < root->key)
		root->left = deleteNode(root->left, key);
	else if (key > root->key)
		root->right = deleteNode(root->right, key);
	else {
		// Node with only one child or no child
		if ((root->left == NULL) || (root->right == NULL)) {
			struct Node* temp = root->left ? root->left : root->right;

			// No child case
			if (temp == NULL) {
				temp = root;
				root = NULL;
			} else // One child case
				*root = *temp; // Copy the contents of the non-empty child

			free(temp);
		} else {
			// Node with two children: get the inorder successor (smallest in the right subtree)
			struct Node* temp = minValueNode(root->right);

			// Copy the inorder successor's data to this node
			root->key = temp->key;

			// Delete the inorder successor
			root->right = deleteNode(root->right, temp->key);
		}
	}

	// If the tree had only one node, return
	if (root == NULL)
		return root;

	// Update the height of the current node
	root->height = 1 + max(height(root->left), height(root->right));

	// Get the balance factor of this node
	int balance = balanceFactor(root);

	// If this node becomes unbalanced, there are four cases

	// Left Left Case
	if (balance > 1 && balanceFactor(root->left) >= 0)
		return rightRotate(root);

	// Left Right Case
	if (balance > 1 && balanceFactor(root->left) < 0) {
		root->left = leftRotate(root->left);
		return rightRotate(root);
	}

	// Right Right Case
	if (balance < -1 && balanceFactor(root->right) <= 0)
		return leftRotate(root);

	// Right Left Case
	if (balance < -1 && balanceFactor(root->right) > 0) {
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}

	return root;
}

// This section of code defines the `deleteNode` function to remove a node with a given key from the AVL tree. It handles different cases:
// - If the node to be deleted has no children or only one child, it is removed straightforwardly.
// - If the node has two children, it finds the inorder successor (smallest node in the right subtree), copies its key to the current node, and then recursively deletes the inorder successor.
// - After deleting a node, it updates the height and checks for AVL balance and performs rotations if needed.

void inOrder(struct Node * root) {
	if (root != NULL) {
		inOrder(root->left);
		printf("%d ", root->key);
		inOrder(root->right);
	}
}
bool search_node(Node *& root, int data) {
	if (root == NULL) return false;
	if (data == root->key) {
		return true;
	}
	else if (data < root->key) {
		return search_node(root->left, data);
	}
	else {
		return search_node(root->right , data);
	}
}
// The `inOrder` function performs an in-order traversal of the AVL tree and prints the values of nodes in sorted order.
int main() {
	struct Node* root = NULL;

	root = insert(root, 63);
	root = insert(root, 9);
	root = insert(root, 19);
	root = insert(root, 27);
	root = insert(root, 18);
	root = insert(root, 108);
	root = insert(root, 99);
	root = insert(root, 81);

	inOrder(root);
	printf("\n");
	cout << ( search_node(root, 82) ?  "true" : "false") << endl;

	// root = deleteNode(root, 81);
	// root = deleteNode(root, 99);
	// root = deleteNode(root,108);
	// root = deleteNode(root, 18);
	// root = deleteNode(root, 27);
	// root = deleteNode(root, 19);

	// printf("\nIn-order traversal of the AVL tree after deletion: ");
	// inOrder(root);

	return 0;
}

// - Nodes with values 63, 9, 19, 27, 18, 108, 99, and 81 are inserted into the AVL tree.
// - The `inOrder` function is called to print the AVL tree in in-order (sorted) fashion.
// - Nodes with values 81, 99, 108, 18, 27, and 19 are deleted from the AVL tree.
// - The `inOrder` function is called again to print the AVL tree after deletion.

// The code demonstrates the
//  creation, insertion, and deletion of nodes in an AVL tree while maintaining balance through rotations.

/*------------------------------------------------------------------------------------------------------------------*/
// B TREES ->>
// balanced m(order) way tree
// Every node can have more than one data and also can have more than two children
// maintains itself in the sorted order
// all the tree leaves must be at a same level

// B tree of order m has following properties------>
//  Every node has max m children
// Min children : leaf ---> 0 , root ---> 2 , internal_nodes = ceil(m/2)
// For every nodes has max (m-1) data
// for root node minimum data will be 1
// and all other nodes will be =  ceil(m/2)-1;
/*--------------------------------------*/
// CREATE A B-TREE OF ORDER 3 BY INSERTING VALUES FROM 1 T0 10
// max data would be =: m-1 =3-1 = 2;