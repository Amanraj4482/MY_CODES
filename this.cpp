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
// 	int n;
// 	cin >> n;
// 	if (n <= 6 or n == 9) {
// 		cout << "NO" << endl;
// 		return;
// 	}
// 	if (n % 3 == 0) {
// 		cout << "YES" << endl;
// 		cout << 1 << " " << 4 << " " << n - 5 << endl;
// 		return;
// 	}
// 	else {
// 		cout << "YES" << endl;
// 		cout << 1 << " " << 2 << " " << n - 3 << endl;
// 		return;
// 	}
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
// 	vector<vector<char>> b(4, vector<char>(4));
// 	b[0][0] = '#'; b[0][1] = '#'; b[0][2] = '#'; b[0][3] = '.';
// 	b[1][0] = '#'; b[1][1] = '#'; b[1][2] = '#'; b[1][3] = '.';
// 	b[2][0] = '#'; b[2][1] = '#'; b[2][2] = '#'; b[2][3] = '.';
// 	b[3][0] = '.'; b[3][1] = '.'; b[3][2] = '.'; b[3][3] = '.';
// 	// vector<string> w(4);
// 	// w[5][5] = '.'; w[5][6] = '.'; w[5][7] = '.'; w[5][8] = '.';
// 	// w[6][5] = '.'; w[6][6] = '#'; w[6][7] = '#'; w[6][8] = '#';
// 	// w[7][5] = '.'; w[7][6] = '#'; w[7][7] = '#'; w[7][8] = '#';
// 	// w[8][5] = '.'; w[8][6] = '#'; w[8][7] = '#'; w[8][8] = '#';

// 	for (int i = 0; i < 4; ++i)
// 	{
// 		for (int j = 0; j < 4; ++j)
// 		{
// 			cout << b[i][j];
// 		}
// 		cout << endl;
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


// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
// combination sum 2  leet code 40

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
// // duplicat elementes are not picked during the recusrion
// // oth index at the 1st /2nd / 3rd index

// // after picking the left most first element as the new noe
// // i will move to the next index of it
// // where ever i was at the ith -> nth-1 for the every index of the ith
// void f(vector<int>&v , vector<vector<int>>&ans, int target, int i , vector<int> &s) {
// 	if (target == 0) {
// 		ans.pb(s);
// 		return;
// 	}
// 	for (int j = i; j < sz(v); ++j)
// 	{
// 		if (j > i and v[j] == v[j - 1]) continue;
// 		if (v[j] > target) break;

// 		s.pb(v[j]);
// 		f(v, ans, target - v[j], j + 1, s);
// 		s.pop_back();
// 	}
// }
// void solve() {
// 	int n, target; cin >> n >> target;
// 	vector<int>v(n), s;
// 	for (int i = 0 ; i < n; i++)cin >> v[i];
// 	sort(all(v));
// 	vector<vector<int>>ans;
// 	f(v, ans, target, 0, s);
// 	for (auto & l : ans) {
// 		for (auto k : l) cerr << k << " ";
// 		bl_
// 	}
// }
// // tc -> 2^n * k
// //sc -> k * n
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/
// 	solve();
// 	return 0;
// }



// // print all the combination of array
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
// // void solve2(vi &v, vi s = {}, int i = 0) {
// // 	if (i >= sz(v)) {
// // 		debug(s);
// // 		return;
// // 	}
// // 	s.pb(v[i]);
// // 	solve2(v, s, i + 1);
// // 	s.pop_back();
// // 	solve2(v, s, i + 1);
// // }
// // void solve() {
// // 	int n; cin >> n;
// // 	vi v(n);
// // 	for (int i = 0; i < n; i++) cin >> v[i];
// // 	solve2(v);
// // }

// // int main()
// // {
// // 	fastio()
// // #ifndef ONLINE_JUDGE
// // 	freopen("error.txt", "w", stderr);
// // #endif
// // 	/*---------------------------------------------*/

// // 	solve();


// // 	return 0;
// // }

// // reverse and array using the recursion



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
// // // void solve2print(vi & v, int i) {
// // // 	if (i == 0) {
// // // 		return;
// // // 	}
// // // 	i -= 1;
// // // 	cerr << v[i] << " ";
// // // 	solve2print(v, i);
// // // }
// // vi solve2(vi&v, int i, vi s) {
// // 	if (i == 0)
// // 		return s;
// // 	i -= 1;
// // 	s.pb(v[i]);
// // 	return solve2(v, i, s);
// // }
// // void solve() {
// // 	int n; cin >> n;
// // 	vi v(n);
// // 	for (int i = 0; i < n; i++) cin >> v[i];
// // 	// solve2print(v, n);
// // 	vi s;
// // 	s = solve2(v, n, s);
// // 	debug(s)
// // }

// // int main()
// // {
// // 	fastio()
// // #ifndef ONLINE_JUDGE
// // 	freopen("error.txt", "w", stderr);
// // #endif
// // 	/*---------------------------------------------*/

// // 	solve();


// // 	return 0;
// // }


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

// void print2dvec(vector<vi> & v) {
// 	for (int i = 0; i < sz(v); ++i)
// 	{
// 		for (int j = 0; j < sz(v); ++j)
// 		{
// 			cerr << v[i][j] << "";
// 		}
// 		bl_
// 	}
// }
// void solve() {
// 	int n; cin >> n;
// 	vector<vi>v(n, vector<int>(n));
// 	for (int i = 0; i < n; ++i) {
// 		string s ; cin >> s;
// 		for (int j = 0; j < n; ++j)
// 		{
// 			if (s[j] == '0') {
// 				v[i][j] = 0;
// 			}
// 			else v[i][j] = 1;
// 		}
// 	}
// 	vector<vector<int>> ans(n, vector<int>(n));
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{
// 			if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
// 				if (i == 0 and j < n - 1)ans[i][j + 1] = v[i][j];
// 				if (i == n - 1 and j > 0)ans[i][j - 1] = v[i][j];
// 				if (i < n - 1 and j == n - 1)ans[i + 1][j] = v[i][j];
// 				if (i > 0 and j == 0)ans[i - 1][j] = v[i][j];
// 			}
// 			else ans[i][j] = v[i][j];
// 		}
// 	}
// 	print2dvec(ans);
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	solve();

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
void print2dvec(vector<vi> & v) {
	for (int i = 0; i < sz(v); ++i)
	{
		for (int j = 0; j < sz(v); ++j)
		{
			cerr << v[i][j] << " ";
		}
		bl_
	}
}
void solve() {
	int n; cin >> n;
	vector<vi>v(n, vector<int>(n));
	vector<vi>b(n, vector<int>(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
		{
			cin >> v[i][j];
		}
	}
	vi ans;
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		if (i == 0 or j == 0 or i == n - 1 or j == n - 1) {
	// 			if (i == n - 1 and j > 0) ans[i][j - 1] = v[i][j];
	// 			if (i == 0 and j < n - 1) ans[i][j + 1] = v[i][j];
	// 			if (i < n - 1 and j == n - 1)ans[i + 1][j] = v[i][j];
	// 			if (i > 0 and j == 0) ans[i - 1][j] = v[i][j];
	// 		}
	// 		else ans[i][j] = v[i][j];
	// 	}
	// }
	/*----------SPIRAL PRINTING-------*/
	int up = 0, left = 0;
	int down = n - 1, right = n - 1;
	while (up <= down and left <= right) {
		/*---------------------------------*/
		// left to right
		for (int i = left; i <= right; i++)
			ans.pb(v[up][i]);
		up++;
		/*---------------------------------*/
		// up to down
		for (int i = up; i <= down; i++)
			ans.pb(v[i][right]);
		right--;
		/*---------------------------------*/
		// right to left
		if (up <= down) {
			for (int i = right; i >= left; i--)
				ans.pb(v[down][i]);
			down--;
		}
		// down to up
		if (left <= right) {
			for (int i = down; i >= up; i--)
				ans.pb(v[i][left]);
			left++;
		}
	}
	debug(ans)
	int k = 0;
	if (sz(ans) % 3 == 0) {
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				b[i][j] = ans[k++];
	}
	print2dvec(b);
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
