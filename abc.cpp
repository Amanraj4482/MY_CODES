// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;


// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cout<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
// #define dl cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// void solve() {

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif



// 	int t; cin >> t;
// 	while (t--) {

// 		ll a, b, c;
// 		cin >> a >> b >> c;
// 		// if (a + b <= c) {
// 		// 	cout << "Second" << endl;
// 		// } else {
// 		// 	cout << "First" << endl;
// 		// }
// 		int maxTurns = (a + b + c + 1) / 2;
// 		debug(maxTurns)
// 		// If the number of turns is greater than or equal to a + b + 1, Anna wins. Otherwise, Katie wins.
// 		if (maxTurns <= a + b + 1 && ) {
// 			cout << "First" << endl;
// 		} else {
// 			cout << "Second" << endl;
// 		}

// 	}
// 	return 0;
// }


// // anna makes the first turns
// // each buttons can be pressed by at most once
// // the will not be able to make her turn
// // she will determine who will win

// // while (number > 0)
// // 			{
// // 				int digit = number % 10;
// // 				number /= 10;
// // 				//print digit
// // 			}


// #include <iostream>
// #include <vector>
// #include <string>


// using namespace std;

// int main() {
// 	int t;
// 	cin >> t;

// 	vector<string> testCases;

// 	cin.ignore(); // Clear the newline character from previous input

// 	for (int i = 0; i < t; ++i) {
// 		string input;
// 		getline(cin, input);
// 		testCases.push_back(input);
// 	}

// 	// Process the test cases
// 	for (int i = 0; i < t; ++i) {
// 		string testCase = testCases[i];
// 		int openCount = 0, closeCount = 0;

// 		for (char ch : testCase) {
// 			if (ch == '(') {
// 				openCount++;
// 			} else if (ch == ')') {
// 				if (openCount > 0) {
// 					openCount--;
// 				} else {
// 					closeCount++;
// 				}
// 			}
// 		}

// 		if (openCount == 0 && closeCount == 0) {
// 			cout << "No" << endl;
// 		} else {
// 			cout << "Yes" << endl;
// 			make();
// 		}
// 	}

// 	return 0;
// }

/*
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;


const ll mod  = 1e9 + 7;
const ll maxn = 1e5 + 1;
const ll inf  = 5e18 ;
const ll minf = -inf ;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mid(s,e) (s+(e-s)/2)
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
#define check cout<<"Print"<<endl;
#define endl "\n"
#define en cout<<endl;
#define dl cerr<<endl;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void solve() {

}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	int numTestCases;
	cin >> numTestCases;

	vector<string> testCases;

	cin.ignore(); // Clear the newline character from previous input

	for (int i = 0; i < numTestCases; ++i) {
		string input;
		getline(cin, input);
		testCases.push_back(input);
	}

	// Process the test cases
	for (int i = 0; i < numTestCases; ++i) {
		string s = testCases[i];
		int n = s.size();
		string t;

		// Create a regular bracket sequence t
		for (int j = 0; j < n; ++j) {
			if (s[j] == '(') {
				t += "()";
			} else {
				t += "(";
				t += ")";
			}
		}

		bool found = false;

		// Check if s occurs as a substring in t
		for (int j = 0; j < 2 * n - n + 1; ++j) {
			if (t.substr(j, n) == s) {
				found = true;
				break;
			}
		}

		if (found) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			cout << t << endl;
		}
	}




	return 0;
}*/




// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;


// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cerr<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
// #define dl cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// bool solve(vector<int>v) {
// 	int n = v.size();
// 	int oddCount = 0, evenCount = 0;
// 	int minOdd = INT_MAX, minEven = INT_MAX;
// 	debug(v)
// 	for (int i = 0; i < n; ++i) {
// 		if (v[i] % 2 == 0) {
// 			evenCount++;
// 			minEven = min(minEven, v[i]);

// 		} else {
// 			oddCount++;
// 			minOdd = min(minOdd, v[i]);
// 		}
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		// case 1 : single element
// 		if (n < 1)  return true;

// 		// case 2 : (e o) (e e) (o o)
// 		else if (n < 2) {
// 			if (v[i] % 2 == 0 && v[i + 1] % 2 != 0) {
// 				return false;
// 			}
// 			else if (v[i] % 2 == 0) {
// 				return true;
// 			}
// 			else {
// 				return true;
// 			}
// 		}
// 		else {
// 			_check
// 		}
// 	}
// 	return true;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	ll t;
// 	cin >> t;
// 	t = 1;
// 	while (t--) {
// 		ll n; cin >> n;
// 		vector<int> v(n);
// 		for (int i = 0; i < n; ++i)
// 		{
// 			cin >> v[i];
// 		}
// 		solve(v);

// 	}
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;


// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define nl cout<<endl;
// #define _nl cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// void solve() {
// 	ll n; cin >> n;
// 	vector<int> v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int half = 0;
// 	// check c then go for the checkin of a >   b?
// 	if (!c % 2 == 0) {
// 		half = c / 2;
// 		half++;
// 	}
// 	else {
// 		half = c / 2;
// 	}
// 	a += half; //a+half
// 	b += (c - half); //lef b , b+ left , c-left
// 	if (a > b) {
// 		cout << "First"; nl
// 	}




// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	ll t;
// 	cin >> t;
// 	while (t--) {

// 		solve();
// 	}


// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;


const ll mod  = 1e9 + 7;
const ll maxn = 1e5 + 1;
const ll inf  = 5e18 ;
const ll minf = -inf ;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mid(s,e) (s+(e-s)/2)
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
#define check cerr<<"~~~"<<endl;
#define endl "\n"
#define bl cerr<<endl;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int solve() {
	int n , h, x; cin >> n >> h >> x;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int  count = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i)
	{
		if (v[i] + h >= x) {
			return i + 1;
		}
	}
	return 0;

}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	cout << solve();

	return 0;
}