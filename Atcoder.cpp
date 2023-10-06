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

// int solve(int n , string s) {
// 	int pos = s.find("ABC");
// 	int pos2 = s.find("CAB");
// 	int pos3 = s.find("BCA");

// 	while (pos != string::npos) {
// 		return pos + 2;
// 	}
// 	if (pos2 != string::npos) {
// 		return pos2 + 2;
// 	}
// 	else {
// 		return pos3 + 2;
// 	}
// 	return -1;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int n; cin >> n;
// 	string s; cin >> s;
// 	cout << solve(n, s);
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

// 	string s; cin >> s;
// 	if (s == "ACE" || s == "BDF" || s == "CEG" || s == "DFA" || s == "EGB" || s == "FAC" || s == "GBD") {
// 		cout << "Yes";
// 	}
// 	else {
// 		cout << "No";
// 	}


// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// // typedef long long ll;
// // typedef long double lld;
// // typedef unsigned long long ull;


// // const ll mod  = 1e9 + 7;
// // const ll maxn = 1e5 + 1;
// // const ll inf  = 5e18 ;
// // const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// // #define pb push_back
// // #define mid(s,e) (s+(e-s)/2)
// // #define loop(i,a,b) for(int i=(a);i<(b);i++)
// // #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// // #define check cout<<"Print"<<endl;
// // #define endl "\n"
// // #define en cout<<endl;
// // #define dl cerr<<endl;
// // #define sz(x) ((int)(x).size())
// // #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

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


// bool isValidRegion(vector<string>& grid, int row, int col) {
// 	// Check top-left three-by-three region
// 	//that is the first condition of the tak code
// 	// containing only the black cells  #
// 	//if any cell in this reqion is not black it means its not valid and it returns false
// 	for (int i = row; i < row + 3; i++) {
// 		for (int j = col; j < col + 3; j++) {
// 			if (grid[i][j] != '#')
// 				return false;
// 		}
// 	}

// 	// Check bottom-right three-by-three region
// 	// also does the same check all the region are black are not return  if false
// 	for (int i = row + 6; i < row + 9; i++) {
// 		for (int j = col + 6; j < col + 9; j++) {
// 			if (grid[i][j] != '#')
// 				return false;
// 		}
// 	}

// 	// Check adjacent cells
// 	// adjRow and adjCol that stores thre relative pos of the 8 adj cells around the
// 	// top left and bottom right
// 	//these all cells should be white //if any of these are not white it means region is not valid and return the true

// 	int adjRow[] = { -1, -1, -1, 0, 0, 1, 1, 1};
// 	int adjCol[] = { -1, 0, 1, -1, 1, -1, 0, 1};

// 	for (int k = 0; k < 8; k++) {
// 		int r = row + adjRow[k];
// 		int c = col + adjCol[k];
// 		if (grid[r][c] != '.')
// 			return false;
// 	}

// 	return true;

// }
// //it returns a vector of pair of integers representing the co ordinates of the top left cels of valid tak code
// vector<pair<int, int>> findTaKCodes(vector<string>& grid, int N, int M) {
// 	vector<pair<int, int>> result;

// 	for (int i = 0; i <= N - 9; i++) {
// 		for (int j = 0; j <= M - 9; j++) {
// 			if (isValidRegion(grid, i, j))
// 				result.push_back({i + 1, j + 1});
// 			//because the prblm coordinated are indexed at 1
// 		}
// 	}

// 	return result;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// //top left and bottom right 3*3 region  and 14 adjecent cells around them
// 	//we add the coordinated of the top left cell to the result
// 	int N, M;
// 	cin >> N >> M;
// 	vector<string> grid(N);
// 	for (int i = 0; i < N; i++)
// 		cin >> grid[i];

// 	vector<pair<int, int>> result = findTaKCodes(grid, N, M);
// 	for (auto& p : result)
// 		cout << p.first << " " << p.second << "\n";
// 	return 0;
// }

// //n rows and m col
// //n string and s1, s2,
// // m length
// // ith row from the top
// // jth col from the left   is black

// //if jth char of s[i] -> # and white if it is..
// // # black
// // . white
// // ? it can be either


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
// 	int N, M;
// 	cin >> N >> M;

// 	vector<int> seller_prices(N);
// 	vector<int> buyer_prices(M);

// 	for (int i = 0; i < N; i++) {
// 		cin >> seller_prices[i];
// 	}

// 	for (int i = 0; i < M; i++) {
// 		cin >> buyer_prices[i];
// 	}

// 	sort(seller_prices.begin(), seller_prices.end());
// 	sort(buyer_prices.begin(), buyer_prices.end());

// 	int seller_index = 0;
// 	int buyer_index = 0;
// 	int X = -1;

// 	while (seller_index < N && buyer_index < M) {
// 		int seller_price = seller_prices[seller_index];
// 		int buyer_price = buyer_prices[buyer_index];

// 		// Check if the current seller's price is less than or equal to the current buyer's price
// 		if (seller_price <= buyer_price) {
// 			// Update X to be the maximum of the seller's price and the current X (if X already exists)
// 			if (X == -1 || seller_price > X) {
// 				X = seller_price;
// 			}
// 			seller_index++;
// 		} else {
// 			buyer_index++;
// 		}
// 	}

// 	while (seller_index < N) {
// 		int seller_price = seller_prices[seller_index];
// 		if (X == -1 || seller_price > X) {
// 			X = seller_price;
// 		}
// 		seller_index++;
// 	}

// 	while (buyer_index < M) {
// 		int buyer_price = buyer_prices[buyer_index];
// 		if (X == -1 || buyer_price > X) {
// 			X = buyer_price;
// 		}
// 		buyer_index++;
// 	}

// 	cout << X;
// 	return 0;

// }


