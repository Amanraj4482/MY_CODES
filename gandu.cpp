// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define ff first
// #define ss second
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cout<<endl;
// #define bl_ cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}

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
// bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// /*----------------------------------------------------------------------*/
// bool ispalindrome( string s)
// {
// 	string s1 = s;
// 	reverse(s.begin(), s.end());
// 	if (s.compare(s1) == 0) return true;
// 	return false;

// }
// bool isAllSame( string str) {
// 	if (str.empty()) {
// 		return true;
// 	}
// 	char firstChar = str[0];
// 	for (char c : str) {
// 		if (c != firstChar) {
// 			return false;
// 		}
// 	}
// 	return true;
// }

// bool isAllDifferent( string str) {
// 	unordered_set<char> charSet;
// 	for (char c : str) {
// 		charSet.insert(c);
// 	}
// 	return charSet.size() == str.size();
// }

// void solve() {
// 	string s; cin >> s;
// 	int n = (int)s.length();
// 	int index  = 0;
// 	if (n == 1) {
// 		cout << "1" << endl;
// 	}
// 	else if (isAllDifferent(s)) {
// 		cout << "1" << endl;
// 	}
// 	else if (isAllSame(s)) {
// 		cout << n << endl;
// 	}
// 	else {
// 		for (int i = 0; i < n; ++i) {
// 			for (int j = i; j < n; ++j) {
// 				string c = s.substr(i, j - i + 1);
// 				if (ispalindrome(c)) {
// 					index = max(index, (int)c.length());
// 				}
// 			}
// 		}
// 		cout << index << endl;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	solve();
// 	// int t ; cin >> t;
// 	// t=1;
// 	// while (t--) solve();


// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<int> vi;

const ll mod  = 1e9 + 7;
const ll maxn = 1e5 + 1;
const ll inf  = 5e18 ;
const ll minf = -inf ;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ff first
#define ss second
#define mid(s,e) (s+(e-s)/2)
#define check cerr<<"~~~"<<endl;
#define endl "\n"
#define bl cout<<endl;
#define bl_ cerr<<endl;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define mine(vec) *min_element(all(vec))
#define maxe(vec) *max_element(all(vec))
#define sumarr(vec)  accumulate(all(vec),0)
int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}

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
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve() {
	string s; cin >> s;
	int code;
	if (s == "tourist") code = 3858;
	else if (s == "ksun48") code = 3679;
	else if (s == "Benq") code = 3658;
	else if (s == "Um_nik") code = 3648;
	else if (s == "apiad") code = 3638;
	else if (s == "Stonefeang") code = 3630;
	else if (s == "ecnerwala") code = 3613;
	else if (s == "mnbvmar") code = 3555;
	else if (s == "newbiedmy") code = 3516;
	else if (s == "semiexp") code = 3481;
	cout << code << endl;
}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	/*---------------------------------------------*/

	solve();


	return 0;
}
