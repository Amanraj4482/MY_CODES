// //CIRCULAR LINKED LIST-----------------------------------------------------------------------------------------------


// //LAST NEXT =HEAD
// #include<bits/stdc++.h>
// using namespace std;
// typedef struct node {
// 	int data;
// 	struct node * next;
// } Node;

// Node * create_node(int value) {
// 	Node * new_node = (Node*)malloc(sizeof(Node));
// 	new_node->data = value;
// 	new_node->next = NULL;
// 	return new_node;
// }
// //METHOD 1 ----------
// // void insert_at_beg(Node **head, int value) {
// // 	Node *new_node = create_node(value);
// // 	if (*head == NULL) {
// // 		*head = new_node;
// // 		new_node->next = *head;
// // 	} else {
// // 		new_node->next = (*head)->next;
// // 		(*head)->next = new_node;
// // 	}
// // 	*head = new_node;
// // }
// // update the next pointers of the current head node and the last node to include the new node.

// //METHOD 2------------
// void insert_at_beg(Node ** head, int value) {
// 	Node *new_node = create_node(value);
// 	if (*head == NULL) {
// 		*head = new_node;
// 		//my head is the new node is created
// 		new_node->next = *head;//new_node =*head same thing
// 		return;
// 	}
// 	//if linked list has some nodes
// 	//current is acting as the last node
// 	Node* current = *head;
// 	while (current->next != *head) {
// 		current = current->next;
// 	}
// 	//updating the last node next pointer to point the new node
// 	current->next = new_node; //not to create the last node

// 	//update the next pointer of the new node to point to the current head
// 	new_node->next = *head;

// 	//update the head pointer to the point the new node
// 	*head = new_node;
// }
// void insert_at_end(Node ** head, int value ) {
// 	Node * new_node = create_node(value);
// 	if (*head == NULL) {
// 		*head = new_node;
// 		new_node->next = *head;
// 		return;
// 	}
// 	Node * current = *head;
// 	while (current->next != *head) {
// 		current = current->next;
// 	}
// 	current->next = new_node;
// 	new_node->next = *head;

// }
// void printing(Node * head) {
// 	if (head == NULL) {
// 		return;
// 	}
// 	Node *current = head;
// 	while (1) {
// 		printf("%d ", current->data);
// 		current = current->next;
// 		if (current == head) {
// 			break;
// 			//exiting the loop when we reach the head again
// 		}
// 	}
// }
// void insert_at_pos(Node ** head, int value, int index) {
// 	Node * new_node = create_node(value);
// 	Node * current = *head;
// 	int i = 0;
// 	while (i == index - 1 && current->next != *head) {
// 		current = current->next;
// 		i++;
// 	}
// 	new_node->next = current->next;
// 	current->next = new_node;

// }
// int main() {
// 	Node * head = NULL;
// 	insert_at_end(&head, 10);
// 	insert_at_end(&head, 20);
// 	insert_at_beg(&head, 30);
// 	insert_at_beg(&head, 40);
// 	insert_at_pos(&head, 70, 2);

// 	printing(head);
// }
// //When inserting at end, you need to link the last node's 'next' pointer to the new node, and then update the 'next'pointer of the new node to point back to the head




//DOUBLY CIRCULAR LINKED LIST
#include<bits/stdc++.h>
using namespace std;
typedef struct node {
	int data;
	struct node * next;
	struct node * prev;
} Node ;

Node * create_node (int value) {
	Node * new_node = (Node* )malloc ( sizeof(Node));
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->data = value;
	return new_node;
}
void insert_at_beg(Node ** head, int value) {
	Node * new_node = create_node(value);
	//cheking if the linked list is empty if empty then we are inserting the
	//first node
	if (*head == NULL) {
		*head = new_node; //as this the only node in the list
		//set the 'next' and 'prev' to point itself because of only node in the list
		new_node->next = new_node;
		new_node->prev = new_node;
		return;
	}
	//if the linked list is not empty containg the a node
	//find the last node of the list

	//1.create the last node next -> point to the * head -> prev
	Node * last_node = (*head)->prev;
	//give the first node address to the new_node
	new_node->next = *head;
	//point the address of the new_node to the current head prev
	(*head)->prev = new_node;
	//linking the new_node to the last node
	new_node->prev = last_node;
	//and also last node next should pointes to the new_node
	last_node->next = new_node;
	//make the head pointer to point to the first node which is new node
	*head = new_node;
}

void insert_at_end(Node ** head, int value) {
	//create a new node
	Node * new_node = create_node(value);
	//if the list is empty then we are inserting the first node
	if (*head == NULL) {
		*head = new_node;
		//since there is single node they are pointing to itself
		new_node->next = new_node;
		new_node->prev = new_node;
		return;
	}
	//list containg the single node
	//find the last node it should be point to the *head ->prev
	Node * last_node = (*head)->prev;
	//giving the address of the new_node to last node next
	//effectively inserting the node at the end
	last_node->next = new_node;
	//point the new_node  prevto the last node
	new_node->prev = last_node;
	//new_node next should point to the current head node
	new_node->next = *head;
	//update the *head prev to the new_node next which is last
	(*head)->prev = new_node;
}
void printing(Node * head) {
	Node * current = head;
	while (1) {
		printf("%d\n", current->data);
		current = current->next;
		if (current == head) {
			break;
		}
	}
}
int main() {
	Node * head = NULL;
	insert_at_beg(&head, 10);
	insert_at_beg(&head, 20);
	insert_at_beg(&head, 30);
	insert_at_end(&head, 50);
	insert_at_end(&head, 60);
	printing(head);
	return 0;
}

