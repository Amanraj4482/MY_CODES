/*non continuos memory space
no wastage of memory
no shifting
dynamically grow and sink
at runtime insert and delete


collection of nodes (data, next)
next pointer -> Node * type
*/


/*class Node {
	int data;
	Node * next;
}*/


// types => 1. singly 2. circular singly 3. Doubly 4. Circular Doubly

// 1.SINGLY LINKED LIST

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node * next;

	// node constructor
	Node (int value) {
		this->data = value;
		this->next = NULL;
	}

	// Destructor
	~Node () {
		// if(next)
		// 	delete next;
		cout << "Node = " << this->data << " Deleted" << endl;
	}
	// another way to use the constructor
	// Node(int value) : data(value), next(NULL) {}

};

// creating a node
// insertion_at_begin in O(1) time
Node * create_node(int value) {
	return new Node (value);
	// create a new node object on the heap with the provided value
}
void insert_at_beg(Node *& head, Node* &tail, int value) {
	Node * new_node = create_node(value);
	// empty list // first node will be added
	if (head == NULL) {
		head = new_node;
		tail = new_node;
		return;
	}
	new_node->next = head;
	head = new_node;

}
// insertion_at_end in O(1) time
void insert_at_end(Node *& head, Node* &tail, int value) {
	Node * new_node = create_node(value);
	// checking the empty nodes
	// empty case
	if (head == NULL) {
		// make new node and make that node head as well as tail
		head = new_node;
		tail = new_node;
		return;
	}
	tail->next = new_node;
	tail = new_node;
}

int findlength(Node *& head) {
	int len = 0;
	Node * temp = head;
	while (temp != NULL) {
		temp = temp->next;
		len++;
	}
	return len;
}
void insert_at_pos(Node *&head, Node *&tail, int value, int pos) {
	// find that pos
	Node * new_node = create_node(value);
	if (head == NULL) {
		// make new node and make that node head as well as tail
		head = new_node;
		tail = new_node;
		return;
	}
	if (pos == 0) {
		insert_at_beg(head, tail , value);
		return;
	}
	int len = findlength(head);
	cout << "Length = " << len << endl;
	if (pos >= len) {
		insert_at_end(head, tail , value);
		return ;
	}

	int i = 1;
	Node * prev = head;
	// step : prev and current pointer find
	while (i < pos) {
		prev = prev->next;
		i++;
	}
	Node * current = prev->next;
	new_node->next = current;
	prev->next = new_node;

}

void printer(Node * head) {

	Node * current = head;
	while (current != NULL) {
		cout << current->data << endl;
		current = current->next;
	}
}
void delete_node(Node *& head, Node *& tail , int pos) {
	if (head == NULL) {
		cout << "cannot delete it is empty\n";
		return;
	}
	if (pos == 1) {
		Node * temp = head;
		head = head ->next;
		temp->next = NULL;
		delete temp;
		return ;
	}
	int len = findlength(head);
	if (pos == len) {
		// finding the prev
		int i = 1;
		Node * prev = head;
		while (i < pos - 1) {
			prev = prev ->next;
			i++;
		}
		prev->next = NULL;
		Node * temp = tail;
		tail = prev;
		delete  temp;
		return;
	}
	// delete at middle
	int i = 1;
	Node * prev = head;
	while ( i < pos - 1) {
		prev = prev->next;
		i++;
	}
	Node * current = prev->next;
	prev->next = current->next;
	current ->next = NULL;
	delete current;
}
int main() {
	Node * head = NULL;
	Node * tail = NULL;

	// creating an object of class Node
	// Node * first =new Node (10);

	insert_at_beg(head, tail, 10);
	insert_at_beg(head, tail, 20);

	insert_at_end(head, tail, 40);
	insert_at_end(head, tail, 50);
	insert_at_end(head, tail, 60);

	printer(head);

	// cout << endl;
	// cout << "head-" << head->data << endl;
	// cout << "tail-" << tail->data << endl;
	// cout << endl;
	// insert_at_pos(head, tail, 0, 3);
	// cout << "print after the pos" << endl;
	// printer(head);
	// cout << endl;
	// cout << "head-" << head->data << endl;
	// cout << "tail-" << tail->data << endl;

	delete_node(head, tail , 1);
	cout << endl;
	printer(head);
	return 0;
}






