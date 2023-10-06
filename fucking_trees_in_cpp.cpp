// #include<bits/stdc++.h>
// using namespace std;
// #define printarr(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
// #define debug(x) cerr<<#x<<" "<<x<<endl;
// #define bl_ cerr<<endl;

// class Node {
// public:
// 	int data;
// 	Node *left, *right;

// 	Node (int data) {
// 		this->data = data;
// 		this->right = this->left = NULL;
// 	}
// 	Node* create_node(int data) {
// 		return new Node(data);
// 	}
// };
// void insert(Node*& root, int data) {
// 	if (root == NULL) { // tree is empty
// 		root = root-> create_node(data);
// 		return;
// 	}
// 	if (data < root->data)insert(root->left, data);
// 	else insert(root->right, data);
// }
// Node* delete_node(Node *& root, int val) {
// 	if (root == NULL) {
// 		cout << "Empty tree" << endl;
// 		return root;
// 	}
// 	// traverse to that node which'll be deleted
// 	Node * curr = root, *parent = NULL; // parent of the curr node
// 	while (curr != NULL && val != curr->data) {
// 		parent = curr;
// 		curr = (val < curr->data) ? curr->left : curr->right;
// 	}
// 	/*node is not present in the tree*/
// 	if (curr == NULL) {
// 		cout << "Node not found" << endl;
// 		return root;
// 	}
// 	/* case 1 : the node to be deleted is having the zero child or it isleave node */
// 	if (curr->left == NULL && curr->right == NULL) {
// 		// Deleting the root node
// 		if (parent == NULL) {
// 			delete root;
// 			root = NULL;
// 		}
// 		else if (parent->left == curr) {
// 			// deleting the left child
// 			delete curr ;
// 			parent->left = NULL;
// 		}
// 		else {
// 			// deleting the right child
// 			delete curr;
// 			parent->right = NULL;
// 		}
// 	}
// 	/* case 2 : the node is having one child */
// 	else if (curr->left == NULL || curr->right == NULL) {
// 		// if the curr ... left or right which is the child it will of its place of the curr node which is parent
// 		// so checking if there exist the child either left or right and comparing with the parent
// 		Node* curr_child = (curr->left != NULL) ? curr->left : curr->right;
// 		if (parent == NULL) {  // here parent is curr parent
// 			// parent itself is the root node
// 			// Deleting the root node
// 			delete root;
// 			// update the root pointer to point to the child node
// 			// curr_child which will become the new root
// 			root = curr_child;
// 		} else if (parent->left == curr) {
// 			// Deleting a left child
// 			delete curr;
// 			parent->left = curr_child; // curr's left child will be the parent's left child
// 		} else {
// 			// Deleting a right child
// 			delete curr;
// 			parent->right = curr_child; // curr's right child will be the parent's right child
// 		}
// 	}
// 	/* case 3 : the node is having the 2 child */
// 	else {
// 		//  either it will be the left subtree or right subtree
// 		// left subtree largest *****   right subtree smallest
// 		// Inorder sequence predecessor or successor
// 		// 4 2 5 *1 6 3 7   // here 1 has to be delted (predecessor -> 5)  || (successor -> 6)
// 		// if the node to be deleted is the root which having no parent in that case i have initilized the parent as the null

// 		// Now find the inorder successor to replace the node and its parent
// 		Node *succ_parent = curr, *succ = curr ->right;
// 		while (succ->left != NULL) {
// 			succ_parent = succ;
// 			succ = succ->left;
// 		}
// 		// succ is pointing the node to be replaced by
// 		curr->data = succ->data;
// 		if (succ_parent->left == succ) {
// 			succ_parent->left = succ->right;  // if having the single left child then null or else succ child right would be the child of the succ_parent
// 		} else {
// 			succ_parent->right = succ->right;
// 		}
// 		delete succ;
// 	}
// 	return root;
// }
// int total_nodes(Node *&root) {
// 	if (root == NULL) return 0;
// 	return (total_nodes(root->left) + total_nodes(root->right) + 1);
// 	// left subtree count + right subtree count +1(root itself)
// }
// void print_post(Node*& root) {
// 	if (root == NULL) return;
// 	print_post(root->left);
// 	print_post(root->right);
// 	cout << root->data << " ";
// }
// int count_leave_node(Node *& root) {
// 	// for every node we are returning the 0 except the nodes which have both left right NULL returning 1
// 	if (root == NULL) return 0;
// 	else if ((root->left == NULL) && (root->right == NULL)) return 1;
// 	else return (count_leave_node(root->left) + count_leave_node(root->right));
// }
// int height(Node * root) {
// 	if (root == NULL) return 0;
// 	int leftHeight = height(root->left);
// 	int rightHeight = height(root->right);
// 	return max(leftHeight, rightHeight) + 1;
// }
// bool search_node(Node *& root, int data) {
// 	if (root == NULL) return false;
// 	if (data == root->data) {
// 		return true;
// 	}
// 	else if (data < root->data) {
// 		return search_node(root->left, data);
// 	}
// 	else {
// 		return search_node(root->right , data);
// 	}
// }
// int main() {
// 	Node * root = NULL;
// 	insert(root, 1);
// 	insert(root->left, 2);
// 	insert(root->left->left, 4);
// 	insert(root->left->right, 5);
// 	insert(root->right, 3);
// 	insert(root->right->left, 6);
// 	insert(root->right->right, 7);

// 	print_post(root); cout << endl;
// 	delete_node(root->left, 2);
// 	delete_node(root->left->left, 4);
// 	print_post(root); cout << endl;

// 	cout << "Total nodes : " << total_nodes(root) << endl;
// 	cout << "Leave nodes : " << count_leave_node(root) << endl;
// 	cout << "Height tree : " << height(root) << endl;
// 	cout << ( search_node(root, 1) ?  "true" : "false") << endl;
// 	return 0;
// }
// // 4 5 2 6 7 3 1
// // 5 6 7 3 1

/*------------------------------------------------------------------------------------------------------------------*/
/* -----------------AVL TREES-----------------------*/
// it is a self balancing binary search tree
// In an Avl tree the heigths of the two child subtrees of any node differ by atmost one
// If at any time they differ by more than one , rebalancing is done to restore the balacing property

// in avl tree the new node is always inserted as a leaf node
// 1. Traversing  2. Searching    3. Inserting     4. Deleting

// insertion ---->
// To perform rotation out first task is to find the critical node
// Critical node is the nearest ancestor node on the path from the inserted node to the root
// whose balance factor is neither -1 , 0, 1
// deletion ---->
// 2 classes of the rotations



// consider x is the node to be deleted and A be the closest ancestor node on the path from X to the root node  or A is the parent node of the X
// if X is present in the left sub tree of A then L rotation is applied else X is in the right sub tree of A then R rotation is performed

/*------------------------------------------------------------------------------------------------------------------*/

// #include<bits/stdc++.h>
// using namespace std;
// #define printarr(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
// #define debug(x) cerr<<#x<<" "<<x<<endl;

// class Node {
// public:
// 	int data;
// 	int height;
// 	Node *left, *right;

// 	Node(int data) {
// 		this->data = data, this ->height = 1;
// 		this->left = this->right = NULL;
// 	}
// 	Node * create_node(int data) {
// 		return new Node (data);
// 	}
// };
// int max_height(Node * root) {
// 	if (root == NULL) return 0;
// 	return max(max_height(root->left), max_height(root->right)) + 1;
// }
// int balanceFactor(struct Node* node) {
// 	if (node == NULL) return 0;
// 	return max_height(node->left) - max_height(node->right);
// }
// /* left most element (lowest element ) in the right subtree [ INORDER SEQUENCE ]*/
// Node * minValueNode(Node * node) {
// 	Node * current = node;
// 	while (current->left != NULL) {
// 		current = current ->left;
// 	}
// 	return current;
// }
// // if a node is inserted in the left subtreee of the left subtree , then tree need a right rotation
// Node* rightRotate(Node* y) {
// 	Node* x = y->left;
// 	Node* T2 = x->right;

// 	x->right = y;
// 	y->left = T2;

// 	// Update heights
// 	y->height = max_height(y);  // max heights
// 	x->height = max_height(x);  // max heights

// 	return x; // x becoms the root node of the tree
// }
// // if a tree becomes unbalanced when a ndoe is inserted into the right subtree of the right subtree, then we perform a single left rotation
// // -2 (crNode -- left rotate) , 1 , 0

// Node* leftRotate(Node* x) { // this x is pointing to the cirNode
// 	//  y is pointing to the right of the x
// 	//  and T2 is pointing to the left of the y

// 	Node* y = x->right;
// 	Node* T2 = y->left;

// 	// left rotate on x(critical node)
// 	y->left = x;
// 	x->right = T2;

// 	// Update heights
// 	x->height = max_height(x);
// 	y->height = max_height(y);

// 	return y; // now y is pointing to the root ( B )
// }
// void insert(Node*& node, int data) {
// 	// find the correct pos to insert node and insert it
// 	if (node == NULL) {
// 		node = node->create_node(data);
// 		return ;
// 	}
// 	if (data < node->data) insert(node->left, data);
// 	else insert(node->right, data);

// 	// Get the balance factor of this node to check if it's unbalanced
// 	int balance = balanceFactor(node);

// 	// Right Right Case
// 	if (balance > 1 && data < node->left->data) {
// 		node = rightRotate(node);
// 	}

// 	// left left Case
// 	else if (balance < -1 && data > node->right->data) {
// 		node = leftRotate(node);
// 	}

// 	// Left Right case
// 	else if (balance > 1 && data > node->left->data) {
// 		node->left = leftRotate(node->left);
// 		node = rightRotate(node);
// 	}

// 	// Right Left Case
// 	else if (balance < -1 && data < node->right->data) {
// 		node->right = rightRotate(node->right);
// 		node = leftRotate(node);
// 	}
// }
// void deleteNode(Node *& root, int data) {
// 	if (root == NULL)
// 		return ;
// 	if (data < root->data)
// 		deleteNode(root->left, data);
// 	else if (data > root->data)
// 		deleteNode(root->right, data);
// 	else {
// 		/*Node with only one child or no child*/
// 		if ((root->left == NULL) || (root->right == NULL)) {
// 			Node* temp = (root->left != NULL) ? root->left : root->right;

// 			// No child case
// 			if (temp == NULL) {
// 				temp = root;
// 				root = NULL;  /* efficiently deleted that node */
// 			}
// 			else { // One child case
// 				*root = *temp;
// 			}// Copy the contents of the non-empty child
// 			delete(temp);
// 		}
// 		// node to be deleted having 2 child
// 		else {
// 			// root is pointing to the node which has two child
// 			// Node with two children: get the inorder successor (smallest in the right subtree)
// 			Node* temp = minValueNode(root->right);   // this will return the mini root value leftmost part

// 			// Copy the inorder successor's data to this node
// 			root->data = temp->data;

// 			// Delete the inorder successor
// 			deleteNode(root->right, temp->data);
// 		}
// 	}

// 	// If the tree had only one node, return
// 	if (root == NULL)
// 		return ;

// 	// Update the height of the current node
// 	// Get the balance factor of this node
// 	int balance = balanceFactor(root);

// 	// If this node becomes unbalanced, there are four cases

// 	// Left Left Case
// 	if (balance > 1 && balanceFactor(root->left) >= 0)
// 		root = rightRotate(root);

// 	// Left Right Case
// 	else if (balance > 1 && balanceFactor(root->left) < 0) {
// 		root->left = leftRotate(root->left);
// 		root = rightRotate(root);
// 	}

// 	// Right Right Case
// 	else if (balance < -1 && balanceFactor(root->right) <= 0)
// 		root = leftRotate(root);

// 	// Right Left Case
// 	else if (balance < -1 && balanceFactor(root->right) > 0) {
// 		root->right = rightRotate(root->right);
// 		root = leftRotate(root);
// 	}
// }
// bool search_node(Node *& node, int data) {
// 	if (node == NULL) return false;
// 	if (data == node->data) {
// 		return true;
// 	}
// 	else if (data < node->data) {
// 		return search_node(node->left, data);
// 	}
// 	else {
// 		return search_node(node->right , data);
// 	}
// }
// vector<int> Preorder_iterative(Node * node) {
// 	stack<Node*> st;
// 	Node * curr = node;
// 	vector<int> result;
// 	while (1) {
// 		while (curr != NULL) {
// 			result.push_back(curr->data);
// 			st.push(curr);
// 			curr = curr->left;
// 		}
// 		if (st.empty()) break;
// 		curr = st.top();
// 		st.pop();
// 		curr = curr->right;
// 	}
// 	return result;
// }
// vector<int> Inorder_iterative(Node * node) {
// 	stack<Node*> st;
// 	Node * curr = node;
// 	vector<int> result;
// 	while (1) {
// 		while (curr != NULL) {
// 			st.push(curr);
// 			curr = curr->left;
// 		}
// 		if (st.empty()) break;
// 		curr = st.top();
// 		st.pop();
// 		result.push_back(curr->data);
// 		curr = curr->right;
// 	}
// 	return result;
// }
// vector<int> PostOrder_iterative(Node* node) {
// 	stack<Node*> st;
// 	Node* curr = node , *prev = NULL;
// 	vector<int> result;
// 	while (true) {
// 		while (curr != nullptr) {
// 			st.push(curr);
// 			curr = curr->left;
// 		}
// 		if (st.empty()) break;
// 		curr = st.top();
// 		if (curr->right == nullptr || curr->right == prev) {
// 			result.push_back(curr->data);
// 			st.pop();
// 			prev = curr;
// 			curr = nullptr;
// 		} else {
// 			curr = curr->right;
// 		}
// 	}
// 	return result;
// }
// void order_print(Node*& node) {
// 	if (node == NULL) return;
// 	cout << node->data << " ";
// 	order_print(node->left);
// 	order_print(node->right);
// }
// int main() {
// 	Node * root = NULL;
// 	insert(root, 10);
// 	insert(root, 20);
// 	insert(root, 30);
// 	insert(root, 40);

// 	// insert(root, 1);
// 	// insert(root->left, 2);
// 	// insert(root->left->left, 4);
// 	// insert(root->left->right, 5);
// 	// insert(root->right, 3);
// 	// insert(root->right->left, 6);
// 	// insert(root->right->right, 7);

// 	cout << "Preorder : ";
// 	vector<int> preorder = Preorder_iterative(root);
// 	for (int num : preorder) {
// 		cout << num << " ";
// 	}
// 	cout << endl;

// 	cout << "Inorder  : ";
// 	vector<int> inorder = Inorder_iterative(root);
// 	for (int num : inorder) {
// 		cout << num << " ";
// 	}
// 	cout << endl;

// 	cout << "Postorder: ";
// 	vector<int> postorder = PostOrder_iterative(root);
// 	for (int num : postorder) {
// 		cout << num << " ";
// 	}
// 	cout << endl;

// 	// order_print(root); cout << endl;
// 	deleteNode(root, 20);
// 	order_print(root);


// 	// cout << ( search_node(root, 4) ?  "true" : "false") << endl;
// 	return 0;
// }


// // Preorder traversal: 1 2 4 5 3 6 7
// // Inorder traversal: 4 2 5 1 6 3 7
// // Postorder traversal: 4 5 2 6 7 3 1


/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
//  RED BLACK TREES--->
// are self balancing binary search trees
// are not as strictly balanced as AVL trees, because the height between two sub-trees might sometimes exceed one

// THE ROOT NODE MUST ALWAYS BE BLACK && NULL NODES ARE ALSO BLACK
// PARENT AND CHILDREN OF A RED NODE SHOULD BE BLACK
// NO OF BLACK NODES ARE SAME FROM THE  A NODE TO LEFT OR RIGHT OF IT


// IF AVL TREE WAS USED -> the time take by the rotation to perfect our tree can exceed the time needed to search for an item inside this tree
// Red Blacl trees do not rely heavily on rotations as they make use of recoloring
// which is way faster to do than rotating the nodes & help us to reduce the no of operations needed to declare th tree as valid



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
	/*-------------insert a node into the Red-Black tree-----------*/
// 1. If tree is empty then create new node as root node with color black
// 2. if tree is not empty then insert new node
// 3. if the parent of new node is black then exit
// 4. if the parent of new node is Red then check the color of parent's siblings of new node
// 5. if its' color is black or null then make suitable rotation and recolor it
// 6. if it's color is red then recolor it
	void insert(int data) {
		// Step 1 : if the tree is empty create a new node as the root with the black color
		if (root == NULL) {
			root = new Node(data);
			root->color = BLACK;
			return;
		}
		// Step 2 : perform a standard bst insertion
		Node * newNode = insertBST(root, data);

		// Step 3 : If the parent of the newNode is black , exit (no violation)
		if (newNode->parent == NULL || newNode->parent->color == BLACK) return;

		// Step 4 : If the parent of the newNode is red, check the color of the parent' sibling (UNCLE)
		Node * Gparent = newNode->parent->parent;
		Node * uncle = (newNode->parent == Gparent->left) ? Gparent->right : Gparent->left;

		// Step 5 : If the parent of the newNode is BLACK , (or NULL) make suitable rotation and recolor
		if (uncle == NULL || uncle ->color == BLACK) {
			peformRotationAndRecolor(newNode);
		}
		// Step 6 : If the uncle's color is RED , recolor it (Effective step 4)
		else {
			recolor(newNode , Gparent, uncle);
		}

	}
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
	/* perform rotation and recoloring */
	void peformRotationAndRecolor(Node * newNode) {
		Node * parent = newNode->parent;
		Node * Gparent = parent->parent;
		if (parent == Gparent->left) {
			if (newNode == parent->right) {
				/* left right rotation */
				rotateLeft(parent);
				newNode = parent;
				parent = newNode->parent;
			}
			// right rotation
			rotateRight(Gparent);
			swap(parent->color, Gparent->color);
		}
		else {
			if (newNode == parent->left) {
				/*Right rotation*/
				rotateRight(parent);
				newNode = parent;
				parent = newNode->parent;
			}
			// left rotation
			rotateLeft(Gparent);
			swap(parent->color, Gparent->color);
		}
		// make the color of the root is BLACK
		root->color = BLACK;
	}
	void recolor(Node * newNode, Node * Gparent, Node* uncle) {
		// if the uncle of the newNode is red then recolor it
		//  then make the color of the uncle and parent of the newNode = BLACK
		// and shift to the next Level i.e go up -> check for the Gparent
		// 		1. if it is a root node -> BLACK
		// 		2. else flip its color of the Gparent of the newNode
		// check the conflicts from the root to the node -> if it is black -> red till the new node
		Gparent->color = RED;
		newNode->parent->color = uncle->color = BLACK;
		// Recursively check for the violation higher up the tree
		if (Gparent != root) {
			Node * GreatGparent = Gparent->parent;
			/*VIOLATION -> Gparent= RED , so its parent GreatGparent != RED (it can't be red ) if it's black then return it good*/
			// then again check for the uncle color if it is red then simply recolor it, or black then perform the rotate and recolor
			if (GreatGparent->color == RED) peformRotationAndRecolor(Gparent);
		}
	}
	void rotateLeft(Node* node) {
		Node* rightChild = node->right; // rightChild is the newNode
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
	void OrderPrint(Node * node) {
		if (node == NULL) return;
		cout << node->data << " ";
		OrderPrint(node->left);
		OrderPrint(node->right);
	}
};
int main() {
	RBTree root;
	// Node *rootNode = root.root;
	root.insert(10);
	root.insert(18);
	root.insert(5);
	root.insert(4);
	root.insert(15);
	root.insert(17);
	root.insert(25);
	root.insert(60);
	root.insert(1);
	root.insert(90);

	root.OrderPrint(root.root);
	return 0;
}





