// Double linked list
// reverse traversal

#include<bits/stdc++.h>
using namespace std;

class Node {
public:

	int data;
	Node * next;
	Node * prev;

	Node(int value) {
		this->data = value;
		this->next = NULL;
		this->prev = NULL;
	}

	// destrutor
	~Node () {
		cout << "delete = " << this->data << endl << endl;
		return;
	}
};

Node *create_node(int value) {
	return new Node(value);
}
void printer(Node *&head) {

	Node * current = head;
	while (current != NULL) {
		cout << current ->data << endl;
		current = current ->next;
	}
}


int getLength(Node * & head) {

	int len = 0;
	Node * current = head;
	while (current != NULL) {
		current = current ->next;
		len++;
	}
	return len;
}

void insert_at_beg(Node* & head, Node *&tail , int value) {

	Node * new_node = create_node(value);
	if (head == NULL) {
		head = new_node;
		tail = new_node;
		return;

	}
	new_node ->next = head;
	head ->prev = new_node;
	head = new_node;

}
void insert_at_end(Node * &head , Node * &tail , int value) {

	Node * new_node = create_node( value);

	if (head == NULL) {
		head = new_node;
		tail = new_node;
		return;
	}
	tail ->next = new_node;
	new_node -> prev = tail;
	tail = new_node;
}
void insert_at_pos(Node *&head , Node * & tail, int value, int pos) {
	Node * new_node = create_node(value);
	if (head == NULL) {
		head = new_node;
		tail = new_node;
		return ;
	}
	if (pos == 1) {
		insert_at_beg(head, tail, value);
		return;
	}
	int len = getLength(head);
	if (pos >= len) {
		insert_at_end(head, tail , value);
		return;
	}
	// find the prev and the current
	Node * before_pos = head;
	int i = 1;
	while (i < pos - 1) {
		before_pos = before_pos ->next;
		i++;
	}
	Node * after_pos = before_pos->next;

	before_pos ->next = new_node;
	new_node->prev = before_pos;
	after_pos ->prev = new_node;
	new_node ->next = after_pos;

}
void delete_node(Node *& head , Node *& tail , int pos) {
	if ( head == NULL) {
		cout << "Empty linked list \n";
		return;
	}

	Node * temp = head;
	if (head ->next == NULL) {
		// single node
		head = NULL;
		temp = NULL;
		delete temp;
		return;
	}
	int len = getLength(head);
	if ( pos > len) {
		cout << "Enter a valid pos\n";
		return;
	}
	if ( pos == 1) {
		head = head ->next;
		head ->prev = NULL;
		temp ->next = NULL;
		delete temp;
		return ;
	}
	if ( pos == len) {
		// from the end delete the end
		temp = tail;
		// point the temp to the tail
		tail = tail ->prev;
		// update the tail before the temnp
		temp ->prev = NULL;
		tail ->next = NULL;
		delete( temp);
		return ;
	}
	// delete from the middle of the loop

	// step - 1 left and right
	Node * left = head ;

	int i = 1 ;
	while ( i < pos - 1) {
		left = left ->next ;
		i++;
	}
	Node * current = left ->next;
	Node * right = current ->next;

	// step 2
	left ->next = right;

	// step 3
	right ->prev = left;

	// step 4
	current ->next = NULL;
	current ->prev = NULL;
	delete current;
}
Node * reverse_linked_list_using_loop(Node *& head ) {

	Node * left = NULL;
	Node * current = head ;
	while (current != NULL) {

		Node * right = current ->next;
		current ->next = left;
		left = current;
		current = right;

	}
	return left;
}
Node * reverse_linked_list_using_recursion(Node *& left , Node * &current) {
	if ( current == NULL) {
		return left;
	}
	Node * right = current ->next;
	current ->next = left;
	left = current;
	current = right;
	return reverse_linked_list_using_recursion(left, current);
}
int main() {
	Node * head = NULL;
	Node * tail = NULL;
	insert_at_beg(head, tail , 3);
	insert_at_beg(head, tail , 2);
	insert_at_beg(head, tail , 1);

	insert_at_end(head, tail , 4);
	insert_at_end(head, tail , 5);
	insert_at_end(head, tail , 6);

	insert_at_pos(head , tail , 0, 5);
	// printer(head);
	// cout << endl;

	// delete_node ( head, tail , 6);

	// head = reverse_linked_list_using_loop(head);

	Node * left = NULL;
	Node * current = head;

	head = reverse_linked_list_using_recursion(left, current );

	printer(head);

	return 0;
}

