//STACK USING THE LINKED LIST


#include<bits/stdc++.h>
using namespace std;

typedef struct node {
	int data;
	struct node* next;

} _Node;   		//_Node has been typedef

typedef struct stack {
	_Node *top;

} _Stack;		//_Stack has been typedef

//creating a node of type struct node =_Node
_Node* create_node(int value) {
	_Node * new_node = (_Node*)malloc(sizeof(_Node));
	new_node->data = value;
	new_node->next = NULL;
	return new_node;
}

//creating a stack of type struct stack =_Stack
_Stack* create_stack() {
	_Stack* new_stack = (_Stack*)malloc(sizeof(_Stack));
	new_stack->top = NULL;
	return new_stack;
}

int isEmpty(_Stack * new_stack) {
	return new_stack->top == NULL;
}

void push_beg(_Stack *new_stack, int value) { //passing the linked list head
	//creating a new_node for the pussing
	_Node* new_node = create_node(value);
	new_node->next = new_stack -> top;
	new_stack ->top = new_node;
	//pussing the element to the top of the stack
}

int pop(_Stack * new_stack) {
	if (isEmpty(new_stack)) {
		printf("UnderFlow");
		exit(1);
	}
	_Node* temp = new_stack->top;
	int data = temp-> data;

	new_stack->top = new_stack->top->next;
	free(temp);
	return data;
}

int peek(_Stack * new_stack) {
	if (isEmpty(new_stack)) {
		printf("Stack is Empty");
		exit(1);
	}
	return new_stack->top->data;
}

void printing (_Stack * new_stack) {
	if (isEmpty(new_stack)) {
		printf("Empty Stack");
		return;
	}
	_Node* current = new_stack->top;
	while (current != NULL) {
		printf("Push %d\n", current->data);
		current = current->next;
	}
}

void destroy_stack(_Stack * new_stack) {
	_Node * current = new_stack->top;
	while (current != NULL) {
		_Node * temp = current;
		current = current->next;
		free(temp);
	}
	free(new_stack);
}
int main() {
	_Stack * new_stack = create_stack(); //passing the address referencly
	push_beg(new_stack, 10);
	push_beg(new_stack, 20);
	push_beg(new_stack, 30);
	push_beg(new_stack, 40);

	printing(new_stack);

	printf("\nPop  %d\n", pop(new_stack));
	printf("Peek %d\n", peek(new_stack));

	destroy_stack(new_stack);

	return 0;
}

