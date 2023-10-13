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
	int n ; cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	vector<vector<int>> b = v;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> v[i][j];
		}
	}

	// b[0][1] = v[0][0];
	// b[0][2] = v[0][1];
	// b[1][2] = v[0][2];

	// b[0][0] = v[1][0];
	// b[1][1] = v[1][1];
	// b[2][2] = v[1][2];

	// b[1][0] = v[2][0];
	// b[2][0] = v[2][1];
	// b[2][1] = v[2][2];
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		if (i == 0 && j != n - 1) {
	// 			b[i][j + 1] = v[i][j];
	// 		}
	// 		else if (i == n - 1 && j != 0) {
	// 			b[i][j - 1] = v[i][j];
	// 		}
	// 		else if (j == 0 && i != 0) {
	// 			b[i - 1][j] = v[i][j];
	// 		}
	// 		else if (j == n - 1 && i != n - 1) {
	// 			b[i + 1][j] = v[i][j];
	// 		}
	// 		else {
	// 			b[i][j] = v[i][j];
	// 		}
	// 	}
	// }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j != n - 1) {
				b[i][j + 1] = v[i][j];
			} else if (i == n - 1 && j != 0) {
				b[i][j - 1] = v[i][j];
			} else if (j == 0 && i != n - 1) {
				b[i + 1][j] = v[i][j];
			} else if (j == n - 1 && i != 0) {
				b[i - 1][j] = v[i][j];
			} else {
				b[i][j] = v[i][j];
			}
		}
	}
	debug(b);
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








// at i = 0; j(0 < 3)
// i, j---> i, j + 1
// i, j---> i, j + 1
// i, j---> i + 1, j

// at i = 1; j(0 < 3)
// i, j---> j, j
// i, j---> j, j
// i, j---> j, j

// at i = 2; j(0 < 3)
// i, j---> i - 1, j
// i, j---> i, j - 1
// i, j---> i + j - 1

