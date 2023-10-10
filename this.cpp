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
// #define tr(container, it) \
//     for (auto it = container.begin(); it != container.end(); ++it)
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
// 	// tr(ans, it) {
// 	// 	for (auto val : *it) cout << val << " ";
// 	// 	cout << endl;
// 	// }
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
// // another method

// #include<bits/stdc++.h>
// using namespace std;
// typedef vector<int> vi;
// #define printarr(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
// #define bl_ cerr<<endl;
// #define debug(x) cerr<<#x<<" "<<x<<endl;
// #define sz(x) ((int)(x).size())
// #define pb push_back
// #define all(x) (x).begin(),(x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define tr(container, it) \
//     for (auto it = container.begin(); it != container.end(); ++it)
// #define present__(container, element)(container.find(element) != container.end())
// #define vpresent__(container, element)(find(all(container), element) != container.end())
// int main() {

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
	int n;
	cin >> n;
	if (n <= 6 or n == 9) {
		cout << "NO" << endl;
		return;
	}
	if (n % 3 == 0) {
		cout << "YES" << endl;
		cout << 1 << " " << 4 << " " << n - 5 << endl;
		return;
	}
	else {
		cout << "YES" << endl;
		cout << 1 << " " << 2 << " " << n - 3 << endl;
		return;
	}
}
int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	/*---------------------------------------------*/
	int t ; cin >> t;
	// t = 1;
	while (t--) solve();

	return 0;
}


/*------------------------------------------------------------------------------------------------------------------*/
// #include<bits/stdc++.h>
// using namespace std;
// typedef vector<int> vi;
// #define printarr(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
// #define bl_ cerr<<endl;
// #define debug(x) cerr<<#x<<" "<<x<<endl;
// #define sz(x) ((int)(x).size())
// #define pb push_back
// #define all(x) (x).begin(),(x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define tr(container, it) \
//     for (auto it = container.begin(); it != container.end(); ++it)
// // #define present__(container, element)(container.find(element) != container.end())
// // #define vpresent__(container, element)(find(all(container), element) != container.end())

// void solve() {
// 	int n ; cin >> n;
// 	vi v(n);
// 	unordered_map<int, int> mp;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		mp[v[i]]++;
// 	}
// 	tr(mp, it) {
// 		cout << it->first << " " << it->second << endl;
// 	}
// }
// int main() {
// 	solve();
// 	return 0;
// }



