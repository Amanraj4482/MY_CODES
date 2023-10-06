// Find the middle of the linked list
// even and odd
// find the n/2 in case of even  and n/2 + 1 in case of odd
// two traversal appraoch
// O(n)

// TORTOISE APPROACH _ SLOW AND FAST POINTER APPORACH _ TWO POINNTER APPORACH
// O(n)  -> single traversal approach


#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int value) {
		this ->data = value;
		this ->next = NULL;
	}

};

void printer(Node *& head) {
	Node * curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}
Node * get_middle_node ( Node *&head ) {
	if (head == NULL) {
		cout << "linked list empty" << endl;
		return head;
	}
	if (head->next == NULL) {
		// only 1 node
		return head;
	}
	// LL having >1 node
	Node * slow = head;
	Node * fast = head;  // head ->next (odd || even=>same answer)

	while (slow != NULL && fast != NULL) {
		fast = fast->next;
		if (fast != NULL) {
			fast = fast->next;
			slow = slow->next;
		}
	}
	return slow; //where slow is the mid
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
Node * reverse_k_nodes(Node * &head, int k ) {
	if (head == NULL) {
		cout << "ll is empty" << endl;
		return NULL;
	}
	int len = get_Length(head);
	if (k > len) {
		return head;
	}
	// it means no of nodes is ll is >= k
	// step 1 : reverse first k modes of k

	// make the 3 pointers
	Node * back = NULL;
	Node * current = head;
	Node * front = current->next;

	int count = 0;
	while (count < k ) {
		// find the front
		front = current->next;
		// move current back
		current->next = back;
		back = current;
		current = front;
		count++;
		// first k nodes gets reversed
	}
	// step 2 : Attached left nodes
	// check there is ahead nodes or not
	//	recursive call
	if (front != NULL) {
		// we have the nodes left to reverse
		// connecting this with the head ->next
		head->next = reverse_k_nodes(front , k ); //head , k
		// since we have to solve the left nodes and to send the head of that node list
	}
	// front ->poiting to the last node of the k group

	// step 3 : return head of the modified linked list

	return back; //starting node of the linked list
}

/*To find the node where the loop starts, you should use the Floyd's
cycle-finding algorithm (also known as the "tortoise and hare" algorithm).
It involves two pointers moving at different speeds: one slow pointer and
one fast pointer. If there's a loop in the linked list, the fast pointer
will eventually catch up to the slow pointer inside the loop.*/

bool detect_loop(Node* &head) {
	Node* slow = head;
	Node* fast = head;

	if ( head == NULL) {
		cout << "LL is empty" << endl;
		return false;
	}
	while (fast != NULL) {
		fast = fast  ->next;  //fast +1 step
		if ( fast != NULL) {
			fast = fast->next; // (fast + 1) +1 => STEP
			slow = slow->next; // SLOW + 1 => STEP
		}
		if (slow == fast) {
			// loop present
			return true;
		}
		// no loop present
	}
	return false;
}

Node * starting_loop(Node* &head) {
	Node* slow = head;
	Node* fast = head;
	if ( head == NULL) {
		cout << "LL is empty" << endl;
		return NULL;
	}
	while (fast != NULL) {
		fast = fast  ->next;  //fast +1 step
		if ( fast != NULL) {
			fast = fast->next; // (fast + 1) +1 => STEP
			slow = slow->next; // SLOW + 1 => STEP
		}
		if (slow == fast) {
			// loop present
			slow = head;
			break;
		}
		// no loop present
	}
	// when this loop will end slow == fast & keep the track of the fast
	while (slow != fast) {
		slow = slow->next;
		fast = fast ->next;
	}
	// they have meet now & this is starting point
	return slow;

}

Node * remove_loop(Node* &head) {
	Node* slow = head;
	Node* fast = head;
	if ( head == NULL) {
		cout << "LL is empty" << endl;
		return NULL;
	}
	while (fast != NULL) {
		fast = fast  ->next;  //fast +1 step
		if ( fast != NULL) {
			fast = fast->next; // (fast + 1) +1 => STEP
			slow = slow->next; // SLOW + 1 => STEP
		}
		if (slow == fast) {
			// loop present
			slow = head;
			break;
		}
		// no loop present
	}
	Node * before  = fast;
	// when this loop will end slow == fast & keep the track of the fast
	while (slow != fast) {
		before = fast;
		slow = slow->next;
		fast = fast ->next;
	}
	before ->next = NULL;
	cout << "Before data " << before->data << endl;
	// they have meet now & this is starting point
	return slow;

}
int main() {

	// testing the linkedlist nodes
	Node * head = new Node (10);
	Node * second = new Node (20);
	Node * third = new Node (30);
	Node * forth = new Node (40);
	Node * fifth = new Node (50);
	Node * sixth = new Node (60);
	Node * seventh = new Node (70);
	Node * eighth = new Node (80);
	Node * ninth = new Node (90);

	head ->next = second;
	second ->next = third;
	third ->next = forth;
	forth ->next = fifth;
	fifth ->next = sixth;
	sixth ->next = seventh;
	seventh ->next = eighth;
	eighth ->next = ninth;
	ninth ->next = NULL;


	// printer(head);

	head = reverse_k_nodes(head , 8);

	// cout << (detect_loop(head) ? "Present " : "Absent") << endl; // if the loop is present then 1 otherwise 0

	// we have the third ->data = 30 as the starting point
	// cout << "Starting Loop => " << starting_loop ( head)->data << endl; // this is the starting point of the loop

	// remove_loop(head);

	// cout << endl;
	printer(head);
	// cout << (detect_loop(head) ? "Present " : "Absent") << endl; // if the loop is present then 1 otherwise 0

	// cout << "Middle node is " << get_middle_node(head)->data;

	return 0;
}

// reverse the ll in the group of k if not satisfied then make it reamins the same
// k group reverse
// with the help of recursion
// solve the 1 case then recursion will solve
//--------------------------------------------------
// step 1 : reverse upto the k
// step 2 : link the last node next of the k to the next k+1 node
// step 3 : return the (head ) pointer of the list



// QUESTION => 2
// given a linked list check circular or not ?


// 	QUESTION => 3
// delete & delete loop
//-> check loop is present in linked list or not
//-> starting point of loop
//-> remove loop


// 1. find loop is present of not.. using the map =>
// key => address        bool => true or false
// map< Node * , bool >  ;
//  map [temp] = true ;


// FLOAID CYCLE ALGORITHM (FCD) =>
// if( slow == fast ) loop is  present
//  fast ==NULL absent loop

// with each pass distance between the fast and slow pointer
//is getting reduced by  1



// find the staring point of the loop
// step 1 . find the node where slow and fast meets
// step 2 . make slow points the head (slow =head )
// step 3 . and then make slow  and fast (+1) steps only
// step 4 . and some point they will defenetely meet that
// point is the starting point of the loop




// to remove the loop change the pointer of the starting point
// just before it to the null so that it dont connect to the statring point
//  A + B = n (cycles);