// there are 5 types of the binary trees
// 1. Full BT-------> either  0 / 2 children
// 2. compelete BT -> 1. All levels should be completely filed except the last level  2. last level has the nodes as left as possible
// 3. Pefect BT-----> All leaf nodes are should be at the same level
// 4. Balanced BT---> Height can be maximum of (log(n)) where n is the nodes
// 5. Degenerate BT-> Like the linked list that may be the rigth squied or left squied
/*-------------------------------------------------------------*/
// representation of the trees --->

#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define print(x) for(int i =0 ;i<(int)x.size();i++) cout<<x[i]<<" ";
struct Node {
public:
	int data;
	struct Node * left , *right;
	Node (int value) {
		data = value;
		left = right = NULL;
	}
};
Node * create_node(int value) {
	return new Node (value);
}
void inOrder(struct Node *& root) {
	// left node right
	if (root != NULL) {
		inOrder(root->left);
		printf("%d ", root->data);
		inOrder(root->right);
	}
}
void preOrder(struct Node *& root) {
	// node left right
	if (root != NULL) {
		printf("%d ", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
void postOrder(struct Node *& root) {
	// left right node
	if (root != NULL) {
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ", root->data);
	}
}
void print2dVec(vector<vector<int>>&ans) {
	int n = ans.size();
	for (int i = 0; i < n; ++i)
	{
		int m = ans[i].size();
		for (int j = 0; j < m; ++j)
		{
			cout << ans[i][j] << " ";
		}
	}
}
void leverOrderQueue(struct Node *& root) {
	// we want the queue ds ---->
	// if the left and right exist then put into the queue where we check explicitly for the left and right
	vector<vector<int>>ans;
	if (root == NULL) {
		return;
	}
	queue <Node*> q;
	q.push(root); // this is must other wise while will not run until we push the root
	while (!q.empty())
	{
		int size = q.size();
		vector<int> level;
		for (int i = 0; i < size; ++i) //sizes -> 1 2 4 for the queue
		{
			Node * node = q.front();
			q.pop();
			if (node ->left != NULL) q.push(node->left);
			if (node->right != NULL) q.push(node->right);
			level.push_back(node->data);
		}
		ans.push_back(level);
	}
	print2dVec(ans);
}
void preOrderStackTraversal(struct Node *& root) {
	vector<int>pre;
	stack<Node*>st;
	if (root == NULL) return;
	st.push(root);
	while (!st.empty()) {  // not zero
		Node * node = st.top();
		st.pop();
		// since stack is last in firt out then we have to view from the top
		pre.push_back(node ->data);
		if (node ->right != NULL) st.push(node ->right);
		if (node ->left != NULL) st.push(node ->left);
	}
	print(pre);  // when my stack becomes empty then i will print the top
}
void inOrderStackTraversal(Node *& root) {
	stack<Node*> st;
	vector<int>in;
	Node * node = root;
	for (;;) {
		if (node != NULL) {
			st.push(node);
			node = node->left;
		}
		else {
			// if node left or right traversal gets the null then it will just print the node which is at the top of the stack
			if (st.empty()) break;  //backtracking
			node = st.top();
			// cout << st.top()->data << " ";
			st.pop();  //taking out the top element and print it ( store in the vec(in))
			in.push_back(node->data);
			node = node ->right; // then move to the right
			// when last node (leaf node) the left and right node is found to be nul then print the current node
		}
	}
	print(in);
}
void postOrder2StackTraversal(Node *& root) {
	vector<int>post;
	if (root == NULL) return ;
	stack<Node*>st1, st2;
	st1.push(root);
	while (!st1.empty()) { //until st_1 becomes null
		root = st1.top();
		st1.pop();
		st2.push(root);
		if (root->left != NULL)st1.push(root->left);
		if (root->right != NULL)st1.push(root->right);
	}
	while (!st2.empty()) {
		post.push_back(st2.top()->data);
		st2.pop();
	}
	print(post);
}
void singleTraversalPreInPost(Node *& root) {
	stack<pair<Node*, int>>st;
	st.push({root, 1});
	vector<int> pre, in, post;
	if (root == NULL) return;
	while (!st.empty()) {
		auto it = st.top();
		st.pop();

		// pre 1->2 (left push)
		if (it.ss == 1) {
			pre.push_back(it.ff->data);
			it.ss++;
			st.push(it);

			if (it.ff->left != NULL) st.push({it.ff->left, 1});
		}

		// in 2->3 (push right)
		else if (it.ss == 2) {
			in.push_back(it.ff->data);
			it.ss++;
			st.push(it);

			if (it.ff->right != NULL) st.push({it.ff->right, 1});
		}
		// don't push it back again
		else post.push_back(it.ff->data);
	}
	print(pre); cout << endl;
	print(in); cout << endl;
	print(post);
}
int maxiDepthBT(struct Node* root) {
	if (root == NULL) return 0; // Base case: an empty tree has height 0
	int leftHeight = maxiDepthBT(root->left);
	int rightHeight = maxiDepthBT(root->right);
	return max(leftHeight, rightHeight) + 1;
}
int checkBalancedTreeOptimal(Node * root) {
	if (root == NULL) return 0;
	int left = checkBalancedTreeOptimal(root->left);
	int right = checkBalancedTreeOptimal(root->right);
	if (left == -1 || right == -1) return -1;
	if (abs(left - right) > 1)return -1;
	return max(left, right) + 1;
}
void diameterOfBt(struct Node * root) {

}
int main() {
	// struct Node * root = create_node(1);
	// root->left = create_node(2);
	// root->left->left = create_node(4);
	// root->left->right = create_node(5);
	// root->right = create_node(3);
	// root->right->left = create_node(6);
	// root->right->right = create_node(7);

	struct Node * root = create_node(1);
	root->left = create_node(2);
	root->right = create_node(3);
	root->right->left = create_node(4);
	root->right->right = create_node(5);

	// preOrder(root); cout << endl; //1 2 4 5 3 6 7
	// inOrder(root); cout << endl;  //4 2 5 1 6 3 7
	// postOrder(root); cout << endl; //4 5 2 6 7 3 1
	leverOrderQueue(root); cout << endl; //1 2 3 4 5 6 7


	/*preorder_traversal using the stack data structure (lifo) without recursion*/
	// preOrderStackTraversal(root); cout << endl;
	// inOrderStackTraversal(root); cout << endl;
	// postOrder2StackTraversal(root); cout << endl;   //by using the two stack

	// singleTraversalPreInPost(root);
	// cout << maxiDepthBT(root) << endl;

	// FOR THE BALANCED BINARY TREE THE DIFFERENCE SHOULD BE <=1  /* O(N^2) */
	// int height = checkBalancedTreeOptimal(root);
	// cout << (height != -1 ? "Balanced Tree height= " : "Unbalanced Tree") << height; //1 2 3 4 5 ---> balanced tree

	// DIAMETER OF A BINARY TREE ( LONGEST PATH BETWEEN 2 NODES )
	diameterOfBt(root);
	return 0;
}


