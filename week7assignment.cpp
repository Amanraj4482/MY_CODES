//RECURSIVE APPROACH ALL SOLUTIONS
//LAST OCCURANCE OF A CHAR
//METHOD 1->THIS HAS BEEN IMPLEMENTED FROM LEFT TO RIGHT
//if i am getting the solution then try searching for the right until last
// ---------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void lastOcc(string&s, char x, int&ans, int i) {
// 	//base case
// 	if (i >= s.size()) { //if it crosses the size of the string s then that will be the base case
// 		return;
// 	}
// 	//solve the one case by ourselves
// 	if (s[i] == x) {
// 		ans = i; //it will store the index in the ans by refrence varible
// 	}
// 	lastOcc(s, x, ans, i + 1);
// }
// int main() {
// 	string s;
// 	cin >> s;
// 	char x;
// 	cin >> x;
// 	int ans = -1;
// 	lastOcc(s, x, ans, 0);
// 	cout << ans << endl;
// 	return 0;
// }

// //answer - 7

//METHOD 2->RIGHT TO LEFT-------------------------------
//in searching from right to left if i get the solution
//then return it at the first search itself
// #include<bits/stdc++.h>
// using namespace std;
// void lastOccMethod2(string &s, char x, int&ans, int i) {
// 	//base case
// 	if (i < 0) return ;//if the i gets less than 0 then that will be the base case
// 	//if i get the ans then return it
// 	//solve the 1 case by yourself
// 	if (s[i] == x) {
// 		ans = i;
// 		return;
// 	}
// 	lastOccMethod2(s, x, ans, --i);
// }

// int main() {
// 	string s; cin >> s;
// 	char x; cin >> x;
// 	int ans = -1;
// 	lastOccMethod2(s, x, ans, s.size() - 1);
// 	cout << ans;

// 	return 0;
// }
//input -> abcdefgh x->h
//output-> 7

//the time complexity of right to left will be ->O(n)
//space complexity -> O(n) entry in the stack


//REVERSE A STRING BY RECURSIVILY-------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void reverseString(string&s, int start, int end) {
// 	//base case if start is greater or equal to end
// 	if (start >= end) return ;
// 	//solving the 1 one case
// 	swap(s[start], s[end]);
// 	reverseString(s, ++start, --end);
// }
// int main() {
// 	string s; cin >> s;
// 	reverseString(s, 0, s.size() - 1);
// 	cout << s;

// 	return 0;
// }
//input -> abcd
//output -> dcba
//tc->O(N)     sc-> O(N)

//ADDING THE STRINGS--------------------------------
//integers has been given in the form of string
//we don't have to solve this by converting into the integers
//while adding we consider the one's space digit as the ans
//and the ten's place digits as carry
//BY CREATING COPY OF STRING

// #include<bits/stdc++.h>
// using namespace std;
// string stringSum(string num1, int p1, string num2, int p2, int carry = 0) {
// 	//base case
// 	if (p1 < 0 && p2 < 0) {
// 		if (carry != 0) {
// 			return string(1, carry + '0');//size 1 and converting int to string
// 			//temp string created
// 		}
// 		return "";
// 	}
// 	int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
// 	int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';//jab tak p2>=0 tab tak num[p2] lega ni to zero
// 	int csum = n1 + n2 + carry;
// 	int digit = csum % 10; //to find the last digit of the carry
// 	carry = csum / 10; //to find the first digit of the carry if there is two digits
// 	string ans = ""; //creating the empty string to store the ans
// 	ans.push_back(digit + '0'); //additing the 0 to convert into the string


// 	//RE
// 	ans += stringSum(num1, p1 - 1, num2, p2 - 1, carry);
// 	//now we have to reverse the ans
// 	return ans;
// }
// string addString(string num1, string num2) {
// 	string ans = stringSum(num1, num1.size() - 1, num2, num2.size() - 1, 0); //i can give the carry =0 also i cannot give because i have initilised it with the zero
// 	reverse(ans.begin(), ans.end());
// 	return ans;
// }

// int main() {
// 	string num1, num2; cin >> num1 >> num2;
// 	cout << addString(num1, num2);
// 	return 0;
// }
//input ->11 123
//output-> 134


//PASS BY REFRENCE OF THE STRING
// #include<bits/stdc++.h>
// using namespace std;
// void stringSum(string&num1, int p1, string&num2, int p2, string&ans, int carry = 0) {
// 	//base case
// 	if (p1 < 0 && p2 < 0) {
// 		if (carry != 0) {
// 			return ans.push_back(carry + '0');//size 1 and converting int to string
// 			//temp string created
// 		}
// 		return;
// 	}
// 	int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
// 	int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';//jab tak p2>=0 tab tak num[p2] lega ni to zero
// 	int csum = n1 + n2 + carry;
// 	int digit = csum % 10; //to find the last digit of the carry
// 	carry = csum / 10; //to find the first digit of the carry if there is two digits
// 	ans.push_back(digit + '0'); //additing the 0 to convert into the string
// 	stringSum(num1, p1 - 1, num2, p2 - 1, ans, carry);
// }
// string addString(string num1, string num2) {
// 	string ans = "";
// 	stringSum(num1, num1.size() - 1, num2, num2.size() - 1, ans, 0); //i can give the carry =0 also i cannot give because i have initilised it with the zero
// 	reverse(ans.begin(), ans.end());
// }

// int main() {
// 	string num1, num2; cin >> num1 >> num2;
// 	cout << addString(num1, num2);
// 	return 0;
// }



//PALINDROME CHECK FUNCTINO BY RECURSIVE APPROACH
// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrome(string&s, int i, int n) {
// 	//base case
// 	if (i > n) {
// 		return true;//full passed so string is palidrome
// 	}
// //writing one case;
// 	if (s[i] != s[n]) {
// 		return false;
// 	}
// 	return isPalindrome(s, ++i, --n);
// }
// int main() {
// 	string s; cin >> s;
// 	cout << isPalindrome(s, 0, s.size() - 1);
// 	return 0;
// }



//REMOVE ALL OCCRANCES OF A SUBSTRNIG
// #include<bits/stdc++.h>
// using namespace std;
// void removeOcc(string&s, string part) {
// 	int found = s.find(part);
// 	if (found != string::npos) {
// 		//string has been located
// 		//please remove the string
// 		string left_part = s.substr(0, found);
// 		string right_part = s.substr(found + part.length(), s.length());
// 		//after solving one case
// 		//concatinate both the strings
// 		s = left_part + right_part;
// 		removeOcc(s, part);
// 	}
// 	else {
// 		//base case
// 		//all the occrance of the part has been removed
// 		return ;
// 	}
// }
// string non_void_string_remove_occ(string s, string part) {
// 	removeOcc(s, part);
// 	return s;
// }
// int main() {
// 	string s = "daabcbaabcbc";
// 	string part = "abc";
// 	cout << non_void_string_remove_occ(s, part) << endl;//output-dab
// 	return 0;
// }



//PRINT ALL SUBSTRING USING RECURSION
// #include<bits/stdc++.h>
// using namespace std;
// void printsubarray_util(vector<int>&nums, int start, int end) {
// //base
// 	if (end == nums.size()) {
// 		return ;
// 	}

// 	//1 case sol
// 	for (int i = start; i <= end; i++) {
// 		cout << nums[i] << " ";
// 	}
// 	cout << endl;

// 	printsubarray_util(nums, start, end + 1);
// }
// void printsubarray(vector<int>&nums) {
// 	for (int start = 0; start < nums.size(); start++) {
// 		int end = start;
// 		printsubarray_util(nums, start, end);
// 	}
// }
// int main() {
// 	vector<int>nums{1, 2, 3, 4, 5};
// 	printsubarray(nums);
// 	return 0;
// }

//1st set of subarray
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


//LEETCODE 121 BUY AND SELL STOCKES
//________ITERATIVE BRUTE FORCE SOLUTION_____________
// #include<bits/stdc++.h>
// using namespace std;
// int maxProfit(vector<int>&prices) {
// 	int maxi = 0;
// 	vector<int>ans;
// 	for (int i = 0; i < prices.size(); i++) {
// 		for (int j = i; j < prices.size(); j++) {
// 			if (prices[i] < prices[j]  ) {
// 				maxi = (prices[j] - prices[i]);
// 				ans.push_back(maxi);
// 			}
// 		}
// 	}
// 	return *max_element(ans.begin(), ans.end());
// }
// int main()
// {
// 	vector<int> prices{7, 1, 5, 3, 6, 4};
// 	cout << maxProfit(prices);
// 	return 0;
// }


//_______RECURSIVE APPORACH_________________
// #include<bits/stdc++.h>
// using namespace std;
// void maxProfitFinder(vector<int>&prices, int i, int&minPrice , int & maxProfit) {
// 	//base
// 	if (i == prices.size()) return ;
// 	//sol for 1 case
// 	if (prices[i] < minPrice) minPrice = prices[i];
// 	int todayProfit = prices[i] - minPrice;
// 	if (todayProfit > maxProfit) maxProfit = todayProfit;
// 	//recursive call
// 	maxProfitFinder(prices, i + 1, minPrice, maxProfit);
// }
// int maxP(vector<int>&prices) {
// 	int minProfit = INT_MAX;
// 	int maxProfit = INT_MIN;
// 	maxProfitFinder(prices, 0, minProfit, maxProfit);
// 	return maxProfit;
// }
// int main() {
// 	vector<int> prices = {7, 1, 5, 3, 6, 4};
// 	cout << maxP(prices);
// 	return 0;
// }


//both time and space will be O(N)




//_______HOUSE ROBBER PROBLEM_____


// #include<bits/stdc++.h>
// using namespace std;
// int robHelper(vector<int>&nums, int i) {
// 	if (i >= nums.size()) return 0;
// 	//sol for 1
// 	int robAmt1 = nums[i] + robHelper(nums, i + 2);
// 	int robAmt2 = 0 + robHelper(nums, i + 1);
// 	return max(robAmt1, robAmt2);
// }
// int rob(vector<int>&nums) {
// 	return robHelper(nums, 0);
// }
// int main() {
// 	vector<int>nums = {1, 2, 3, 1};
// 	cout << rob(nums);
// 	return 0;
// }
//so the max answer will be the 4




//WILD CARD MATCHING

// #include<bits/stdc++.h>
// using namespace std;
// bool isMatchingHelper(string s, int si , string p , int pi) {
// //base
// 	if (si == s.size() && pi == p.size()) {
// 		//all the chars has been matched
// 		return true;
// 	}
// 	if (si == s.size() && pi < p.size()) {
// 		while (pi < p.size()) {
// 			if (p[pi] != '*') {
// 				return false;
// 			}
// 			pi++;
// 		}
// 		return true;
// 	}
// 	//single char matching
// 	if (s[si] == p[pi] || '?' == p[pi]) {
// 		return isMatchingHelper(s, si + 1, p, pi + 1) ;
// 	}
// 	//case 1
// 	if (p[pi] == '*') {
// 		//treat * as null or  empty
// 		bool isCaseA = isMatchingHelper(s, si, p, pi + 1);
// 		//let '* ' consume one char.
// 		bool isCaseB = isMatchingHelper(s, si + 1, p, pi );

// 		//getting the or logic either true or false we need true ans.
// 		return isCaseA || isCaseB ;
// 	}
// 	// char doesn't match
// 	return false;
// }
// bool isMatch(string s , string p) {
// 	int pi = 0; //pointer index of s string
// 	int si = 0; //pointer index of p string
// 	return isMatchingHelper(s, si, p, pi);
// }
// int main() {
// 	string  s = "aa";
// 	string  p = "?a";

// 	cout << isMatch(s, p);
// 	return 0;
// }





//PERFECT SQUARES

// #include<bits/stdc++.h>
// using namespace std;
// int numsquaresHelper(int n) {
// 	//base
// 	if (n == 0) return 1;
// 	if (n < 0) return 1;
// 	int i = 1, ans = INT_MAX;
// 	int end = sqrt(n);
// 	while (i <= end) {
// 		//many times i am finding the perfect squares
// 		int perfectsquares = i * i;
// 		int noOfPectectSqur = 1 + numsquaresHelper(n - perfectsquares);
// 		if (noOfPectectSqur < ans) {
// 			ans = noOfPectectSqur;
// 		}
// 		++i;
// 	}
// 	return ans;
// }
// int numsquares(int n) {
// 	return numsquaresHelper(n) - 1;//returning by getting the -1
// }
// int main() {
// 	int n = 13;
// 	cout << numsquares(n)  ;
// 	return 0;
// }




//MINIMUM COST FOR TICKETS
// #include<bits/stdc++.h>
// using namespace std;
// //array(days) ends reached at the base case
// //stading on the specific day and satisfy the min condition to buy the tickets
// //and take the min of the all the passes
// //we will find the every day pass

// int mincostTickets(vector<int>days, vector<int>costs, int i) {
// 	//i will iterate on the days
// 	//base
// 	if (i >= days.size()) return 0;

// 	//sol for 1 case
// 	int cost1 = costs[0] + mincostTickets(days, costs, i + 1 ); //buying 1 day pass

// 	// 7 days pass taken
// 	int passEndDay = days[i] + 7 - 1;
// 	int j = 1;
// 	while (days[j] <= passEndDay) {
// 		j++;

// 	}

// 	int cost7 = costs[1] + mincostTickets(days, costs, j); //buying 7 day pass

// 	passEndDay = days[i] + 7 - 1;
// 	j = 1;
// 	while (days[j] <= passEndDay) {
// 		j++;

// 	}
// 	int cost30 = costs[2] + mincostTickets(days, costs, j); //buying 7 day pass

// 	return min(cost1, min(cost7, cost30));
// }
// int mincost(vector<int>days, vector<int>costs) {
// 	return mincostTickets(days, costs, 0);

// }
// int main() {
// 	vector<int> days = {1, 4, 6, 7, 8, 20};
// 	// vector<int> days = {2, 5};
// 	vector<int> costs = {2, 7, 15};
// 	// vector<int> costs = {1, 4, 25};
// 	cout << mincost(days, costs);

// 	return 0;
// }

//got tle at 23rd case




//NO OF DICE SOLVED WITH THE TARGET SUM
// #include<bits/stdc++.h>
// using namespace std;

// int find(int n , int k , int target) {
// //base condition will be all n==0
// 	if (target < 0) return 0;
// 	if (n == 0 && target == 0) return 1;
// 	if (n == 0 && target != 0) return 0;
// 	if (n != 0 && target == 0) return 0;

// 	int ans = 0;
// 	for (int i = 1; i <= k; ++i)
// 	{
// 		ans = ans + find(n - 1, k, target - i );
// 	}
// 	return ans;
// }
// int main() {
// 	int n = 2;//having the 3 dice with 6 faces
// 	int k = 6; //faces of the dice means  1 to 6
// 	int target = 7;//find the no of ways for making the target sum
// 	cout << find(n, k , target);
// 	//there can be 216 ways to get the output for the 3 throwing dice
// 	return 0;
// }

