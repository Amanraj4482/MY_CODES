// //


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

// void solve(ll n, ll m) {
//     ll a = 0;
//     ll b = 0;
//     for (ll i = 0; i <= n; ++i)
//     {
//         if ((i * i) > 0 && i * i <= n&&m-pow(b,2)>0) {
//             a++;
//         }
//     }
//     for (ll i = 0; i <= m; ++i)
//     {
//         if ((i * i) > 0 && i * i <= m&&n-pow(a,2)>0) {
//             b++;
//         }
//     }
//     a=sqrt(n-b);
//     ll p1 = n - abs(pow(a, 2));
//     ll p2 = m - abs(pow(b, 2));
//     debug(a)
//     debug(b)
//     debug(p1)
//     debug(p2)
//     ll count=0;
//     if(p1==b&&p2==a){
//         if(p1==a&&p2==b){count++;}
//         count++;
//     }
//     if(n==1&&m==1){
//         count++;}
//         cout<<count<<endl;
//     }

// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif

//     ll n, m; cin >> n >> m;
//     solve(n, m);

//     return 0;
// }
// 20
// 9 3
// 14 28
// 4 20
// 18 198
// 22 326
// 26 104
// 14 10
// 8 20
// 2 8
// 20 11
// 57 447
// 1 1
// 66 296
// 75 683
// 227 97
// 247 499
// 266 116
// 286 916
// 307 341
// 451 121
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

// vector<int>partialSort(vector<int>v1) {
// 	vector<int>v2;
// 	copy(v1.begin(), v1.end(), back_inserter(v2));
// 	sort(v2.begin(), v2.end());
// 	for (auto c : v2) {
// 		cout << c << endl;
// 	}
// 	return v1;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	vector<int>v;
// 	loop(i, 0, 3) {
// 		//for(int i =0; i<3 ;i++){
// 		int t; cin >> t;
// 		v.pb(t);
// 	}
// 	debug(v)
// 	partialSort(v);
// 	cout << endl;
// 	for (auto c : v) {
// 		cout << c << " " << endl;
// 	}
// 	cout << endl;
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

// string removeOccurances(string v, string part) {
// 	int ans = v.find(part);
// 	while (ans != string::npos) {
// 		debug(ans)
// 		debug(v)
// 		v.erase(ans, part.length());
// 		ans = v.find(part);
// 	}
// 	return v;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	string v, part;
// 	cin >> v >> part;
// 	cerr << removeOccurances(v, part);
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

// 	int a ; int b; cin >> a


// 	                   return 0;
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

// int findMinDifference(vector<string> &timePoints) {
// 	//step 1 - convert the time string into minutes integer value
// 	vector<int> minutes;
// 	for (int i = 0; i < timePoints.size(); i++) {
// 		string curr = timePoints[i];
// 		int hours = stoi(curr.substr(0, 2)); //string to integers
// 		int min = stoi(curr.substr(3, 2));
// 		int totalMinutes = hours * 60 + min;
// 		minutes.push_back(totalMinutes);
// 	}
// 	debug(minutes)
// 	//step 2 - sorting
// 	sort(minutes.begin(), minutes.end());
// 	//step 3- difference and calculate min diff
// 	int mini = INT_MAX;
// 	int n = minutes.size();
// 	for (int i = 0; i < n - 1; i++) {
// 		int diff = minutes [i + 1] - minutes [i];
// 		mini = min(mini, diff);
// 	}
// 	//something is missing
// 	int lastDiff1 = (minutes[0] + 1440) - minutes[n - 1];
// 	int lastDiff2 = minutes[n - 1] - minutes[0];
// 	int lastDiff = min(lastDiff1, lastDiff2);
// 	mini = min(mini, lastDiff);
// 	return mini;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	vector<string> timePoints = {"00:00", "23:59", "00:00"};
// 	cerr << findMinDifference(timePoints);

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

// ll sum(ll n) {
// 	if (n % 2 == 0) { //even case
// 		ll ans = n / 2;
// 		ans = ans * (n + 1);
// 		return ans;
// 	}
// 	else { //odd
// 		ll ans = (n + 1) / 2;
// 		ans = ans * n;
// 		return ans;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	int t; cin >> t;
// 	while (t--) {
// 		int a, b; cin >> a >> b;
// 		ll l = min(a, b);
// 		ll r = max(a, b);
// 		ll sum_r = sum(r);
// 		ll sum_l = sum(l);
// 		sum_r += l;
// 		cout << sum_r - sum_l;
// 		en
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

// string reverseString(string s) {
// 	int l = 0, h = s.size() - 1;
// 	debug(h)
// 	debug(l)
// 	while (l < h) {
// 		if (isalpha(s[l]) && isalpha(s[h])) {
// 			swap(s[l], s[h]);
// 			l++, h--;
// 		}
// 		else if (!isalpha(s[l])) {
// 			l++;
// 		}
// 		else {
// 			h--; x
// 		}
// 	}
// 	return s;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	string s;
// 	cin >> s;
// 	cerr << reverseString(s);
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
// string longestCommonPrefix(vector<string> strs) {
// 	string ans;
// 	int i = 0;
// 	while (true) {
// 		char curr_ch = 0;
// 		for (auto a : strs) {
// 			if (i >= a.size()) {
// 				curr_ch = 0;
// 				break;
// 			}
// 			//just started
// 			if (curr_ch == 0) {
// 				curr_ch = a[i];
// 			}
// 			else if (a[i] != curr_ch) {
// 				curr_ch = 0;
// 				break;
// 			}
// 		}
// 		if (curr_ch == 0) {
// 			break;
// 		}
// 		ans.push_back(curr_ch);
// 		i++;
// 	}
// 	return ans;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif


// 	vector<string> s = {"flower", "flow", "flight"};
// 	cout << longestCommonPrefix(s) << endl;

// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// string longestCommonPrefix(vector<string> &s)
// {   string ans;
//     int i = 0;
//     while (true)
//     {
//         char curr_ch = 0;
//         for (auto a : s)
//         {
//             if(i>=a.size()){ i should be greater than any size of string size
//                 //out of bound check

//                 curr_ch=0;
//                 break;
//             }
//             // just started
//             if (curr_ch == 0)
//             { // uninitilised
//                 curr_ch = a[i];
//             }
//             else if (a[i] != curr_ch)
//             { // comparing the first character of first string to all the first character of all string
//                 curr_ch = 0;
//                 break;
//             }
//         }
//         if (curr_ch == 0)
//         {
//             break;
//         }
//         ans.push_back(curr_ch);
//         i++;
//     }
//     return ans;
// }
// int main()
// {
//   vector<string> s={"flower", "flow", "flight"};
//     cout<<longestCommonPrefix(s)<<endl;
//     return 0;
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

// string longestCommonPrefix(vector<string>& v) {
// 	string ans = "";
// 	sort(v.begin(), v.end());//flight flow flower
// 	int n = v.size();//3
// 	string firststr = v[0], laststr = v[n - 1];//first = flight ans last = flower
// 	int s = min(firststr.size(), laststr.size());//size of flight will be the 6
// 	for (int i = 0; i < s; i++) {
// 		if (firststr[i] != laststr[i]) {
// 			return ans;
// 		}
// 		ans = ans + firststr[i];
// 	}
// 	return ans;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	vector<string> s = {"flower", "flow", "flight"};
// 	cout << longestCommonPrefix(s) << endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
// 	long long e;

// 	cin >> e;
// 	for (long long i = e; i > 0; i--) {
// 		long long a, b, c, d;
// 		cin >> a >> b;

// 		c = min(a, b);
// 		d = max(a, b);

// 		// long long f = a * (a + 1) / 2;
// 		long long f = c * (c / 2 + 1 / 2);

// 		long long  g = d * (d / 2 + 1 / 2);
// 		g = g + a;

// 		cout << g - f;
// 		cout << endl;
// 	}
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

// ll sum(ll n) {
// 	if (n % 2 == 0) { //even case
// 		ll ans = n / 2;
// 		ans = ans * (n + 1);
// 		return ans;
// 	}
// 	else { //odd
// 		ll ans = (n + 1) / 2;
// 		ans = ans * n;
// 		return ans;
// 	}
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	long long e;

// 	cin >> e;
// 	for (long long i = e; i > 0; i--) {
// 		long long a, b, c, d;
// 		cin >> a >> b;
// 		c = min(a, b);
// 		d = max(a, b);
// 		debug(c)
// 		debug(d)
// 		long long f = c * (c + 1) / 2;
// 		long long g = d * (d + 1) / 2;
// 		g = g + c;
// 		cout << g - f;
// 		debug(f)
// 		debug(g)
// 		cout << endl;
// 	}
// 	// int t; cin >> t;
// 	// while (t--) {
// 	// 	int a, b; cin >> a >> b;
// 	// 	ll l = min(a, b);
// 	// 	ll r = max(a, b);
// 	// 	ll sum_r = sum(r);
// 	// 	ll sum_l = sum(l);
// 	// 	debug(sum_l)
// 	// 	sum_r += l;
// 	// 	cout << sum_r - sum_l;
// 	// 	en
// 	// }
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

// 	//prefix sum
// 	int n;
// 	cin >> n;
// 	int a[n];
// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}
// 	int p[n]; p[0] = a[0];
// 	loop(i, 1, n) {
// 		p[i] = p[i - 1] + a[i];
// 	}
// 	for (auto c : p) {//just type the name of the array
// 		cout << c << " ";

// 	}
// 	en
// //keep the original array save for the future
// 	//that will be the good practise


// 	int q; cin >> q;
// 	while (q--) {
// 		int l, r;
// 		cin >> l >> r;
// 		if (l != 0) {
// 			cout << p[r] - p[l - 1] << endl;
// 		}
// 		else {
// 			cout << p[r] << endl;
// 		}
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

// // int x, y = 0;
// // int n; cin >> n;
// // for (int i = 0; i < n; i++) {
// // 	cin >> x, y += x;
// // }


// 	//MAPPING IN C++
// 	// map<char, int> mp;//char-> key & int -> value
// 	//mp['c'] = 9;
// 	//map is similar to an array, except the index can be anything
// 	//cerr << mp['c'];
// 	//if we don't give the values it will automatically assumes to the zero
// 	//count the no of occurances in freqTable
// 	// string  s; cin >> s;
// 	// for (auto c : s) {
// 	// 	mp[c]++;
// 	// 	//it directly iterate through the values of that indices

// 	// }
// 	// map<char, int>mp;
// 	// int maxi = 0;
// 	// string s; cin >> s;
// 	// for (auto c : s) {
// 	// 	//in a map we can only sort according to the key not the value
// 	// 	maxi = max(maxi, ++mp[c]);//its first increasing the freq of that value and then taking the string (value)
// 	// 	//first it increase the value then it outputs the value
// 	// }
// 	// for (auto c : s) {
// 	// 	if (mp[c] == maxi)
// 	// 		cout << c;
// 	// }

// 	//the comparator of a sort function takes two values , and decides which one should come first .


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


// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int a, b;
// 	string q, s;
// 	ll c;
// 	cin >> a >> s >> b >> q >> c;
// 	debug(s)
// 	debug(q)
// 	// if (a + b == c || a - b == c || a * b == c ) {
// 	// 	cout << "Yes";
// 	// }
// 	// else if (a + b != c) {
// 	// 	cerr << "1";
// 	// 	cout << a + b << endl;
// 	// } else if (a - b != c) {
// 	// 	cerr << "2";
// 	// 	cout << a - b << endl;
// 	// } else if (a * b != c) {
// 	// 	cerr << "3";
// 	// 	cout << a*b << endl;
// 	// }
// 	// else {cout << "No";}
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

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	// int n; cin >> n;
// 	// vector<int>s;
// 	// int evenSum = 0;

// 	// while (n > 0)
// 	// {
// 	// 	s.push_back(n % 10);
// 	// 	n /= 10;
// 	// }
// 	// for (int i = 0; i < s.size(); i++) {
// 	// 	if (s[i] % 2 == 0) {
// 	// 		evenSum += s[i];
// 	// 	}
// 	// }
// 	// cerr << evenSum;

// 	int n; cin >> n;
// 	string s = to_string(n);
// 	int evenSum = 0;
// 	for (int i = 0; i < s.size(); i++) {
// 		if (s[i] % 2 == 0) {
// 			debug(s[i])
// 			evenSum += (s[i] - '0');
// 			// evenSum += ((int)s[i] - 48);
// 			// converthing string to int value
// 		}
// 	}
// 	cout << evenSum << endl;
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

// long maximumSumSubarray(int K, vector<int> &Arr , int N) {
// 	long sum = 0;
// 	for (long i = N ; i >= 0; i--)
// 	{
// 		if (K >= 0) {
// 			sum += Arr[i];
// 			K--;
// 			if (K < 0) {
// 				return sum;
// 			}
// 		}
// 	}
// 	return 0;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	int t; cin >> t;
// 	while (t--) {
// 		int N, K; cin >> N >> K;
// 		vector<int>Arr;
// 		for (int i = 0; i < N; i++) {
// 			int x; cin >> x;
// 			Arr.pb(x);
// 		}
// 		cout << maximumSumSubarray(K, Arr, N);
// 		en
// 	}
// 	return 0;
// }

// by using the sliding windows method to sovle the problem

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

// int maximumSumSubarray(int K, vector<int>Arr, int N ) {
// 	int start = N;
// 	int end = start - 1;
// 	int sum = 0;
// 	int i = 0;
// 	while (K >= 0) {
// 		if (end <= 0 && start >= 0) {
// 			sum += Arr[i];
// 		}
// 	}
// 	return sum;

// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int t; cin >> t;
// 	while (t--) {
// 		int N, K; cin >> N >> K;
// 		vector<int>Arr;
// 		for (int i = 0; i < N; i++) {
// 			int x; cin >> x;
// 			Arr.pb(x);
// 		}
// 		cout << maximumSumSubarray(K, Arr, N);
// 		en
// 	}
// 	return 0;
// }

//prefix sum
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

// 	//prefix sum
// 	int N, K;
// 	cin >> N >> K;
// 	int a[N];
// 	for (int i = 0; i < N; i++) {
// 		cin >> a[i];
// 	}
// 	int p[N]; p[0] = a[0];
// 	// loop(i, 1, K) {
// 	// 	p[i] = p[i - 1] + a[i];
// 	// }
// 	// for (auto c : p) {//just type the name of the array
// 	// 	cout << c << " ";

// 	// }
// 	int start = N - 1;
// 	while (K == 0 ) {
// 		debug(p[start])
// 		p[start] = a[start] + p[start - 1];
// 		K--;
// 	}
// 	for (auto c : p) {//just type the name of the array
// 		cout << c << " ";

// 	}
// 	return 0;
// }

//custom caparator for the binary searching
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

// int search(vector<int>a, int target) {
// 	int left = 0, right = a.size() - 1;
// 	while (left < right) {
// 		int mid = (left + right + 1) / 2;
// 		if (a[mid] <= target) left = mid;
// 		if (a[mid] > target) right = mid - 1;
// 	} return (a[left] == a[right]) ? left : -1;
// }//using the ceild to find the last occurance of the target

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	//find the last index of target
// 	vector<int>a;
// 	int target = 3;
// 	// for (int i = 0; i < a.size(); i++) {
// 	int temp;
// 	while (cin >> temp) {
// 		a.pb(temp);
// 	}
// 	cerr << search(a, target);
// 	return 0;
// }


//difference between the push back and emplace back
//emplace back is slightly faster than push_back
// but using emplace back then there will be the memory issue
//
//SEIVE OF ERATHONES THEOREM
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

// int countPrimes(int n) {
// 	if (n == 0) return 0;
// 	vector<bool>prime(n, true); //marked all true already
// 	prime[0] = prime[1] = false;
// 	int c = 0;
// 	for (int i = 2; i < n; i++) {
// 		if (prime[i]) {
// 			c++;
// 			int j = 2 * i;
// 			while (j < n) {
// 				//marking false to all the multiples of 2 and all prime numbers of the members
// 				prime[j] = false;
// 				j += i;
// 			}
// 		}
// 	}
// 	return c;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int n;
// 	cin >> n;
// 	cerr << countPrimes(n);


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

// int solve(int a, int b, int c, int d) {
// 	ll ans = a * b * c * d;
// 	debug(ans)
// 	ll x = ans % 100;

// 	return ans % 100;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int a, b, c, d; cin >> a >> b >> c >> d;
// 	cout << solve(a, b, c, d);
// 	cout << "dfsd";
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

// vector<int> multiply(vector<string>num) {
// 	// Convert the input numbers from strings to vectors of integers
// 	int s = num.size() * num.size();
// 	vector<int> result(s, 0);
// 	int n = 4;
// 	vector<int> v(n);
// 	for (int i = 0; i < n; i++) {
// 		v.push_back(stoi(num[i]));
// 	}
// 	reverse(v.begin(), v.end());
// 	debug(v)
// 	// Multiply each digit in vec2 with vec1 and add the result to the appropriate position in the result vector
// 	for (int i = 0; i < n; i++) {
// 		int carry = 0;
// 		for (int j = 0; j < n; j++) {
// 			int product = v[j] * v[i] + carry + result[i + j];
// 			carry = product / 10;
// 			result[i + j] = product % 10;
// 		}
// 		debug(result)
// 		result[i + v.size()] = carry;
// 	}

// 	// Remove leading zeros from the result vector and convert it back to a string
// 	while (result.size() > 1 && result.back() == 0) {
// 		result.pop_back();
// 	}
// 	// string str(result.size(), '0');
// 	// for (int i = 0; i < result.size(); i++) {
// 	// 	str[result.size() - i - 1] = result[i] + '0';
// 	// }
// 	return result;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	vector<string>v;
// 	int a;
// 	while (cin >> a) {
// 		v.push_back(to_string(a));
// 	}
// 	for (auto c : multiply(v)) {
// 		cerr << c << " ";
// 	}
// 	return 0;
// }

//SIEVE OF ERATHONES
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

// int solve(int n) {
// 	if (n <= 1) return 0;
// 	//initilize all with 1
// 	vector<bool> prime(n, true);
// 	prime[0] = prime[1] = false;
// 	int c = 0;
// 	for (int i = 2; i < n; i++) {
// 		if (prime[i]) {
// 			c++;
// 			int j = 2 * i;//checking all even numbers
// 			while (j < n) {
// 				debug(j)
// 				prime[j] = false;
// 				j += i;
// 				cerr << "j+=i-";
// 				debug(j)
// 				dl
// 			}
// 		}
// 		if (prime[i] == true) {
// 			cerr << i << endl;
// 		}
// 	}
// 	return c;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int n;
// 	cin >> n;
// 	cerr << solve(n);
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

// bool isPrime(int n) {
// 	if (n == 1 || n == 0) return false;
// 	for (int i = 2; i < n; i++) {
// 		debug(n) debug(i)
// 		if (n % i == 0) {
// 			cerr << "np" << endl;
// 			return false;
// 		}
// 		cerr << "prime marked" << endl;
// 	}
// 	return true;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int n = 100;
// 	for (int i = 0; i <= n; i++) {
// 		cerr << "passed" << endl;
// 		debug(i)
// 		if (isPrime(i)) {
// 		}
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

// 	int a, b;
// 	char c;
// 	cin >> a >> c >> b;
// 	int maxi = max(a, b);
// 	debug(maxi)
// 	if (maxi == a && a > b && c == '>') {
// 		cout << "Right";
// 	}
// 	else if (maxi == b && a < b && c == '<') {
// 		cout << "Right";
// 	}
// 	else if (maxi == a && maxi == b && c == '=') {
// 		cout << "Right";
// 	}
// 	else {
// 		cout << "Wrong";
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

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	float n;
// 	cin >> n;
// 	int intpart = (int)n;
// 	float decpart = n - intpart;
// 	if (decpart == 0) {
// 		cout << "int " << intpart << endl;
// 	}
// 	else {
// 		cout << "float" << " " << intpart << " " << setprecision(3) << decpart << endl;
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

// 	ll a, b, c, d; cin >> a >> b >> c >> d;
// 	ll e = pow(a, b);
// 	ll f = pow(c, d);
// 	if (e > f) {
// 		cout << "YES";
// 	}
// 	else {
// 		cout << "NO";
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main() {
// 	int a[5];
// 	int b[5];
// 	for (int i = 0; i <= 4; i++) {
// 		scanf("%d", &a[i]);
// 	}
// 	for (int i = 0; i <= 4; i++) {
// 		scanf("%d", &b[i]);
// 	}
// 	int c[5];
// 	for (int i = 0; i <= 4; i++) {
// 		c[i] = a[i] + b[i];
// 		printf("%d\n", c[i]);
// 	}
// 	return 0;
// }


// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void rotate(int a[], int n, int k) {
// 	for (int i = 0; i < n; i++) {
// 		if (i < k) {
// 			printf("%d\n", a[n + i - k]);
// 		}
// 		else {
// 			printf("%d\n", (a[i - k]) );
// 		}
// 	}
// }
// int main() {
// 	int n, k;
// 	scanf("%d %d", &n, &k);
// 	int a[n];
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &a[i]);
// 	}
// 	rotate(a, n, k);
// 	return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main() {
// 	int n, k;
// 	scanf("%d %d", &n, &k);
// 	int a[n];
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &a[i]);
// 	}
// 	int temp[k];
// 	for (int i = 0; i < k ; i++)
// 	{
// 		temp[i] = a[n - k + i];
// 	}

// 	for (int i = n - 1; i >= k; i--) {
// 		a[i] = a[i - k];
// 	}
// 	for (int i = 0; i < k; i++) {
// 		a[i] = temp[i];

// 	}

// 	for (int i = 0; i < n; i++) {
// 		printf("%d\n", a[i] );
// 	}

// 	return 0;
// }


// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main() {
// 	int n;
// 	scanf("%d", &n);
// 	int a[n], even[n], odd[n], c1 = 0, c2 = 0;
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &a[i]);
// 	}
// 	for (int i = 0; i < n; i++) {
// 		if (a[i] % 2 == 0) {
// 			even[c1] = a[i];
// 			c1++;
// 		}
// 		else {
// 			odd[c2] = a[i];
// 			c2++;
// 		}
// 	}
// 	for (int i = 0; i < c1 ; i++) {
// 		printf("%d\n", even[i]);
// 	}
// 	printf("----\n");
// 	for (int i = 0; i < c2; i++) {
// 		printf("%d\n", odd[i]);
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

// int* solve() {
// 	int a = 5;
// 	int* ans = &a;
// 	return ans;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	cout << solve() << endl;
// 	return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main() {
// 	int row, col;
// 	scanf("%d %d", &row, &col);
// 	int arr[row][col];
// 	for (int i = 0; i < row; i++) {
// 		for (int j = 0; j < col; j++) {
// 			scanf("%d", &arr[i][j]);
// 		}
// 	}
// 	for (int i = 0; i < col; i++) {
// 		for (int j = 0; j < row; j++) {
// 			printf("%d ", arr[j][i]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main() {
// 	int a[4];
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &a[i]);
// 	}
// 	for (int i = 0; i < n; i++) {
// 		printf("%d", a[i]);
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int fact(int a[], int n) {
// 	// int ans = 1;
// 	// if (n == 0 || n == 1) return 0;
// 	// else {
// 	// 	for (int i = 2; i <= n; i++) {
// 	// 		ans *= i;
// 	// 	}
// 	// }
// 	// return ans;
// 	int f[n] = {1, 1, 1, 1, 1};
// 	for (int i = 1; i < n; i++) {


// 	}
// }
// int main() {
// 	int n = 4;
// 	int a[n];
// 	printf("%d", fact(a, n));
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void print(int a[], int n, int& ans) {
// 	//base case
// 	if (n == 0) return ; //traversing the whole array until its end
// 	//compare the first element to the next to it
// 	if (a[0] < ans) {
// 		ans = a[0];
// 	}
// 	print(++a, --n, ans);

// }
// int main() {
// 	//finding the max from the array
// 	int a[5] = {23, 34, 22, 78, 1};
// 	int n = 5, ans = INT_MAX;
// 	print(a, n, ans);
// 	cout << ans << endl;
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void fun(int i, int n) {
// 	if (i > n) {
// 		return;
// 	}
// 	fun(i + 1, n);
// 	cout << i << " ";
// }
// int main() {
// 	int i = 1;
// 	fun(i, 10);
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void fun(int i, int sum) {
// 	if (i < 1) {
// 		cout << (sum);
// 		return;
// 	}
// 	fun(i - 1, sum + i);
// }
// int main() {
// 	int i = 10;
// 	fun(i, 0);
// 	return 0;
// }

//swapping by the recursion
// #include<bits/stdc++.h>
// using namespace std;
// void solve(int l, int r) {
// 	if (l >= r) return;
// 	swap(a[l], a[r]);
// 	solve(l + 1, r - 1);
// }
// int main() {
// 	int arr[] = {1, 3, 2, 5, 4};
// 	int n = sizeof(arr) / sizeof(int);
// 	solve(0, n - 1);
// 	return 0;
// }
//SWAPPING OF TWO INT BY RECURSION METHOD
// #include<bits/stdc++.h>
// using namespace std;
// void solve(int i, int a[], int n) {
// 	if (i >= n / 2)return;
// 	swap(a[i], a[n - i - 1]);
// 	solve(i + 1, a, n);
// }
// int main() {
// 	int arr[] = {2, 3, 5, 1, 6};
// 	solve(0, arr, 5);
// 	for (int i = 0; i < 5; i++) cout << arr[i] << " ";
// 	return 0;
// }

//MULTIPLE RECURISON CALLS
// #include<bits/stdc++.h>
// using namespace std;
// int fibo(int n) {
// 	if (n <= 1) return n;
// 	return fibo(n - 1) + (n - 2);
// }
// int main() {
// 	int n = 5;
// 	cout << fibo(n);
// 	return 0;
// }


//FINDING THE SUBSTRING BY RUCURSION
//INCLUDE AND EXCLUDE PATTERNS
// #include<bits/stdc++.h>
// using namespace std;
// void find(string a, string b, int i) {
// 	if (i >= a.length()) {
// 		cout << b << endl;
// 		return ;
// 	}
// 	//exclude
// 	find(a, b, i + 1);
// 	//include
// 	//below line is responsible for concatenation of b string ans ith charct
// 	//character of a string
// 	b = b + a[i]; //b+=a[i];
// 	// b.push_back(a[i]);
// 	find(a, b, i + 1);
// }
// int main() {
// 	string a = "abc";
// 	string b = "";
// 	int i = 0;
// 	find(a, b, i);
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&arr, int target) {
// //base case if target ends with the substraction
// 	if (target == 0) return 0;//for target becomes 0
// //if target becomes -1
// 	if (target < 0) {//mini should not be upadated
// 		return INT_MAX;
// 	}
// 	int mini = INT_MAX;
// 	//for every updated element there is a call of every elememt in the array
// 	for (int i = 0; i < arr.size(); i++) {
// 		int ans = solve(arr, target - arr[i]);//this can be the minimum ans so updating the mini
// 		if (ans != INT_MAX) {
// 			mini = min(mini, ans + 1);
// 		}
// 	}
// 	return mini;
// }
// int main() {
// 	vector<int>arr{1, 2};
// 	int target = 5;
// 	int ans = solve(arr, target);
// 	cout << "answer is->" << ans << endl;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&arr, int target) {
// //base case if target ends with the substraction
// 	if (target == 0) return 0;//for target becomes 0
// //if target becomes -1
// 	if (target < 0) {//mini should not be upadated
// 		return INT_MAX;
// 	}
// 	int mini = INT_MAX;
// 	//for every updated element there is a call of every elememt in the array
// 	for (int i = 0; i < arr.size(); i++) {
// 		int ans = solve(arr, target - arr[i]);//this can be the minimum ans so updating the mini
// 		if (ans != INT_MAX) {//this is valid value
// 			mini = min(mini, ans + 1);
// 			cout << arr[i]<< endl;
// 		}
// 	}
// 	return mini;
// }
// int main() {
// 	vector<int>arr{2, 3};
// 	int target = 5;
// 	int ans = solve(arr, target);
// 	cout << "answer is->" << ans << endl;
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

// int solve(vector<int>&arr, int target) {
// //base case if target ends with the substraction
// 	if (target == 0) return 0;//for target becomes 0
// //if target becomes -1
// 	if (target < 0) {//mini should not be upadated
// 		return INT_MAX;
// 	}
// 	int mini = INT_MAX;
// 	//for every updated element there is a call of every elememt in the array
// 	for (int i = 0; i < arr.size(); i++) {
// 		int ans = solve(arr, target - arr[i]);//this can be the minimum ans so updating the mini
// 		if (ans != INT_MAX) {//this is valid value
// 			mini = min(mini, ans + 1);
// 			if (mini > 0) {
// 				cout << arr[i] << endl;
// 			}
// 		}
// 	}
// 	return mini;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	vector<int>arr {2, 4, 6, 8};
// 	int target = 10;
// 	int ans = solve(arr, target);
// 	cout << "answer is->" << ans << endl;
// 	return 0;
// }
//code to print the factorial of array elements

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void arrayFact(int a[], int n) {
// 	int fact[5] = {1, 1, 1, 1, 1};
// 	for (int i = 1; i <= n; i++) {
// 		for (int j = 1; j <= a[i]; j++) {
// 			fact[i] *= j;
// 		}
// 	}
// 	if (fact[0] == 1) {
// 		fact[0] = 0;
// 	}
// 	//now printing
// 	for (int i = 0; i < n; i++) {
// 		printf("fact of %d is : %d\n", a[i], fact[i]);
// 	}
// }
// int main() {
// 	int n;
// 	scanf("%d", & n);
// 	int a[n];
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", & a[i]);
// 	}
// 	arrayFact(a, n);
// }


// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void solve(int row, int col) {
// 	for (int i = 0; i < col; i++) {
// 		for (int j = 0; j < row; j++) {
// 			printf("%d", a[j][i]);
// 		}
// 	}
// }
// int main(void) {
// 	int row, col;
// 	scanf("%d %d", &row, &col);
// 	//int a[row][col];
// 	int a[3][4];
// 	int i = 0, j = 0;
// 	for (; i < row; i++) {
// 		for (; j < col; j++) {
// 			scanf("%d", &a[i][j]);
// 		}
// 	}
// 	solve(row, col);

// 	// for (int i = 0; i < row; i++) {
// 	// 	for (int j = 0; j < col; j++) {
// 	// 		printf("%d ", a[i][j]);
// 	// 	}
// 	// 	printf("\n");
// 	// }
// }

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main() {
// 	int row, col;
// 	scanf("%d %d", &row, &col);
// 	//int a[row][col];
// 	int a[row][col], b[row][col], c[row][col];
// 	for (int i = 0; i < row; i++) {
// 		for (int j = 0; j < col; j++) {
// 			scanf("%d", &a[i][j]);
// 		}
// 	}
// 	for (int i = 0; i < row; i++) {
// 		for (int j = 0; j < col; j++) {
// 			scanf("%d", &b[i][j]);
// 		}
// 	}
// 	for (int i = 0; i < row; i++) {
// 		for (int j = 0; j < col; j++) {
// 			c[i][j] = a[i][j] + b[i][j];
// 		}
// 	}
// 	for (int i = 0; i < row; i++) {
// 		for (int j = 0; j < col; j++) {
// 			printf("%d ", c[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }

//code to find the transpose of a given matric
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main() {
// 	int r , c;
// 	scanf("%d %d", &r, &c);
// 	int a[r][c], transpose[r * c][r * c];
// 	for (int i = 0; i < r; i++) {
// 		for (int j = 0; j < c; j++) {
// 			scanf("%d", &a[i][j]);
// 		}
// 	}
// 	//printing the original matrix
// 	for (int i = 0; i < r; i++) {
// 		for (int j = 0; j < c; j++) {
// 			printf("%d ", a[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	//taking the transpose of the matrix
// 	for (int i = 0; i < r; ++i) {
// 		for (int j = 0; j < c; ++j) {
// 			transpose[j][i] = a[i][j];
// 		}
// 	}
// 	//priting the transpose of the matrix
// 	for (int i = 0; i < c; i++) {
// 		for (int j = 0; j < r; j++) {
// 			printf("%d ", transpose[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

//coin change problem
// #include<bits/stdc++.h>
// using namespace std;
// int call(vector<int>arr, int target) {
// 	//base case
// 	if (target == 0) return 0;
// 	if (target < 0) {
// 		return INT_MAX;//returing infinity because target is negative which cannot be made
// 	}
// 	int mini = INT_MAX;
// 	for (int i = 0; i < arr.size(); i++) {
// 		int ans = call(arr, target - arr[i]);
// 		if (ans != INT_MAX)//if we are getting the 0 and INT_MAX from other both sides for ignoring the INT_MAX
// 			mini = min(mini, ans + 1);//then only we are updating the int_max
// 	}
// 	return mini;
// }
// int main() {
// 	vector<int>arr{1, 2, 3};
// 	int target = 7;
// 	cout << call(arr, target);
// 	return 0;
// }


//cut into segments
// #include<bits/stdc++.h>
// using namespace std;
// int solve(int n, int x, int y, int z) {
// //base case
// 	//when length of rod becomes zero then we wil stop it
// 	if (n == 0) { return 0;} //0 segments can be cut if the length of rod is zero
// 	//there may be no need to cut either there will be invalid case or there may comes -ve value
// //i will only call if there should be reaching upto 0
// 	if (n < 0) {return INT_MIN;}
// 	int a = solve(n - x, x, y, z) + 1; //i have reduced n-x lenght then there will be call for n-x
// 	//this is giving n-x ans so if we need to find the of n the +1
// 	//we have gone to n to n-x by breaking the single no of rod
// 	int b = solve(n - y, x, y, z) + 1;
// 	int  c = solve(n - z, x, y, z) + 1;
// 	//in the final answer we need the maximum answer
// 	int ans = max(a, max(b, c));
// 	return ans;
// }
// int main() {
// 	int n = 8, x = 5, y = 5, z = 2;
// 	int ans = solve(n, x, y, z);
// 	ans = (ans < 0) ? 0 : ans;
// 	cout << ans;//it returns maximum of segments
// 	return 0;
// }


// #include <stdio.h>
// #include <conio.h>
// int bubble(int arr[], int n) {
// 	int temp;
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n - 1; j++) {
// 			if (arr[j] > arr[j + 1]) {
// 				temp = arr[j];
// 				arr[j] = arr[j + 1];
// 				arr[j + 1] = temp;
// 			}
// 		}
// 	}
// 	printf("Rotated array  ");
// 	return 0;
// }
// int main() {
// 	int n;
// 	scanf("%d", &n);
// 	int a[n];
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &a[i]);
// 	}
// 	bubble (a, n);
// 	printf("\n");
// 	for (int i = 0; i < n; i++) {
// 		printf("%d ", a[i]);
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int selection (int arr[], int n) {
// 	int temp;
// 	for (int i = 0; i < n - 1; i++) {
// 		int fixedindex = i;
// 		for (int j = i + 1; j < n; j++) {
// 			if (arr[fixedindex] > arr[j]) {
// 				fixedindex = j;
// 			}
// 		}
// 		//swapping i and index
// 		temp = arr[i];
// 		arr[i] = arr[fixedindex];
// 		arr[fixedindex] = temp;
// 	}
// 	return 0;
// }
// int main() {
// 	int n;
// 	scanf("%d", &n);
// 	int a[n];
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &a[i]);
// 	}
// 	selection (a, n);
// 	printf("Rotated array \n");
// 	for (int i = 0; i < n; i++) {
// 		printf("%d ", a[i]);
// 	}
// 	return 0;
// }


//bubble sort in c program
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void bubble( int arr[], int n) {
// 	int temp;
// 	//we set the highest element to the end of the array and then we swap it
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n - 1; j++) {
// 			if (arr[j] > arr[j + 1]) {
// 				temp = arr[j];
// 				arr[j] = arr[j + 1];
// 				arr[j + 1] = temp;
// 			}
// 		}
// 	}
// 	for (int i = 0; i < n; i++) {
// 		printf("%d ", arr[i]);
// 	}
// }
// void selection(int arr[], int n) {
// 	//we choose the i fixed and then we compare all the with the fixed i with in i iteration
// 	int temp;
// 	for (int i = 0; i < n; i++) {
// 		int fixed_Index = i;
// 		for (int j = i + 1; j < n - 1; j++) {
// 			if (arr[fixed_Index] > arr[j]) {
// 				fixed_Index = j; //give the index to fixed_Index
// 			}
// 		}
// 		temp = arr[fixed_Index];
// 		arr[fixed_Index] = arr[i];
// 		arr[i] = temp;
// 	}
// 	for (int i = 0; i < n; i++) {
// 		printf("%d ", arr[i]);
// 	}
// }
// int main() {
// 	int n;
// 	scanf("%d", &n);
// 	int arr[n];
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &arr[i]);
// 	}
// 	selection(arr, n);
// 	// bubble(arr, n);

// 	return 0;
// }


//luv videos notes
// //prefix sum by luv videos competitive programming
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// //declayeing the size of constant array size
// const int N = 1e5 + 10;
// int a[N];//where we need to use the prefix sum question
// //we should go with the 1 based indexing
// int pf[N];
// int main() {
// 	//taking the array and size inputs
// 	int n; cin >> n;
// 	for (int i = 1; i <= n; i++ ) {
// 		cin >> a[i];
// 		pf[i] = pf[i - 1] + a[i];
// 	}//gping with the 1 bases indexing for the all the prefix sum values
// 	//taking the total inputs
// 	int t; cin >> t;
// 	while (t--) {
// 		int l, r; cin >> l >> r;
// 		// ll sum = 0;
// 		// for (int i = l; i <= r; i++) {
// 		// 	sum += a[i];
// 		// }//we need to use the prefix sum
// 		// cout << sum << endl;

// 		cout << pf[r] - pf[l - 1] << endl;//O(N)+O(Q)=10^5 ->total complexity
// 		//pf(r)-pf(l-1)

// 	}
// 	// O(N)+O(Q*N)=10^10
// 	return 0;
// }
// //pf(i)=>(1-i)
// //pf(r)=>(1-r)
// //pf(l-r)=>pf(r)-pf(l-1)=
//inputs->>
// 6
// 1 2 3 4 5 6
// 4
// 2 3
// 4 6
// 1 5
// 3 6
//outputs->
// 5
// 15
// 15
// 18



//Given 2d array of N*N intergers. Given Q
// queries and in each query given a, b, c and d print sum of square represented by (a, b)
// as top left point and (c, d) as bottom right point
// #include <bits/stdc++.h>
// using namespace std;
// // #define ll long long
// //taking 1 base indexing
// const int N = 1e3 + 10;
// int arr[N][N];

// int main() {
// 	int n ; cin >> n;
// 	for (int i = 1; i <= n; i++) {
// 		for (int j = 1; j <= n; j++) {
// 			cin >> arr[i][j];
// 		}
// 	}
// 	int t; cin >> t;
// 	while (t--) {
// 		int a, b, c, d; cin >> a >> b >> c >> d;
// 		long long sum = 0;
// 		for (int i = a; i <= c; ++i) {
// 			for (int j = b; j <= d; ++j) {
// 				sum += arr[i][j];
// 			}
// 		}
// 		cout << sum;
// 	}

// }



//addtion of two numbers using the string
// #include<bits/stdc++.h>
// using namespace std;
// string sumString(string  a, int p1, string b, int p2, int carry = 0) {
// 	// base case
// 	if (p1 < 0 && p2 < 0) {
// 		if (carry != 0) {
// 			return string(1, carry + '0');
// 		}
// 		//returning the empty string in case of carry is zero
// 		return "";
// 	}
// 	int n1 = (p1 >= 0 ? a[p1] : '0') - '0';
// 	int n2 = (p2 >= 0 ? b[p2] : '0') - '0';
// 	int csum = n1 + n2 + carry;
// 	int digit = csum % 10;//getting the last digit of the sum
// 	carry = csum / 10;//extracting the carry of the ten's digits
// 	string ans = "";
// 	ans.push_back(digit + '0');
// 	//Recursion part
// 	ans += sumString(a, --p1, b, --p2, carry);
// 	return ans;
// }
// string addString(string a, string b) {
// 	string ans = sumString(a, a.size() - 1, b, b.size() - 1, 0);
// 	reverse(ans.begin(), ans.end());
// 	return ans;
// }
// int main() {
// 	string a, b; cin >> a >> b;
// 	cout << addString(a, b);
// 	return 0;
// }

//inserting the data part at the end of the node
// #include<stdio.h>
// #include<stdlib.h>
// struct node {
// 	int data;
// 	struct node *link;
// };
// struct node* atTheEnd(struct node *ptr , int value) {
// 	//creating a temp node which will point the 2nd value
// 	struct node *temp = (struct node*)malloc(sizeof(struct node));
// 	temp->data = value;
// 	temp->link = NULL;

// 	//updating the previous link part of the node
// 	ptr->link = temp;
// 	return temp;//address of the 2nd node
// }
// int main() {
// 	//creating the head pointer
// 	struct node *head = (struct node*)malloc(sizeof(struct node));
// 	head-> data = 1;
// 	head->link = NULL;


// 	//creating the ptr
// 	struct node *ptr = head;
// 	ptr = atTheEnd(ptr, 2);
// 	ptr = atTheEnd(ptr, 3);
// 	ptr = atTheEnd(ptr, 4);
// 	ptr = atTheEnd(ptr, 5);

// 	ptr = head;

// 	//priting
// 	while (ptr != NULL) {
// 		printf("%d\n", ptr->data);
// 		ptr = ptr->link;
// 	}
// 	return 0;
// }

//at the begning
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
// 	int data;
// 	struct node* link;
// };
// void add_beg(struct node**head, int data) {
// 	//creating the ptr
// 	struct node *ptr = (struct node*)malloc (sizeof(struct node));
// 	ptr->data = data;
// 	ptr->link = NULL;

// 	ptr->link = *head;
// 	*head = ptr;
// }

// int main() {
// 	//creating the head and ptr nodes
// 	struct node *head = (struct node*)malloc (sizeof(struct node));
// 	head->data = 2;
// 	head->link = NULL;

// 	struct node *ptr = (struct node*)malloc (sizeof(struct node));
// 	ptr->data = 3;
// 	ptr->link = NULL;
// 	//updation
// 	head->link = ptr;


// 	int data = 1;
// 	add_beg(&head, data);//passing the address
// 	ptr = head;
// 	while (ptr != NULL) {
// 		printf("%d\n", ptr->data);
// 		ptr = ptr->link;
// 	}
// 	return 0;

// // }

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// struct node {
// 	int data;
// 	struct node * link;
// };
// struct node* at_the_end(struct node * second, int value) {
// 	struct node *temp = (struct node *)malloc (sizeof(struct node));
// 	temp->data = value;
// 	temp->link = NULL;

// 	second->link = temp;
// 	return temp;
// }
// void add_at_pos(struct node *head, int num, int pos) {
// 	struct node *t1 = head;
// 	struct node *t2 = head;
// 	t2->data = num;
// 	t2->link = NULL;
// //trversal the list with pos
// 	t1--;
// 	while (pos != 1) {
// 		t1 = t1->link;
// 		pos--;
// 	}
// 	t2->link = t1->link;
// 	t1->link = t2;
// }
// int main() {
// 	struct node *head = (struct node *)malloc (sizeof(struct node));
// 	head->data = 1;
// 	head->link = NULL;
// 	struct node *second = head;
// 	second = at_the_end(second, 2 );
// 	second = at_the_end(second, 3);
// 	second = at_the_end(second, 4);
// 	int data = 67, position = 3;
// 	second = head;
// 	add_at_pos(head, data, position);

// 	while (second != NULL) {
// 		printf("%d\n", second->data);
// 		second = second->link;
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node {
// 	int data;
// 	struct node* link;
// };
// struct node* create_node(int value) {
// 	struct node* new_node = (struct node)malloc(sizeof(struct node));
// 	new_node->data;
// 	new_node->link = NULL;

// 	new_node->link = *head;

// 	return new_node;

// }

// int main() {
// 	struct node *head = (struct node*)malloc(sizeof(struct node));
// 	head->data = 1;
// 	head->link = NULL;

// 	create_node(4);

// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node {
// 	int data;
// 	struct node* link;
// };
// struct node* create_node(int value) {
// 	struct node* new_node = (struct node*)malloc (sizeof(struct node));
// 	new_node->data = value;
// 	new_node->link = NULL;
// 	return new_node;
// }
// void insert_at_end(struct node**headref, int value) {

// 	struct node* new_node = create_node(value);
// 	if (*headref == NULL) {
// 		*headref = new_node;
// 		return ;
// 	}
// 	//2nd case for the something present inside the linked list
// 	struct node* current = *headref; //address of the head
// 	while (current->link != NULL) {
// 		current = current->link;
// 	}
// 	current->link = new_node;

// }
// void printll(struct node* head) {
// 	struct node* current = head;
// 	while (current != NULL) {
// 		printf("%d\n", current->data);
// 		current = current->link;
// 	}
// }
// int main() {
// 	struct node* head = NULL;
// 	insert_at_end(&head, 4);
// 	insert_at_end(&head, 5);
// 	insert_at_end(&head, 6);
// 	insert_at_end(&head, 7);

// 	printll(head);
// 	//iterating throught each node
// 	struct node* current = head;
// 	while (current != NULL) {
// 		struct node* temp = current;
// 		current = current->link;
// 		free(temp);
// 	}
// 	return 0;
// }

//**********----------------*************INSERTION (LINKED LIST)**********----------------*************
// #include <stdio.h>
// #include <stdlib.h>
// struct node {
// 	int data;
// 	struct node* link;
// };
// struct node* create_node(int value) {
// 	struct node* new_node = (struct node*)malloc (sizeof(struct node));
// 	new_node->data = value;
// 	new_node->link = NULL;
// 	return new_node;
// }
// void printll(struct node* head) {
// 	struct node* current = head;
// 	while (current != NULL) {
// 		printf("%d\n", current->data);
// 		current = current->link;
// 	}
// }
// void insert_beg(struct node** head, int value) {
// 	struct node* new_node = create_node(value);
// 	new_node->data = value;
// 	new_node->link = *head; //conneting to the 2nd node
// 	*head = new_node;
// }
// void insert_end(struct node**headref, int value) {
// 	struct node* new_node = create_node(value);
// 	if (*headref == NULL) {
// 		*headref = new_node;
// 		return ;
// 	}
// 	//2nd case for the something present inside the linked list
// 	struct node* current = *headref; //address of the head
// 	while (current->link != NULL) {
// 		current = current->link;
// 	}
// 	current->link = new_node;
// }
// void add_at_pos(struct node **headreg, int data, int pos) {
// 	struct node* new_node = *headreg;
// 	struct node* new_node2 = create_node(data);
// 	while (pos != 2) {
// 		new_node = new_node->link;
// 		pos--;
// 	}
// 	new_node2->link =  new_node->link;
// 	new_node->link = new_node2;
// }
// int main() {
// 	struct node* head = NULL;
// 	//insertion at the end & creating the node list
// 	insert_end(&head, 1);
// 	insert_end(&head, 2);
// 	insert_end(&head, 3);

// 	//insertion at the beginning
// 	insert_beg(&head, 4);

// 	//insertion at certion position
// 	int data = 5, position = 3;
// 	add_at_pos(&head, data, position);

// 	printll(head);
// }//output-> 4 1 5 2 3

//insert at a given position
// #include<stdio.h>
// #include<stdlib.h>
// struct node {
// 	int data;
// 	struct node *next;
// };
// struct node*creating_node(int value) {
// 	struct node* new_node = (struct node*)malloc (sizeof(struct node));
// 	new_node->data = value;
// 	new_node->next = NULL;
// 	return new_node;
// }
// void add_at_end(struct node**head , int value) {
// 	struct node* new_node = creating_node(value);
// 	if (*head == NULL) {
// 		*head = new_node;
// 		return;
// 	}
// 	//2nd case having element inside the node
// 	struct node* current = *head; //this is also poiting the head
// 	while (current->next != NULL) {
// 		current = current->next;//for finding the null part
// 	}
// 	current->next = new_node;
// }
// void add_at_beg(struct node** head, int value) {
// 	struct node* new_node = creating_node(value);
// 	new_node->next = *head;//address of the first node or head pointer address
// 	*head = new_node;//pointing the head to the new_node
// }
// void add_at_pos(struct node **head, int value, int pos) {
// 	struct node* new_node = creating_node(value);
// 	struct node* current = *head;//traversal
// 	int i = 2;
// 	while (i < pos) {
// 		current = current->next;
// 		i++;
// 	}//extablish right most link
// 	new_node->next = current->next;
// 	current->next = new_node;
// }
// void printing(struct node* head) {
// 	struct node*current = head;
// 	while (current != NULL) {//this loop is for the traversal of list
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// }
// int main() {
// 	struct node* head = NULL;
// //add at the end
// add_at_end(&head, 20);
// add_at_end(&head, 30);
// add_at_end(&head, 40);

// // adding at the beginning
// add_at_beg(&head, 50);

// //adding at the specific pos
// int data = 60; int pos = 3;
// add_at_pos(&head, data, pos);

// //printing the data
// 	printing(head);

// }
// //50 20 60 30 40


// #include <stdio.h>
// #include<stdlib.h>
// struct node {
// 	int data;
// 	struct node* next;
// };
// struct node* create_node(int value) {
// 	struct node* new_node = (struct node*)malloc(sizeof(struct node));
// 	new_node->data = value;
// 	new_node->next = NULL;
// 	return new_node;
// }
// void printing(struct node *head) {
// 	struct node* current = head;
// 	while (current != NULL) {
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// }
// void insert_end(struct node**head, int value) {
// 	struct node* new_node = create_node(value);
// 	if (*head == NULL) {
// 		*head = new_node;
// 		return;
// 	}
// 	//if the head is filled
// 	struct node* current = *head;
// 	while (current->next != NULL) {
// 		current = current->next;
// 	}
// 	current->next = new_node;
// }
// void insert_beg(struct node**head, int value) {
// 	struct node* new_node = create_node(value);
// 	new_node->next = *head;
// 	*head = new_node;
// }
// void insert_pos(struct node**head, int value, int pos) {
// 	if (pos < 0) return ;
// 	if (pos == 0) { //if the index is equal to the zero
// 		insert_beg(head, value);
// 		return ;
// 	}
// 	struct node* new_node = create_node(value);
// 	struct node* current = *head;
// 	//if the index is greater than the zero --------------
// 	int i = 2;
// 	while (i < pos) { /*(*head!NULL&&count<index-1)*/ //empty list
// 		current = current->next;
// 		i++;//--pos;
// 	}
// 	//if (pos==NULL)
// 	new_node->next = current->next;
// 	current->next = new_node;
// }
// void delete_beg(struct node** head) {
// 	if (*head == NULL) {
// 		printf("LIST IS EMPTY");
// 		return;
// 	}
// 	struct node* current = *head;
// 	*head = current->next;
// 	free(current);
// }
// void delete_end(struct node** head) {//it needs two pointers
// 	struct node* current = *head;
// 	while (current->next->next != NULL) {
// 		current = current->next;
// 	}
// 	if (current == *head) {
// 		*head = NULL;
// 		free(current);
// 		return;
// 	}
// 	current->next = NULL;
// 	free(current->next);
// }
// void delete_pos(struct node **head, int pos) {
// 	struct node* current = *head, *temp;
// 	int i = 2;
// 	while (i < pos) {
// 		current = current->next;
// 		i++;
// 	}
// 	temp = current->next;
// 	current->next = temp->next;
// 	free(temp);
// }
// void delete_whole(struct node** head) {
// 	struct node* current = *head;
// 	while (current != NULL) {//until current becomes null
// 		current = current->next;
// 		free(*head);
// 		*head = current;
// 	}
// }
// void reverse_list(struct node **head) {
// 	//we cannot move our head pointer before updating the link part of the second node.
// 	struct node * current1 = NULL ;
// 	struct node *current = *head;
// 	struct node * current2 = NULL;

// 	while (current != NULL) {//stop when head becomes null
// 		current2 = current->next;
// 		current->next = current1;
// 		current1 = current;
// 		current = current2;
// 	}
// 	*head = current1;
// }
// int main() {
// 	struct node* head = NULL;
// //insertion at the ending
// 	insert_end(&head, 10);
// 	insert_end(&head, 20);
// 	insert_end(&head, 30);
// //insertion at the beginnig
// 	insert_beg(&head, 40);
// 	insert_beg(&head, 50);

// //insertion at the any position
// 	int data = 60, pos = 2;
// 	insert_pos(&head, data, pos);

// //delete from beginning
// 	delete_beg(&head);
// // //delete from ending
// 	delete_end(&head);
// //delete from specified position
// 	delete_pos(&head, pos); //pos=2;
// 	delete_whole(&head);
// 	reverse_list(&head);//head will point to last of the list
// 	printing(head);
// }
// // 50 60 40 10 20 30
// //delete from beg=60 40 10 20 30
// //delete from end=60 40 10 20
// //delete form the pos=60 10 20
// reversed = 30 20 10 40 60 50



//COUNT THE NO OF NODES IN SINGLE LINKED LIST
// #include <stdio.h>
// #include <stdlib.h>
// struct node {
// 	int data;
// 	struct node * next;
// };
// struct node* create_node(int value) {
// 	struct node * new_node = (struct node*)malloc (sizeof(struct node));
// 	new_node->data = value;
// 	new_node->next = NULL;
// 	return new_node;
// }
// void insert_beg(struct node**head, int value) {
// 	struct node* new_node = create_node(value);
// 	new_node->next = *head;
// 	*head = new_node;
// }
// void print(struct node* head) {
// 	struct node* current = head; int count = 0;
// 	while (current != NULL) {
// 		printf("%d\n", current->data );
// 		current = current->next;
// 		count++;
// 	}
// 	printf("\nTotal count %d", count);
// }
// void delete_whole(struct node** head) {
// 	struct node* current = *head;
// 	while (current != NULL) {//until current becomes null
// 		current = current->next;
// 		free(*head);
// 		*head = current;
// 	}
// }
// void reverse_list(struct node **head) {
// 	//we cannot move our head pointer before updating the link part of the second node.
// 	struct node * current1 = NULL ;
// 	struct node *current = *head;
// 	struct node * current2 = *head;

// 	while (current != NULL) {//stop when head becomes null
// 		current2 = current->next;
// 		current->next = current1;
// 		current1 = current;
// 		current = current2;
// 	}
// 	*head = current1;
// }
// int main() {
// 	struct node* head = NULL;
// 	insert_beg(&head, 10);
// 	insert_beg(&head, 20);
// 	insert_beg(&head, 30);
// 	insert_beg(&head, 40);
// 	// delete_whole(&head);
// 	reverse_list(&head);//head will point to last of the list
// 	print(head);

// }


// #include <stdio.h>
// #include <stdlib.h>
// struct node {
// 	int data;
// 	struct node * next;
// 	struct node * prev;
// };
// struct node* create_node (int value) {
// 	struct node* new_node = (struct node*)malloc (sizeof(struct node));
// 	new_node->data = value;
// 	new_node->next = NULL;
// 	return new_node;
// }
// int main() {

// 	struct node* head = NULL;

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

// int maxProfit(vector<int>&prices) {
// 	// debug(prices)
// 	int maxi = 0;
// 	vector<int>ans;
// 	for (int i = 0; i < prices.size(); i++) {
// 		for (int j = i; j < prices.size(); j++) {
// 			if (prices[i] < prices[j]  ) {
// 				debug(i) debug(j)
// 				maxi = (prices[j] - prices[i]);
// 				ans.push_back(maxi);
// 				debug(maxi) dl
// 			}
// 		}
// 	}
// 	return *max_element(ans.begin(), ans.end());
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	vector<int> prices{7, 1, 5, 3, 6, 4};
// 	cout << maxProfit(prices);
// 	return 0;
// }




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



// #include<bits/stdc++.h>
// using namespace std;
// struct node {
// 	int data;
// 	struct node* next;
// };
// struct node* create_node(int value) {
// 	struct node* new_node = (struct node*)malloc(sizeof(struct node));
// 	new_node->data = value;
// 	new_node->next = NULL;
// 	return new_node;
// }
// void print(struct node* head) {
// 	struct node* current = head;
// 	while (current != NULL) {
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// }
// void insert_at_end(struct node** head, int value) {
// 	struct node* new_node = create_node(value);
// 	if (*head == NULL) {
// 		*head = new_node;
// 		return;
// 	}
// 	struct node* current = *head;
// 	while (current->next != NULL) {
// 		current = current->next;
// 	}
// 	current->next = new_node;
// }
// void find_max(struct node **head, int max) {
// 	struct node* current = *head;
// 	while (current->next != NULL) {
// 		current = current->next;
// 		if (current->data > max) {
// 			max = current->data;
// 		}
// 	}
// 	printf("Max_number-> %d\n", max);
// }
// int main() {
// 	struct node* head = NULL;
// 	insert_at_end(&head, 2320);
// 	insert_at_end(&head, 1420);
// 	insert_at_end(&head, 32320);
// 	insert_at_end(&head, 40);
// 	find_max(&head, -1);
// 	print(head);
// 	return 0;

// }



// #include <stdio.h>
// int main() {
// 	int arr[] = {1, 2, 3, 1};
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	int i = 0, amount = 0;
// 	while (i < size) {
// 		amount += arr[i] + arr[i + 2];
// 		i ++;
// 	}
// 	printf("%d", amount);
// 	return 0;
// }
// #include <bits/stdc++.h>
//            using namespace std;

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

// // int robHelper(vector<int>&nums, int i) {
// // 	if (i >= nums.size()) return 0;
// // 	//sol for 1
// // 	int robAmt1 = nums[i] + robHelper(nums, i + 2);
// // 	int robAmt2 = 0 + robHelper(nums, i + 1);
// // 	return max(robAmt1, robAmt2);
// // }
// int robHelper2(vector<int>&nums) {
// 	int robAmt1 = 0, robAmt2 = 0;
// 	int j = 0, i = 0;
// 	while (i < nums.size()) {
// 		if (i == j) {
// 			debug(i)
// 			robAmt1 += nums[j] ;
// 			debug(robAmt1)
// 			i++; j += 2;
// 			if (i > nums.size()) {--i ; break;}
// 		}

// 		else {
// 			dl
// 			debug(i)
// 			debug(robAmt2)
// 			robAmt2 += nums[i];
// 			debug(nums[i])
// 			i++;
// 		}
// 	}
// 	dl
// 	debug(robAmt1) debug(robAmt2)
// 	return max(robAmt1, robAmt2);
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	vector<int>nums = {2, 1, 1, 3};
// 	cout << robHelper2(nums);
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// struct node {
// 	int data;
// 	struct node* next;
// };
// struct node* create_node(int value) {
// 	struct node* new_node = (struct node*)malloc(sizeof(struct node));
// 	new_node-> data = value;
// 	new_node->next = NULL;
// 	return new_node;
// }
// void print(struct node* head) {
// 	struct node* current = head;
// 	while (current != NULL) {
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// }
// void insert_at_end(struct node** head, int value) {
// 	struct node* new_node = create_node(value);
// 	if (*head == NULL) {
// 		*head = new_node;
// 		return;
// 	}
// 	struct node* current = *head;
// 	while (current->next != NULL) {
// 		current = current->next;
// 	}
// 	current->next = new_node;
// }
// void insert_at_beg(struct node** head, int value) {
// 	struct node* new_node = create_node(value);
// 	new_node->next = *head;
// 	*head = new_node;
// }
// void insert_at_pos(struct node** head, int value, int index) {
// 	if (index < 0) return ;
// 	if (index == 0) { //if the index is equal to the zero
// 		insert_at_beg(head, value);
// 		return ;
// 	}
// 	struct node* new_node = create_node(value);
// 	struct node* current = *head;
// 	int count = 0;
// 	while (*head != NULL && count < index - 1) {
// 		current = current->next;
// 		count++;
// 	}
// 	new_node->next = current->next;
// 	current->next = new_node;
// }
// void reverse_list(struct node** head) {
// 	struct node *current = *head;
// 	struct node *current1 = NULL;
// 	while (current != NULL) {
// 		current = (*head)->next;
// 		(*head)->next = current1;
// 		current1 = *head;
// 		*head = current;
// 	}
// 	*head = current1;
// }
// void delete_beg(struct node** head) {
// 	if (*head == NULL) return;
// 	struct node* current = *head;
// 	*head = current->next;
// 	free(current);
// }
// void delete_end(struct node** head) {
// 	struct node* current = *head;
// 	while (current->next != NULL) { //traversing till 2nd last node
// 		current = current->next;
// 	}
// 	printf("%d\n\n", current->data);
// 	// if there is only 1 node present then free my current
// 	if (current == *head) {
// 		*head = NULL;
// 		free(current);
// 		return;
// 	}
// 	// current->next = NULL;
// 	// free(current->next);
// }
// void delete_pos(struct node** head, int index) {
// 	struct node* current = *head, *temp;
// 	int count = 0;
// 	while (*head != NULL && count < index - 1) {
// 		current = current->next;
// 		count++;
// 	}
// 	//standing at the index -1 element
// 	temp = current->next;
// 	current->next = temp->next;
// 	free(temp);
// }
// void delete_whole(struct node** head) {
// 	struct node* current = *head;
// 	while (current != NULL) {//until current becomes null
// 		current = current->next;
// 		free(*head);
// 		*head = current;
// 	}
// }
// int main() {
// 	struct node* head = NULL;
// 	insert_at_end(&head, 10);
// 	insert_at_end(&head, 60);
// 	insert_at_end(&head, 20);
// 	insert_at_end(&head, 40);
// 	insert_at_end(&head, 430);
// 	insert_at_end(&head, 340);
// 	// insert_at_beg(&head, 58);
// 	// insert_at_beg(&head, 5834);
// 	// insert_at_pos(&head, 12, 3);//at index 3
// 	// reverse_list(&head);
// 	// delete_beg(&head);
// 	delete_end(&head);
// 	// delete_end(&head);
// 	// delete_pos(&head, 1);
// 	// delete_whole(&head);
// 	print(head);
// 	return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(int arr[], int size, int target)
// {

// 	int start = 0;
// 	int end = size - 1;

// 	while (start <= end)
// 	{
// 		int mid = start + (end - start) / 2;
// 		int element = arr[mid];
// 		if (element == target)//element found return index as mid
// 		{
// 			return mid;
// 		}
// 		else if (target < element)
// 		{
// 			// searching on left side
// 			end = mid - 1;
// 		}
// 		else
// 		{
// 			// searching on right side
// 			start = mid + 1;
// 		}
// 	} //no any element found out
// 	return -1;
// }
// int main()
// {
// 	int arr[] = {2, 3, 4, 5, 6, 8, 9};
// 	int size = 7;
// 	int target = 6;
// 	int indexOfTarget = binarySearch(arr, size, target);

// 	if (indexOfTarget == -1)
// 	{
// 		cout << "target not found" << endl;
// 	}
// 	else
// 	{
// 		cout << "Target found at " << indexOfTarget << " index" << endl;
// 	}

// 	return 0;
// }

//the time complexity of the code is O(LOG(N))



//INFIX TO POSTFIX

// #include<stdlib.h>
// #include<stdio.h>
// #include<ctype.h>

// #define max 100
// struct Stack {
// 	int capacity;
// 	int top;
// 	char *arr;
// };
// struct Stack* create_stack(int _capacity) {
// 	struct Stack * new_stack = (struct Stack*)malloc (sizeof(struct Stack));
// 	new_stack->capacity = _capacity;
// 	new_stack->top = -1;
// 	new_stack->arr = (char*)malloc(new_stack->capacity * (sizeof(char)));
// 	return new_stack;
// }
// int isFull(struct Stack * new_stack) {
// 	return new_stack->top == new_stack->capacity - 1;
// }
// void push(struct Stack* new_stack, char value) {
// 	//is it full?
// 	if (isFull(new_stack)) {
// 		printf("Stack is full\n");
// 		return;
// 	}
// 	new_stack->arr[++new_stack->top] = value;
// }
// int isEmpty(struct Stack * new_stack) {
// 	return new_stack->top == -1;
// }
// char pop(struct Stack* new_stack) {
// 	// is it empty
// 	if (isEmpty(new_stack)) {
// 		printf("Yes it is Empty\n");
// 		return '\0';
// 	}
// 	return new_stack->arr[new_stack->top--];
// }
// char peek(struct Stack * new_stack) {
// 	// is it empty?
// 	if (isEmpty(new_stack)) {
// 		printf("Yes its Empty");
// 		return '\0';
// 	}
// 	return new_stack->arr[new_stack->top];
// }

// //whether it is operand or operator?
// int isOperand(char ch) {
// 	return isalnum(ch);
// }
// //gives the return the oprator precedance
// int precedance(char op) {
// 	switch (op) {

// 	case '+':
// 	case '-':
// 		return 1;

// 	case '*':
// 	case '/':
// 	case '%':
// 		return 2;

// 	case '^':
// 		return 3;

// 	}
// 	return -1;
// }
// void infixTopostfix(const char* infix , char* postfix) {
// 	struct Stack* new_stack = create_stack(max);
// 	int i, j = 0;
// 	char ch, x;
// 	for ( i = 0; infix[i] != '\0'; i++)
// 	{
// 		ch = infix[i];
// 		if (isOperand(ch)) {
// 			postfix[j++] = ch;
// 		}
// 		else if (ch == '(') {
// 			push(new_stack, ch);
// 		}
// 		else if (ch == ')') {
// 			while ((x = pop(new_stack)) != '(') { //here we are poping the elements until we have reached in the opening paranthesis in the stack
// 				postfix[j++] = x;
// 			}
// 		}
// 		else {
// 			while (!isEmpty(new_stack) && precedance(ch) <= precedance(peek(new_stack))) { //that should not be empty then only it will go inside
// 				postfix[j++] = pop(new_stack); //pop char should be pussed inside the postfix
// 			}
// 			push(new_stack, ch);
// 		}
// 	}
// 	while (!isEmpty(new_stack)) {
// 		postfix[j++] = pop(new_stack);
// 	}
// 	postfix[j] = '\0';

// 	//destroying the stack
// 	free(new_stack->arr);
// 	free(new_stack);
// }
// int main() {

// 	char infix[max], postfix[max];
// 	fgets(infix, sizeof(infix), stdin);
// 	infixTopostfix(infix, postfix);
// 	printf("%s\n", postfix);

// 	return 0;
// }

//input ->  ((p+(q*r))-s)
//output ->  pqr*+s-



//STACK WITH LINKED LIST

// #include<bits/stdc++.h>
// using namespace std;

// //creating the struct node typedef
// typedef struct node {
// 	int data;
// 	struct node * next;
// } Node; //access this code by this shortcut

// typedef struct stack
// {
// 	//only have the top which will be self referencial of node type
// 	Node * top;
// } Stack; //naming it as Stack

// //creating the node of struct node
// Node * create_node(int value) {
// 	Node * new_node = (Node *)malloc( sizeof(Node));
// //assiging
// 	new_node->data = value;
// 	new_node->next = NULL;
// 	return new_node;
// //returing the address of the new node
// }


// //creating a stack of struct stack type to store the nodes of type struct node
// Stack * create_stack() {
// 	Stack * new_stack = (Stack*)malloc(sizeof(Stack));
// 	new_stack->top = NULL;
// 	return new_stack;
// 	//returning the address of the new_stack
// }

// //if the top of the stack is null then stack is empty
// int isEmpty(Stack * new_stack) {
// 	return new_stack->top == NULL;
// }


// void push_beg(Stack * new_stack, int value) {
// 	//first creating the node for the pussing
// 	Node * new_node = create_node(value);
// 	//new_node->top == like * head in the linked list
// 	new_node->next = new_stack->top;
// 	new_stack->top = new_node;
// 	// pussing the element to the top of the stack
// }

// int pop( Stack * new_stack) {
// 	//cheking for the underflow condition
// 	if ( isEmpty(new_stack)) {
// 		printf("Underflow");
// 		exit(1);
// 	}
// 	Node * temp = new_stack-> top; //assinging the head address to the temp
// 	int data = temp->data;

// 	//giving the last address of the top to the previous node
// 	new_stack->top = new_stack->top->next;
// 	free(temp);
// 	return data;
// }

// int peek(Stack * new_stack) {
// 	if (isEmpty(new_stack)) {
// 		printf("Stack is empty");
// 		return 0;
// 	}
// 	return new_stack->top->data;
// }

// void printing(Stack * new_stack) {
// 	if (isEmpty(new_stack)) {
// 		printf("Empty Stack");
// 		return;
// 	}
// 	Node * current = new_stack ->top;
// 	while (current != NULL) {
// 		printf("Push %d\n", current->data);
// 		current = current->next;
// 	}
// }
// void destroy_stack(Stack * new_stack) {
// 	Node * current = new_stack->top;
// 	while (current != NULL) {
// 		Node * temp = current;
// 		current = current->next;
// 		free(temp);
// 	}
// 	free(new_stack);
// }
// int main() {
// 	Stack * new_stack = create_stack(); //passing the address referencly
// 	push_beg(new_stack, 10);
// 	push_beg(new_stack, 20);
// 	push_beg(new_stack, 30);
// 	push_beg(new_stack, 40);

// 	printing(new_stack);

// 	printf("\nPop  %d\n", pop(new_stack));
// 	printf("Peek %d\n", peek(new_stack));

// 	destroy_stack(new_stack);
// 	return 0;
// }

//QUEUE WITH LINKED LIST
// #include<bits/stdc++.h>
// using namespace std;
// //if i am adding the first element then my front and rear becomes the first element

// typedef struct node {
// 	int data;
// 	struct node * next;
// } Node;

// typedef struct queue {
// 	Node * front;
// 	Node * rear;
// } Queue;

// void initilize(Queue * Q) {
// 	Q->front = NULL;
// 	Q->rear = NULL;
// }

// int isEmpty (Queue * Q) {
// 	return 	Q->front == NULL;
// }


// void enqueue(Queue * Q , int value) {
// 	//no conditions to check
// 	//memory for the node
// 	Node * new_node = (Node*)malloc( sizeof(Node));
// 	new_node-> data = value;
// 	new_node->next = NULL;

// 	//two conditions 1. assigning both front and rear with new_node
// 	if (isEmpty(Q)) {
// 		Q->front = new_node;
// 		Q->rear = new_node;
// 	}

// 	else {
// 		Q->rear ->next = new_node;
// 		Q->rear = new_node;
// 	}
// }

// int dequeue(Queue * Q) {
// 	//checking the underflow condition
// 	if ( isEmpty(Q)) {
// 		printf("Underflow");
// 		exit(1);
// 	}
// 	else {
// 		Node * temp = Q->front;
// 		//this tempropy pointer pointing at the first node

// 		int data = temp->data;
// 		Q->front = Q->front ->next;
// 		//giving the next queue address to the prev queue
// 		free( temp);
// 		//for the single node  q-> fornt is already is null
// 		if ( Q-> front == NULL) {
// 			Q->rear = NULL;
// 		}
// 		return data;
// 	}
// }

// int peek (Queue * Q) {
// 	//checking is empty or not?
// 	if (isEmpty(Q)) {
// 		printf("Empty Q");
// 		return 0;
// 	}
// 	else {
// 		return Q->front ->data;
// 	}
// }
// void printing(Queue * Q) {
// 	if (isEmpty(Q)) {
// 		printf("Empty Q");
// 		return ;
// 	}
// 	Node * current = Q->front;
// 	while (current != NULL) {
// 		printf("Enqueue %d\n", current->data);
// 		current = current->next;
// 	}
// }
// int main() {

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

// 	ll t;
// 	cin >> t;
// 	while (t--) {
// 		ll n, k; cin >> n >> k;
// 		vector<int> v(n);
// 		for (int i = 0; i < n; ++i)
// 		{
// 			cin >> v[i];
// 		}
// 		sort(v.begin(), v.end());
// 		int count = 0, maxi = 0, j = 0;
// 		for (int i = 0; i < n; ++i)
// 		{
// 			j++;
// 			if (i == n - 1 || (abs(v[i + 1] - v[i])) > k) {
// 				count++;
// 				maxi = max(maxi, j);
// 				j = 0;
// 			}
// 		}
// 		cout << n - maxi << endl;
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


// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	ll t;
// 	cin >> t;
// 	while (t--) {
// 		ll a, b, c; cin >> a >> b >> c;
// 		// ll either;

// 		// if ((c % 2 == 0))
// 		// {
// 		// 	either = c / 2;
// 		// }
// 		// else
// 		// {
// 		// 	either = c / 2 + 1; //one more button pressed
// 		// }
// 		// a += either; // anna button
// 		// b += (c - either); //katie button
// 		// if (a > b) { cout << "First"; en}
// 		// else { cout << "Second"; en}
// 		if (a + (c + 1) / 2 > b + c / 2) {
// 			cout << "First\n";
// 		} else {
// 			cout << "Second\n";
// 		}
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


// bool getParity(unsigned int a)
// {
// 	return __builtin_parity(a);
// }

// void solve() {
// 	ll n; cin >> n;
// 	vector<int> v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	ll osum = 0;
// 	ll esum = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (getParity(v[i])) { /*odd parity*/
// 			debug(i)
// 			osum += v[i];
// 		}
// 		else {
// 			esum += v[i];
// 		}
// 	}
// 	if (osum != esum) {
// 		cout << "YES"; en
// 	}
// 	else {
// 		cout << "NO"; en
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
// 	t = 2;
// 	while (t--) {
// 		solve();
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
// const ll N = 1e7 + 10;

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
// 	int n, k; cin >> n >> k;
// 	vector<int>v(n) ;
// 	map<int , int > mp;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		mp[v[i]]++;
// 	}
// 	int count = 0, count2 = 0;
// 	bool div = false;
// 	for (auto it = mp.begin(); it != mp.end(); ++it) {
// 		int fre = it->second;
// 		if (fre % k == 0 ) {
// 			div = true;
// 			count2++;
// 		}
// 		else if (fre > k) {
// 			count++;
// 		}
// 	}
// 	if (div) {
// 		cout << "YES"; en
// 	}
// 	else {
// 		cout << "NO"; en
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	ll t; cin >> t;
// 	while (t--) {
// 		solve();
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
// 	string s;
// 	int len = s.length();
// 	for (int i = 0; i < len; ++i)
// 	{
// 		cin >> s;
// 	}
// 	debug(len)
// 	debug(s)
// 	string ans = "";
// 	for (int i = 0; i < len; ++i)
// 	{
// 		int ch1 = '(', ch2 = ')';
// 		if (ch1 == s[i]) {
// 			// are not regular
// 			ans += ch1;
// 		}
// 		else if (ch2 == s[i]) {
// 			ans += ch2;
// 		}
// 	}

// 	debug(ans)
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	int t; cin >> t;
// 	t = 1;
// 	while (t--) {
// 		solve();
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

// 	int t;
// 	cin >> t;
// 	vector<string> s;

// 	cin.ignore(); // Clear the newline character from previous input

// 	for (int i = 0; i < t; ++i) {
// 		string a;
// 		getline(cin, a);
// 		s.push_back(a);
// 	}

// 	// Process the test cases
// 	for (int i = 0; i < t; ++i) {
// 		string p = s[i];
// 		int size = p.size();
// 		string t;
// 		// create a regular bracket sequence t
// 		for (int j = 0; j < size; ++j)
// 		{
// 			if ((p[j] == '(')) {
// 				t += "()";
// 			}
// 			else {
// 				t += "(";
// 				t += ")";
// 			}
// 		}
// 		bool found = (t.find(p) != string::npos); // Check if p is a substring of t
// 		if (found) {
// 			cout << "No" << endl;
// 		} else {
// 			cout << "Yes" << endl;
// 			cout << t << endl;
// 		}
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	int oddCount = 0, evenCount = 0;
	int minOdd = INT_MAX, minEven = INT_MAX;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			evenCount++;
			minEven = min(minEven, a[i]);

		} else {
			oddCount++;
			minOdd = min(minOdd, a[i]);
		}
	}

	if ((oddCount > 0 && evenCount > 0) || (oddCount == 1 && minEven == INT_MAX) || (evenCount == 1 && minOdd == INT_MAX)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}

