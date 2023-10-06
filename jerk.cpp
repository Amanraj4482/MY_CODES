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
// int n , b, c;
// cin >> n;
// vector<int> a;
// for (int t; cin >> t;) { a.push_back(t); }
// b = *max_element(a.begin(), a.end());
// c = max_element(a.begin(), a.end()) - a.begin();

// // debug(a)
// // debug(b)
// // debug(c)
// // debug(a[0])
// for (int i = 0; i < n; ++i)
// {
// 	if (a[i] == b) {
// 		c = 1;
// 	}
// 	else {
// 		c = max_element(a.begin(), a.end()) - a.begin();
// 	}
// }
// int ans = (b + c) - a[0];
// cout << ans;

// 	// debug(ans)
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

// int n, m;
// cin >> m >> n;
// vector<vector<int>> v(n, vector<int>(2));
// for (int i = 0; i < n; i++) {
// 	for (int j = 0; j < 2; j++) {
// 		cin >> v[i][j];
// 	}
// }
// for (int i = 0; i < n; i++) {
// 	for (int j = 0; j < 2; j++) {
// 		if (v[i][j + 1] == v[i + 1][j]) {
// 			cout << "1";
// 		}
// 	}
// 	{
// 		cout << "0" << endl;
// 		return -1;
// 	}
// }
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
// bool ispalindrome(string s)
// {
// 	string s2 = s;
// 	reverse(s.begin(), s.end());
// 	if (s == s2)
// 	{
// 		return true;
// 	}
// 	return false;
// }
// void solve() {

// 	ll n; cin >> n;
// 	vector<int> v(n); ll count = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		if (v[i] == (i + 1))
// 		{
// 			count++;
// 		}
// 	}
// 	if (count % 2 == 0)
// 	{
// 		cout << count / 2; en
// 	} else
// 	{
// 		cout << (count / 2) + 1; en
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
	ll n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	ll t;
	cin >> t;
	while (t--) {
		solve();
	}


	return 0;
}