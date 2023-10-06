// #include<bits/stdc++.h>
// using namespace std;
// #define print(x) cout<<x<<endl
// int c = 0;
// void f() {
// 	if (c == 5) return ;
// 	print(c);
// 	c++;
// 	f();
// }
// int main() {
// 	f();
// 	return 0;
// }
// segmentation fault -> stack overflow-->
/*-------------------------------*/
// #include<bits/stdc++.h>
// using namespace std;
// #define print(x) cout<<x<<endl;
// int c = 0;
// void f() {
// 	if (c == 5) return;
// 	print(c);
// 	c++;
// 	f();
// }
// int main() {
// 	f();
// 	return 0;
// }
/*---------------------------------*/
// print name 5 times
// #include<bits/stdc++.h>
// using namespace std;
// #define print(x) cout<<x<<endl;
// void f (int i , int n ) {
// 	if (i > n)return ;
// 	print("raj");
// 	f(i + 1, n);
// }
// int main() {
// 	int n ; cin >> n;
// 	f(1, n);
// 	return 0;
// }
/*--------------------------------*/
// print count 5 times
/*#include<bits/stdc++.h>
using namespace std;

*/// void f(int i , int n ) {
// 	if (i < 1) return;
// 	cout << i << endl;
// 	f(i - 1, n);
// }
// int main() {
// 	int n; cin >> n;
// 	f(n, n);
// 	return 0;
// }
/*--------------------------------*/
// parameterised way

// #include<bits/stdc++.h>
// using namespace std;
// void f(int i , int sum) {
// 	if (i < 1) {
// 		cout << sum << endl;
// 		return;
// 	}
// 	f(i - 1, sum + i);
// }
// int main() {
// 	int n ; cin >> n;
// 	f(n, 0);
// 	return 0;
// }
/*-----------------------------------------*/
// functional way ------->

// #include<bits/stdc++.h>
// using namespace std;
// int f(int n ) {
// 	if (n < 1) return 0; //f(0) will return 0===> 1+0
// 	return n + f(n - 1);
// }
// int main() {
// 	int n ; cin >> n;
// 	cout << f(n);
// 	return 0;
// }
// factorial of n with parametrised way and functinal way
/*---------------------------------------------*/
// #include<bits/stdc++.h>
// using namespace std;
// void f(int n , int fact ) {
// 	if (n < 1) {
// 		cout << fact << endl;
// 		return ;
// 	}
// 	f(n - 1, n * fact);
// }
// int main() {
// 	int n ; cin >> n;
// 	f(n, 1);
// 	return 0;
// }
/*----------------------------------------*/
// #include<bits/stdc++.h>
// using namespace std;
// int f(int n ) {
// 	if (n == 1) return 1;
// 	return n * f(n - 1);
// }
// int main() {
// 	int n ; cin >> n;
// 	cout << f(n);
// 	return 0;
// }
/*----------------------------------------*/

// reverse an array using the recursion
// using two varibles

// #include<bits/stdc++.h>
// using namespace std;
// int i = 0;
// void f(vector<int>&v, int i, int j ) {
// 	if (i == j) return;
// 	swap(v[i], v[j]);
// 	f(v, i + 1, j - 1);
// }
// int main() {
// 	int n; cin >> n;
// 	vector<int>v(n);
// 	for (int i = 0; i < n; i++) cin >> v[i];
// 	f(v, 0, n - 1);
// 	for (auto i : v)cout << i << " ";
// 	return 0;
// }
/*-------------------------------------------*/
// using the single varible

/*#include<bits/stdc++.h>
using namespace std;
void f(vector<int>&v, int n, int i ) {
	if (i >= n / 2) return;
	swap(v[i], v[n - i - 1]);
	f(v, n, i + 1);
}
int main() {
	int n; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	f(v, n, 0);
	for (auto i : v)cout << i << " ";
	return 0;
}*/
/*-------------------------------------------*/
// check if a given string is recursion or not

// #include<bits/stdc++.h>
// using namespace std;
// bool f(string s, int i ) {
// 	if (i >= (int) s.size() / 2) return 1;
// 	if (s[i] != s[s.size() - i - 1])return 0; // if this is not equal then i retrun then i am updating the function
// 	return f(s, i + 1);
// }
// int main() {
// 	string s; cin >> s;
// 	if (f(s, 0))cout << "Yes";
// 	else cout << "No";
// 	return 0;
// }
/*----------------------------------------------*/
// muliple recursion calls
// fibonccchi number

// #include<bits/stdc++.h>
// using namespace std;
// int f(int n ) {
// 	if (n <= 1)return n;
// 	return f(n - 1) + f(n - 2);
// }
// int main() {
// 	cout << f(5 );
// 	return 0;
// }

/*-------------------------------------*/
// print all subsequence contiguous/non-contiguous (with the order)
// where subarray is contiguous

// #include<bits/stdc++.h>
// using namespace std;
// #define print(x) for(int i =0;i<(int)x.size();i++)cout<<x[i]<<" ";
// #define p(x) cerr<<x<<endl;

// /*----------------------------------------*/
// typedef long long ll;
// #define ff first
// #define ss second
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif
// void _print(ll t) {cerr << t;} void _print(int t) {cerr << t;} void _print(string t) {cerr << t;} void _print(char t) {cerr << t;}
// template <class T, class V> void _print(pair <T, V> p); template <class T> void _print(vector <T> v); template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v); template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// /*----------------------------------------------------------*/

// void f(vector<int>&v, int i , vector<int>&s) {
// 	if (i == (int) v.size()) {
// 		p("------------printing----------");
// 		print(s);
// 		cout << endl;
// 		return;
// 	}
// 	s.push_back(v[i]);
// 	p("----push---");
// 	debug(s) debug(i) debug(s[i])
// 	p("============")
// 	f(v, i + 1, s); //taking
// 	s.pop_back();
// 	p("---pop----");
// 	debug(s) debug(i) debug(s[i])
// 	f(v, i + 1, s); //not taking
// }
// int main() {
// 	int n; cin >> n;
// 	vector<int>v(n), s;
// 	for (int i = 0; i < n; i++)cin >> v[i];
// 	f(v, 0, s);
// 	return 0;
// }
// ----push---
// s [ 1 ]
// i 0
// s[i] 1
// ============
// ----push---
// s [ 1 2 ]
// i 1
// s[i] 2
// ============
// ----push---
// s [ 1 2 3 ]
// i 2
// s[i] 3
// ============
// ------------printing----------
// ---pop----
// s [ 1 2 ]
// i 2
// s[i] 3
// ------------printing----------
// ---pop----
// s [ 1 ]
// i 1
// s[i] 2
// ----push---
// s [ 1 3 ]
// i 2
// s[i] 3
// ============
// ------------printing----------
// ---pop----
// s [ 1 ]
// i 2
// s[i] 3
// ------------printing----------
// ---pop----
// s [ ]
// i 0
// s[i] 1
// ----push---
// s [ 2 ]
// i 1
// s[i] 3
// ============
// ----push---
// s [ 2 3 ]
// i 2
// s[i] 3
// ============
// ------------printing----------
// ---pop----
// s [ 2 ]
// i 2
// s[i] 3
// ------------printing----------
// ---pop----
// s [ ]
// i 1
// s[i] 3
// ----push---
// s [ 3 ]
// i 2
// s[i] 3
// ============
// ------------printing----------
// ---pop----
// s [ ]
// i 2
// s[i] 3
// ------------printing----------

/*----------------------------------------------*/

// printing the subsequences whose sum is k

// #include<bits/stdc++.h>
// using namespace std;
// #define print_vec(x) for(int i =0;i<(int)x.size();i++)cout<<x[i]<<" ";
// int  sum = 0;
// void f(vector<int>&v, int i, vector<int>s, int k ) {
// 	if (i == (int)v.size()) {
// 		if (sum == k) {
// 			print_vec(s);
// 			cout << endl;
// 		}
// 		return;
// 	}
// 	s.push_back(v[i]);
// 	sum += v[i];
// 	f(v, i + 1, s, k);
// 	/*------------------*/
// 	s.pop_back();
// 	sum -= v[i];

// 	// not pick
// 	f(v, i + 1, s, k);
// }
// int main() {
// 	int n; cin >> n;
// 	vector<int>v(n), s;
// 	for (int i = 0; i < n; i++)cin >> v[i];
// 	f(v, 0, s, 3);
// 	return 0;
// }
/*---------------------------------------------*/
// printing any subsequence with the sum = k
// #include<bits/stdc++.h>
// using namespace std;
// #define print_vec(x) for(int i =0;i<(int)x.size();i++)cout<<x[i]<<" ";
// int  sum = 0;
// bool f(vector<int>&v, int i, vector<int>s, int k ) {
// 	if (i == (int)v.size()) {
// 		if (sum == k) {
// 			print_vec(s);
// 			cout << endl;
// 			return 1;
// 		}
// 		return 0;
// 	}
// 	s.push_back(v[i]);
// 	sum += v[i];
// 	if (f(v, i + 1, s, k)==1) return 1;// avoiding the future recursion calls
// 	/*------------------*/
// 	s.pop_back();
// 	sum -= v[i];

// 	// not pick
// 	if (f(v, i + 1, s, k)==1) return 1;
// 	return 0;
// }
// int main() {
// 	int n; cin >> n;
// 	vector<int>v(n), s;
// 	for (int i = 0; i < n; i++)cin >> v[i];
// 	f(v, 0, s, 2);
// 	return 0;
// }
/*-----------------------------------------------*/
// give the tota count of the subsequence
// #include<bits/stdc++.h>
// using namespace std;
// int  sum = 0;
// int f(vector<int>&v, int i, int k ) {
// 	if (sum > k)return 0;
// 	// this can only be done if array contains only positives
// 	if (i == (int)v.size()) {
// 		if (sum == k) return 1;
// 		return 0;
// 	}
// 	sum += v[i];
// 	int l = f(v, i + 1, k);// picking up
// 	/*------------------*/
// 	sum -= v[i];
// 	int r = f(v, i + 1, k) ; // not pick
// 	return l + r;
// }
// int main() {
// 	int n; cin >> n;
// 	vector<int>v(n);
// 	for (int i = 0; i < n; i++)cin >> v[i];
// 	cout << f(v, 0, 3);
// 	return 0;
// }
/*---------------------------------------------------*/
// return the unique combinations of the array for the target sum and it can be any order you can retunr
// combination sum 1
// where the no is unlimited times

// #include<bits/stdc++.h>
// using namespace std;
// #define print_vec(x) for (auto i : x) cout << i << " ";

// /*----------------------------------------*/
// typedef long long ll;
// #define ff first
// #define ss second
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif
// void _print(ll t) {cerr << t;} void _print(int t) {cerr << t;} void _print(string t) {cerr << t;} void _print(char t) {cerr << t;}
// template <class T, class V> void _print(pair <T, V> p); template <class T> void _print(vector <T> v); template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v); template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// /*----------------------------------------------------------*/

// void f (vector<int>&v, vector<int>&s, int i, int target, vector<vector<int>>&ans) {
// 	if (i == (int)v.size()) {
// 		if (!target) { // if target becomes zero
// 			print_vec(s);
// 			cout << endl;
// 			ans.push_back(s);
// 		}
// 		return;
// 	}
// 	if (s[i] < target) {
// 		s.push_back(v[i]);
// 		f(v, s, i, target - v[i], ans);
// 		s.pop_back();
// 	}
// 	f(v, s , i + 1, target, ans); // go to next index
// }
// int main() {
// 	int n , target ; cin >> n >> target;
// 	vector<int>v(n), s;
// 	for (int i = 0; i < n; i++)cin >> v[i];
// 	vector<vector<int>>ans;
// 	f(v, s, 0, target, ans);
// 		return 0;
// }
/*-------------------------------------------------------------------*/
// combination sum 2
// given a array and target find all unique combinations in candidates where the canidate sum == target
// there should no repetion in the combinations
// we cannot pick the element more than once

// this is the brute force solution
// #include<bits/stdc++.h>
// using namespace std;
// #define print_vec(x) for(auto i : x)cout<<i<<" ";

// /*----------------------------------------*/
// typedef long long ll;
// #define ff first
// #define ss second
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif
// void _print(ll t) {cerr << t;} void _print(int t) {cerr << t;} void _print(string t) {cerr << t;} void _print(char t) {cerr << t;}
// template <class T, class V> void _print(pair <T, V> p); template <class T> void _print(vector <T> v); template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v); template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// /*----------------------------------------------------------*/
// void f(vector<int>&v , set<vector<int>>&ans, int target, int i , vector<int> &s) {
// 	debug(s)
// 	if (i == (int)v.size()) {
// 		if (!target) {
// 			ans.insert(s);
// 		}
// 		return;
// 	}
// 	if (v[i] < target) {
// 		s.push_back(v[i]);
// 		f(v, ans, target - v[i], i + 1, s);
// 		s.pop_back();
// 	}
// 	f(v, ans, target, i + 1, s);
// }
// void solve() {
// 	int n, target; cin >> n >> target;
// 	vector<int>v(n), s;
// 	for (int i = 0 ; i < n; i++)cin >> v[i];
// 	set<vector<int>>ans;
// 	f(v, ans, target, 0, s);
// 	debug(ans)
// 	for (auto it = ans.begin(); it != ans.end(); ++it) {
// 		for (auto val : *it) {
// 			cout << val << " ";
// 		}
// 		cout << endl;
// 	}
// }
// int main() {
// 	int t; cin >> t;
// 	t = 1;
// 	while (t--) {
// 		solve();
// 	}
// 	return 0;
// }
/*-------------------------*/
// another method

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	t = 1;
	while (t--) {
		solve();
	}
	return 0;
}







