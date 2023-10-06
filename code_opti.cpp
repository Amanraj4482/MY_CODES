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
// #define yes__  cout<<"YES"<<endl;
// #define no__   cout<<"NO"<<endl;
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


// int solve(int base, int exp) {
// 	int res = 1;
// 	while (exp > 0) {
// 		if (exp & 1) {
// 			res *= base;
// 		}
// 		base *= base;
// 		exp >>= 1;
// 	}
// 	return res;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/
// 	int a , b; cin >> a >> b;
// 	int c = solve(a, b);
// 	int d = solve(b, a);
// 	cout << c + d << endl;
// 	return 0;
// }
/*=---------------------------------------------*/
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
// #define yes__  cout<<"YES"<<endl;
// #define no__   cout<<"NO"<<endl;
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
// void solve(string& s) {
// 	int n = s.size();
// 	vector<vector<bool>> dp(n, vector<bool>(n, false));
// 	int maxi = 1;

// 	// base cases
// 	for (int i = 0; i < n; i++) {
// 		dp[i][i] = true;
// 		if (i < n - 1 && s[i] == s[i + 1]) {
// 			dp[i][i + 1] = true;
// 			maxi = 2;
// 		}
// 	}
// 	// fill dp array
// 	for (int len = 3; len <= n; len++) {
// 		for (int i = 0; i <= n - len; i++) {
// 			int j = i + len - 1;
// 			if (s[i] == s[j] && dp[i + 1][j - 1]) {
// 				dp[i][j] = true;
// 				maxi = len;
// 			}
// 		}
// 	}
// 	cout << maxi << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/
// 	string s; cin >> s;
// 	solve(s);

// 	return 0;
// }
/*--------------------------------------------*/

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
// #define yes__  cout<<"YES"<<endl;
// #define no__   cout<<"NO"<<endl;
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

// void solve() {
// 	string s;
// 	cin >> s;
// 	if (s == "abc" || s == "bac" || s == "cba" || s == "acb") cout << "yes" << endl;
// 	else cout << "no" << endl;


// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }


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
// #define yes__  cout<<"YES"<<endl;
// #define no__   cout<<"NO"<<endl;
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

// void solve() {
// 	int n ; cin >> n;
// 	vi v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int sum = 1;
// 	debug(sum)
// 	int mini = INT_MAX;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		mini = min(v[i], mini);
// 	}
// 	bool f= false;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (mini == v[i]) {
// 			v[i] = mini + 1;
// 			f=true;
// 		}
// 		if(f==true){
// 			break;
// 		}

// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		sum *= v[i];
// 	}

// 	cout << sum << endl;
// 	check
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }

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
// #define yes__  cout<<"YES"<<endl;
// #define no__   cout<<"NO"<<endl;
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

// void solve() {
// 	vector<string>v(10);
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int cnt = 0;
// 	for (int i = 0; i < 10; ++i) {
// 		for (int j = 0; j < 10; ++j) {
// 			if (v[i][j] == 'X') {
// 				int ring = min({i, j, 9 - i, 9 - j});
// 				if (ring == 0) cnt += 1;
// 				else if (ring == 1)  cnt += 2;
// 				else if (ring == 2) cnt += 3;
// 				else if (ring == 3) cnt += 4;
// 				else {
// 					cnt += 5;
// 				}
// 			}
// 		}
// 	}
// 	cout << cnt << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/


// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();

// 	return 0;
// }

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

// void solve() {
// 	int n ; cin >> n;
// 	string s ; cin >> s;
// 	bool f = 0;
// 	string ans = "FBFFBFBFFBFFBFBFFBFFBFBFF";
// 	for (int i = 0; i < 8; ++i)
// 	{
// 		if (ans.substr(i, n) == s) {
// 			f = 1; break;
// 		}
// 	}
// 	if (f)cout << "Yes" << endl;
// 	else cout << "No" << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();
// 	return 0;
// }

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
/*----------------------------------------------------------------------*/

void solve() {
	char aa ; cin >> aa;
	string ans = "codeforces";
	bool  f = 0;
	for (int i = 0; i < 10; ++i)
		if (aa == ans[i]) f = 1;
	if (f)cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	/*---------------------------------------------*/

	int t ; cin >> t;
	// t=1;
	while (t--) solve();
	return 0;
}
