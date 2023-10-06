//last in first out->>

//A stack is a linear data structure in which insertion s and deletion are allowed only
// at the end, called the top of the stack

//push(data): Insert data onto stack.

//pop: Deletes the last inseted

//top: returns ths last inserted element without removing it.

//size(): returns the size of the number of elements in the stack

//isEmpty(): returns TRUE if the stack is empty, else returns FALSE

//isFull(): returns TRUE if the stack if full, else returns FALSE


//ARRAY IMPLEMENTATION OF STACKS


//top which will keep track of the last inserted element of the topmost element in an array
//to denote the stack is Empty (top)=-1

//top should be incremented first then we can push the element

//There is not enough space in the stack overflow state and the new element can't be pushed


//pop -> the element of the position of top is deleted
//top is decremented by 1

//instead of passing the array and top to every function the better option to declare the stack_arr globally.


// #include<bits/stdc++.h>
// using namespace std;

// #define MAX 4

// int stack_arr[MAX];  //global declaration
// int top = -1;

// int isFull() {
// 	if (top == MAX - 1) {
// 		return 1;
// 	}
// 	return 0;
// }
// int isEmpty() {
// 	if (top == -1) {
// 		return 1;
// 	}
// 	return 0;
// }
// void push(int data) {
// 	if (isFull()) {
// 		printf("Stack overflow");
// 		return;
// 	}
// 	++top;
// 	stack_arr[top] = data;
// }
// int pop() {
// 	//which is capable of deleting the topmost element of the stack ( stack_arr) and returns the deleted element
// 	//if top = 5 then the top most element is at index 5
// 	//checking the stack underflow condition
// 	if (isEmpty()) {
// 		printf("Stack underflow");
// 		//exit(1) means abnormal termination of the program
// 		exit(1);// termination of the program with the failure
// 	}
// 	return stack_arr[--top];
// }

// void printing() {
// 	int i;
// 	if (top == -1) {
// 		printf("Stack unflow\n");
// 		return;
// 	}
// 	for (int i = top; i >= 0; --i)
// 	{
// 		printf("%d ", stack_arr[i] );
// 	}
// }
// int main() {

// 	int data;
// 	push(1);
// 	push(2);
// 	push(3);
// 	push(4);
// 	// push(5);//stack is full
// 	data = pop();
// 	printing();
// 	return 0;
// }


//APPLICATION OF STACKS


//	The total number of left bracktes must be equal to the total number of right brackets
// for every right bracket , there should be a left brakcet of same type

// ALGORITHM
//checking only
//1.Create an empty stack.
//2.Scan the symbols of hte expression from left to right.
//3.If the Symbols is a left brackett, then push that symbol on the stack
//4.If the symbol is a right bracket , do the following:
//	a. If the stack is empty => "invalid expression ": Right brackets are more than the left breakets.
//  b. else
//			Pop an element from the stack.
//				if the popped bracket does not match with right bracket
//					Print "Invalid Expression" : Mismatched brackets.
//5. After scanning all the symbol of the expression
//		a. If the stack is empty
// 			Print "Valid expression " brackets are well balanced
//		b. else
//			Print "Invalid expression " Left brackets are more than right brackets



//DEMONSTRATION
//   [ A/ ( B -C ) * { D + E }]

//POST FIX EXPRESSION EVALUATION
//Golden rule=> The expression will be scanned from left to right and sas soon as we wil encoutner encounter an operator we will apply it to the last two operands




//INFIX TO POSTFIX => ALGORITHM


// 1. If the symbol is an operand =>print that symbol onto the screen
// 2. If the symbol is a left parenthesis => Push it on the Stack
// 3. If the symbol is a right parenthesis => Pop all the oprators from the stack upto the first left
// 		//parenthesis and print them on the screen.
// 		=> Discard the left and right parenthesis.

// 4. If the symbol is and operator=> If the precedance of the
//operator in the stack are greater than or equal to the current operator , then
//Pop the operators out of the stack and print them onto the screen, and push the current operator onto the stack.
//else => push the current operator into the stack.



// #include<stdlib.h>
// #include<stdio.h>
// #include<ctype.h>
// #define max 100
// struct Stack {
// 	int capacity;
// 	int top;
// 	char * array;
// };
// //creating a Stack
// struct Stack* create_stack(int _capacity) {
// 	struct Stack* new_stack = (struct Stack*)malloc (sizeof(struct Stack));
// 	new_stack->capacity = _capacity;
// 	new_stack->top = -1;
// 	new_stack->array = (char*)malloc(new_stack->capacity * (sizeof(char)));
// 	return new_stack;
// }
// //checking the array is Empty or not
// int isEmpty(struct Stack* new_stack) {
// 	return new_stack->top == -1;
// }
// //checking the overflow
// int isFull(struct Stack * new_stack) {
// 	return new_stack->top = new_stack->capacity - 1;
// }

// void push(struct Stack * new_stack, char value) {
// 	if (isFull(new_stack)) {
// 		printf("Yes it is full\n");
// 		return;
// 	}
// 	new_stack->array[++new_stack->top] = value;
// }
// char pop(struct Stack * new_stack) {
// 	if (isEmpty(new_stack)) {
// 		printf("Yes it is empty\n");
// 		return '\0';
// 	}
// 	return new_stack->array[new_stack->top--];
// }


// char peek(struct Stack* new_stack) {
// 	//is it empty?
// 	if (isEmpty(new_stack)) {
// 		printf("Underflow\n");
// 		return '\0';
// 	}
// 	return new_stack->array[new_stack->top];
// }

// int precedance(char op) {
// 	switch (op) {
// 	case '+':
// 	case '-':
// 		return 1;
// 	case '*':
// 	case '/':
// 	case '%':
// 		return 2;
// 	case '^':
// 		return 3;
// 	}
// 	return -1;
// }

// void infixTopostfix(const char* infix, char* postfix) {
// 	struct Stack* new_stack = create_stack(max);
// 	int i, j = 0;
// 	char ch , x;
// 	for ( i = 0; infix[i] != '\0'; ++i)
// 	{
// 		ch = infix[i];
// 		if (isalnum(ch)) postfix[j++] = ch;
// 		else if (ch == '(')  push(new_stack, ch);
// 		else if (ch == ')') {
// 			while ((x = pop(new_stack)) != '(') {
// 				postfix[j++] = x;
// 			}
// 		}
// 		else {
// 			while (!isEmpty(new_stack) && precedance(ch) <= precedance(peek(new_stack))) {
// 				postfix[j++] = pop(new_stack);
// 			}
// 			push(new_stack, ch);
// 		}
// 	}
// 	while (!isEmpty(new_stack)) {
// 		postfix[j++] = pop(new_stack);
// 	}
// 	postfix[j] = '\0';

// 	//destroying the stack
// 	free( new_stack->array);
// 	free( new_stack);
// }

// int main() {
// 	char infix[max], postfix[max];
// 	fgets(infix, sizeof(infix), stdin);
// 	infixTopostfix(infix, postfix);
// 	printf("%s\n", postfix);
// 	return 0;
// }


