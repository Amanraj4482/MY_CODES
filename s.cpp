// #include<bits/stdc++.h>
// using namespace std;
// #define printarr(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
// #define bl_ cerr<<endl;
// #define debug(x) cerr<<#x<<" "<<x<<endl;

// enum Color { RED , BLACK} ;
// class Node {
// public:
// 	int data, height;
// 	Node * left, *right, *parent;
// 	Color color; // red =0 , black =1

// 	Node(int data) {
// 		this->data = data;
// 		height = 1;
// 		right = left = parent = NULL;
// 		color = RED;
// 	}
// };
// class RBTree {
// public:
// 	Node * root;
// 	RBTree() {
// 		root = NULL;
// 	}

// 	// Insert a node into the Red-Black Tree
// 	void insert(int data) {
// 		// Step 1: If the tree is empty, create a new node as the root with color black
// 		if (root == nullptr) {
// 			root = new Node(data);
// 			root->color = BLACK;
// 			return;
// 		}

// 		// Step 2: Perform a standard BST insertion
// 		Node* newNode = insertBST(root, data);

// 		// Step 3: If the parent of the new node is black, exit (no violation)
// 		if (newNode->parent == nullptr || newNode->parent->color == BLACK) {
// 			return;
// 		}

// 		// Step 4: If the parent of the new node is red, check the color of parent's sibling
// 		Node* grandparent = newNode->parent->parent;
// 		Node* uncle = (newNode->parent == grandparent->left) ? grandparent->right : grandparent->left;

// 		// Step 5: If uncle's color is black (or null), make suitable rotation and recolor
// 		if (uncle == nullptr || uncle->color == BLACK) {
// 			performRotationAndRecolor(newNode);
// 		}
// 		// Step 6: If uncle's color is red, recolor it
// 		else {
// 			recolor(newNode, grandparent, uncle);
// 		}
// 	}
// 	void inOrderPrint() {
// 		inOrderPrint(root); cout << endl;
// 	}
// private:
// 	// Perform a standard BST insertion
// 	Node* insertBST(Node* root, int data) {
// 		if (data < root->data) {
// 			if (root->left == nullptr) {
// 				root->left = new Node(data);
// 				root->left->parent = root;
// 				return root->left;
// 			}
// 			return insertBST(root->left, data);
// 		} else if (data > root->data) {
// 			if (root->right == nullptr) {
// 				root->right = new Node(data);
// 				root->right->parent = root;
// 				return root->right;
// 			}
// 			return insertBST(root->right, data);
// 		}
// 		return root;
// 	}

// 	// Perform rotation and recoloring
// 	void performRotationAndRecolor(Node* newNode) {
// 		Node* parent = newNode->parent;
// 		Node* grandparent = parent->parent;

// 		if (parent == grandparent->left) {
// 			if (newNode == parent->right) {
// 				// Left rotation
// 				rotateLeft(parent);
// 				newNode = parent;
// 				parent = newNode->parent;
// 			}

// 			// Right rotation
// 			rotateRight(grandparent);
// 			::swap(parent->color, grandparent->color);
// 		} else {
// 			if (newNode == parent->left) {
// 				// Right rotation
// 				rotateRight(parent);
// 				newNode = parent;
// 				parent = newNode->parent;
// 			}

// 			// Left rotation
// 			rotateLeft(grandparent);
// 			std::swap(parent->color, grandparent->color);
// 		}

// 		root->color = BLACK; // Ensure the root is always black
// 	}

// 	// Recolor the nodes
// 	void recolor(Node* newNode, Node* grandparent, Node* uncle) {
// 		grandparent->color = RED;
// 		newNode->parent->color = BLACK;
// 		uncle->color = BLACK;

// 		// Recursively check for violations higher up the tree
// 		if (grandparent != root) {
// 			Node* newGrandparent = grandparent->parent;
// 			if (newGrandparent->color == RED) {
// 				performRotationAndRecolor(grandparent);
// 			}
// 		}
// 	}

// 	// Left rotation
// 	void rotateLeft(Node* node) {
// 		Node* rightChild = node->right;
// 		node->right = rightChild->left;

// 		if (rightChild->left != nullptr) {
// 			rightChild->left->parent = node;
// 		}

// 		rightChild->parent = node->parent;

// 		if (node->parent == nullptr) {
// 			root = rightChild;
// 		} else if (node == node->parent->left) {
// 			node->parent->left = rightChild;
// 		} else {
// 			node->parent->right = rightChild;
// 		}

// 		rightChild->left = node;
// 		node->parent = rightChild;
// 	}

// 	// Right rotation
// 	void rotateRight(Node* node) {
// 		Node* leftChild = node->left;
// 		node->left = leftChild->right;

// 		if (leftChild->right != nullptr) {
// 			leftChild->right->parent = node;
// 		}

// 		leftChild->parent = node->parent;

// 		if (node->parent == nullptr) {
// 			root = leftChild;
// 		} else if (node == node->parent->left) {
// 			node->parent->left = leftChild;
// 		} else {
// 			node->parent->right = leftChild;
// 		}

// 		leftChild->right = node;
// 		node->parent = leftChild;
// 	}
// 	void inOrderPrint(Node * node) {
// 		if (node == NULL) return;
// 		inOrderPrint(node->left);
// 		cout << node->data << " ";
// 		inOrderPrint(node->right);
// 	}
// };

// int main() {
// 	RBTree root;
// 	root.insert(10);
// 	root.insert(18);
// 	root.insert(5);
// 	root.insert(4);
// 	root.insert(15);
// 	root.insert(17);


// 	root.inOrderPrint();

// return 0;
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


// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/
// 	int t; cin >> t;
// 	vector<pair<vector<int>, int>> vec;
// 	while (t--) {
// 		int n ; cin >> n;
// 		vi v(n);
// 		for (int i = 0; i < n; ++i) {
// 			cin >> v[i];
// 		}
// 		vec.pb(make_pair(v, n));
// 	}
// 	int mini = INT_MAX;
// 	int x; cin >> x;
// 	vi c;
// 	for (int i = 0; i < sz(vec); ++i) {
// 		for (int j = 0; j < sz(vec[i].first); ++j) {
// 			int num = vec[i].first[j];
// 			if (num == x && mini >= vec[i].ss) {
// 				mini = min(vec[i].ss, mini);
// 				if (mini == vec[i].ss) {
// 					c.pb(i + 1);
// 				}
// 			}
// 		}
// 	}
// 	if (c.size()) {
// 		cout << sz(c) << endl;
// 		for (int i = 0; i < sz(c); ++i)
// 			cout << c[i] << " ";
// 	}
// 	else cout << 0 << endl;
// 	return 0;
// }
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
// // 	int n, m; cin >> n >> m;
// // 	vector<int> deg(n);
// // 	for (int i = 0; i < m; i++) {
// // 		int a, b;
// // 		cin >> a >> b;
// // 		--a, --b;
// // 		debug(a)
// // 		debug(b)
// // 		deg[b]++;
// // 	}
// // 	debug(deg)
// // 	int ans = -1;
// // 	for (int i = 0; i < n; i++) {
// // 		if (deg[i] == 0) {
// // 			if (ans != -1) {
// // 				cout << -1 << endl;
// // 				exit(0);
// // 			} else {
// // 				ans = i + 1;
// // 			}
// // 		}
// // 	}
// // 	cout << ans << endl;
// // }
// void solve() {
// 	int n, m; cin >> n >> m;
// 	vector<pair<int, int>> v;
// 	for (int i = 0; i < m; i++) {
// 		int a, b; cin >> a >> b;
// 		v.pb(make_pair(a, b));
// 	}
// 	int c = -1;
// 	debug(v)
// 	int maxi = v[0].ff;
// 	for (int i = 0; i < m ; ++i)
// 	{
// 		if (maxi < v[i].ss) {
// 			maxi = v[i].ss;
// 			c++;
// 		}
// 		else if (maxi <= v[i].ss) {
// 			c--;
// 			maxi = v[i].ff;
// 		}
// 		else {
// 			break;
// 		}
// 	}
// 	debug(maxi)
// 	debug(c)
// 	if (!c) cout << -1 << endl;
// 	else cout << c << endl;
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
// 	int n; cin >> n;
// 	vi v(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> v[i];
// 	set<int>c(all(v));
// 	if ((sz(c) == 1) and n > 1) {
// 		cout << 1 << endl;
// 	}
// 	else if (v[0] == maxe(v)) {
// 		cout << 0 << endl;
// 	}
// 	else {
// 		cout << (maxe(v) + 1 - v[0]) << endl;
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
// #define bl cout<<endl;
// #define bl_ cerr<<endl;
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
// 	int n; cin >> n;
// 	set<int>s;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int x; cin >> x;
// 		s.insert(x);
// 	}
// 	auto num = *(s.begin());
// 	for (auto it = s.begin(); it != s.end(); it++)
// 	{
// 		debug(*it)
// 		debug(num)
// 		if (*it != num) {
// 			cout << num << endl;
// 			break;
// 		}
// 		num++;

// 	}

// }
/*------------------------------------------------------------------------------------------------------------------*/
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
// 	// int N, M;
// 	// cin >> N >> M;
// 	// vector<string> S(N);
// 	// for (int i = 0; i < N; i++) {
// 	// 	cin >> S[i];
// 	// }

// 	// vector<pair<int, int>> code1;
// 	// for (int n = 0; n < N - 2; n++) {
// 	// 	for (int m = 0; m < M - 2; m++) {
// 	// 		if (S[n][m] == '.' && S[n + 1][m] == '.' && S[n + 2][m] == '.' && S[n + 1][m + 1] == '.') {
// 	// 			code1.push_back(make_pair(n, m));
// 	// 		}
// 	// 	}
// 	// }

// 	// vector<pair<int, int>> code2;
// 	// for (int i = 0; i < code1.size(); i++) {
// 	// 	for (int j = 0; j < code1.size(); j++) {
// 	// 		if (i < j && code1[j].first - code1[i].first == 6 && code1[j].second - code1[i].second == 6) {
// 	// 			code2.push_back(code1[i]);
// 	// 		}
// 	// 	}
// 	// }

// 	// vector<pair<int, int>> result;
// 	// for (int i = 0; i < code2.size(); i++) {
// 	// 	int n = code2[i].first;
// 	// 	int m = code2[i].second;
// 	// 	if (S[n][m + 3] == '.' && S[n + 1][m + 3] == '.' && S[n + 2][m + 3] == '.' && S[n + 3][m + 3] == '.' &&
// 	// 	                S[n + 3][m] == '.' && S[n + 3][m + 1] == '.' && S[n + 3][m + 2] == '.' &&
// 	// 	                S[n + 5][m + 5] == '.' && S[n + 5][m + 6] == '.' && S[n + 5][m + 7] == '.' && S[n + 5][m + 8] == '.' &&
// 	// 	                S[n + 6][m + 5] == '.' && S[n + 7][m + 5] == '.' && S[n + 8][m + 5] == '.') {
// 	// 		result.push_back(make_pair(n + 1, m + 1));
// 	// 	}
// 	// }

// 	// for (auto s : result) {
// 	// 	cout << s.first << " " << s.second << endl;
// 	// }


// 	int n, m; cin >> n >> m;
// 	vector<vector<char>> v(n, vector<char>(m));
// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < m; ++j)
// 			cin >> v[i][j];

// 	// vector<vector<char>> b(4, vector<char>(4));
// 	// b[0][0] = '#'; b[0][1] = '#'; b[0][2] = '#'; b[0][3] = '.';
// 	// b[1][0] = '#'; b[1][1] = '#'; b[1][2] = '#'; b[1][3] = '.';
// 	// b[2][0] = '#'; b[2][1] = '#'; b[2][2] = '#'; b[2][3] = '.';
// 	// b[3][0] = '.'; b[3][1] = '.'; b[3][2] = '.'; b[3][3] = '.';

// 	// vector<vector<char>>w(4, vector<char>(4));
// 	// w[5][5] = '.'; w[5][6] = '.'; w[5][7] = '.'; w[5][8] = '.';
// 	// w[6][5] = '.'; w[6][6] = '#'; w[6][7] = '#'; w[6][8] = '#';
// 	// w[7][5] = '.'; w[7][6] = '#'; w[7][7] = '#'; w[7][8] = '#';
// 	// w[8][5] = '.'; w[8][6] = '#'; w[8][7] = '#'; w[8][8] = '#';

// 	// int N = 0;
// 	// int M = 0;
// 	// cin >> N >> M;
// 	// vector<vector<char>> data(N, vector<char>(M));
// 	// for (int i = 0; i < N; i++) {
// 	// 	for (int j = 0; j < M; j++) {
// 	// 		cin >> data.at(i).at(j);
// 	// 	}
// 	// }
// 	// vector<vector<char>> sample = {
// 	// 	{'#', '#', '#', '.', ' ', ' ', ' ', ' ', ' '},
// 	// 	{'#', '#', '#', '.', ' ', ' ', ' ', ' ', ' '},
// 	// 	{'#', '#', '#', '.', ' ', ' ', ' ', ' ', ' '},
// 	// 	{'.', '.', '.', '.', ' ', ' ', ' ', ' ', ' '},
// 	// 	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
// 	// 	{' ', ' ', ' ', ' ', ' ', '.', '.', '.', '.'},
// 	// 	{' ', ' ', ' ', ' ', ' ', '.', '#', '#', '#'},
// 	// 	{' ', ' ', ' ', ' ', ' ', '.', '#', '#', '#'},
// 	// 	{' ', ' ', ' ', ' ', ' ', '.', '#', '#', '#'}
// 	// };

// 	// for (int i = 0; i < N - 8; i++) {
// 	// 	for (int j = 0; j < M - 8; j++) {
// 	// 		if (data.at(i).at(j) == sample.at(0).at(0)) {
// 	// 			int cnt = 0;
// 	// 			for (int k = 0; k < 9; k++) {
// 	// 				for (int l = 0; l < 9; l++) {
// 	// 					if ((data.at(i + k).at(j + l) == sample.at(k).at(l)) || !(((k < 4) && (l < 4)) || ((k > 4) && (l > 4)))) {
// 	// 						cnt++;
// 	// 					}
// 	// 				}
// 	// 			}
// 	// 			if (cnt == 81) {
// 	// 				cout << i + 1 << ' ' << j + 1 << endl;
// 	// 			}

// 	// 		}
// 	// 	}
// 	// }
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
// /*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.`h>
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
// 	int n; cin >> n;
// 	string s; cin >> s;
// 	unordered_set<char> a(all(s));
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (s.substr(i, 3) == "ABC" || s.substr(i, 3) == "BAC" || s.substr(i, 3) == "CAB" || s.substr(i, 3) == "CBA" || s.substr(i, 3) == "ACB" || s.substr(i, 3) == "BCA") {
// 			cout << i + 3 << endl;
// 			exit(0);
// 		}
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
/*------------------------------------------------------------------------------------------------------------------*/

// }
// vacation together
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
// 	int n, m; cin >> n >> m;
// 	vector<string> s(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> s[i];
// 	int maxi = 0;
// 	int keep = -1;
// 	for (int i = 0; i < m; ++i)
// 	{
// 		int c = 0;
// 		for (int j = 0; j < n; ++j)
// 		{
// 			if (s[j][i] == 'o') {
// 				c++;
// 				if (c == n) maxi++;
// 			}
// 			else {
// 				if (j <= n - 1) {
// 					maxi = 0;
// 					break;
// 				}
// 			}
// 			debug(i)
// 			debug(j)
// 			debug(s[j][i])
// 		}
// 		debug(maxi)
// 		keep = max(keep, maxi);
// 	}
// 	cout << keep << endl;
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
// 	vector<vector<int>> v(n, vector<int>(6));
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < 6; j++) {
// 			cin >> v[i][j];
// 		}
// 	}
// 	int maxi1 = 0, maxi2 = 0;
// 	for (int i = 0; i < n; i++) {
// 		maxi1 = 0;
// 		maxi2 = 0;
// 		for (int j = 3; j < 6; j++) {
// 			if (v[i][j] < v[i][j - 3] && j < 6)
// 				maxi1 = max(v[i][j], v[i][j - 3]);
// 			else if (v[i][j] > v[i][j - 3] && j < 6)
// 				maxi2 = max(v[i][j], v[i][j - 3]);
// 		}
// 		debug(maxi1)
// 		debug(maxi2)
// 		bl_
// 		if (maxi1 == maxi2)
// 			cout << "TIE" << endl;
// 		else if (maxi1 > maxi2 )
// 			cout << "ALICE" << endl;
// 		else if ( maxi2 > maxi1)
// 			cout << "BOB" << endl;
// 	}
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	// int t ; cin >> t;
// 	// t = 1;
// 	// while (t--) solve();
// 	solve();


// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
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
// 	int n, q, p; cin >> n >> q >> p;
// 	vi v(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> v[i];

// 	int mini = q - p;
// 	bool f = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (v[i] < mini) {
// 			debug(mini)
// 			mini = v[i];
// 			f = 1;
// 		}
// 		else {
// 			continue;
// 		}
// 	}
// 	if (f)cout << mini + p << endl;
// 	else cout << q << endl;
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
/*------------------------------------------------------------------------------------------------------------------*/
// VACATIONAL TOGETHER------->
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
// 	int n, m; cin >> n >> m;
// 	vector<pair<int, pair<int, vi>>> vec;
// 	for (int i = 0; i < n; ++i) {
// 		int t, p; cin >> t >> p;
// 		vi v(p);
// 		for (int j = 0; j < p; j++) cin >> v[j];
// 		vec.pb(make_pair(t, make_pair(p, v)));
// 	}
// 	bool f = 0;
// 	for (int i = 0; i < sz(vec); ++i)
// 	{
// 		int t = vec[i].ff;
// 		int p = vec[i].ss.ff;
// 		vi v = vec[i].ss.ss;
// 		if (t)
// 			for (int j = 0; j < p; ++j)
// 			{
// 				debug(v[j])
// 				// if (v[j] == v[i - 1]) {
// 				// 	f = 1;
// 				// }
// 			}
// 		bl_
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
// Rotate--->

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
// 			cerr << v[i][j] << " ";
// 		}
// 		bl_
// 	}
// }
// void solve() {
// 	int n; cin >> n;
// 	vector<vi>v(n, vector<int>(n));
// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < n; ++j)
// 			cin >> v[i][j];

// 	int temp = v[0][0];
// 	int cnt = 0, cv = 0;
// 	debug(v[0][0])
// 	debug(v[0][1])
// 	debug(v[1][1])
// 	debug(v[1][0])
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{

// 		}
// 	}
// 	bl_
// 	debug(v[0][0])
// 	debug(v[0][1])
// 	debug(v[1][1])
// 	debug(v[1][0])
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
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;


// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define sz(x) ((int)(x).size())
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif
// void solve( ) {
// 	ll n, m; cin >> n >> m;
// 	string x, s; cin >> x >> s;
// 	if (n < m) swap(n, m);
// 	ll c = -1;
// 	string d;
// 	bool f = 0;
// 	d = x;
// 	for (ll i = 0; i < 8; ++i) {
// 		if (d.find(s) != string::npos && sz(d) < 300) {
// 			f = 1;
// 			break;
// 		}
// 		d += d;
// 		c++;
// 	}
// 	if (f) cout << c + 1 << endl;
// 	else cout << -1 << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	ll t ; cin >> t;
// 	// t = 1;
// 	while (t--) {
// 		solve();
// 	}


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
// ROTATE MATRIX BY 90 DEGREE

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
// 	for (int i = 0; i < sz(v); ++i) {
// 		for (int j = 0; j < sz(v) ; ++j) {
// 			cerr << v[i][j] << " ";
// 		}
// 		bl_
// 	}
// }
// void solve() {
// 	int n;
// 	cin >> n;
// 	vector<vector<int>> v(n, vector<int>(n));
// 	// vector<vector<int>> a(n, vector<int>(n));
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++) {
// 			cin >> v[i][j];
// 		}
// 	}
// 	// ROTATED MATRIX BY 90 deg using the another matrix
// 	// for (int i = 0; i < n; ++i)
// 	// {
// 	// 	for (int j = 0; j < n; ++j)
// 	// 	{
// 	// 		a[j][n - i - 1] = v[i][j];
// 	// 	}
// 	// }

// 	// TRANSPOSE THE MATRIX-------------->
// 	// REVERSE THE MATRIX---------------->
// 	// TO ROTATE THE MATRIX BY 90 DEG---->

// 	// for (int i = 0; i < n; ++i) {
// 	// 	for (int j = 0; j < n; ++j) {
// 	// 		if (v[i][j] == v[j][j])continue;
// 	// 		if (j > i) swap(v[i][j], v[j][i]);
// 	// 		// either the i is less then j or
// 	// 		// j is less then i
// 	// 		// i< j then there would be upper triangular matric
// 	// 		// i >j then there would be lower triangular matric
// 	// 		// and just we have to reverse the matrix of the row wise
// 	// 	}
// 	// }
// 	// for (int i = 0; i < n; ++i)
// 	// {
// 	// 	reverse(all(v[i]));

// 	// }

// 	// SPIRAL MATRIX PRINTING-------->
// 	// int top = 0;
// 	// int right = n - 1;
// 	// int bottom = n - 1;
// 	// int left = 0;
// 	// vi ans;
// 	// // for single row and for single column
// 	// while (top <= bottom && left <= right) {
// 	// 	//left-> right
// 	// 	for (int i = left; i <= right; i++) {
// 	// 		ans.pb(v[top][i]);
// 	// 	} top++;
// 	// 	//top-> bottom
// 	// 	for (int i = top; i <= bottom; i++) {
// 	// 		ans.pb(v[i][right]);
// 	// 	} right--;
// 	// 	//right-> left

// 	// 	if (top <= bottom) { // if there was one row then left would n't be printed
// 	// 		for (int i = right; i >= left; i--) {
// 	// 			ans.pb(v[bottom][i]);
// 	// 		} bottom--;
// 	// 	}
// 	// 	// bottom ->top
// 	// 	if (left <= right) { // if there is left
// 	// 		for (int i = bottom; i >= top; i--) {
// 	// 			ans.pb(v[i][left]);
// 	// 		} left++;
// 	// 	}
// 	// }
// 	// debug(ans)
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
// void print2dvec(vector<vi> & v) {
// 	for (int i = 0; i < sz(v); ++i)
// 	{
// 		for (int j = 0; j < sz(v); ++j)
// 		{
// 			cerr << v[i][j] << " ";
// 		}
// 		bl_
// 	}
// }
// void solve() {
// 	int n ; cin >> n;
// 	vector<vector<int>> v(n, vector<int>(n));
// 	vector<vector<int>> b = v;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{
// 			cin >> v[i][j];
// 		}
// 	}

// 	// b[0][1] = v[0][0];
// 	// b[0][2] = v[0][1];
// 	// b[1][2] = v[0][2];

// 	// b[0][0] = v[1][0];
// 	// b[1][1] = v[1][1];
// 	// b[2][2] = v[1][2];

// 	// b[1][0] = v[2][0];
// 	// b[2][0] = v[2][1];
// 	// b[2][1] = v[2][2];
// 	// for (int i = 0; i < n; i++) {
// 	// 	for (int j = 0; j < n; j++) {
// 	// 		if (i == 0 && j != n - 1) {
// 	// 			b[i][j + 1] = v[i][j];
// 	// 		}
// 	// 		else if (i == n - 1 && j != 0) {
// 	// 			b[i][j - 1] = v[i][j];
// 	// 		}
// 	// 		else if (j == 0 && i != 0) {
// 	// 			b[i - 1][j] = v[i][j];
// 	// 		}
// 	// 		else if (j == n - 1 && i != n - 1) {
// 	// 			b[i + 1][j] = v[i][j];
// 	// 		}
// 	// 		else {
// 	// 			b[i][j] = v[i][j];
// 	// 		}
// 	// 	}
// 	// }
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++) {
// 			if (i == 0 && j != n - 1) {
// 				b[i][j + 1] = v[i][j];
// 			} else if (i == n - 1 && j != 0) {
// 				b[i][j - 1] = v[i][j];
// 			} else if (j == 0 && i != n - 1) {
// 				b[i + 1][j] = v[i][j];
// 			} else if (j == n - 1 && i != 0) {
// 				b[i - 1][j] = v[i][j];
// 			} else {
// 				b[i][j] = v[i][j];
// 			}
// 		}
// 	}
// 	debug(b);
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








// // at i = 0; j(0 < 3)
// // i, j---> i, j + 1
// // i, j---> i, j + 1
// // i, j---> i + 1, j

// // at i = 1; j(0 < 3)
// // i, j---> j, j
// // i, j---> j, j
// // i, j---> j, j

// // at i = 2; j(0 < 3)
// // i, j---> i - 1, j
// // i, j---> i, j - 1
// // i, j---> i + j - 1


/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// 	int a;
// 	vi v;
// 	while (cin >> a) v.pb(a);
// 	bool f = 1;
// 	debug(v)
// 	if (v[0] < 100  || v[0] > 675 || v[0] % 25 != 0) {
// 		f = 0;
// 	}
// 	else {
// 		for (int i = 1; i < sz(v); ++i)
// 		{
// 			if (((v[i] >= 100) and ( v[i] <= 675)) and (v[i] >= v[i - 1]) && v[i] % 25 == 0) {
// 			}
// 			else {
// 				f = 0; break;
// 			}
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

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define present__(container, element)(container.find(element) != container.end())
// #define vpresent__(container, element)(find(all(container), element) != container.end())
// /*----------------------------------------------------------------------*/

// void solve() {
// 	int n, m; cin >> n >> m;
// 	vector<string> v(n), b(m);
// 	for (int i = 0; i < n; ++i) {
// 		cin >> v[i];
// 	}
// 	for (int i = 0; i < m; ++i) {
// 		cin >> b[i];
// 	}
// 	vector<int> p(m + 1);
// 	for (int i = 0; i <= m; i++)
// 		cin >> p[i];
// 	int temp = p[0];
// 	int ans = 0;
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			if (v[i] == b[j]) {
// 				temp = p[j + 1];
// 				break;
// 			}
// 		}
// 		ans += temp;
// 	}
// 	cout << ans << endl;

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

// void solve() {
// 	ll n; cin >> n;
// 	ll a;
// 	vi v;
// 	while (cin >> a) v.pb(a);
// 	ll sum = 0;
// 	ll k = 1;
// 	for (ll i = 1; i <= 7 * n; ++i)
// 	{
// 		sum += v[i - 1];
// 		if (i == 7 * k) {
// 			cout << sum << endl;
// 			k++;
// 			sum = 0;
// 		}
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
// // for every m size of the string there should be conditionn satified
// // (m + 1 -i )
// bool is_palindrome(string s) {
// 	return equal(all(s) - sz(s) / 2, s.rbegin());
// }
// void solve() {
// 	int n; cin >> n;
// 	vector<string>s(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> s[i];

// 	string t = "";
// 	bool f = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		t.append(s[i]);
// 		for (int j = i + 1; j < n; j++) {
// 			t.append(s[j]);
// 			if (is_palindrome(t) && sz(t) > 1) {
// 				f = 1;
// 				for (int k = 0; k < sz(t); k++) {
// 					debug(t[k])
// 					if (t[k] != t[sz(t) - k - 1]) f = 0;
// 				}
// 			}
// 			if (f) break;
// 			else {
// 				t = "";
// 				t.append(s[i]);
// 			}
// 		}
// 		t = "";
// 	}
// 	if (f) cout << "Yes" << endl;
// 	else cout << "No" << endl;
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
/*------------------------------------------------------------------------------------------------------------------*/
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
// 	int n; cin >> n;
// 	string s, p; cin >> s;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < 2; ++j)
// 		{
// 			p += s[i];
// 		}
// 	}
// 	debug(p)

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
// }c
/*------------------------------------------------------------------------------------------------------------------*/


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
// 	pair<string, int> mp;
// 	vi v;
// 	int temp;
// 	int  i = 0;
// 	while (cin >> temp) {
// 		v.pb(temp);
// 		mp = make_pair(to_string(temp), i);
// 		i++;
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
// 	int  n; cin >> n;
// 	vi v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	bool f = 1;
// 	for (int i = 1; i < n; ++i)
// 	{
// 		if (v[i] != v[i - 1]) f = 0;
// 	}
// 	if(f) cout<<"Yes"<<endl;
// 	else cout<<"No"<<endl;
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
// // bool f(ll p) {
// // 	while (p % 2 == 0) {
// // 		p /= 2;
// // 	}
// // 	while (p % 3 == 0) {
// // 		p /= 3;
// // 	}
// // 	return p == 1;
// // }
// bool f(ll p) {
// 	while ((p & 1) == 0) {
// 		p >>= 1;
// 	}
// 	while (p % 3 == 0) {
// 		p /= 3;
// 	}
// 	return p == 1;
// }

// void solve() {
// 	ll n; cin >> n;
// 	if (f(n))cout << "Yes" << endl;
// 	else cout << "No" << endl;
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
/*------------------------------------------------------------------------------------------------------------------*/
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
// 	int n; cin >> n;
// 	string p ; cin >> p;
// 	string ama = p;
// 	vector<string>s;
// 	string d;
// 	while (cin >> d) {
// 		s.pb(d);
// 	}
// 	debug(s)
// 	bool f = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (p == s[i]) {
// 			cout << i + 1 << endl;
// 			f = 1;
// 		}
// 		for (int j = i + 1; j < n; ++j)
// 		{
// 			if (p.find(s[j]) != string::npos) {
// 				cout << j + 1 << endl;
// 				f = 0;
// 			}
// 			if (sz(ama) == sz(s[j]) + 1) {
// 				debug(s[j])
// 			}
// 		}
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
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Last visited array
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

// void lastVisitedIntegers(vector<string>& words) {
// 	string t;
// 	int index = 0;
// 	vector<string> d;
// 	bool f = 0;
// 	int c = 0;
// 	for (int i = 0; i < (int) words.size(); ++i)
// 	{
// 		if (!f) {
// 			index = i;
// 		}
// 		if (words[i] == "prev" && words[i - 1] != "prev") {
// 			c++;
// 			d.pb(to_string(index));
// 			f = 1;
// 			index = index - c;
// 		}
// 		else {
// 			d.pb(to_string(i));
// 		}
// 	}
// 	debug(d)
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/
// 	vector<string> v;
// 	string a;
// 	while (cin >> a) v.pb(a);
// 	lastVisitedIntegers(v);



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
// 	int n , m; cin >> n >> m;
// 	vector<string> d(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> d[i];

// 	vector<pair<vector<string>, vi>>vt;
// 	vector<string>dd(m);
// 	vi qqq;
// 	vi pp(m);
// 	for (int i = 0; i < m; ++i)
// 		cin >> dd[i];

// 	int temp = 0;
// 	cin >> temp;
// 	for (int i = 0; i < m; i++) {
// 		cin >> pp[i];
// 	}
// 	vt.pb(make_pair(dd, pp));
// 	int sum = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < m; ++j)
// 		{
// 			if (d[i] == vt[0].ff[j]) {
// 				qqq.pb(vt[0].ss[j]);
// 				break;
// 			}
// 			if (j == m - 1) {
// 				qqq.pb(temp);
// 			}
// 		}
// 	}
// 	cout << sumarr(qqq) << endl;
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
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// base 2
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
// // 	ll n;
// // 	ll sq = 0;
// // 	ll i = 0;
// // 	while (cin >> n) {
// // 		if (n == 1) {
// // 			sq += pow(2, i);
// // 		}
// // 		i++;
// // 	}
// // 	cout << sq << endl;
// // }
// void solve() {
// 	vector<int> v; ll n; ll ans = 0;
// 	while (cin >> n)
// 		v.push_back(n);
// 	for (int i = 0; i < (int) v.size(); ++i)
// 	{
// 		if (v[i] == 1)
// 		{
// 			ans += pow(2, i);
// 		}
// 	}
// 	cout << ans; bl
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
// 	int abc = n;
// 	int d = 1;
// 	int c = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		d = abc / 5;
// 		c = d * 5;
// 	}
// 	if (c < n && c + 2 < n) {
// 		cout << (d + 1) * 5;
// 	}
// 	else if (c <= n || c + 3 > n) cout << c << endl;
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
// 	vector<pair<char, int>>dk;
// 	char a, b; cin >> a >> b;
// 	dk.pb(make_pair('A', 0));
// 	dk.pb(make_pair('B', 3));
// 	dk.pb(make_pair('C', 4));
// 	dk.pb(make_pair('D', 8));
// 	dk.pb(make_pair('E', 9));
// 	dk.pb(make_pair('F', 14));
// 	dk.pb(make_pair('G', 23));
// 	int sum = 0;
// 	int sum2 = 0;
// 	for (auto & i : dk) {
// 		char c = toupper(a);
// 		char d = toupper(b);
// 		if (a == c) {
// 			if (i.ff == c) {
// 				sum = i.ss;
// 			}
// 		}
// 		if (b == d) {
// 			if (i.ff == d) {
// 				sum2 = i.ss;
// 			}
// 		}
// 	}
// 	cout << (sum2 > sum ? sum2 - sum : sum - sum2) << endl;
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
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// 	string s; cin >> s;
// 	string t;
// 	if (s == "()") {
// 		cout << "No" << endl;
// 		return;
// 	}
// 	int i = 0; bool ch = 0;
// 	while (i < sz(s) - 1) {
// 		if (s.substr(i, 2) == ")(") {
// 			ch = 1; break;
// 		}
// 		i++;
// 	}
// 	if (ch) {
// 		for (int i = 0; i < sz(s); ++i)
// 			t += "(";
// 		for (int i = 0; i < sz(s); ++i)
// 			t += ")";
// 		cout << "Yes\n" << t << endl;

// 	}
// 	else {
// 		for (int i = 0; i < sz(s); ++i)
// 			t += "()";
// 		if (t == s) cout << "No" << endl;
// 		else cout << "Yes\n" << t << endl;
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
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// 	ll n; cin >> n;
// 	vi a(n), b(n);
// 	for (ll i = 0; i < n; ++i)
// 		cin >> a[i];
// 	for (ll i = 0; i < n; ++i)
// 		cin >> b[i];

// 	ll mina = mine(a);
// 	ll minb = mine(b);

// 	ll suma = 0;
// 	ll sumb = 0;

// 	for (ll i = 0; i < n; ++i)
// 		suma += a[i];
// 	for (ll i = 0; i < n; ++i)
// 		sumb += b[i];

// 	sumb += mina * n;
// 	suma += minb * n;
// 	if (suma < sumb) {
// 		cout << suma << endl;
// 	}
// 	else cout << sumb << endl;
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
/*------------------------------------------------------------------------------------------------------------------*/
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

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/




// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/

// make it zero codeforces ------->
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
// 	int n; cin >> n;
// 	vi v(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> v[i];

// 	if (n % 2 == 0) {
// 		cout << "2" << endl;
// 		cout << "1" << " " << n << endl;
// 		cout << "1" << " " << n << endl;
// 	}
// 	else {
// 		cout << "4" << endl;
// 		cout << "1" << " " << "2" << endl;
// 		cout << "1" << " " << "2" << endl;
// 		cout << "2" << " " << n << endl;
// 		cout << "2" << " " << n << endl;
// 	}
// 	return;
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
/*------------------------------------------------------------------------------------------------------------------*/
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
// 	int n; cin >> n;
// 	string s; cin >> s;
// 	int curr = 1;
// 	int ans = 1;
// 	for (int i = 1; i < n; ++i)
// 	{
// 		debug(s[i])
// 		debug(s[i - 1])
// 		if (s[i] != s[i - 1]) curr = 1;
// 		else curr++;
// 		ans = max(curr, ans);
// 		bl_
// 	}
// 	cout << ans + 1 << endl;
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
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/


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
// bool allequal(vl &v) {
// 	for (int i = 1; i < sz(v); ++i)
// 		if (v[i] != v[i - 1]) return 0;
// 	return 1;
// }
// ll sumarrrr(vl & v) {
// 	ll sum = 0;
// 	for (int i = 0; i < sz(v); ++i)
// 		sum += v[i];
// 	return sum;
// }
// void solve() {
// 	int n; cin >> n;
// 	vl v(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> v[i];

// 	ll sum = sumarrrr(v);
// 	debug(sum)
// 	if (n < 3) cout << "No" << endl;
// 	else {
// 		if (allequal(v)) {
// 			cout << "No" << endl;
// 		}
// 		else if (n >= 3) {
// 			if (sum < 6) cout << "No" << endl;
// 			else if (sum == 6 && n == 3)cout << "Yes" << endl;
// 			else if (sum == 6 && n > 3)cout << "No" << endl;
// 			else cout << "Yes" << endl;
// 		}
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
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
//-------------------- AllSorting----------
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
// int partition(vi &v , int low, int high) {
// 	int pivot = v[low];
// 	int index = low + 1;
// 	for (int i = low + 1; i <= high; ++i)
// 	{
// 		if (v[i] <= pivot) {
// 			swap(v[i], v[index]);
// 			index++;
// 		}
// 	}
// 	swap(pivot, v[index - 1]);
// 	return index - 1;
// }
// void quickSort(vi & v , int low, int high) {
// 	if (low < high) {
// 		int pivotIndex = partition(v, low, high);
// 		quickSort(v, low, pivotIndex - 1);
// 		quickSort(v, pivotIndex + 1, high);
// 	}
// }
// void mergeAll(vi & v, int low, int mid, int high) {
// 	int pos1 = low;
// 	int pos2 = mid + 1;
// 	vi t;
// 	while (pos1 <= mid && pos2 <= high) {
// 		if (v[pos1] <= v[pos2]) t.pb(v[pos1++]);
// 		else t.pb(v[pos2++]);
// 	}
// 	while (pos1 <= mid) t.pb(v[pos1++]);
// 	while (pos2 <= high) t.pb(v[pos2++]);
// 	copy(all(t), v.begin() + low);
// }
// void mergeSort(vi & v, int low , int high) {
// 	if (low == high) return;
// 	int mid = (low + high) / 2;
// 	mergeSort(v, low, mid);
// 	mergeSort(v, mid + 1, high);
// 	mergeAll(v, low, mid, high);
// }
// void insertionSort(vi & v) {
// 	for (int i = 1; i < sz(v); ++i) {
// 		int key = v[i];
// 		int j = i - 1;
// 		while (j >= 0 && v[j] > key) {
// 			v[j + 1] = v[j];
// 			j--;
// 		}
// 		v[j + 1] = key;
// 	}
// }
// void solve() {
// 	int n; cin >> n;
// 	vi v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int low = 0;
// 	int high = n - 1;
// 	// quickSort(v, low, high);
// 	// mergeSort(v, low, high);
// 	insertionSort(v);
// 	debug(v)
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
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sz(x) ((int)(x).size())
// #define all(x) (x).rbegin(), (x).rend()
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
// 	int n; cin >> n;
// 	vector<string> s(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> s[i];
// 	vector<pair<int, int>> t;
// 	int c1 = 0, c2 = 0, maxi1 = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{
// 			if (s[i][j] == 'o') {
// 				c1++;
// 			}
// 			else if (s[i][j] == 'x') {
// 				c2++;
// 			}
// 			maxi1 = c1;
// 		}
// 		t.pb(make_pair(maxi1, i + 1));
// 		c1 = 0;
// 	}
// 	vi ttt;
// 	sort(t.begin(), t.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
// 		if (a.ff == b.ff) {
// 			return a.ss > b.ss;
// 		}
// 		return a.ff < b.ff;
// 	});
// 	debug(t)
// 	for (const auto& pair : t) {
// 		ttt.pb(pair.ss);
// 	}
// 	reverse(all(ttt));
// 	debug(ttt)
// 	for (int i = 0; i < (int)ttt.size(); ++i)
// 		cout << ttt[i] << " ";
// 	cout << endl;
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
// #define bl cerr<<"\n";
// #define en cout<<"\n";
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
// 	string s ; cin >> s;
// 	bool f = 0;
// 	for (int i = 0; i < sz(s); ++i)
// 	{
// 		if (i & 1 && s[i] == '1') {
// 			f = 1;
// 			break;
// 		}
// 	}
// 	if (f)cout << "No" << endl;
// 	else cout << "Yes" << endl;

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
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// discord
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
// #define bl cerr<<"\n";
// #define en cout<<"\n";
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
// 	int n, m; cin >> n >> m;
// 	vector<vector<int>>v(n, vector<int>(m));
// 	// vector<set<pair<int, int>>>t;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < m; ++j)
// 		{
// 			cin >> v[i][j];
// 		}
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
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define bl cerr<<"\n";
// #define en cout<<"\n";
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
// 	int n, m; cin >> n >> m;
// 	vector<string>v(n);
// 	vector<string>d;
// 	for (int i = 0; i < n; ++i)
// 		cin >> v[i];

// 	string a = "snuke", b = "ekuns";
// 	vector<pair<int, int>>aman;
// 	bool f = 0;
// 	int keep = 0;
// 	int keep2 = 0;
// 	// horizontal checking
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int k = 0; k < m; ++k)
// 		{
// 			// debug(v[i].substr(k, 5))
// 			if (v[i].substr(k, 5) == a || v[i].substr(k, 5) == b) {
// 				f = 1;
// 				keep = i;
// 				keep2 = k + 1;
// 			}
// 			if (k == m - 5) break;
// 		}
// 	}
// 	// inserting col wise
// 	string temp;
// 	if (!f) {
// 		for (int i = 0; i < n; ++i)
// 		{
// 			for (int j = 0; j < m; ++j)
// 			{
// 				temp.pb(v[j][i]);
// 				if (j == n - 1) {
// 					d.pb(temp);
// 					temp = "";
// 				}
// 			}
// 		}
// 	}
// 	// debug(d)
// 	// vertical checking
// 	if (!f) {
// 		for (int i = 0; i < n; ++i)
// 		{
// 			for (int k = 0; k < m; ++k)
// 			{
// 				// debug(d[i].substr(k, 5))
// 				if (d[i].substr(k, 5) == a || d[i].substr(k, 5) == b) {
// 					keep = i;
// 					keep2 = k + 1;
// 					f = 1;
// 				}
// 				if (k == m - 5) break;
// 			}
// 			// bl
// 		}
// 	}
// 	string temp2;
// 	debug(f)
// 	if (!f) {
// 		for (int i = 0; i < n; ++i)
// 		{
// 			for (int j = 0; j < m; ++j)
// 			{
// 				if (i == j) {
// 					temp2.pb(v[i][j]);
// 				}
// 			}
// 			if (temp2 == a || temp2 == b) {
// 				f = 1;
// 				keep = i;
// 			}
// 		}
// 		keep2 = keep + 1;
// 	}
// 	// debug(temp2)
// 	// diagonal checking
// 	if (f) {
// 		debug(keep + 1)
// 		debug(keep2)
// 		if (keep2 == n) {
// 			for (int i = keep2; i >= 1; --i)
// 				aman.pb(make_pair(i, i));
// 		}
// 		else {
// 			for (int i = keep2; i < n ; ++i) {
// 				aman.pb(make_pair(keep + 1, i));
// 			}
// 		}
// 	}
// 	debug(aman)
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
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define bl cerr<<"\n";
// #define en cout<<"\n";
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
// 	int size; cin >> size;
// 	vector<int>a(size);
// 	for (int i = 0; i < size; i++)
// 		cin >> a[i];


// 	int low = 0;
// 	int ma = 100, index = 0;
// 	for (int i = 1; i < size; ++i)
// 	{
// 		int diff = a[i] - a[i - 1];
// 		ma = min(diff, ma);
// 		if (ma >= diff) {
// 			index = i - 1;
// 		}
// 	}
// 	debug(index)
// 	bl


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
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define takearr(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define parr(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n; cin >> n;
// 	vi v(n);
// 	takearr(v, n);
// 	parr(v, n);
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
/*------------------------------------------------------------------------------------------------------------------*/

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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define takearr(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define parr(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n; cin >> n;
// 	vi v(n);
// 	loop(i, 0, n) cin >> v[i];
// 	loop(i, 0, n) cout << v[i] << " ";
// 	en
// 	parrauto(v);
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define takearr(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define parr(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int x, k; cin >> x >> k;
// 	while (1) {
// 		if (digit_sum(x) % k == 0) {
// 			cout << x << endl;
// 			break;
// 		}
// 		x++;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define ppb pop_back
// #define pb push_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define takearr(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define parr(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	string s; cin >> s;
// 	int sum = 4;
// 	if (s[0] - '0' == 0) s[0] = 10 + '0';
// 	if (s[0] - '0' != 1)sum += (s[0] - '0') - 1;
// 	debug(sum)
// 	int b = 3;
// 	int i = 1;
// 	int diff = 0;
// 	while (b--) {
// 		if ((s[i] - '0' ) == 0) {
// 			s[i] = 10 + '0';
// 		}
// 		diff += abs((s[i - 1] - '0') - (s[i] - '0'));
// 		i++;
// 	}
// 	cout << sum + diff << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define takearr(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define parr(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n, k; cin >> n >> k;
// 	string s; cin >> s;
// 	// for (int i = 0; i < n; ++i)
// 	// 	++mp[s[i] - '0'];
// 	// for (auto i : s) ++mp[i - '0'];
// 	map<char, int>mp;
// 	for (char c : s) mp[c]++;
// 	debug(mp)
// 	for (auto & t : mp) {
// 		if (t.ss % 2 == 1 ) {
// 			k--;
// 		}
// 	}
// 	if (k < -1)cout << "No" << endl;
// 	else cout << "Yes" << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// // 	int a, b; cin >> a >> b;
// // 	if (a > b && a - b <= 3)cout << "Yes" << endl;
// // 	else if (a < b && b - a <= 2) cout << "Yes" << endl;
// // 	else cout << "No" << endl;
// // }
// /*------------------------------------------------------------------------------------------------------------------*/

// void solve() {
// 	string s;
// 	cin >> s;
// 	int n = stoi(s);
// 	while (1) {
// 		int f = n / 100;
// 		int s = (n / 10) % 10;
// 		int t = n % 10;
// 		debug(f)
// 		debug(s)
// 		debug(t)
// 		bl
// 		if (f * s == t) {
// 			cout << n << endl;
// 			break;
// 		}
// 		n++;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/
// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// bool checking(vi& v) {
// 	if (v[0]*v[1] == v[2]) return 1;
// 	return 0;
// }
// void solve() {
// 	int n; cin >> n;
// 	vi v;
// 	while (1) {
// 		int p = n;
// 		int tt = 3;
// 		while (tt--) {
// 			int digit = p % 10;
// 			p /= 10;
// 			debug(digit)
// 			v.pb(digit);
// 		}
// 		reverse(all(v));
// 		bool f = checking(v);
// 		if (f) {
// 			loop(i, 0, sz(v))cout << v[i];
// 			return;
// 		}
// 		else {
// 			v.clear();
// 		}
// 		n++;
// 	}

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// // 	int n ; cin >> n;
// // 	vector<int> v(n);
// // 	set<int>s;
// // 	for (int i = 0; i < n; ++i)
// // 	{
// // 		cin >> v[i];
// // 	}
// // 	int temp1 = 0, cnt = 0;
// // 	for (int i = 0; i < n; ++i)
// // 	{
// // 		if (i == 0) {
// // 			temp1 = v[i];
// // 		}
// // 		if (temp1 == v[i]) {
// // 			cnt++;
// // 		}
// // 		s.insert(v[i]);
// // 	}
// // 	debug(s)
// // 	debug(cnt)
// // 	if (sz(s) >= 3) {
// // 		cout << "No" << endl;
// // 	}
// // 	else if (sz(s) == 1) {
// // 		cout << "Yes" << endl;
// // 	}
// // 	else {
// // 		int diff = (abs(n + cnt));
// // 		debug(diff)
// // 		if (sz(s) + cnt <= diff) {
// // 			cout << "Yes" << endl;
// // 		}
// // 		else {
// // 			cout << "No" << endl;
// // 		}
// // 	}
// // 	bl
// // }
// // void solve() {
// // 	int n; cin >> n;
// // 	vi v(n);
// // 	inputVec(v, n);
// // 	map<int, int>mp;
// // 	for (int i = 0; i < n; ++i)
// // 		mp[v[i]]++;

// // 	vi t;
// // 	if (sz(mp) >= 3)cout << "No" << endl;
// // 	else {
// // 		for (auto e : mp) {
// // 			t.pb(e.ss);
// // 		}
// // 		if (abs(t[0] - t[1]) <= 1) {
// // 			cout << "Yes" << endl;
// // 		}
// // 		else cout << "No" << endl;
// // 	}
// bool chec(string s) {
// 	for (int i = 1; i < sz(s); ++i)
// 	{
// 		if (s[i] == s[i - 1])
// 		{
// 			return false;
// 		}
// 	}
// 	return true;
// }
// void solve() {
// 	int n, m; cin >> n >> m;
// 	string t, s; cin >> t >> s;
// 	int f1 = s[0], l1 = s[m - 1];
// 	if (n == 1) {
// 		cout << "yes" << endl;
// 		return;
// 	}
// 	if (chec(t)) {
// 		cout << "Yes" << endl; return;
// 	}
// 	if (!chec(s)) {
// 		cout << "No" << endl; return;
// 	}
// 	else {
// 		for (int i = 1; i < n; ++i)
// 		{
// 			if (f1 == t[i - 1] && l1 == t[i]) {
// 				cout << "No" << endl;
// 				return;
// 			}
// 		}
// 		cout << "yes" << endl;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	vi v(n);
// 	inputVec(v, n);
// 	bool f = 0;
// 	for (int i = 1; i < n; ++i)
// 	{
// 		if ((i != 1 && i != 2 && i != 4 && i != 8 && i != 16)) {
// 			debug(v[i])
// 			debug(i)
// 			debug(i - 1)
// 			debug(v[i - 1])
// 			if (v[i] < v[i - 1]) {
// 				f = 1;
// 				break;
// 			}
// 		}
// 	}
// 	bl
// 	bl
// 	if (!f)cout << "yes" << endl;
// 	else cout << "No" << endl;
// 	// set<int>disEle;
// 	// for (int i = 0; i < n; ++i)
// 	// 	disEle.insert(v[i]);

// 	// debug(sz(disEle));
// 	// debug(sz(v));
// 	// if (sz(disEle) >= n) {
// 	// 	cout << "yes" << endl;
// 	// }
// 	// else cout << "No" << endl;
// 	// bl

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) {
// 		debug(t)
// 		solve();
// 	}

// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n; cin >> n;
// 	vi v(n);
// 	vi vec;
// 	inputVec(v, n);
// 	vec.pb(v[0]);
// 	for (int i = 0; i < n - 1; ++i)
// 	{
// 		int diff = abs(v[i] - v[i + 1]);
// 		if (diff > 1 && v[i] < v[i + 1]) {
// 			int dd = v[i] + 1;
// 			for (int j = 0; j < diff; ++j)
// 				vec.pb(dd++);
// 		}
// 		if (diff > 1 && v[i] > v[i + 1]) {
// 			int temp = v[i] ;
// 			for (int j = 0; j < diff; ++j)
// 				vec.pb(--temp);
// 		}
// 		else if (diff == 1 && v[i] < v[i + 1] || v[i] > v[i + 1]) {
// 			vec.pb(v[i + 1]);
// 		}
// 		bl
// 	}
// 	outputVec(vec, sz(vec));
// 	en
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// B atcoder - Same Map in the RPG world
// vertical shift and horizontal shift

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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int a, b; cin >> a >> b;
// 	vector<string>s(a), t(a);
// 	vi vt1, vt2, vtt1, vtt2;
// 	// counting horizontal
// 	for (int i = 0; i < a; ++i) {
// 		cin >> s[i];
// 		int temp = i, cnt = 0;
// 		for (int j = 0; j < b; ++j)
// 		{
// 			if (s[i][j] == '#') {
// 				cnt++;
// 			};
// 			if (j == b - 1)vt1.pb(cnt);
// 		}
// 	}
// 	for (int i = 0; i < b; ++i)
// 	{
// 		int cnt = 0;
// 		for (int j = 0; j < a; ++j)
// 		{
// 			if (s[j][i] == '#') {
// 				cnt++;
// 			}
// 			if (j == a - 1) {
// 				vtt1.pb(cnt);
// 			}
// 		}
// 	}
// 	// counting horizontal
// 	for (int i = 0; i < a; ++i) {
// 		cin >> t[i];
// 		int temp = i, cnt = 0;
// 		for (int j = 0; j < b; ++j)
// 		{
// 			debug(t[i][j])
// 			if (t[i][j] == '#') {
// 				cnt++;
// 			};
// 			if (j == b - 1)vt2.pb(cnt);
// 		}
// 	}
// 	for (int i = 0; i < b; ++i)
// 	{
// 		int cnt = 0;
// 		for (int j = 0; j < a; ++j)
// 		{
// 			if (t[j][i] == '#') {
// 				cnt++;
// 			}
// 			if (j == a - 1) {
// 				vtt2.pb(cnt);
// 			}
// 		}
// 	}
// 	sort(all(vt1));
// 	sort(all(vt2));
// 	sort(all(vtt1));
// 	sort(all(vtt2));
// 	if ((vt1 == vt2 ) && ( vtt1 == vtt2)) {
// 		cout << "Yes" << endl;
// 	}
// 	else cout << "No" << endl;
// 	debug(vtt1)
// 	debug(vtt2)
// 	debug(vt1)
// 	debug(vt2)
// 	debug(s)
// 	debug(t)

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// B Trick - Taking---
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	ll n, m; cin >> n >> m;
// 	vl c(n);
// 	vl r(n);
// 	inputVec(c, n);
// 	inputVec(r, n);
// 	if (find(all(c), m) == c.end())m = c[0];
// 	int ind = 0;
// 	int maxi = -1;
// 	debug(m)
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (c[i] != m)continue;
// 		if (maxi < r[i]) {
// 			maxi = r[i];
// 			ind = i + 1;
// 		}
// 			debug(maxi)
// 		debug(r[i])
// 		debug(i)
// 		debug(ind)
// 	}
// 	cout << ind << endl;

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// div 2 codeforces------>
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int a, b, c; cin >> a >> b >> c;
// 	if (a + c >= b) cout << a + c << endl;
// 	else cout << (2 * c + a) << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Coloring matrix  :
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int x, y, z; cin >> x >> y >> z;
// 	if (y > x )cout << y << endl;
// 	else if (x + z == y)cout << y << endl;
// 	else cout << (x + z) + ( 2 * (y - (x + z))) << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// coloring matrix
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// void antiRotate(vector<vector<int>>&v) {
// 	vi c;
// 	for (int i = 0; i < sz(v); ++i)
// 		for (int j = sz(v) - 1; j >=  0; --j)
// 			c.pb(v[i][j]);
// 	int k = 0;
// 	for (int i = 0; i < sz(v); ++i)
// 		for (int j = 0; j < sz(v); ++j)
// 			v[j][i] = c[k++];
// }
// bool checking(vector<vi> & v, vector<vi> & d ) {
// 	debug(d)
// 	debug(v)
// 	for (int i = 0; i < sz(v); ++i)
// 	{
// 		for (int j = 0; j < sz(v); ++j)
// 		{
// 			int diff = d[i][j] - v[i][j];
// 			debug(diff)
// 			if (v[i][j] == 0)continue;
// 			if (diff == -1) {
// 				return 0;
// 			}
// 		}
// 	}
// 	return 1;
// }
// void solve() {
// 	int n ; cin >> n;
// 	vector<vector<int>>v(n, vector<int>(n));
// 	vector<vector<int>>d(n, vector<int>(n));
// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < n; ++j)
// 			cin >> v[i][j];

// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < n; ++j) {
// 			cin >> d[i][j];
// 		}
// 	int t = 3;
// 	bool f = 0;
// 	while (t--) {
// 		debug(t)
// 		antiRotate(v);
// 		if (checking(v, d))f = 1;
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
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// chess960 atcoder begineer contest
// find bkb nkn between the r and r

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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	const int n = 8;
// 	string s;
// 	cin >> s;
// 	map<char, vector<int>> mp;
// 	for (int i = 0; i < n; i++) {
// 		mp[s[i]].push_back(i);
// 	}
// 	debug(mp)
// 	bool t = 1;
// 	t &= mp['B'][0] % 2 != mp['B'][1] % 2; // if not then false .. should be different
// 	t &= mp['R'][0] < mp['K'][0] and mp['K'][0] < mp['R'][1];
// 	cout << (t ? "Yes\n" : "No\n");
// }
// // void solve() {
// // 	string s; cin >> s;
// // 	bool f = 1, t = 1;
// // 	int cnt = 0;
// // 	for (int i = 0; i < 8; ++i)
// // 	{
// // 		if (i < 5) {
// // 			if (s.find("R") != string::npos) {
// // 				f = 0;
// // 				if (!f) {
// // 					if (s.find("B") != string::npos) {
// // 						f = 0;
// // 					}
// // 					else f = 1;
// // 				}
// // 			}
// // 		}
// // 		if (s.find("NN") != string::npos || s.find("NQN") != string::npos)f = 1;
// // 		if ((s[0] == 'K' || s[1] == 'K' || s[6] == 'K' || s[7] == 'K')) {
// // 			t = 0;
// // 		}
// // 	}
// // 	if (!f and t) {
// // 		cout << "Yes" << endl;
// // 	}
// // 	else cout << "No" << endl;
// // }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	vector<string>s(8);
// 	for (int i = 0; i < 8; ++i)
// 		cin >> s[i];

// 	vector<pair<char, int>>p;
// 	vector<vector<pair<char, int>>>t;
// 	for (int i = 0; i < 8; ++i)
// 	{
// 		for (int j = 8; j > 0; --j)
// 			if (j >= 0)p.pb(make_pair(char(i + 'a'), 8 - j + 1));
// 		for (int k = 0; k < 1; ++k)
// 			t.pb(p);
// 		p.clear();
// 	}
// 	debug(t)
// 	vector<pair<int, int>>pp;
// 	for (int i = 0; i < 8; ++i)
// 		for (int j = 0; j < 8; ++j)
// 			if (s[i][j] == '*') {
// 				pp.pb(make_pair(j + 1, 8 - i));
// 			}
// 	string abc;
// 	for (int i = 1; i <= 8; ++i)
// 	{
// 		for (int j = 1; j <= 8; ++j)
// 		{
// 			char sss = t[i - 1][j - 1].ff;
// 			if ((pp[0].ff == t[i - 1][j - 1].ss) && (pp[0].ff == sss - 'a' + 1)) {
// 				abc += t[i - 1][j - 1].ff;
// 				abc += pp[0].ss + '0';
// 			}
// 			if (sz(abc) == 2)break;
// 		}
// 		bl
// 	}
// 	cout << abc << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Bombs
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int r, c; cin >> r >> c;
// 	vector<vi>v(r, vi(c));
// 	for (int i = 0; i < r; ++i)
// 		for (int j = 0; j < c; ++j)
// 			cin >> v[i][j];

// 	vector<string>s;
// 	s.resize(r);
// 	for (int i = 0; i < r; ++i)
// 	{
// 		for (int j = 0; j < c; ++j)
// 		{
// 			if (v[i][j] == 0) {
// 				s[i].pb('.');
// 			}
// 			else {
// 				s[i].pb(v[i][j] + 'A' - 1);
// 			}
// 		}
// 	}
// 	for (auto p : s)cout << p << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/

// c -<MergeSequence>-----
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n, m; cin >> n >> m;
// 	vi a(n), b(m);
// 	inputVec(a, n);
// 	inputVec(b, m);
// 	set<int>a1(all(a));
// 	set<int>b1(all(b));
// 	set<int>c1(all(a1));
// 	c1.insert(all(b1));
// 	set<pair<int, int>>t;
// 	int i = 1;
// 	for (auto e : c1) {
// 		t.insert(make_pair(e, i++));
// 	}
// 	debug(c1)
// 	debug(t)
// 	for (auto i : t) {
// 		if (a1.find(i.first) != a1.end()) {
// 			a1.erase(i.first);
// 			a1.insert(i.second);
// 		} else if (b1.find(i.first) != b1.end()) {
// 			b1.erase(i.first);
// 			b1.insert(i.second);
// 		}
// 	}
// 	parrauto(a1);
// 	parrauto(b1);
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/
// 	solve();



// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// bool checkEqual(vl & v) {
// 	unordered_set<ll> d(all(v));
// 	if (maxe(v) == mine(v)) return 1;
// 	if ((maxe(v) - mine(v)) % 2 != 0)return 0;
// 	if (sz(d) < sz(v))return 0;
// 	for (int i = 0; i < sz(v); ++i)
// 		if (d.find(v[i] - (maxe(v) + mine(v)) / 2) != d.end()) return 1;
// 	return 0;
// }
// void solve() {
// 	int n; cin >> n;
// 	vl v(n);
// 	inputVec(v, n);
// 	cout << (checkEqual(v) ? "YES" : "NO") << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// B call the ID number
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(ll i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	ll n; cin >> n;
// 	vl v(n);
// 	inputVec(v, n);
// 	vector<bool> f(n, 0);
// 	for (ll i = 1; i < n + 1; ++i)
// 	{
// 		ll temp = v[i - 1];
// 		if (v[i - 1] != v[temp - 1] && f[i - 1] != 1) {
// 			f[temp - 1] = 1;
// 		}
// 		else continue;
// 	}
// 	ll cnt = 0;
// 	for (ll i = 0; i < n; ++i)
// 		if (f[i] == 0)cnt++;
// 	cout << cnt << endl;
// 	for (ll i = 0; i < n; ++i)
// 		if (f[i] == 0) {
// 			cout << i + 1 << " ";
// 		}
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// 1d eraser
// status : pending =======>
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n, k; cin >> n >> k;
// 	string s; cin >> s;
// 	vi v;
// 	int cnt = 0;
// 	for (int i = 0; i < n; ++i)
// 		if (s[i] == 'B')v.pb(i);

// 	debug(v)
// 	int temp = v[0];
// 	for (int i = 0; i < sz(v) - 1; ++i)
// 	{
// 		int diff = abs(v[i] - v[i + 1]);
// 		debug(diff)
// 		if (diff >= k)cnt++;
// 		else {
// 			cnt++;
// 			continue;
// 		}
// 		if (sz(v) == n && sz(v) == k) {
// 			cnt++; break;
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
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 5;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// At coder B --> problem
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// // left shift multiply
// // right shift divide
// void solve() {
// 	ll B; cin >> B;
// 	for (int i = 1; i <= 15; ++i)
// 	{
// 		ll x = 1;
// 		for (int j = 0; j < i; ++j)
// 		{
// 			x *= i;
// 			if (x == B && i - 1 == j) {
// 				cout << i << endl;
// 				return;
// 			}
// 		}
// 	}
// 	cout << -1 << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();

// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/

// Target practise
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n = 10;
// 	vector<string>s(n);
// 	for (int i = 0; i < n; ++i)
// 		cin >> s[i];
// 	int cnt = 0, ans = 0, p = 1;
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		// left to right
// 		for (int j = i; j < n - i; ++j) // 00->09       fixed(0)()    *i j(0->9)
// 			if (s[i][j] == 'X')cnt++;
// 		// up to down
// 		for (int j = i + 1; j < n - i; ++j)//19->99     fixed()(9)    j(1->9) *i
// 			if (s[j][9 - i] == 'X')cnt++;
// 		//left to right
// 		for (int j = i + 1; j < n - i; ++j)//90->98     fixed(9)()    *i j(0->8)
// 			if (s[9 - i][9 - j] == 'X')cnt++;
// 		// down to up
// 		for (int j = i + 1; j + 1 < n - i; ++j)//10->80  fixed()(0)   j(1->8) *i
// 			if (s[j][i] == 'X')cnt++;
// 		ans = ans + (cnt * p);
// 		p++;
// 		cnt = 0;
// 	}
// 	cout << ans << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// B - atcoder Yellow and Red card
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// // sum of two yellow card & receives the red card
// // removed player will not get the card and not play
// // q ->no of events
// void solve() {
// 	int n, q; cin >> n >> q;
// 	vector<int>cnt(n + 1, 0);
// 	vector<pair<int, int>>v;
// 	for (int i = 0; i < q; ++i)
// 	{
// 		int a, b; cin >> a >> b;
// 		v.pb(make_pair(a, b));
// 	}
// 	debug(v)
// 	for (int i = 0; i < q; ++i)
// 	{
// 		if (v[i].ff == 1) {
// 			cnt[v[i].ss]++;
// 		}
// 		else if (v[i].ff == 2) {
// 			cnt[v[i].ss] += 2;
// 		}
// 		else if (v[i].ff == 3) {
// 			debug(cnt[v[i].ss])
// 			if (cnt[v[i].ss] <= 1) {
// 				cout << "No" << endl;
// 			}
// 			else if (cnt[v[i].ss] >= 2) {
// 				cout << "Yes" << endl;
// 			}
// 		}
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/
// 	solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// LRUD instructions -2
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) ((x).begin()), ((x).end())
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
// bool findSimilar(const vector<pair<ll, ll>> & f) {
// 	vector < pair<ll, ll>>uniquePair = f;
// 	sort(all(uniquePair));
// 	auto it = unique(all(uniquePair));
// 	return it != uniquePair.end();
// }
// void solve() {
// 	ll n; cin >> n;
// 	string s; cin >> s;
// 	vector<pair<ll, ll>>f;
// 	f.pb(make_pair(0, 0));
// 	ll x = 0, y = 0;
// 	for (ll i = 0; i < n; ++i)
// 	{
// 		if (s[i] == 'R') {
// 			x++;
// 			f.pb(make_pair(x, y));
// 		}
// 		if (s[i] == 'L') {
// 			x--;
// 			f.pb(make_pair(x, y));
// 		}

// 		if (s[i] == 'U') {
// 			y++;
// 			f.pb(make_pair(x, y));
// 		}

// 		if (s[i] == 'D') {
// 			y--;
// 			f.pb(make_pair(x, y));
// 		}
// 	}
// 	debug(f)
// 	if (findSimilar(f))cout << "Yes" << endl;
// 	else cout << "No" << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Number place atcoder -c
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// int sum = 45;
// bool boxChecking(vector<vector<int>>& t, int s1, int s2, int e1, int e2) {
// 	int sum2 = 0;
// 	for (int i = s1; i <= e1; ++i) {
// 		for (int j = s2; j <= e2; ++j) {
// 			sum2 += t[i][j];

// 		}
// 	}
// 	return sum2 == sum;
// }
// void solve() {
// 	int n = 9;;
// 	vector<vi>v(n, vi(n));
// 	vector<map<int, int>>mp(n);
// 	vector<map<int, int>>mp2(n);
// 	for (int i = 0; i < n; ++i)
// 		for (int j = 0; j < n; ++j) {
// 			cin >> v[i][j];
// 		}

// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{
// 			mp[i][v[i][j]]++;
// 			mp2[i][v[j][i]]++;
// 		}
// 	}
// 	int totalMp1 = 0, totalMp2 = 0;
// 	for (const auto&pp : mp)
// 		for (const auto& tt : pp) {
// 			totalMp1++;
// 		}
// 	debug(totalMp1)
// 	for (const auto&pp : mp2)
// 		for (const auto& tt : pp) {
// 			totalMp2++;
// 		}
// 	debug(totalMp2)
// 	int sumt = totalMp1 + totalMp2;
// 	debug(sumt)
// 	int f = 0;
// 	if (boxChecking(v, 0, 0, 2, 2))f++;
// 	if (boxChecking(v, 3, 0, 5, 2))f++;
// 	if (boxChecking(v, 6, 0, 8, 2))f++;
// 	if (boxChecking(v, 0, 3, 2, 5))f++;
// 	if (boxChecking(v, 3, 3, 5, 5))f++;
// 	if (boxChecking(v, 6, 3, 8, 5))f++;
// 	if (boxChecking(v, 0, 6, 2, 8))f++;
// 	if (boxChecking(v, 3, 6, 5, 8))f++;
// 	if (boxChecking(v, 6, 6, 8, 8))f++;
// 	if ((sumt == 162) && ( f == 9) ) {
// 		cout << "Yes" << endl;
// 	}
// 	else cout << "No" << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/
// 	solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// peak
// pending
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(ll i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	ll n, m; cin >> n >> m;
// 	vl v(n);
// 	inputVec(v, n);
// 	sort(all(v));
// 	v.pb(9000000000000);
// 	int temp = 0, r = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		while (v[temp] < v[i] + m)r++;
// 		temp = max(temp, r - i);
// 	}
// 	cout << temp << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
// C error corrction -> atcoder begineer
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) ((x).begin()), ((x).end())
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
// // given t'
// // t-> t'
// // 1. either t' = t
// // 2. insertion at the beg or at end one time in the t
// // 3. delete one char from t
// // 4. change one char in t to another char
// ll n;
// string s[500001], t;
// ll a[500001] , b[500001];
// ll calc(const string &s, const string &t) {
// 	for (int i = 0; i < sz(t); ++i)
// 	{
// 		if (i >= sz(s))return sz(s);
// 		if (s[i] != t[i])return i;
// 	}
// 	return sz(t);
// }
// void solve() {
// 	cin >> n >> t;
// 	for (int i = 1; i <= n; ++i)
// 		cin >> s[i];

// 	for (int i = 1; i <= n; ++i) {
// 		a[i] = calc(s[i], t);
// 	}
// 	reverse(all(t));
// 	for (int i = 1; i <= n; i++)
// 	{
// 		reverse(all(s[i]));
// 		b[i] = calc(s[i], t);
// 	}
// 	vi ans;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		const string &p = s[i];
// 		bool f = 0;
// 		if (a[i] == sz(p) && sz(p) == sz(t))f = 1;
// 		if (a[i] + b[i] >= sz(p) && sz(p) + 1 == sz(t))f = 1;
// 		if (a[i] + b[i] >= sz(p) - 1 && sz(p) + 1 == sz(t))f = 1;
// 		if (a[i] + b[i] == sz(p) - 1 && sz(p) == sz(t))f = 1;
// 		if (f)ans.pb(i);
// 	}
// 	cout << sz(ans) << endl;
// 	for (auto x : ans)cout << x << " ";
// 	en
// 	// for (int i = 0; i < n; ++i)
// 	// {
// 	// 	if (sz(s[i]) == sz(t)) {
// 	// 		check
// 	// 		debug(i + 1)
// 	// 		int a = 0, b = 0;
// 	// 		int cnt = 0;
// 	// 		while (a < sz(s[i]) && b < sz(t)) {
// 	// 			if (s[i][a] == t[b]) {
// 	// 				a++, b++;
// 	// 			}
// 	// 			else {
// 	// 				cnt++;
// 	// 				if (cnt >= 1)break;
// 	// 			}
// 	// 		}
// 	// 		debug(cnt)
// 	// 		if (a == b and cnt == 0)p.pb(i + 1);
// 	// 		else {
// 	// 			if (a + 1 < sz(t) and b + 1 < sz(t)) {
// 	// 				a++;
// 	// 				b++;
// 	// 			}
// 	// 			debug(s[i][a])
// 	// 			debug(t[b])
// 	// 			if (s[i][a] == t[b])p.pb(i + 1);

// 	// 		}
// 	// 	}
// 	// 	else if (sz(s[i]) - 1 == sz(t)) {
// 	// 		int a = 0, b = 0, cnt = 0;
// 	// 		// s is smaller
// 	// 		while (a < sz(s[i]) && b < sz(t)) {
// 	// 			if (s[i][a] == t[b]) {
// 	// 				a++, b++;
// 	// 			}
// 	// 			else {
// 	// 				a++;					cnt++;
// 	// 				if (cnt >= 2)break;
// 	// 			}
// 	// 		}
// 	// 		if (a == b + 1 and cnt == 1)p.pb(i + 1);
// 	// 	}
// 	// 	else if (sz(s[i]) + 1 == sz(t)) {
// 	// 		// check
// 	// 		// debug(i + 1)
// 	// 		// s is larger
// 	// 		int a = 0, b = 0, cnt = 0;
// 	// 		while (a < sz(s[i]) && b < sz(t)) {
// 	// 			if (s[i][a] == t[b]) {
// 	// 				a++, b++;
// 	// 			}
// 	// 			else {
// 	// 				b++; cnt++;
// 	// 				if (cnt >= 2) break;
// 	// 			}
// 	// 			// debug(cnt)
// 	// 		}
// 	// 		// debug(a)
// 	// 		// debug(b)
// 	// 		if (b == a + 1 || sz(t) == b + 1)p.pb(i + 1);
// 	// 	}
// 	// 	else continue;
// 	// }
// 	// if (sz(p) == 0)p.pb(0);
// 	// debug(p)
// 	// for (auto ss : p)cout << ss << " ";
// 	// en
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Prepend and append
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n; cin >> n;
// 	string s;
// 	cin >> s;
// 	int start = 0, end = n - 1;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if ((s[start] == '1' && s[end] == '0') or (s[start] == '0' && s[end] == '1')) {
// 			start++;
// 			end--;
// 		}
// 		if (s[start] == s[end] || start > end) {
// 			break;
// 		}
// 	}
// 	if (start > end && start - end + 1) {
// 		cout << "0" << endl;
// 	}
// 	else {
// 		/*debug(abs(start - end) + 1)*/
// 		cout << (abs(start - end) + 1) << endl;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// B serval and Inversion Magic = codeforces
// pending
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// bool checkPalind(string s, int a, int b) {
// 	for (int i = b; i > a; --i) {
// 		if (s[b] != s[a])return false;
// 	}
// 	return true;
// }
// // there would be four conditions:
// void solve() {
// 	int n; cin >> n;
// 	string s; cin >> s;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{

// 		}
// 	}
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Sensors Atcoder
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	// horizontal and verticall and diagonal conditions
// 	int n, m; cin >> n >> m;
// 	vector<string>s(n);
// 	vector<pair<int, int>>vecRow;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> s[i];
// 		for (int j = 0; j < m; ++j)
// 		{
// 			if (s[i][j] == '#') {
// 				vecRow.pb(make_pair(i + 1, j + 1));
// 			}
// 		}
// 	}
// 	debug(vecRow)

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
// 	int n; cin >> n;
// 	string s; cin >> s;
// 	cout << s.back() << endl;
// }
// int main()
// {
// 	int t ; cin >> t;
// 	while (t--) solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// // if i am putting the 1,2 on the similar element
// // or 1,3 then there should not be 2,3 on any similar element index
// void solve() {
// int n; cin >> n;
// vi v(n);
// map<int, int>mp;
// vector<pair<int, int>>vec;
// int x = 0;
// for (int i = 0; i < n; ++i)
// {
// 	cin >> v[i];
// 	x ^= v[i];
// 	mp[v[i]]++;
// }
// if (sz(mp) == n || sz(mp) == 1 || (v[0] == 1 && n == 1))cout << -1 << endl;
// 	else {

// 	}
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n, x; cin >> n >> x;
// 	vi v(n - 1);
// 	for (int i = 0; i < n - 1; ++i)cin >> v[i];
// 	int diff = abs(mine(v) + maxe(v));
// 	int gg = (x - abs(sumarr(v) - diff));
// 	if (gg == x)cout << x - gg << endl;
// 	else if (gg > 100)cout << -1 << endl;
// 	else cout << gg << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// codeForces -> Two Out of Three
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// 	int n; cin >> n;
// 	vi v(n), s(n, 1);
// 	map<int, int>mp;
// 	ll temp = 2;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		mp[v[i]]++;
// 	}
// 	debug(temp)
// 	debug(mp)
// 	debug(s)
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (mp[v[i]] == 2 && temp == 2) {
// 			s[i] = 2; temp--;
// 		}
// 		else if (mp[v[i]] == 2 && temp == 1) {
// 			s[i] = 3; temp--;
// 		}
// 	}
// 	if (temp > 0)cout << "-1" << endl;
// 	else {
// 		outputVec(s, sz(s)); en
// 	}
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// // assigment time days
// // void solve() {
// // 	int x, y, z; cin >> x >> y >> z;
// // 	if (x * y <= 60 * 24 * z) {
// // 		cout << "Yes" << endl;
// // 	}
// // 	else cout << "No" << endl;
// // }
// // void solve() {
// // 	int n; cin >> n;
// // 	int p = n;
// // 	vi v;
// // 	while (p > 0) {
// // 		v.pb(p);
// // 		p--;
// // 	}
// // 	debug(v);
// // 	outputVec(v, sz(v)); en
// // }
// void solve() {
// 	int n; cin >> n;
// 	string a, b; cin >> a >> b;
// 	int cnt = 0, cnt2 = 0;
// 	vector < pair<int, <char, char>>>mp((1, ('R', 'S')), (1, ('P', 'R')), (1, ('S', 'p')));
// 	for (int i = 0; i < n; ++i)
// 	{

// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Rotate colored Subsequeunce
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
// #define parrauto(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define loop(i,a,b) for(int i = a; i<b; i++)
// #define inputVec(vec, n) loop(i, 0, n ){ cin >> vec[i];}
// #define outputVec(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
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
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)
// /*----------------------------------------------------------------------*/
// // void swapping(string&s, vi& d) {
// // 	int temp = 0;
// // 	for (int i = 1; i <= sz(d); ++i)
// // 	{
// // 		debug(d[i - 1])
// // 	}
// // 	// debug(temp)
// // 	debug(s)
// // }
// void solve() {
// 	int n, m; cin >> n >> m;
// 	string s; cin >> s;
// 	vi v(n);
// 	inputVec(v, n);
// 	map<int, vi>mp;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (mp.find(v[i]) == mp.end()) mp[v[i]] = {i + 1};
// 		else mp[v[i]].pb(i + 1);
// 	}
// 	debug(mp)
// 	// vi d;
// 	// tr(it, mp) {
// 	// 	tr(itr, it->ss) {
// 	// 		auto curr = *itr;
// 	// 		d.pb(curr);
// 	// 	}
// 	// 	// debug(d)
// 	// 	d.clear();
// 	// }
// 	for (const auto it1 : mp) {
// 		vi ind = it1.ss;
// 		for (const auto & it2 : ind) {
// 			if (it1.ff <= sz(s) && it2 <= sz(s)) {
// 				swap(s[it1.ff - 1], s[it2 - 1]);
// 			}
// 		}
// 	}
// 	debug(s)
// 	cout << s << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/


// 	solve();

// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
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
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// 	int n; cin >> n;
// 	string s;
// 	int ans = 0;
// 	set<string>sset;
// 	L1(i, 1, n) {
// 		cin >> s;
// 		if (!sset.count(s))ans++; // there should be no smiliar present in the set
// 		sset.insert(s);
// 		reverse(all(s));
// 		sset.insert(s);
// 	}
// 	cout << ans << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }


/*------------------------------------------------------------------------------------------------------------------*/
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
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// 	int n; cin >> n;
// 	n *= 3;
// 	vi v(n);
// 	inputVec(v, n);
// 	map<int, vi>mp;
// 	L(i, 0, n) {
// 		if (mp.find(v[i]) == mp.end())mp[v[i]] = {i + 1};
// 		else mp[v[i]].pb(i + 1);
// 	}
// 	vi d;
// 	vector<pair<int, int>>p;
// 	for (const auto it1 : mp) {
// 		for (const auto & it2 : it1.ss) {
// 			if (mp.find(v[it1.ff]) != mp.end()) {
// 				d.pb(it2);
// 			}
// 		}
// 		p.pb(mk(d[1], it1.ff));
// 		d.clear();
// 	}
// 	debug(p)
// 	sort(all(p));
// 	debug(p)
// 	for (auto i : p) {
// 		cout << i.ss << " ";
// 	}
// 	en
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();

// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<string> vs;
// typedef vector<int> vi;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// bool stringChecker(string s, string t) {
// 	int cnt = 0;
// 	L(i, 0, sz(s)) {
// 		if (s[i] == t[i])cnt++;
// 		else continue;
// 	}
// 	if (cnt == sz(s) - 1)return 1;
// 	else return 0;
// }
// void solve() {
// 	int n, m; cin >> n >> m;
// 	vs s(n);
// 	inputVec(s, n);
// 	sort(all(s));
// 	debug(s)
// 	bool f = 0;
// 	int cnt = 0;
// 	L(i, 0, n) {
// 		L(j, 1, n) {
// 			if (stringChecker(s[j], s[i]))f = 1;
// 		}
// 		if (f) {
// 			cnt++;
// 			f = 0;
// 		}
// 		debug(cnt)
// 	}
// 	if (cnt <= n)cout << "Yes" << endl;
// 	else cout << "No" << endl;

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// // denote the zero with the 0 and the - with the 1
// // now i have to find the maximum no of zeross present in between the two 1's
// void solve() {
// 	int n; cin >> n;
// 	string s; cin >> s;
// 	// a map of the maximum and char
// 	map<char, vi>mp;
// 	L(i, 0, n) {
// 		if (mp.find(s[i]) == mp.end())mp[s[i]] = {i + 1};
// 		else mp[s[i]].pb(i + 1);
// 	}
// 	// debug(mp)
// 	debug(mp)
// 	vi oVec = mp['o'];
// 	int temp = 0;
// 	int cnt = 0;
// 	tr(it, oVec) {
// 		auto nxtIt = next(it);
// 		if (nxtIt != oVec.end() && *nxtIt == ((*it) + 1))temp++; // incrementing the count if the nxt element is greater than 1
// 		else {
// 			if (temp > 0) {
// 				temp++;
// 			}
// 			debug(temp)
// 			cnt = max(cnt, temp);
// 			temp = 0; //reset the count for next flow
// 		}
// 	}
// 	debug(cnt)
// 	if (cnt == 0 || cnt == n)cout << -1 << endl;
// 	else cout << cnt << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	// solve();
// 	int t ; cin >> t;
// 	t = 2;
// 	while (t--) solve();
// 	// solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// bool returnTrue(int & a, int & b, int & c, int &d) {
// 	return ((a > b ) && (c > d)) || ((a < b) && (c < d));
// }
// void solve() {
// 	int a, b, c, d;
// 	cin >> a >> b >> c >> d;
// 	cout << (returnTrue(a, b, c, d) && returnTrue(a, c, b, d) ? "YES" : "NO") << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// div 2 -> sum of the strength of the grp is minimised, and find the maximum no of groups
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// int f(vl&v) {
// 	ll mini = INT_MAX, maxi = 1, c = v[0];
// 	L(i, 1, sz(v)) {
// 		c &= v[i];
// 		debug(c)
// 		if (c < mini) {
// 			mini = c; maxi = 1;
// 			debug(mini)
// 		}
// 		else if (c == mini)maxi++;
// 	}
// 	return maxi - 1;
// }
// void solve() {
// 	ll n; cin >> n;
// 	vl v(n);
// 	inputVec(v, n);
// 	cout << f(v) << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	// contiguous groups that give the and operation minimal
// 	// have to the maximum no of groups
// 	int t ; cin >> t;
// 	while (t--) solve();
// 	// debug(1 & 2)
// 	// debug(2 & 1)
// 	// debug(2 & 3)
// 	// debug(3 & 2)
// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(ll i = (j); i < (k); ++i)
// #define L1(i, j, k) for(ll i = (j); i <= (k); ++i)
// #define R(i, j, k) for(ll i = (j); i > (k); --i)
// #define R2(i, j, k) for(ll i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// bool checkOdd(vl v, ll l, ll r, ll k) {
// 	ll temp = 0;
// 	L(i, l - 1, r) {
// 		v[i] = k;
// 	}
// 	L(i, 0, sz(v))temp += v[i];
// 	return temp & 1;
// }
// void solve() {
// 	ll n, q; cin >> n >> q;
// 	vl v(n);
// 	inputVec(v, n);
// 	L(i, 0, q) {
// 		ll l, r, k; cin >> l >> r >> k;
// 		if (checkOdd(v, l, r, k)) {
// 			cout << "Yes" << endl;
// 		}
// 		else cout << "No" << endl;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
// /*------------------------------------------------------------------------------------------------------------------*/
// /*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// bool checker(int a, int b, int k) {
// 	if (a > b)swap(a, b);
// 	if ((a == k || b == k ) and (a <= k && b >= k)) return 1;
// 	else return 0;
// }
// void solve() {
// 	int n, k; cin >> n >> k;
// 	int count = 0;
// 	while (n--) {
// 		int a, b; cin >> a >> b;
// 		if (checker(a, b, k)) {
// 			count++;
// 		}
// 	}
// 	if (count == 0 || count == n) {
// 		cout << "No" << endl; return ;
// 	}
// 	else cout << "Yes" << endl; return;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// 	int temp = 0;
// 	vi v(3);
// 	inputVec(v, 3);
// 	sort(all(v));
// 	if (v[1] % v[0] == 0 and v[2] % v[0] == 0)temp += (v[1] / v[0]) + (v[2] / v[0]);
// 	if(temp<=5 and temp!=0) cout<<"Yes"<<endl;
// 	else cout<<"No"<<endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// ideal point ====> div 2 codeforces
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// // void mark(vi& dp, int a, int b, int k) {
// // 	if (a > b)swap(a, b);
// // 	L1(i, a, b) {
// // 		if (a <= k and k <= b )dp[i - 1]++;
// // 	}
// // }
// // void solve() {
// // 	int n, k; cin >> n >> k;
// // 	vi dp(50, 0);
// // 	while (n--) {
// // 		int a, b; cin >> a >> b;
// // 		mark(dp, a, b, k);
// // 	}
// // 	vi temp;
// // 	debug(maxe(dp))
// // 	debug(dp)

// // 	L(i, 0, sz(dp)) {if (maxe(dp) == dp[i - 1])temp.pb(i);}
// // 	debug(temp)
// // 	bl
// // 	if (sz(temp) == 1 and temp[0] == k) {cout << "YES" << endl;}
// // 	else cout << "NO" << endl;
// // }
// void solve() {
// 	int n, k, l, r, a = 0, b = 0; cin >> n >> k;
// 	while (n--) {
// 		cin >> l >> r;
// 		if (l == k)a = 1;
// 		if (r == k)b = 1;
// 	}
// 	if (a && b)cout << "Yes\n"; else cout << "No\n";
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 2;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// 	int x = 1;
// 	L(i, 0, 8) {
// 		cin >> s;
// 		if (s == "RRRRRRRR")x = 0;
// 	}
// 	if (x == 0)cout << "R" << endl;
// 	else cout << "B" << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// 24 hour times format
// h=12--> h=13,  m=59--> m=0,  and h=23-->h=0, m=59--->m=0
// cal sleep time of the vlad until the next alarm clock
// at the of sleep if any clock rings thne he will sleep for the length 0
// t
// n[1,10],H[0,24),m[0,60) --> (no of alarms),(time to go to bed)
// two or more alarm can trigger at the same time
// output the no of hours and minutes has vlad will sleep and if the rings at time of the sleep  output 0 0
// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
// 	int n, h, m; cin >> n >> h >> m;


// }
// int main() {
// 	int T ; cin >> T;
// 	while (T--) {
// 		solve();
// 	}
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;
// void solve2(vector<int>& v, int ptr, int sum, vector<int>&ds) {
// 	if (ptr == (int) v.size()) {
// 		ds.push_back(sum);
// 		return ;
// 	}
// 	// i have to two options either to pick it up or not to pick it up
// 	solve2(v, ptr + 1, sum + v[ptr], ds);
// 	// not to pick it up
// 	solve2(v, ptr + 1, sum, ds);
// }
// void solve() {
// 	int n; cin >> n;
// 	vector<int>v(n);
// 	for (int i = 0; i < n; i++)cin >> v[i];
// 	vector<int>ds;
// 	solve2(v, 0, 0, ds);
// 	sort(ds.begin(), ds.end());
// 	for (int i = 0; i < (int)ds.size(); i++)cout << ds[i] << " ";
// }
// int main() {
// 	solve();
// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// subset sum-1 pick and non-pick technique
// to remove the all the elements remove the duplicates
// #include <bits/stdc++.h>
// using namespace std;
// void solve2(vector<int>&v, int ptr, vector<int>&ds, int n, set<vector<int>>& ans) {
// 	if (ptr == n) {
// 		ans.insert(ds);
// 		return;
// 	}
// 	// have to pick it
// 	ds.push_back(v[ptr]);
// 	solve2(v, ptr + 1, ds, n, ans);
// 	// have not to pick it
// 	ds.pop_back();
// 	solve2(v, ptr + 1, ds, n, ans);
// }
// void solve() {
// 	int n; cin >> n;
// 	vector<int>v(n); for (int i = 0; i < n; i++)cin >> v[i];
// 	sort(v.begin(), v.end());
// 	vector<int>ds;
// 	set<vector<int>>ans;
// 	solve2(v, 0, ds, n, ans);
// 	for (const auto& i : ans) {
// 		for (const auto& j : i)cout << j << " ";
// 		cout << endl;
// 	}
// }
// int main() {
// 	solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// combination sum1
// #include <bits/stdc++.h>
// using namespace std;
// void solve2(vector<int>&v, int ptr, vector<int>&ds, vector<vector<int>>&ans, int target) {
// 	if (ptr == (int)v.size()) {
// 		if (target == 0) {
// 			// target reaches 0
// 			ans.push_back(ds);
// 		}
// 		return;
// 	}
// 	if (v[ptr] <= target) {
// 		ds.push_back(v[ptr]);
// 		solve2(v, ptr, ds, ans, target - v[ptr]);
// 		ds.pop_back();
// 	}
// 	solve2(v, ptr + 1, ds, ans, target);
// }
// void solve() {
// 	int n, target; cin >> n >> target;
// 	vector<int>v(n); for (int i = 0; i < n; i++)cin >> v[i];
// 	vector<int>ds;
// 	vector<vector<int>>ans;
// 	solve2(v, 0, ds, ans, target);
// 	for (const auto& i : ans) {
// 		for (const auto& j : i)cout << j << " ";
// 		cout << endl;
// 	}
// }
// int main() {
// 	solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// combination sum 2  unique
// can't pick the element more than once
// #include <bits/stdc++.h>
// using namespace std;
// void solve2(vector<int>&v, set<vector<int>>&ans, vector<int>&ds, int target, int ptr) {
// 	if (ptr == (int)v.size()) {
// 		if (target == 0) {
// 			ans.insert(ds);
// 		}
// 		return;
// 	}
// 	if (v[ptr] <= target) {
// 		ds.push_back(v[ptr]);
// 		solve2(v, ans, ds, target - v[ptr], ptr + 1);
// 		ds.pop_back();
// 	}
// 	solve2(v, ans, ds, target, ptr + 1);
// }
/*less time complexity*/
// void solve2(vector<int>&v, set<vector<int>>&ans, vector<int>&ds, int target, int ptr) {
// 	if (target == 0) {
// 		ans.insert(ds);
// 		return;
// 	}
// 	for (int i = ptr; i < (int)v.size(); i++) {
// 		if (v[i - 1] == v[i] and i > ptr)continue;
// 		if (v[ptr] > target) break;
// 		ds.push_back(v[i]); //up to down
// 		solve2(v, ans, ds, target - v[i], i + 1);
// 		ds.pop_back(); // down to up removal
// 	}
// }
// void solve() {
// 	int n, target; cin >> n >> target;
// 	vector<int>v(n); for (int i = 0; i < n; i++)cin >> v[i];
// 	sort(v.begin(), v.end());
// 	set<vector<int>>ans; vector<int>ds;
// 	solve2(v, ans, ds, target, 0);
// 	for (auto i : ans) {
// 		for (auto j : i)cout << j << " ";
// 		cout << endl;
// 	}
// }
// int main() {
// 	solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Everything Everywhere all but one
// incomplete
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define each(v) for(auto it:v){cout<<it<<" ";}cout<<endl;
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

// void solve() {
// 	int n; cin >> n;
// 	vector<int> a(n);
// 	for (auto &x : a) cin >> x;
// 	int sum = 0;
// 	for (auto x : a) sum += x;
// 	for (auto x : a) {
// 		if ((sum - x) / (n - 1.0) == x) {
// 			cout << "YES\n";
// 			return;
// 		}
// 	}
// 	cout << "NO\n";
// }

// int main() {
// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();
// 	return 0;
// }

/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define each(v) for(auto it:v){cout<<it<<" ";}cout<<endl;
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

// void solve() {
// 	int n, k; cin >> n >> k;
// 	vector<int>v(n); for (int i = 0; i < n; i++)cin >> v[i];
// 	sort(all(v));
// 	if (k > n / 2)cout << abs(accumulate(v.begin() + sz(v) - k, v.end(), 0) - accumulate(v.begin(), v.end() - k, 0)) << endl;
// 	else cout << abs(accumulate(v.begin() + k, v.end(), 0) - accumulate(v.begin(), v.begin() + k, 0)) << endl;
// }
// int main() {
// 	int t ; cin >> t;
// 	while (t--) solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define each(v) for(auto it:v){cout<<it<<" ";}cout<<endl;
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

// void solve() {
// 	int n; cin >> n;
// 	string s; cin >> s;
// 	int cnt = 0;
// 	for (int i = 0; i < n; i++) {
// 		if (s[i] == 'Q')cnt++;
// 		else cnt--;
// 		if (cnt < 0)cnt = 0;
// 	}
// 	cerr << cnt << endl;
// 	if (cnt == 0)cout << "YES" << endl;
// 	else cout << "NO" << endl;
// 	// map<char, vector<int>>mp;
// 	// for (int i = 0; i < n; i++) {
// 	// 	if (mp.find(s[i]) == mp.end())mp[s[i]] = {i + 1};
// 	// 	else mp[s[i]].push_back(i + 1);
// 	// }
// 	// for (const auto i : mp) {
// 	// 	vector<int>d = i.second;
// 	// 	cerr << i.first << " ";
// 	// 	for (auto j : d) {
// 	// 		cerr << j << " ";
// 	// 	}
// 	// 	cerr << endl;
// 	// }
// 	// cerr << endl;
// }
// int main() {
// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();
// 	// solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define each(v) for(auto it:v){cout<<it<<" ";}cout<<endl;
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

// void solve() {
// 	int n; cin >> n;
// 	vector<int>v(2 * n); for (int i = 0; i < 2 * n; i++)cin >> v[i];
// 	sort(all(v));
// 	cout << abs((accumulate(v.begin(), v.end() - n, 0)) - (accumulate(v.begin() + n, v.end(), 0))) / 2 << endl;
// 	for (int i = 0; i < n; i++) {
// 		cout << v[i] << " " << v[i + n] << endl;
// 	}
// }
// int main() {
// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();
// 	// solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define each(v) for(auto it:v){cout<<it<<" ";}cout<<endl;
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

// void solve() {
// 	int n; cin >> n;
// 	vector<int>a(n); for (int i = 0; i < n; i++)cin >> a[i];
// 	int ans = 0;
// 	for (int i = 0; i < n; i++) {
// 		if (ans + 1 != a[i])ans++;
// 		else ans += 2;
// 	}
// 	cout << ans << endl;
// }
// int main() {
// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// 	ll n; cin >> n;
// 	ll maxi = 0, count = 0;
// 	L(i, 1, 10) {
// 		if (n % i == 0) {
// 			L(j, i, 1000) {
// 				count++;
// 				if (n % j != 0) {
// 					maxi = max(maxi, count);
// 					count = 0;
// 					i = j;
// 					break;
// 				}
// 			}
// 		}
// 	}
// 	cout << maxi - 1 << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }





/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/


// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// 	int n; cin >> n;
// 	string s; cin >> s;
// 	int aa = 0;
// 	map<int, bool> v;
// 	for (int i = 0; i < n; ++i) {
// 		if (s[i] == '.') {
// 			aa++;
// 		} else if (s[i] != '#') {
// 			v[i] = true;
// 		}
// 	}

// 	int temp = 0;
// 	for (int i = 0; i < n; ++i) {
// 		if (s[i] == '.' && !v[i]) {
// 			if ((v.count(i + 1) && v[i + 1]) || (v.count(i - 1) && v[i - 1])) {
// 				continue;
// 			}
// 			temp++;
// 			v[i] = true;
// 		}
// 		debug(v)
// 	}

// 	if (aa == 0) {
// 		temp = 0;
// 	}

// 	cout << temp << endl;
// 	bl
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// 	int n; cin >> n; string s; cin >> s;
// 	int cnt = 0;
// 	L(i, 0, n) {
// 		L(j, i, n) {
// 			if (s[j] == '.')cnt++;
// 			else break;
// 		}
// 		if (cnt >= 3)break;
// 		cnt = 0;
// 	}
// 	int ans = 0;
// 	L(i, 0, n) {
// 		if (s[i] == '.')ans++;
// 	}
// 	if (cnt >= 3)cout << 2 << endl;
// 	else cout << ans << endl;

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t=1;
// 	while (t--) solve();


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<string> vs;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define forEach(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
// #define pb push_back
// #define ppb pop_back
// #define mk make_pair
// #define ff first
// #define ss second
// #define L(i, j, k) for(int i = (j); i < (k); ++i)
// #define L1(i, j, k) for(int i = (j); i <= (k); ++i)
// #define R(i, j, k) for(int i = (j); i > (k); --i)
// #define R2(i, j, k) for(int i = (j); i >= (k); --i)
// #define inputVec(vec, n) L(i,0,n){ cin >> vec[i];}
// #define outputVec(vec,n)  L(i,0,n){cout<<vec[i]<<" ";}
// #define lb(vec, k) lower_bound(all(vec), k)
// #define ub(vec, k) upper_bound(all(vec), k)
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cerr<<"\n";
// #define en cout<<"\n";
// #define sortdec(vec) sort(all(vec), greater<int>())
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define allopo(x) (x).rbegin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
// #define tr(it, mp) for(auto it = mp.begin(); it != mp.end(); ++it)

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
// // max sum of the elements
// // of non negative numbers in which mex = k and do not exceed to x
// // if not -1

// void solve() {
// 	int n, k, x; cin >> n >> k >> x;
// 	if (k - 1 > x || n < k) {
// 		cout << "-1" << endl;
// 		return;
// 	}
// 	int temp = 0;
// 	L(i, 0, k) {
// 		temp += i;
// 		debug(i)
// 	}
// 	debug(temp)
// 	if (x <= k) {
// 		x = min(x, k - 1);
// 		debug(x)
// 	}
// 	n -= k;
// 	debug(n)
// 	while (n--)temp += x;
// 	cout << temp << endl;
// 	bl
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------AMAN----------------------------*/

// 	int t ; cin >> t;
// 	// t = 1;
// 	while (t--) {
// 		debug(9 - t)
// 		solve();
// 	}


// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/