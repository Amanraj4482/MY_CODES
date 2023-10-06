// FIND THE K NODE FROM THE END (RETURN) THE DATA OF THE KTH NODE

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node * next;
	Node(int value) {
		this->data = value;
		this->next = NULL;
	}
};
Node * create_node(int value) {
	return new Node (value);
}
int main() {

	return 0;
}



