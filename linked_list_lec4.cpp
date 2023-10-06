//CHECK WHETHER YOUR LL IS PALINDROME OR NOT

//nodes (1)->(2)->(3)->(2)->(1)   moving from left <-> right (either way )
// we declare this as palindrome

// find the mid of the linked list and then reverse it from the mid using the fast and slow pointer


/*#include<bits/stdc++.h>
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
void printer(Node *&head ) {
	Node * current = head;
	while (current != NULL) {
		cout << current->data << endl;
		current = current->next;
	}
}
Node*  get_middle_node(Node *& head) {
	Node * slow = head;
	Node * fast = head->next;

	while (fast != NULL) {
		fast = fast->next;
		if (fast != NULL) {
			fast = fast->next;
			slow = slow->next;
		}

	}
	return slow;  // slow pointer is pointing to the middle node
}

Node * reverse_k_nodes(Node *head ) {
	Node * before = NULL;
	Node * current = head;
	while (current != NULL) {
		Node *after = current->next;
		current->next = before;
		before = current;
		current = after;
	}
	// checking for the extra left nodes
	return before;  // this is the head of the linked list
}
int get_Length(Node *&head) {
	Node * current = head;
	int len = 0;
	while (current != NULL) {
		current = current->next;
		len++;
	}
	return len;
}
bool checkPalindrome(Node *& head) {
	Node * slow = NULL;
	if (head == NULL) {
		cout << "list empty";
		return true;
	}
	if (head ->next == NULL) {
		//single node is palindrome
		return true;
	}
	// >1 node

	// Step -> 1 find the middle node
	slow = get_middle_node(head); //this slow pointer is having the address of middle node

	// cout << "Middle " << slow->data << endl;

	// step 2. Reverse the lll after the middle /slow node
	Node * Reversed_head = reverse_k_nodes(slow->next);

	// join the reversed linked list to the slow  which is left part
	slow ->next = Reversed_head;
	cout << "data " << slow ->data << endl << endl;


	// step 3 : Start comparison
	Node * temp1 = head;
	Node * temp2 = Reversed_head;

	while (temp2 != NULL) {
		if (temp1->data !=  temp2 ->data) {
			// not a palindorme
			return false;
		}
		else {
			// the data is equal then move forward
			temp1 = temp1 ->next;
			temp2 = temp2 ->next;
		}
	}
	// all nodes have been compared if reached here~
	return true;
}
int main() {
	Node * head = new Node (10);
	Node * second = new Node (20);
	Node * third = new Node (30);
	Node * forth = new Node (40);
	Node * fifth = new Node (40);
	Node * sixth = new Node (30);
	Node * seventh = new Node (20);
	Node * eighth = new Node (10);



	head ->next = second;
	second ->next = third;
	third ->next = forth;
	forth ->next = fifth;
	fifth ->next = sixth;
	sixth ->next = seventh;
	seventh ->next = eighth;
	eighth ->next = NULL;

	bool isPalindrome = checkPalindrome ( head);

	if (isPalindrome) cout << "yes" ;
	else cout << "No";

	// cout << "Middle Node " << get_middle_node(head)->data << endl;
	// head = get_middle_node(head);

	// printer(head);
	return 0;
}*/



// step 1 : find the middle node
// step 2 : reverse the linked list after middle node
// step 3 : at start of the first half temp1
// step 4 : at the start of the another half temp2
// step 5 : start comparing both the half then aage badhao if NULL then stop





// Ques :remove duplicates from the unsorted linked list

// 4 2 1 4 2 7
// approach 1. nested loop
// approach 2. map
// apporach 3. sort and prev logic



// this is code for the data directly changed so it not worth for it ...
/*
void sortList(Node*& head) {
	Node* current = head;
	Node* index = NULL;
	int temp;

	if (head == NULL) {
		return;
	}
	while (current != NULL) {
		index = current->next;

		while (index != NULL) {
			if (current->data > index->data) {
				temp = current->data;
				current->data = index->data;
				index->data = temp;
			}
			index = index->next;
		}
		current = current->next;
	}
}

void remove_duplicates1(Node * & head) {
	Node * curr = head , *temp, * duplicate;

	// picking the elemenet one by one
	while ( curr != NULL && curr->next != NULL) { // curr  and curr->next should not be null

		temp = curr; // store curr in the temp
		while (temp->next != NULL) { // temp->next !=null

			if (curr->data == temp ->next ->data) {  //if the data of the curr node and and the temp ->next data is equal
				duplicate = temp ->next;   // store the temp ->next address
				temp->next = temp ->next ->next;
				delete(duplicate);
			}
			else {
				// not duplicate then move to the next node
				temp = temp ->next;
			}
		}
		curr = curr->next;
	}
}*/

/*--------------------------------------------------------------------------------------*/

/*#include <bits/stdc++.h>
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

void remove_duplicates_ifSorted(Node* &head) {
	if ( head == NULL) {
		cout << "LL is empty" << endl;
		return;
	}
	if (head -> next == NULL) {
		cout << "Single Node in LL" << endl;
		return ;
	}

	// >1 node in LL
	Node* curr = head;

	while (curr != NULL) {
		if ((curr ->next != NULL) && (curr ->data == curr ->next ->data) ) {
			//equal
			Node* temp = curr ->next;
			curr ->next = curr ->next ->next;
			//delete node
			temp ->next = NULL;
			delete temp;
		}
		else {
			// not equal
			curr = curr ->next;
		}
	}
}
void sortList_data_replacement(Node *& head) {
	// step coundt of zeroes and ones and twos
	int zero = 0 , one = 0, two = 0;
	Node * temp = head;
	while (temp != NULL) {
		if (temp ->data == 0) {
			zero++;
		}
		else if (temp ->data == 1) {
			one++;
		}
		else if (temp ->data == 2) {
			two++;
		}
		temp = temp ->next;
	}
	// step 2: fill 0 , 1s and 2s in the original ll
	temp = head;
	while (temp != NULL) {
		// fill zeroes

		while (zero--) {
			temp ->data = 0;
			temp = temp ->next;
		}
		// fill ones
		while (one--) {
			temp ->data = 1;
			temp = temp ->next;
		}
		// fill twos
		while (two--) {
			temp ->data = 2;
			temp = temp ->next;
		}
	}
}
Node * sort_without_data_replace(Node * &head) {
	if (head == NULL) {
		cout << "LL is empty " << endl;
		return NULL;
	}
	if (head -> next == NULL) {
		//sngle node in LL
		return head;
	}


	// dummy nodess
	Node * zero_head = new Node (-1);
	Node * zero_tail = zero_head;

	Node * one_head  = new Node (-1);
	Node * one_tail  = one_head;

	Node * two_head  = new Node (-1);
	Node * two_tail  = two_head;

	// traverse the original linked list
	Node * curr = head;
	while (curr != NULL) {
		// take out the zero node
		if (curr->data == 0) {

			Node * temp = curr;
			curr = curr->next;
			temp ->next = NULL;

			// append the zero node in the zero_head in
			zero_tail ->next = temp ;
			zero_tail = temp;
		}
		else if (curr->data == 1) {

			Node * temp = curr;
			curr = curr->next;
			temp ->next = NULL;

			// append the one node in the one_head in
			one_tail ->next = temp ;
			one_tail = temp;
		}
		else if (curr->data == 2) {

			Node * temp = curr;
			curr = curr->next;
			temp ->next = NULL;

			// append the two node in the two_head in
			two_tail ->next = temp ;
			two_tail = temp;
		}
	}

	// all three linked list are ready


	// modifying the one list

	Node * temp  = one_head;
	one_head = one_head->next;  // move head
	temp->next = NULL;
	delete(temp);  // deleted the temp node (-1)


	// modifying the two list => deleting the dummy nodes from the two list

	temp  = two_head;
	two_head = two_head->next; // move head
	temp->next = NULL;
	delete(temp);


	// joining the list zero , one and two linked list

	if (one_head != NULL) {
		// one wali list is non empty
		zero_tail ->next = one_head;

		if (two_head != NULL ) { //connection between 1 and 2
			one_tail ->next = two_head;
		}
	}
	else {
		// one wali list is empty
		// check for the two head (list)

		if (two_head != NULL) {
			//  make connection from zero to two
			zero_tail ->next = two_head;  //direct join of the zero tail to the two head
		}
	}

	// remove dummy nodes of the zero
	temp = zero_head;
	zero_head = zero_head ->next;
	temp ->next = NULL;
	delete(temp);

	return zero_head;  //head of the modified linked list
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


	cout << "Input LL:     ";
	printer(head);

	// cout << "Sorted List:  ";
	// // sortList_data_replacement(head);

	head = sort_without_data_replace(head);
	// printer(head);

	remove_duplicates_ifSorted(head);
	cout << "Remove:       ";
	printer(head);

	return 0;
}
*/

// Input LL:    4 2 1 4 2 7
// Sorted List: 1 2 2 4 4 7
// Output LL:   1 2 4 7


// all zeros and one two sorted data replacement
// Input LL:     2 1 1 0 0 2 1
// Sorted List:  0 0 1 1 1 2 2
// Remove:       0 1 2





/*ADDITION OF THE NUMBER REPRESENTED BY THE LINKED LIST

input -> (2) -> (3) ->(4) ->(X)
                (2) ->(4) ->(X)

output -> (258)

we can come from right to left in the linked list
1. recursion 2. reverse it


step 1. reverse the both liked list
step 2. add kro
step 3. ans ll wali linked list ko reverse kro*/




/*#include<bits/stdc++.h>
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
Node * create_node (int value) {
	return new Node ( value);
}
void printer(Node *head ) {
	Node * current = head;
	while (current != NULL) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}
void insert_at_end(Node * &head, Node *& tail, int value) {
	Node * new_node = create_node(value);
	if (head == NULL) {
		head = new_node;
		tail = new_node;
		return;
	}
	tail->next = new_node;
	tail = new_node;
}
Node * reverse_k_nodes(Node *head ) {
	Node * before = NULL;
	Node * current = head;
	Node * after = current ;
	while (current != NULL) {
		after = current->next;
		current->next = before;
		before = current;
		current = after;
	}
	// checking for the extra left nodes
	return before;  // this is the head of the linked list
}

Node * solve(Node *&head1 , Node *&head2) {
	if (head1 == NULL)
		return head2;
	if (head2 == NULL)
		return head1;


	// step 1. reverse both the linked list

	head1 = reverse_k_nodes(head1);
	head2 = reverse_k_nodes(head2);

	// step 2. add both the linkd list
	Node * ans_head = NULL;
	Node * ans_tail = NULL;

	int carry = 0;
	while (head1 != NULL && head2 != NULL) {
		// calculate the sum
		int sum = carry + head1->data + head2->data;
		// find the digits to make node
		int digit = sum % 10;
		// find the carry
		carry = sum / 10;

		// creation of the node of the digits
		Node * new_node = create_node(digit);
		// attach this node to the ans wali linked list

		if (ans_head == NULL) {
			// inserting the first head
			ans_head = new_node ;
			ans_tail = new_node;
		}
		else {
			// 2nd and onwards nodes
			ans_tail ->next = new_node ;
			ans_tail = new_node;

		}
		// agli node ab
		head1 = head1 ->next;
		head2 = head2 ->next;
	}

	// size of the head1 nodes are greater
	while (head1 != NULL) {
		int sum = carry + head1->data;
		int digit = sum % 10;
		carry = sum / 10;

		Node * new_node = create_node(digit);
		// attach this node to the tail of the ans
		ans_tail ->next = new_node;
		ans_tail = new_node;
		head1 = head1 ->next;
	}


	// size of the head2 nodes are greater
	while (head2 != NULL) {
		int sum = carry + head2->data;
		int digit = sum % 10;
		carry = sum / 10;

		Node * new_node = create_node(digit);
		// attach this node to the tail of the ans
		ans_tail ->next = new_node;
		ans_tail = new_node;
		head2 = head2 ->next;
	}


	// still the carry is left
	while (carry != 0) {
		int sum = carry ;
		int digit = sum % 10;
		carry = sum / 10;

		Node * new_node = create_node(digit);
		ans_tail ->next = new_node;
		ans_tail = new_node;

	}


	// step 3. reverse all the linked list
	ans_head = reverse_k_nodes(ans_head);
	return ans_head;
}
int main() {
	Node * head1 = NULL;
	Node * tail1 = NULL;

	insert_at_end(head1, tail1, 9);
	insert_at_end(head1, tail1, 9);
	insert_at_end(head1, tail1, 9);

	printer(head1);

	Node * head2 = NULL;
	Node * tail2 = NULL;

	insert_at_end(head2, tail2, 9);
	insert_at_end(head2, tail2, 9);
	insert_at_end(head2, tail2, 9);
	printer(head2);
	cout << endl;

	cout << "Sum : ";
	Node * answer = solve(head1, head2);
	printer(answer);
	return 0;
}*/



