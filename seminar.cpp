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
void printer(Node *head ) {
	Node * current = head;
	while (current != NULL) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}
void sortList(Node *& head ) {
	Node * current = head;
	Node * index = NULL;

	int temp;

	if (head == NULL) {
		return;
	}
	while (current != NULL) {
		index = current ->next;
		while (index != NULL) {
			if (current ->data > index->data) {
				temp = current ->data;
				current ->data = index->data;
				index->data = temp;
			}
			index = index ->next;
		}
		current = current ->next;
	}
}
void remove_duplicates1(Node *& head) {
	Node * a = head, *b, *c;

	while (a != NULL && a->next != NULL) {
		b = a;
		while (b->next != NULL) {
			if (a->data == b->next ->data) {
				c = b->next;
				b->next = b->next->next;
				delete(c);
			}
			else {
				b = b->next;
			}
		}
		a = a->next;
	}
}

int main() {
	Node * head = new Node (2);
	Node * second = new Node (1);
	Node * third = new Node (1);
	Node * forth = new Node (0);
	Node * fifth = new Node (0);
	Node * sixth = new Node (2);
	Node * seventh = new Node (1);



	head ->next = second;
	second ->next = third;
	third ->next = forth;
	forth ->next = fifth;
	fifth ->next = sixth;
	sixth ->next = seventh;
	seventh->next = NULL;


	cout << "Input LL:    ";
	printer(head);

	cout << "Sorted List: ";
	sortList(head);
	printer(head);
	remove_duplicates1(head);
	cout << "Output LL:   ";
	printer(head);
	return 0;
}



