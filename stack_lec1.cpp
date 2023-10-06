// IT FOLLOWS THE LIFO ORDER IN THE STACK

// The plate which is inserted at last ( top position)  in picked first


// ________stl_________
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	//creation
// 	stack<int> st;

// 	// insertion
// 	st.push(10);
// 	st.push(20);
// 	st.push(30);
// 	st.push(40);

// 	// remove
// 	st.pop();


// 	// check element on top
// 	cout << "Top : " << st.top() << endl;

// 	// size

// 	//empty
// 	cout << "Empty : " << st.empty() << endl;
// 	//priting the elenments
// 	while (!st.empty()) { //st.empty==0 until my size of stack of the becoms zero
// 		cout << st.top() << endl;
// 		st.pop();
// 	}
// 	return 0;
// }


/*#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
	int * arr;
	int top;
	int size;  //it gives the size of the array

	bool isEmpty() {
		if (top == - 1)return true;
		else return false;
	}
	bool isFull() {
		if (top == size - 1) return true;
		return false;
	}
	Stack(int size) {
		arr = new int [size];  //creating a dynamic array
		this-> size = size;
		top = -1;
	}
	// function

	void push(int value) {
		if (!isFull()) { //top != size - 1 //size > top -1 (checking if it is not full)
			//space avaible ---> inserting
			arr[++top] = value;
		}
		else {
			// not space avaible  .. overflow
			cout << "Stack overflow" << endl;
		}
	}

	void pop() {
		if (isEmpty()) {
			cout << "underflow" << endl;
		}
		else {
			top--;
		}
	}

	int peek() {
		if (isEmpty()) {
			cout << "there is no element in the stack" << endl;
		}
		return arr[top];
	}
	// no of valid element present in the stack
	int stack_size() {
		return top + 1;
	}
	void print_stack() {
		if (isEmpty()) return;
		for (int i = top; i > -1; i--) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
int main() {
	// creation
	Stack s(5) ; // this  is the size of the stack
	// insertion
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.print_stack();

	cout << "Size : " << s.stack_size() << endl;
	s.pop();
	s.print_stack();
	cout << "Top element: " << s.peek();
	return 0;
}*/



/*------------------------------------------------------------------*/
// 2 STACKs IN AN ARRAY

/* top1 == -1  & top2 = size */

// top2 - top1 == -1 no space avaible

/*#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
	int size;
	int * arr;
	int top1, top2;

	Stack(int size) { //constructor
		arr = new int [size];
		this->size = size;
		top1 = -1;
		top2 = size;
	}
	// function :
	void push1(int value) {  //left to right growth of this stack
		if (top1 == top2 - 1) { //overflow  top = size -1  //top2 - top1 == -1
			cout << "Overflow 1" << endl;
			return;
		}
		arr[++top1] = value;
	}
	void pop1( ) { //right to left decrement
		if (top1 == -1) {  // isEmpty()
			cout << "Underflow 1 " << endl;
			return;
		}
		// if it's not then decrement it 'top1' and clears the element in the array by setting it to 0
		arr[top1] = 0;
		top1--;
	}
	void push2(int value) { // right to left in crement of top2
		if (top2 - top1 == 1) {
			// stack 2 is empty
			cout << "Overflow 2" << endl;
			return ;
		}
		arr[--top2] = value;
	}
	void pop2() { // left to right decrement of top 2
		if (top2 == size) {
			cout << "Underflow 2" << endl;
		}
		else {
			arr[top2] = 0;
			top2++;
		}
	}
	void print() {
		cout << endl;
		cout << "top1 " << top1 << " top_1: " << (top1 >= 0 ? arr[top1] : -1) << endl;
		cout << "top2 " << top2 << " top_2: " << (top2 < size ? arr[top2] : -1) << endl;
		for (int i = 0; i < size; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
int main() {
	Stack s(9);
	s.push1(10);
	s.print();
	s.push1(20);
	s.print();
	s.push1(30);
	s.print();
	s.push1(40);
	s.print();
	s.push1(50);
	s.print();

	s.push2(1);
	s.print();
	s.push2(2);
	s.print();
	s.push2(3);
	s.print();
	s.push2(4);
	s.print();
	s.push2(5);

	// removing

	s.pop1();
	s.print();
	s.pop1();
	s.print();
	s.pop2();
	s.print();
	s.print();
	s.push2(100);
	s.print();

	return 0;
}*/
/*----------------------------------------------------------------------------------*/
// Given a string reverse it using the stack :

/*#include <bits/stdc++.h>
using namespace std;
void print(stack<char> s) {
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
int main() {
	string str = "Babbar";
	stack <char> s;
	for (int i = 0; i < str.length(); ++i)
	{
		s.push(str[i]);
	}
	print(s);
	return 0;
}*/
/*---------------------------------------------------------------*/
// Find the middle element in a stack

// #include<bits/stdc++.h>
// using namespace std;

// void print_middle(stack<int>& s, int total_size) {
// 	// base case
// 	if (s.top() == -1) { // if the stack is empty   another way s.size==0
// 		cout << "There is no element in the stack";
// 		return;
// 	}
// 	if ((int)s.size() == (int) (total_size / 2 ) + 1) { // the current element is the middle element of the stack
// 		//  it prints the middle element using s.top()
// 		cout << "Middle : " << s.top() << endl;
// 		return ;   //  if the middle element gets printed then recursion stop here
// 	}
// 	int temp = s.top();  // if the current element is not middle one
// 	s.pop();  //and removes it from the stack

// 	// recursive call
// 	print_middle(s, total_size);  // the top element is removed from the stack now the function will work on the
// 	// remaning elements.
// 	// ----------------------> after recursion stop -------> here now backtracking goes
// 	//  backtrack : a key concept in backtracking algorithms, where the state is restored to its previous state after exploring a particular branch of the solution space.
// 	s.push(temp);
// 	// Now, the recursion starts to unwind. The function returns from the deepest call back to the previous call.
// 	/*stack returns to the original state after the recursive calls*/
// }
// int main() {

// 	stack<int> s;

// 	s.push(10);
// 	s.push(20);
// 	s.push(30);
// 	s.push(40);
// 	s.push(50);
// 	s.push(60);
// 	s.push(70);
// 	s.push(80);
// 	s.push(90);

// 	int total_size = s.size();
// 	print_middle(s, total_size);
// 	return 0;
// }


