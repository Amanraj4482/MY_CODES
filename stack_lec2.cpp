// INSERT TOP AT THE BOTTOM ~ IN THE SAME STACK
// 5 15 27 32 11  {TOP = 11} {BOTTOM = 5}
// 11 5 15 27 32  {TOP = 32} {BOTTOM = 11}

// by the help of recursion and backtracking
// if my stack gets empty then insert the top to the bottom

// (A) . store the top (B). Pop the top (C). Recursive call
// base case : empty then push the target

// #include <bits/stdc++.h>
// using namespace std;

// void solve(stack<int>&s, int target) {
// 	// this function recursively reverses the order of elements in the stack
// 	// base case
// 	if (s.empty()) { // if the stack is empty means we have reached the end of the stack
// 		// effective insertion of the target at the bottom of the stack
// 		s.push(target);
// 		return;
// 	}
// 	// if the stack is not empty it first saves the top into top_element and then remove it from the stack
// 	int top_element = s.top();
// 	s.pop();

// 	// recursive call
// 	solve(s, target);
// 	// recursion ended here then backtracking starts ------>

// 	// backtracking ---> ensures that stack's original order is preserved
// 	s.push(top_element);
// }
// void insert_at_bottom(stack<int> &s) {  // purpose -> to insert the top element of the stack at the bottom of the stack using the 'solve' function
// 	// this function just storing the target of the stack
// 	if (s.empty()) {
// 		cout << "Stack is empty" << endl;
// 		return;
// 	}
// 	int target = s.top();
// 	s.pop();  //deleting from the stack
// 	solve(s, target);
// 	/* This effectively reverses the order of the stack , placing the 'target' element at the bottom of the stack */
// }
// void print(stack<int> & s) {
// 	while (!s.empty()) {
// 		cout << s.top() << " ";
// 		s.pop();
// 	}
// 	cout << endl;
// }
// int main() {
// 	stack<int>s;
// 	s.push(10);
// 	s.push(20);
// 	s.push(30);
// 	s.push(40);
// 	s.push(50);
// 	insert_at_bottom(s);
// 	print(s);
// 	return 0;
// }


/*----------------------------------------------------------------*/
// REVESE A STACK

/*#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int>&s , int target) {
	if (s.empty()) {
		// when the stack gets empty it pushes the element into the stack at the bottom
		s.push(target);
		return;
	}
	int top_element = s.top();
	s.pop();
	// the upper two of the code is to done to reverse the order of the stack element
	// reverse_stack
	insert_at_bottom(s, target); //reverse the order of elements in the stack.
	// backtrack
	s.push(top_element);
}
void revese_stack(stack<int>&s) {
	if (s.empty()) {
		// if stack is empty then can't do reverse
		return;
	}
	int target = s.top();
	s.pop();

	// when stack gets reversed then we will insert the target at the bottom
	revese_stack(s); //this recrusive call continues to reverse the order of elements in the stack

	// insert the target at the bottom of the stack
	insert_at_bottom(s, target);
}
void print(stack<int> & s) {
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
int main() {
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	revese_stack(s);
	print(s);
	return 0;
}*/
/*----------------------------------------------------------*/
// VALID CICULAR BRACKET PROBLEM

/*#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(stack<char>s, string str) {
	// if there is open bracket then insert it
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '(')
			s.push(str[i]);
		else if (!s.empty() && s.top() == '(')
			s.pop(); //cancel out both the brackets
		else
			return false;
	}
	return s.empty();
}
int main() {
	string str; cin >> str;
	stack<char>st;
	cout << (isValidParenthesis(st, str) ?  "true" : "False");
	return 0;
}*/
// input : (())
// output : true
/*----------------------------------------------------------------*/
// VALID PARENTHESIS PROBLEM
/*#include<bits/stdc++.h>
using namespace std;
//1. push any open bracket
//2. when there is closing bracket check for it's corresponding opening bracket
// if present then pop it's corresponding the open bracket , if not then return false
// at last if stack gets empty then the expression is the valid expression

bool is_valid(stack<char>&  s, string str) {
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
			s.push(str[i]);
		}
		else {
			// closing bracket case
			// checking for the its corresponding bracket at the top of the stack
			if (!s.empty()) {
				//if stack not empty
				if (str[i] == ')' && s.top() == '(') {
					// matching bracket
					s.pop(); //cancle out both the bracket
				}
				else if (str[i] == ']' && s.top() == '[') {
					// matching bracket
					s.pop(); //cancle out both the bracket
				}
				else if (str[i] == '}' && s.top() == '{') {
					// matching bracket
					s.pop(); //cancle out both the bracket
				}
				else {
					// invalid expression
					// bracket not mattching
					return false;
				}
			}
			else {
				// stack is empty
				return false;
			}
		}
	}
	if (s.empty()) {
		// if stack is empty
		return true;
	}
	else {
		return false;
	}
}
int main() {

	stack<char>s;
	string str;
	cin >> str;
	cout << (is_valid(s, str) ? "true expression" : "false expression");

	return 0;
}*/
// ({[][]{}(())})
// true expression

/*--------------------------------------------------------------------*/

//SORT THE STACK :
// 1. insert_sorted
// 2. sort_stack
/*--------------------*/
/*#include<bits/stdc++.h>
using namespace std;

void push_at_the_end(stack<int>&s, int t) {
	if (s.empty()) {
		s.push(t);
		return;
	}
	if (s.top() >= t) {  // if it is, the 't' element is pushed onto the stack , effectvelu insertig it at the correct sorted position
		s.push(t);
	}
	// now create a space for 'inserting the 'target element'
	int top_element = s.top();
	s.pop();
	push_at_the_end(s, t);
	// call continues to insert the 'target' element at its correct soreted position in the stack
	s.push(top_element);
}
void stack_reverse(stack<int>&s) {
	if (s.empty()) return;
	int t = s.top();
	s.pop();
	stack_reverse(s);
	push_at_the_end(s, t);
}
void print_stack(stack<int>&s) {
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}
int main() {
	stack<int> s;
	s.push(10);
	s.push(30);
	s.push(50);
	s.push(70);
	s.push(90);
	stack_reverse(s);
	print_stack(s);
	return 0;
}*/
// 90 70 50 30 10
// output : 10 30 50 70 90

/*------------------------------------------------------------*/

// REMOVE REDUNTANT BRACKETS --------->
// if there is operator in between the operator then they are useful brackets
// else otherwise useless brakets-------->

// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	return 0;
// }



/*----------------------------------------------------------------------------------------------------------*/
//REMOVE THE MOST FREQUENT ELEMENT FROMM THE STACK

// #include<bits/stdc++.h>
// using namespace std;

// // This is func to print the stack
// void print(stack<int> s) {
// 	while (!s.empty()) {
// 		cout << s.top() << " ";
// 		s.pop();
// 	}
// 	cout << endl;
// }
// void solve(stack<int>&st, map<int, int>&mp) {
// 	int most_freq_ele = -1, max_freq = 0;
// 	for (auto it = mp.begin(); it != mp.end(); ++it) {
// 		int key = it->first;
// 		int freq = it->second;
// 		/*-------------------*/
// 		if (freq > max_freq) {
// 			max_freq = freq; // which has max freq of the most freq ele
// 			most_freq_ele = key; // ele which is most freq
// 		}
// 	}
// 	stack<int>temp;
// 	while (!st.empty()) { // until the st gets empty
// 		int ele = st.top(); // keeping the curr_ele
// 		st.pop();  // removing the curr_ele
// 		// checking the current_ele not equal to the most freq ele (key = 2) if yes then put other ele except (key = 2)
// 		if (ele != most_freq_ele) temp.push(ele);
// 	}
// 	// temp [ 1 3 5 ]
// 	while (!temp.empty()) {  // until the temp gets empty
// 		int ele = temp.top(); // keep the ele of the temp stack
// 		temp.pop();
// 		st.push(ele);// pusing the temp ele to the st stack
// 	}
// }
// int main() {
// 	int n ; cin >> n;
// 	stack<int> st;
// 	map<int, int> mp;  // creating a map which it->first (key [elements] ) & it->second (freq(key))
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int t ; cin >> t;
// 		st.push(t);
// 		mp[t]++; // marking the total count of the element
// 	}
// 	cout << "before : ";
// 	print(st); // stack before the updation
// 	solve(st, mp);
// 	cout << "after : ";
// 	print(st); // stack after updation

// 	return 0;
// }
// input :
// 6
// 1 2 2 2 3 5

// ouput :
// before : 5 3 2 2 2 1
// after : 5 3 1
/*----------------------------------------------------------------------------------------------*/

