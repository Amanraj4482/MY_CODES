// #include<bits/stdc++.h>
// using namespace std;
// #define check(x) cerr<<#x<<" "<<x<<endl;
// int f(int n ) {
// 	if (n == 0) return 1;
// 	return f(n - 1) * n;
// }
// int main() {
// 	check(f(5));
// 	return 0;
// }
// {no of fun calls * complexity of fun} <---- time complexity
/*------------------------------------------------------------------------------------------------------------------*/

// sum of array
// sum (n,a)= a[n]+sum(n-1,a)
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
// int f(vi v, int n) {
// 	if (n == 0) return 0;
// 	return v[n - 1] + f(v, n - 1);
// }
// // digit sum
// int ott(int n ) {
// 	// int sum = 0;
// 	// while (n>0) {
// 	// 	int digit = n % 10;
// 	// 	sum += digit;
// 	// 	n /= 10;
// 	// }
// 	if (n == 0) return 0;
// 	return ott(n/10)+n%10;
// }
// int main() {
// 	// int n ; cin >> n;
// 	// vi v(n);
// 	// for (int i = 0; i < n; i++)cin >> v[i];
// 	// cerr << f(v, 3) << endl; // upto n index sum of array
// 	int n ; cin >> n;
// 	cerr << ott(n) << endl;
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

int solve(int n ) {
	if (n <= 2 ) return 1;
	int a = 0, b = 1, fib = 0;
	for (int i = 2; i <= n; ++i)
	{
		fib = (a + b) % 1000000007;
		a = b;
		b = fib;
	}
	return fib;
}
int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	/*---------------------------------------------*/
	int n ; cin >> n;
	cout << solve(n);

	return 0;
}
int n ; cin >> n;
string s;
for (int i = 0; i < n; ++i)
{
	for (int j = 1; j <= 9; ++j)
	{
		int  c = n / j;
		debug(c)
		// s.pb(c + '0');
		// break;
	}
	// else if (j * c == n) {
	// debug(c)
	// }
	// else s.pb('-');
}
// }
// debug(s)
}




for (int i = 0; i < n; ++i)
{
	if (i == 1) break;
	for (int j = 0; j <= 6; ++j)
	{
		// if (j == 0) {
		// 	s.pb(1 + '0');
		// }
		// if (j == 1) {
		// 	s.pb('-');
		// }
		int  c = n / j;
		if (j * c != n) {
			s.pb('-');
		}
		else if (j * c == n) {
			debug(c)
			s.pb(c + '0');
		}
		bl_
	}
}
debug(s)