// Design a stack that perfrom push , pop , top, and getMin in O(1)
// pair<int,int> p ; p.first {element} & p,second {min element}

// leetcode__
// 155.Minstack

/*-------------------------------------------------------------------------------*/
// 32.Longest Valid Parenthesis

// open bracket ----> insert the index
// closer bracket ---------> pop
// find out the length  [current_index - stack_top]

/*#include<bits/stdc++.h>
using namespace std;
void countBracket(string s, stack<int> &st) {
	int len = 0, max_len = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '(') {
			st.push(i);
		}
		else { //closing brackets case
			// in this else aase all brackets are invalid so we all push the brackets indexes
			st.pop();  // it pop an index from the stack reperesents the position of the matching opening parenthesis
			// after poping there will be two situation either the stack is empty of still there are brackets present in it
			if (st.empty()) {  // if the stack becomes empty after poping then there's not matching opening
			// this is not empty case
			// parenthessis for the current closing parenthesis . in this case it pushes the current index 'i' onto the stack
				st.push(i);
			}
			else {
				// if the stack is empty then i have to insert -1
				len = i - st.top();
				max_len = max(len, max_len);
			}
		}
	}
	cout<<max_len<<endl;
}
int main() {
	stack<int> st;
	st.push(-1); // to find the length( ) of the valid brackets
	string s; cin >> s;
	countBracket(s, st);
	return 0;
}*/
// input : )()()(
// output : 4

/*-------------------------------------------------------------------------------------*/

// LARGEST RECTANGULAR AREA IN THE HISTORGRAM------>
/*--------------------------------------------------------------------*/
// NEXT SMALLER ELEMENT IN THE ARRAY-------->

// step 1 -> stack with -1
// step 2 -> array with k element --> (R->L);
// step 3 -> check in the stack if there is smaller element exists in it
// step 4 -> for checking pop until we get -1 if got then store it
// step 5 -> push the array k element


#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);

	stack<int> s;
	s.push(-1);  //default of the right one
	vector<int> ans (v.size()); // i have givem the same size of the input vector
	for (int i = v.size(); i >= 0; --i)
	{
		int curr = v[i];
		// aapka ans stack m h
		while (s.top() >= curr) {
			s.pop();
		}
		// when i am existing the loop then i got the smaller element
		// then i have to store in to my ans vector
		ans[i] = s.top();
		s.push(curr);
	}
	cout << "printing" << endl;
	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << " ";
	}
	return 0;
}



