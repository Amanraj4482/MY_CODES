// // #include <bits/stdc++.h>
// // using namespace std;

// // typedef long long ll;
// // typedef long double lld;
// // typedef unsigned long long ull;
// // typedef vector<ll> vl;
// // typedef vector<int> vi;

// // const ll mod  = 1e9 + 7;
// // const ll maxn = 1e5 + 1;
// // const ll inf  = 5e18 ;
// // const ll minf = -inf ;

// // #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// // #define pb push_back
// // #define ff first
// // #define ss second
// // #define mid(s,e) (s+(e-s)/2)
// // #define check cerr<<"~~~"<<endl;
// // #define endl "\n"
// // #define bl cout<<endl;
// // #define bl_ cerr<<endl;
// // #define sz(x) ((int)(x).size())
// // #define all(x) (x).begin(), (x).end()
// // #define mine(vec) *min_element(all(vec))
// // #define maxe(vec) *max_element(all(vec))
// // #define sumarr(vec)  accumulate(all(vec),0)
// // int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}

// // #ifndef ONLINE_JUDGE
// // #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// // #else
// // #define debug(x)
// // #endif

// // void _print(ll t) {cerr << t;}
// // void _print(int t) {cerr << t;}
// // void _print(string t) {cerr << t;}
// // void _print(char t) {cerr << t;}
// // void _print(lld t) {cerr << t;}
// // void _print(double t) {cerr << t;}
// // void _print(ull t) {cerr << t;}

// // template <class T, class V> void _print(pair <T, V> p);
// // template <class T> void _print(vector <T> v);
// // template <class T> void _print(set <T> v);
// // template <class T, class V> void _print(map <T, V> v);
// // template <class T> void _print(multiset <T> v);
// // template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// // template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// // template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// // template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// // template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// // bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
// // ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
// // ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// // /*----------------------------------------------------------------------*/

// // void solve() {
// //     int n ; cin >> n;
// //     string s ; cin >> s;
// //     string b = "ABC";
// //     int f = -1;
// //     for (int i = 0; i < n - 2; ++i)
// //     {
// //         if (s.substr(i, 3).compare(b) == 0) {
// //             f = i;
// //             break;
// //         }
// //     }
// //     if (f != -1)
// //         cout << f + 1 << endl;
// //     else cout << -1 << endl;
// // }
// // int main()
// // {
// //     fastio()
// // #ifndef ONLINE_JUDGE
// //     freopen("error.txt", "w", stderr);
// // #endif
// //     /*---------------------------------------------*/
// //     solve();


// //     return 0;
// // }
// /*------------------------------------------------------------------------------------------------------------------*/
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

// // void solve() {
// //     int n , m; cin >> n >> m;
// //     string s, t; cin >> s >> t;
// //     if (s == t) cout << "0" << endl;
// //     else if ((t.substr(0, n).compare(s) == 0) && (t.substr(m - n, n).compare(s) != 0)) {
// //         cout << "1" << endl;
// //     }
// //     else if (t.substr(0, n).compare(s) != 0 && t.substr(m - n, n).compare(s) == 0) {
// //         cout << "2" << endl;
// //     }
// //     else cout << "3" << endl;
// // }
// void solve() {
//     int n ; cin >> n;
//     cout << n << endl;
// }
// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif
//     /*---------------------------------------------*/
//     int tt ; cin >> tt;
//     tt = 1;
//     while (tt--) solve();
//     return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
