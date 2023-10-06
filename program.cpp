// #include<bits/stdc++.h>
// using namespace std;

// // This is func to print the stack
// void print(stack<int> s) {
// 	while (!s.empty()) {
// 		cout << s.top() << " ";
// 		s.pop();
// 	}
// 	cout << endl;
// }
// void solve(stack<int>&st, map<int, int>&mp) {
// 	int most_freq_ele = -1, max_freq = 0;
// 	for (auto it = mp.begin(); it != mp.end(); ++it) {
// 		int key = it->first;
// 		int freq = it->second;
// 		/*-------------------*/
// 		if (freq > max_freq) {
// 			max_freq = freq; // which has max freq of the most freq ele
// 			most_freq_ele = key; // ele which is most freq
// 		}
// 	}
// 	stack<int>temp;
// 	while (!st.empty()) { // until the st gets empty
// 		int ele = st.top(); // keeping the curr_ele
// 		st.pop();  // removing the curr_ele
// 		// checking the current_ele not equal to the most freq ele (key = 2) if yes then put other ele except (key = 2)
// 		if (ele != most_freq_ele) temp.push(ele);
// 	}
// 	// temp [ 1 3 5 ]
// 	while (!temp.empty()) {  // until the temp gets empty
// 		int ele = temp.top(); // keep the ele of the temp stack
// 		temp.pop();
// 		st.push(ele);// pusing the temp ele to the st stack
// 	}
// }
// int main() {
// 	int n ; cin >> n;
// 	stack<int> st;
// 	map<int, int> mp;  // creating a map which it->first (key [elements] ) & it->second (freq(key))
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int t ; cin >> t;
// 		st.push(t);
// 		mp[t]++; // marking the total count of the element
// 	}
// 	cout << "before : ";
// 	print(st); // stack before the updation
// 	solve(st, mp);
// 	cout << "after : ";
// 	print(st); // stack after updation

// 	return 0;
// }
// // input :
// // 6
// // 1 2 2 2 3 5

// // ouput :
// // before : 5 3 2 2 2 1
// // after : 5 3 1
// /*----------------------------------------------------------------------------------------------*/


// #include<bits/stdc++.h>
// using namespace std;
// typedef struct node {
// 	int data;
// 	struct node* next;
// } Node ;
// Node * create_node(int value) {
// 	Node * new_node = (Node *)malloc(sizeof(Node));
// 	new_node->next = NULL;
// 	new_node->data = value;
// 	return new_node;
// }
// void printing(Node *& head) {
// 	if (head == NULL) return;
// 	Node * current = head;
// 	while (current != NULL) {
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// }
// void insert_at_beg(Node *&head, int value) {
// 	Node * new_node = create_node(value);
// 	new_node->next = head;
// 	head = new_node;
// }
// void insert_at_end(Node *& head, int value) {
// 	Node * new_node = create_node(value);
// 	if (head == NULL) {
// 		head = new_node;
// 		return;
// 	}
// 	Node * current = head;
// 	while (current->next != NULL) {
// 		current = current->next;
// 	}
// 	current->next = new_node;
// }
// void insert_at_pos(Node*& head , int value, int pos) {
// 	if (pos < 0) return ;
// 	if (pos == 1) {
// 		insert_at_beg(head, value);
// 		return;
// 	}
// 	Node * new_node = create_node(value);
// 	Node * current = head;
// 	int i = 0;
// 	while (i < pos - 1) {
// 		current = current->next;
// 		i++;
// 	}
// 	new_node->next = current->next;
// 	current->next = new_node;
// }
// void delete_beg(Node *& head) {
// 	if (head == NULL) {
// 		printf("List is the empty");
// 		return;
// 	}
// 	Node * current = head;
// 	head = current->next;
// 	free(current);
// }
// void delete_end(Node *& head) {
// 	if (head == NULL) return;
// 	if (head->next == NULL) {
// 		free(head);
// 		head = NULL;
// 		return;
// 	}
// 	Node * current = head;
// 	while (current->next->next != NULL) {
// 		current = current->next;
// 	}
// 	free(current->next );
// 	current->next = NULL;
// }
// void delete_whole(Node *& head) {
// 	Node * current = head;
// 	while (current != NULL) {
// 		current = current->next;
// 		free(head);
// 		head = current;
// 	}
// }
// int main() {
// 	Node * head = NULL;
// 	insert_at_beg(head, 10 );
// 	insert_at_beg(head, 20 );
// 	insert_at_beg(head, 30 );

// 	insert_at_end(head , 40);
// 	insert_at_end(head , 50);
// 	insert_at_end(head , 60);
// 	insert_at_end(head , 70);

// 	insert_at_pos(head, 80, 2);
// 	printing(head);

// 	delete_beg(head);
// 	printing(head);
// 	cout << endl;

// 	delete_end(head);
// 	printing(head);
// 	cout << endl;

// 	delete_whole(head);
// 	printing(head);

// 	printf("\nThis is the end");
// 	return 0;
// }
// 30 20 80 10 40 50 60 70
// 20 80 10 40 50 60 70
// 20 80 10 40 50 60
// This is the end


/*-----------------------------------------------------------------------*/

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
// 	vi a(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> a[i];
// 	}
// 	vector<pair<int, int>> operations;
// 	int k = 0;
// 	while (true) {
// 		bool allZero = true;
// 		for (int i = 0; i < n; i++) {
// 			if (a[i] != 0) {
// 				allZero = false;
// 				break;
// 			}
// 		}
// 		if (allZero) {
// 			break;
// 		}
// 		int l = -1, r = -1;
// 		for (int i = 0; i < n; i++) {
// 			if (a[i] != 0) {
// 				if (l == -1) {
// 					l = i + 1;
// 				}
// 				r = i + 1;
// 			} else if (l != -1 && r != -1) {
// 				break;
// 			}
// 		}
// 		int s = 0;
// 		for (int i = l; i <= r; i++) {
// 			s ^= a[i - 1];
// 		}
// 		for (int i = l; i <= r; i++) {
// 			a[i - 1] = s;
// 		}
// 		operations.push_back({l, r});
// 		k++;
// 	}
// 	cout << k << endl;

// 	for (int i = 0; i < k; i++) {
// 		cout << operations[i].first << " " << operations[i].second << endl;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t; cin >> t;
// 	// t = 1;
// 	while (t--) {
// 		solve();
// 	}


// 	return 0;
// }
/*----------------------------------------------------------------------------*/

// circular linked list
// #include<bits/stdc++.h>
// using namespace std;
// typedef struct node {
// 	int data;
// 	struct node * next;
// } Node;
// Node * create_node ( int value) {
// 	Node * new_node = (Node * )malloc(sizeof(Node));
// 	new_node->data = value;
// 	new_node->next = NULL;
// 	return new_node;
// }
// void printing(Node *& head) {
// 	Node * current = head;
// 	if (head == NULL) return;
// 	while (1) {
// 		printf("%d ", current ->data);
// 		current = current->next;
// 		if (current == head ) break;
// 	}
// }
// void insert_at_beg(Node *& head, int value ) {
// 	Node * new_node = create_node(value);
// 	if (head == NULL) { // check if the list is empty
// 		head = new_node; // if the list is empty , set the head to the new node
// 		new_node->next = head; // set the next pointer of the new node to the head , forming a loop
// 		return ;
// 	}
// 	// if the list is not empty
// 	new_node ->next = head->next;
// 	head->next  = new_node;
// }
// void insert_at_end(Node *& head, int value) {
// 	Node * new_node = create_node(value);
// 	if (head == NULL) {
// 		head = new_node;
// 		new_node->next = head;
// 		return;
// 	}
// 	new_node->next = head->next;
// 	head->next = new_node;
// 	head = new_node;
// }
// int main() {
// 	Node * head = NULL;
// 	insert_at_beg(head , 12);
// 	insert_at_beg(head , 13);
// 	insert_at_beg(head , 14);
// 	insert_at_beg(head , 15);

// 	insert_at_end(head , 16 );
// 	insert_at_end(head , 17 );
// 	insert_at_end(head , 18 );
// 	insert_at_end(head , 19 );
// 	printing(head);
// 	return 0;
// }


/*----------------------------------------------------*/
// doubly circular linked list

/*#include<bits/stdc++.h>
using namespace std;
typedef struct node {
	int data;
	struct node * next;
	struct node * prev;
} Node;
Node * create_node(int value) {
	Node * new_node = (Node * )malloc(sizeof(Node));
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->data = value;
	return new_node;
}
void printing(Node *& head) {
	if (head == NULL) return;
	Node * current = head;
	while (1) {
		printf("%d ", current->data);
		current = current->next;
		if (current == head)break;
	}
}
void insert_at_beg(Node *& head, int value) {
	Node  * new_node = create_node(value);
	if (head == NULL) {
		// for the single node setting  the next and prev pointer to itself
		head = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
		return;
	}
	// find the last node of the list
	Node * last_node = head->prev;
	new_node->next = head; // first node add to the newnode
	head->prev = new_node;
	new_node->prev = last_node;
	last_node->next = new_node;
	head = new_node;
}
void insert_at_end(Node *& head , int value) {
	Node * new_node = create_node(value);
	if (head == NULL) {
		// for the single node setting  the next and prev pointer to itself
		head = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
		return;
	}
	// finding the last_node is should be point to the head ->prev
	Node * last_node = head->prev;
	// inserting of the new node to the end
	last_node->next = new_node;
	new_node->prev = last_node;
	new_node->next = head;
	head->prev = new_node;
}
int main() {
	Node * head = NULL;
	insert_at_beg(head, 10);
	insert_at_beg(head, 20);
	insert_at_beg(head, 30);
	insert_at_beg(head, 40);

	insert_at_end(head, 12);
	insert_at_end(head, 13);
	insert_at_end(head, 14);
	insert_at_end(head, 15);
	printing(head);
	return 0;
}*/

/*----------------------------------------------------------------------------*/

// pre computation technique->
// factorial

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int M = 1e9 + 7;
// const int N = 1e5 + 10;
// long long fact[N];
// int main() {
// 	fact[0] = fact[1] = 1;
// 	for (int i = 2; i < N; ++i)
// 	{
// 		fact[i] = fact[i - 1] * i;
// 	}
// 	ll t;
// 	cin >> t;
// 	while (t--) {
// 		ll n; cin >> n;
// 		cout << fact[n] << endl;
// 	}
// 	return 0;
// }


// hashing=>

// find the count of the no in the array given

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// basic=>
// int n ; cin >> n;
// int array[n] ;
// for (int i = 0; i < n; ++i)
// {
// 	cin >> array[i];
// }

// int t; cin >> t;
// while (t--) {
// 	int count = 0;
// 	int x; cin >> x;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (array[i] == x) {
// 			count++;
// 		}
// 	}
// 	cout << count << endl;
// }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// // hasing method
// // hashing can be applied only if the size of the array is <10^7
// const int N = 1e7 + 10;
// // globl aray are already zero initilizzed
// int hsh[N];
// int main() {
// 	int n ; cin >> n;
// 	int array[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> array[i];
// 		hsh[array[i]]++;
// 	}
// 	long long  t;
// 	cin >> t;
// 	while (t--) {
// 		long long x; cin >> x;
// 		cout << hsh[x] << endl;
// 	}
// 	return 0;
// }
// input->
// 5
// 3 5 5 7 7
// 5
// 3
// 5
// 7
// 8
// 9
// // output->
// 1
// 2
// 2
// 0
// 0

// sort the array and remove the duplicate
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	long long n; cin >> n;
// 	vector<int> v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	sort(v.begin(), v.end());
// 	v.erase(unique(v.begin(), v.end()), v.end());
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		cout << v[i ] << endl;
// 	}
// 	return 0;
// }
/*11
11 12 13 14 15 16 12 43 12 13 11*/



// Prefix sum int the array =>

// find the sum in the array from the index l to the r

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 10;
// int a[N];
// int main() {
// 	int n; cin >> n;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		cin >> a[i];
// 	}
// 	int t; cin >> t;
// 	while (t--) {
// 		int l, r; cin >> l >> r;
// 		int sum = 0;
// 		for (int i = l; i <= r; ++i)
// 		{
// 			sum += a[i];
// 		}
// 		cout << sum << endl;
// 	}
// 	return 0;
// }
// // input
// 6
// 3 6 3 8 9 2
// 4
// 2 3
// 4 6
// 1 5
// 3 6
// // output
// 9
// 19
// 29
// 22


// shortcut -> for finding the sum

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 10;
// int a[N];
// int pf[N];
// int main() {
// 	int n; cin >> n;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		cin >> a[i];
// 		pf[i] = pf[i - 1] + a[i];
// 	}
// 	int t; cin >> t;
// 	while (t--) {
// 		int l, r; cin >> l >> r;
// 		cout << pf[r] - pf[l - 1] << endl;
// 	}
// 	return 0;
// }



// pre computation based question ->

// find the gcd exclude the l to r
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >> t;
// 	while (t--) {
// 		int n, q; cin >> n >> q;
// 		int a[n + 10];
// 		for (int i = 1; i <= n; ++i)
// 		{
// 			cin >> a[i];
// 		}
// 		while (q--) {
// 			int l , r ;
// 			cin >> l >> r;
// 			int gc = 0;
// 			for (int i = 1; i <= l - 1; ++i)
// 			{
// 				gc = __gcd(gc, a[i]);
// 			}
// 			for (int i = r + 1; i <= n; ++i)
// 			{
// 				gc = __gcd(gc, a[i]);
// 			}
// 			cout << gc << endl;
// 		}
// 	}
// 	return 0;
// }
// // input
// 1
// 3 3
// 2 6 9
// 1 1
// 2 2
// 2 3
// // output
// 3
// 1
// 2

// shortcut
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >> t;
// 	while (t--) {
// 		int n, q; cin >> n >> q;
// 		int a[n + 10];
// 		int forward[n + 10];
// 		int backward[n + 10];
// 		forward[0] = backward[n + 1] = 0;
// 		for (int i = 1; i <= n; ++i)
// 		{
// 			cin >> a[i];
// 		}
// 		for (int i = 1; i <= n; i++) {
// 			forward[i] = __gcd(forward[i - 1], a[i]);
// 		}
// 		for (int i = n; i >= 1; i--) {
// 			backward[i] = __gcd(backward[i + 1], a[i]);
// 		}
// 		while (q--) {
// 			int l , r ;
// 			cin >> l >> r;
// 			cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
// 		}
// 	}
// 	return 0;
// }

// pre-computation technique ->medium question
// add the number from to till the array

// #include<bits/stdc++.h>
// using namespace std;
// const int n = 1e5 + 10;;
// int arr[n];
// int main() {
// 	int n , m;
// 	cin >> n >> m;
// 	while (m--) {
// 		int a, b, d;
// 		cin >> a >> b >> d;
// 		for (int i = a; i <= b; ++i)
// 		{
// 			arr[i] += d;
// 		}
// 	}
// 	int mx = -1;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		if (mx < arr[i]) {
// 			mx = arr[i];
// 		}
// 	}
// 	cout << mx << endl;
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// const int n = 1e5 + 10;;
// int arr[n];
// int main() {
// 	int n , m;
// 	cin >> n >> m;
// 	while (m--) {
// 		int a, b, d;
// 		cin >> a >> b >> d;
// 		arr[a] += d;
// 		arr[b + 1] -= d;
// 	}
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		arr[i] += arr[i - 1];
// 	}
// 	int mx = -1;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		if (mx < arr[i]) {
// 			mx = arr[i];
// 		}
// 	}
// 	cout << mx << endl;
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// pair<int, int> create_pair(int a, int b) {
// 	return make_pair(a, b);
// }
// int main() {
// 	pair<int, int > myp = create_pair(2, 5);

// 	cout << "First element " << myp.first << endl;
// 	cout << "Second element " << myp.second << endl;
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
// #define en cout<<endl;
// #define bl cerr<<endl;
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

// int solve(char s) {
// 	if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
// 		return 1;
// 	else  return 0;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	string s ;
// 	char d[500];
// 	getline(cin, s);
// 	int len = s.length();
// 	int j = 0;
// 	for (int i = 0; i < len; ++i)
// 	{
// 		if (solve(s[i]) == 0) {
// 			d[j] = s[i];
// 			j++;
// 		}
// 	}
// 	d[j] = '\0';
// 	cout << d << endl;
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
// #define en cout<<endl;
// #define bl cerr<<endl;
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
// bool isVowel(char c) {
// 	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
// }

// void removeVowels(string &input) {
// 	input.erase(remove_if(input.begin(), input.end(), isVowel), input.end());
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	string input_str ;
// 	getline(cin, input_str);
// 	removeVowels(input_str);
// 	cout << input_str << endl;

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
// // #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define end cout<<endl;
// #define bl cerr<<endl;
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
// 	ll n; cin >> n;
// 	vector<int> v(n);
// 	int s = 0;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		cin >> v[i];
// 		s += v[i];
// 	}
// 	s /= 2;
// 	s++;
// 	if (s <= v[1]) {
// 		cout << 1 << " " << s << endl;
// 		return;
// 	}
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		ll temp = s;
// 		s -= v[i];
// 		if (s <= 0) {
// 			cout << i << " " << temp << endl;
// 			break;
// 		}
// 	}
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	// the no of days in a year is odd
// 	// what day of month is the middle day of the year
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
// #define check cerr<<"~"<<endl;
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

// void solve() {

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int m; cin >> m;
// 	int temp = 0;
// 	vector<int> a(m);
// 	for (int i = 0; i < m ; i++) {
// 		cin >> a[i];
// 		temp = temp + a[i];
// 	}
// 	int half = (temp + 1) / 2;
// 	debug(temp)
// 	int a_sum = 0, b_sum = 0, m_count = 0;
// 	for (int j = 0 ; j < m; j++) {
// 		m_count++;
// 		a_sum = a_sum + a[j];
// 		if (a_sum == half) {
// 			cout << m_count << " " << a[j];
// 		}
// 		if (a_sum > half) {
// 			b_sum = a_sum - a[j];
// 			break;
// 		}
// 	}
// 	if (half > b_sum && half < a_sum) {
// 		cout << m_count << " " << (half - b_sum) << endl;
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
// #define check cerr<<"~"<<endl;
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

// void solve() {

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int m; cin >> m;
// 	vector<int>d(m);
// 	int td = 0;
// 	for (int i = 0; i < m; ++i)
// 	{
// 		cin >> d[i];
// 		td += d[i];
// 	}
// 	int hd = (td + 1) / 2;
// 	if (td <= d[0]) {
// 		cout << "1" << " " << td;
// 		exit(1);
// 	}
// 	for (int i = 0; i < m; ++i)
// 	{
// 		ll temp = hd;
// 		hd -= d[i];
// 		if (hd <= 1) {
// 			cout << i + 1 << " " << temp << endl;
// 			break;
// 		}
// 	}
// 	return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
// 	int T;
// 	cin >> T;
// 	// T = 1;

// 	for (int t = 0; t < T; ++t) {
// 		int n;
// 		cin >> n;

// 		vector<int> a(n);
// 		for (int i = 0; i < n; ++i) {
// 			cin >> a[i];
// 		}

// 		int sum = 0; //absolute valus of array element
// 		int cnt = 0; // count of negative sub arrays
// 		bool open = false; //sed to track if a negative segment is currently open.


// 		for (int x : a) {
// 			sum += abs(x);
// 			if (x < 0 && !open) {
// 				open = true;
// 				cnt += 1;
// 			}
// 			if (x > 0) {
// 				open = false;
// 			}
// 		}

// 		cout << sum << " " << cnt << endl;
// 	}

// 	return 0;
// }



// #include <iostream>
// using namespace std;

// class Node {
// public:
// 	int data;
// 	Node* next;

// 	Node(int data) {
// 		this->data = data;
// 		this->next = NULL;
// 	}
// };

// Node* reverse(Node* head) {
// 	Node* prev = NULL;
// 	Node* curr = head;
// 	Node* next = curr ->next;
// 	while (curr != NULL) {
// 		next = curr ->next;
// 		curr ->next = prev;
// 		prev = curr;
// 		curr = next;
// 	}
// 	return prev;
// }

// bool checkPalindrome(Node* &head) {
// 	if (head == NULL) {
// 		cout << "LL is empty" << endl;
// 		return true;
// 	}
// 	if (head ->next == NULL) {
// 		//only 1 node
// 		return true;
// 	}

// 	// >1 node in LL

// 	//StepA: find the middle node;
// 	Node* slow = head;
// 	Node* fast = head ->next;

// 	while (fast != NULL) {
// 		fast = fast ->next;
// 		if (fast != NULL) {
// 			fast = fast ->next;
// 			slow = slow ->next;
// 		}
// 	}
// 	//slow pointer is pointing to the middle node

// 	//Step B: reverse LL after middle/slow node
// 	Node* reverseLLKaHead = reverse(slow ->next);
// 	//join the reversed LL into the left part
// 	slow ->next = reverseLLKaHead;

// 	cout << "data " << slow ->data << endl << endl;
// 	//Step C: start comparison
// 	Node* temp1 = head;
// 	Node* temp2 = reverseLLKaHead;
// 	while (temp2 != NULL) {
// 		if (temp1 ->data != temp2 ->data) {
// 			// not a palindome
// 			return false;
// 		}
// 		else {
// 			//if data is equal, then aage badh jao
// 			temp1 = temp1 ->next;
// 			temp2 = temp2 ->next;
// 		}
// 	}
// 	return true;
// }

// int main() {
// 	Node * head = new Node (10);
// 	Node * second = new Node (20);
// 	Node * third = new Node (30);
// 	Node * forth = new Node (40);
// 	Node * fifth = new Node (400);
// 	Node * sixth = new Node (30);
// 	Node * seventh = new Node (20);
// 	Node * eighth = new Node (10);



// 	head ->next = second;
// 	second ->next = third;
// 	third ->next = forth;
// 	forth ->next = fifth;
// 	fifth ->next = sixth;
// 	sixth ->next = seventh;
// 	seventh ->next = eighth;
// 	eighth ->next = NULL;

// 	bool isPalindrome = checkPalindrome(head);

// 	if (isPalindrome) {
// 		cout << "yes" << endl;
// 	}
// 	else {
// 		cout << "No" << endl;
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

// void solve() {
// 	int n, m; cin >> n >> m;
// 	string target = "vika";
// 	vector<string>v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	// matrix transpose
// 	vector<string>s(m, string(n, ' '));
// 	for (int i = 0; i < n; ++i) //row
// 	{
// 		for (int j = 0; j < m; ++j) //col
// 		{
// 			s[j][i] = v[i][j];
// 		}
// 	}

// 	int temp = 0;
// 	for (int i = 0; i < m; ++i) //col
// 	{
// 		for (int j = 0; j < n; ++j) //row
// 		{
// 			if (s[i][j] == target[temp]) {
// 				temp++; break;
// 			}
// 		}

// 	}
// 	if (temp >= 4) {
// 		cout << "YES" << endl;
// 	} else {
// 		cout << "NO" << endl;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int t; cin >> t;
// 	// t = 1;
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

// void solve() {
// 	ll n; cin >> n;
// 	vector<ll>a(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> a[i];
// 	}

// 	vector<ll>b;

// 	b.pb(a[0]);
// 	for (int i = 1; i < n; ++i) //previous value either less or equal
// 	{
// 		if (a[i - 1] <= a[i]) {
// 			b.push_back(a[i]);
// 		}
// 		else {
// 			b.push_back(a[i]);
// 			b.push_back(a[i]);
// 		}
// 		debug(b)
// 	}
// 	cout << b.size(); bl
// 	for (int i = 0; i < b.size(); ++i)
// 	{
// 		cout << b[i] << " ";
// 	}
// 	cout << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	int t; cin >> t;
// 	// t = 1;
// 	while (t--) {
// 		solve();
// 	}
// 	return 0;
// }

/*#include <bits/stdc++.h>
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
#define check cerr<<"~~~"<<endl;
#define endl "\n"
#define bl cout<<endl;
#define bl_ cerr<<endl;
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


// positive and same parity (even / odd (all))
// v[i] , v[i] -v[j] , j=i+1
bool getParity(unsigned int n)
{
	return __builtin_parity(n);
}
void solve() {
	int n ; cin >> n;
	vector<int>v(n);
	vector<int>b;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n; ++i)
	{
		int j = i + 1;
		if (v[i] % 2 == 0 && v[i] >= 0) {
			// debug(v[i])
			b.pb(v[i]);

		}
		else {
			// int d = v[i] - v[j];
			// b.pb(d);
		}
		debug(b) bl_
	}

	if (b.size() == v.size()) cout << "NO" << endl;
	else cout << "YES" << endl;

}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	int t; cin >> t;
	// t = 1;
	while (t--) {
		solve();
	}


	return 0;
}*/

/*#include <bits/stdc++.h>
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
#define mid(s,e) (s+(e-s)/2)
#define check cerr<<"~~~"<<endl;
#define endl "\n"
#define bl cout<<endl;
#define bl_ cerr<<endl;
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
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }


void solve() {
	int n ; cin >> n;
	string s;
	cin >> s;

	int count = 0, j = 0;
	for (int i = 0; i < n; ++i)
	{
		j = 1;
		string sub = s.substr(i, j + 1);
		if (sub.size() == 2 && s.find(sub, i + 1) == string::npos) {
			count++;
			debug(sub)
		}
	}
	debug(count)
	cout << count << endl;
}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	int t; cin >> t;
	// t = 1;
	while (t--) {
		solve();
	}


	return 0;
}
*/

/*#include <bits/stdc++.h>
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
#define mid(s,e) (s+(e-s)/2)
#define check cerr<<"~~~"<<endl;
#define endl "\n"
#define bl cout<<endl;
#define bl_ cerr<<endl;
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
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }


void solve() {
	int n; cin >> n;
	vi v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	int count = 0 , max_count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] == 0) {
			count++;
			if (max_count < count) max_count = count;
		}
		else {
			count = 0;
		}
	}
	cout << max_count << endl;
}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	int t; cin >> t;
	// t = 1;
	while (t--) {
		solve();
	}


	return 0;
}
*/

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
// #define mid(s,e) (s+(e-s)/2)
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
// bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }


// void solve() {
// 	string s;
// 	cin >> s;
// 	int count = 0;
// 	string v = "codeforces";
// 	for (int i = 0; i < s.size(); ++i)
// 	{
// 		if (s[i] != v[i]) {
// 			count++;
// 		}

// 	}
// 	cout << count << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int t; cin >> t;
// 	// t = 1;
// 	while (t--) {
// 		solve();
// 	}


// 	return 0;
// }


/*#include <bits/stdc++.h>
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
#define mid(s,e) (s+(e-s)/2)
#define check cerr<<"~~~"<<endl;
#define endl "\n"
#define bl cout<<endl;
#define bl_ cerr<<endl;
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
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }


void solve() {
	int n ; cin >> n;
	vi v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int j = 0;
	sort(v.begin(), v.end());
	int maxi = 0 , mini = 0, diff = 0, sum = 0;
	for (int i = 0; i < n; ++i)
	{
		j = n - i - 1;
		if (v[i] <= v[j] && i <= j) {
			mini = v[i];
			maxi = v[j];
			mini = min(mini, v[i]);
			maxi = max(maxi, v[j]);
			diff = maxi - mini;
			// debug(mini)
			// debug(maxi)
			j--;
			sum += diff;
		}
	}
	cout << sum << endl;
}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	int t; cin >> t;
	// t = 1;
	while (t--) {
		solve();
	}



	return 0;
}
*/



/*#include <bits/stdc++.h>
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
#define mid(s,e) (s+(e-s)/2)
#define check cerr<<"~~~"<<endl;
#define endl "\n"
#define bl cout<<endl;
#define bl_ cerr<<endl;
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
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }


void solve() {
	ll n; cin >> n;
	ll s = 0;
	s = ((n + 1) * n) + n + 2;
	cout << s << endl;
}

int main()
{
	fastio()
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	int t; cin >> t;
	// t = 1;
	while (t--) {
		solve();
	}


	return 0;
}
*/

// valid parenthesis -------->  using the stack
/*#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(stack<char>s, string str) {
	// if there is open bracket then insert it
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '(')
			s.push(str[i]);
		else if (!s.empty() && s.top() == '(')
			s.pop(); //cancel out both the brackets
		else
			return false;
	}
	return s.empty();
}
int main() {
	string str; cin >> str;
	stack<char>st;
	cout << (isValidParenthesis(st, str) ?  "true" : "False");
	return 0;
}
*/



// #include<bits/stdc++.h>
// using namespace std;
// typedef struct node {
// 	int data;
// 	struct node* next;
// } Node;
// typedef struct queue {
// 	Node * front ;
// 	Node * rear;
// } Queue;
// void initilize(	Queue * Q) {
// 	Q->front = NULL;
// 	Q->rear = NULL;
// }
// int isEmpty(Queue * Q) {
// 	return Q->front == NULL;
// }
// void enqueue(Queue * Q , int value) {
// // happends at the rear
// 	Node * new_node = (Node * )malloc(sizeof(Node));
// 	new_node->data = value;
// 	new_node->next = NULL;

// 	if (isEmpty(Q)) {
// 		Q->front = new_node;
// 		Q->rear = new_node;
// 	}
// 	else {
// 		Q->rear->next = new_node;
// 		Q->rear = new_node;
// 	}
// }
// int dequeue(Queue * Q) {
// 	// happends at the front part
// 	if (isEmpty(Q)) {
// 		return 0 ;
// 	}
// 	Node * temp = Q->front;
// 	int data = temp ->data;
// 	Q->front = Q->front->next;
// 	free(temp);
// 	if (Q->front == NULL) {
// 		Q->rear = NULL;
// 	}
// 	return data;
// }
// int peek(Queue * Q) {
// 	// top most element of the front data
// 	if (isEmpty(Q)) return 0;
// 	return Q->front->data;
// }
// void printing(Queue * Q) {
// 	if (isEmpty(Q)) return ;
// 	Node  * current = Q->front;
// 	while (current != NULL) {
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// 	Q->front = NULL;
// 	Q->rear = NULL;
// }
// int main() {
// 	Queue Q;
// 	initilize(&Q);
// 	enqueue(&Q, 10);
// 	enqueue(&Q, 20);
// 	enqueue(&Q, 30);
// 	printing(&Q);

// 	printf("%d \n" , peek(&Q));
// 	printf("%d \n" , dequeue(&Q));
// 	printing(&Q);

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

// 	int n; cin >> n;
// 	int d = (n + 4) / 5;
// 	cout << d << endl;


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
// 	int b, c, h; cin >> b >> c >> h;
// 	int sum = c + h;
// 	int count = 0;
// 	bool f = false;
// 	if (!f) { // b==false
// 		b = b - 2;
// 		--sum;
// 		count = count + 3;
// 		f = true;
// 	}
// 	while (sum-- && b > 0) {
// 		b--;
// 		count = count + 2;
// 	}
// 	cout << count << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t; cin >> t;
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
// #define endl "\n"
// #define bl cout<<endl;
// #define bl_ cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define print(x) cerr<<x<<endl

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
// 	int n, k, x; cin >> n >> k >> x;
// 	int sum = 0;
// 	vi c;
// 	bool p = false;
// 	while (k > 0) {
// 		while (k != x) {
// 			if (sum + k > n) break;
// 			sum += k;
// 			c.push_back(k);
// 			if (sum == n &&  p == 0) {
// 				cerr << "YES" << endl;
// 				cout << "YES" << endl;
// 				int s = c.size();
// 				debug(s)
// 				cout << s << endl;
// 				for (auto i : c) {
// 					cout << i << " ";
// 				}
// 				debug(c)
// 				cout << endl;
// 				p = true;
// 			}
// 		}
// 		k--;
// 		if (sum <= n && k != x && k > 0) {
// 			sum += k;
// 			c.push_back(k);
// 		}
// 	}
// 	if (!p) {
// 		if (sum == n ) {
// 			cerr << "YES" << endl;
// 			cout << "YES" << endl;
// 			int s = c.size();
// 			debug(s)
// 			cout << s << endl;
// 			for (auto i : c) {
// 				cout << i << " ";
// 			}
// 			debug(c)
// 			cout << endl;
// 		}
// 		else {
// 			cerr << "NO" << endl;
// 			cout << "NO" << endl;
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
// 	int t; cin >> t;
// 	// t = 1;
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
// 	int n, k, x; cin >> n >> k >> x;
// 	if (x != 1) {
// 		cout << "YES" << endl;
// 		cout << n << endl;
// 		for (int i = 0; i < n; i++) {
// 			cout << 1 << " ";
// 		}
// 		cout << endl;
// 	}
// 	else if (k == 1 || (k == 2 && n % 2 == 1))
// 	{
// 		cout << "NO" << endl;
// 	}
// 	else
// 	{
// 		cout << "YES" << endl;
// 		int half = n / 2;
// 		cout << half << endl;
// 		cout << (n % 2 == 1 ? 3 : 2) << " ";
// 		for (int i = 1; i < half; i++) {
// 			cout << "2 ";
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

// 	int t; cin >> t;
// 	t = 1;
// 	while (t--) {
// 		solve();
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// void solve(stack<int>&st, map<int, int>&mp) {
// 	int most_freq = -1, max_freq = 0;
// 	for (auto it = mp.begin(); it != mp.end(); ++it) {
// 		int key = it->first;
// 		int freq = it->second;
// 		// Compare the key with the elements in the vector v
// 		if (freq > max_freq) {
// 			most_freq = key;
// 			max_freq = freq;
// 		}
// 	}
// 	stack<int>temp;
// 	while (!st.empty()) {
// 		int ele = st.top();
// 		st.pop();
// 		if (ele != most_freq) temp.push(ele);
// 	}
// 	while (!temp.empty()) {
// 		int ele = temp.top();
// 		temp.pop();
// 		st.push(ele);
// 	}
// }
// void print(stack<int> s) {
// 	while (!s.empty()) {
// 		cout << s.top() << " ";
// 		s.pop();
// 	}
// 	cout << endl;
// }
// int main() {
// 	int n ; cin >> n;
// 	stack<int> st;
// 	map<int, int> mp;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int t ; cin >> t;
// 		st.push(t);
// 		mp[t]++;
// 	}
// 	cout << "before : ";
// 	print(st);
// 	solve(st, mp);
// 	cout << "after : ";
// 	print(st);

// 	return 0;
// }
// // input :
// // 6
// // 1 2 2 2 3 5

// // ouput :
// // before : 5 3 2 2 2 1
// // after : 5 3 1


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
// 	{
// 		cin >> v[i];
// 	}
// 	// sort(v.begin(), v.end());
// 	int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (v[i] == 0)cnt_0++;
// 		if (v[i] == 1)cnt_1++;
// 		if (v[i] == 2)cnt_2++;
// 	}
// 	bool sorted = false; //
// 	for (int i = 0; i < n ; ++i)
// 	{
// 		if (v[i] < v[i + 1]) {
// 			sorted = true;
// 			break;
// 		}
// 	}
// 	if (sorted ) cout << "YES" << endl;
// 	else cout << "NO" << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t; cin >> t;
// 	// t = 4;
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
// 	ll n, k;
// 	cin >> n >> k;
// 	bool found = false;
// 	for (int x = 0; x < 2; x++) {
// 		int t = n - x * k;
// 		debug(t)
// 		if (n - x * k >= 0 && (n - x * k) % 2 == 0) {
// 			cout << "YES" << endl;
// 			found = true;
// 			break;
// 		}
// 		bl_
// 	}

// 	if (!found) {
// 		cout << "NO" << endl;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t; cin >> t;
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
// #define mine(x) *min_element(all(x))
// #define maxe(x) *max_element(all(x))

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
// 	ll n ; cin >> n;
// 	vl v(n), p;
// 	ll sum = 0;
// 	bool f = false;
// 	ll count = 0, ans = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		sum += v[i];
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{

// 	}
// 	if (1)cerr << "YES" << endl;
// 	else cerr << "NO" << endl;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t; cin >> t;
// 	// t = 1;
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
// 	int cnt = 0;
// 	if (a < b) swap(a, b);
// 	while (b < a) {
// 		cnt++;
// 		a -= c;
// 		b += c;
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

// 	int t; cin >> t;
// 	// t = 1;
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
// 	int a , b;
// 	cin >> a >> b;
// 	int mini = INT_MAX, maxi = 0;
// 	while (b != 0) {
// 		int temp = b % 10;
// 		if (mini > temp) {
// 			mini = temp;
// 		}
// 		else {
// 			maxi = temp;
// 			break;
// 		}
// 		b /= 10;
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
// 	ll a , b;
// 	cin >> a >> b;
// 	ll cnt = a, ans = INT_MIN;
// 	for (int i = a; i < b; ++i)
// 	{
// 		string s = to_string(i);
// 		ll maxi = -1, mini = 10;
// 		for (int j = 0; j < s.size() - 1; ++j)
// 		{
// 			maxi = max(maxi, (ll)s[j] - '0');
// 			mini = max(mini, (ll)s[j] - '0');
// 		}
// 		if (maxi - mini == 9) {
// 			cout << i << endl;
// 			return;
// 		}
// 		if (maxi - mini > ans) {
// 			ans = maxi - mini ;
// 			cnt = i;
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
// 	int a, b, c; cin >> a >> b >> c;
// 	if (a + b == c ) {
// 		cout << "+" << endl;
// 		return;
// 	}
// 	else if (a - b == c) {
// 		cout << "-" << endl;
// 		return;
// 	}
// 	else {
// 		cout << "-" << endl;
// 	}
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/
// 	int t; cin >> t;
// 	// t = 1;
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
// bool is_alternate(int num) {
// 	bitset<32> bits(num);
// 	for (int i = 0; i < bits.size() - 1; i++) {
// 		if (bits[i] == bits[i + 1]) {
// 			return false;
// 		}
// 	}
// 	return true;
// }
// void solve() {
// 	int n ; cin >> n;
// 	string s ; cin >> s;
// 	map<string , int>mp;
// 	for (int i = 0; i < s.size(); ++i) {
// 		mp[string(1, s[i])]++;
// 	}


// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

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
// #define fo(i,a,b) for(ll i=a; i<=b; i++)
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
// void solve()
// {
// 	ll l, r; cin >> l >> r;
// 	ll cnt = l, ans = INT_MIN;
// 	for (ll i = l ; i <= r; i++) {
// 		string s = to_string(i);
// 		ll maxi = -1, mini = 10;
// 		for (ll j = 0 ; j <= s.size() - 1; j++) {
// 			maxi = max(maxi, (ll)s[j] - '0');
// 			mini = min(mini, (ll)s[j] - '0');
// 		}
// 		if (maxi - mini == 9) {
// 			cout << i << endl;
// 			return;
// 		}
// 		if (maxi - mini > ans) ans = maxi - mini, cnt = i;

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

// 	int t; cin >> t;
// 	// t = 1;
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
// #define yes__  cout<<"YES"<<endl
// #define no__   cout<<"NO"<<endl
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
// 	string s; cin >> s;
// 	// convert into lower case
// 	for (char &c : s)
// 		c = tolower(c);
// 	// remove duplicates
// 	auto newEnd = unique(s.begin(), s.end());
// 	s.resize(distance(s.begin(), newEnd));
// 	bool f = true;
// 	string temp = "meow";
// 	if (s.length() != temp.length()) {
// 		f = false;
// 	}
// 	else {
// 		for (int i = 0; i < s.length(); ++i)
// 		{
// 			if (s[i] != temp[i]) {
// 				f = false;
// 				break;
// 			}
// 		}
// 	}
// 	if (f) yes__;
// 	else no__;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/
// 	int t; cin >> t;
// 	// t = 2;
// 	while (t--) {
// 		solve();
// 	}
// 	return 0;
// }
/*--------------------------------------*/

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
// 	vector<int> v(n);
// 	int xor_1 = 0;
// 	for (int i = 0; i < n; i++) cin >> v[i];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		xor_1 ^= v[i];
// 	}
// 	debug(xor_1)
// 	if (!xor_1) cout << 0 << endl;
// 	else {
// 		if ((n & 1) == 1) cout << xor_1 << endl;
// 		else cout << -1 << endl;
// 	}
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/
// 	int t; cin >> t;
// 	// t = 1;
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
// 	vi v (n), c;
// 	for (int i = 0; i < n; ++i) cin >> v[i];
// 	if (is_sorted(all(v))) {
// 		cout << 0 << endl;
// 		return;
// 	}
// 	int maxi = v[0];
// 	debug(v)
// 	for (int i = 1; i < n - 1; ++i) {
// 		if (v[i] > v[i + 1])
// 			maxi = max(maxi, v[i]);
// 		debug(maxi)
// 	}
// 	cout << maxi << endl;
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
/*-------------------------------------------------*/

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
// 	vi v(n), b;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		b.pb(v[i]);
// 	}
// 	bool f = false;
// 	sort(all(b));
// 	debug(v)
// 	debug(b)
// 	for (int i = 0; i < n; ++i)
// 		if (((v[i] & 1) || (b[i] & 1)) && (!(v[i] & 1) || !(b[i] & 1))) f = true;
// 	if (!f) cout << "YES" << endl;
// 	else cout << "NO" << endl;
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

/*------------------------------------------------------------*/

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
// int find_index(vector<int>&v , int maxi) {
// 	for (int i = 0; i < (int)v.size(); ++i)
// 		if (v[i] == maxi)return i;
// 	return -1;
// }
// bool solve() {
// 	int n ; cin >> n;
// 	vi a(n), b(n), c, d;
// 	for (int i = 0; i < n; ++i)
// 		cin >> a[i];
// 	for (int i = 0; i < n; ++i)
// 		cin >> b[i];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (a[i] <= b[i]) {
// 			c.pb(a[i]);
// 			d.pb(b[i]);
// 		}
// 		else {
// 			c.pb(b[i]);
// 			d.pb(a[i]);
// 		}
// 	}
// 	if (c[(int)c.size() - 1] == maxe(c) && d[(int)d.size() - 1] == maxe(d))
// 		return 1;
// 	return 0;
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
// 	while (t--) {
// 		if (solve()) yes__
// 			else no__
// 			}
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
// 	int n , k , x; cin >> n >> k >> x;
// 	// take 1 to k except x to make the n
// 	if (x != 1) {
// 		// 1 can be used
// 		cout << "YES" << endl;
// 		cout << n << endl;
// 		for (int i = 0; i < n; ++i)
// 		{
// 			cout << 1 << " ";
// 		}
// 		cout << endl;
// 	}
// 	else if (k == 1 || (k == 2 && n & 1)) cout << "NO" << endl;
// 	else {
// 		// cannot use 1
// 		cout << "YES" << endl;
// 		// mulitple
// 		int hs = n / 2;
// 		debug(hs)
// 		cout << hs << endl;
// 		if (n & 1) cout << 3 << " ";
// 		else cout << 2 << " ";
// 		for (int i = 1; i < hs; i++) {
// 			cout << "2 ";
// 			debug(i)
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
// bool checkAlternateBinary(vector<int>&v) {
// 	int n = (int)v.size();
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (n == 1 && (v[i] == 0 || v[i]) == 1) {
// 			return 1;
// 		}
// 		else if ((v[i] == 0 && v[i + 1] == 1) or (v[i] == 1 && v[i + 1] == 0)) {
// 			if (!(n & 1)) {
// 				if (v[n - 1] != v[0]) return 1;
// 				else return 0;
// 			}
// 			else {
// 				if (v[n - 1] == v[0]) return 1;
// 				else return 0;
// 			}
// 		}
// 		else {
// 			return 0;
// 		}
// 	}
// 	return 0;
// }
// void solve() {
// 	int n ; cin >> n;
// 	string s ; cin >> s;
// 	vi v(26, -1);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int temp = s[i] - 'a';
// 		debug(temp)
// 		if (v[temp] == -1) v[temp] = i % 2;
// 		else {
// 			if (v[temp] != (i % 2)) {
// 				cout << "NO" << endl;
// 				debug(v)
// 				return;
// 			}
// 		}
// 	}
// 	cout << "YES" << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int t ; cin >> t;
// 	t = 2;
// 	while (t--) solve();


// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define print(x) for(int i =0 ;i<(int)x.size();i++) cout<<x[i]<<" ";

// int main() {
// 	cout << (8 % 5);
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
// // void checking(vector<int>&v) {
// // 	set<int>ue;
// // 	for (int e : v) {
// // 		if (ue.count(e) > 0) {
// // 			cout << -1 << endl;
// // 			return;
// // 		}
// // 		ue.insert(e);
// // 	}
// // }
// void solve() {
// 	int n ; cin >> n;
// 	vi v(n);
// 	vi a(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		cin >> a[i];
// 	}
// 	bool f = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (i > 0 && v[i] >= v[0] && a[i] >= a[0])
// 			f = 1;
// 	}
// 	if (f) {
// 		cout << -1 << endl;
// 	}
// 	else cout << v[0] << endl;
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

/*------------------------------------------------------*/
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
// int checker(int n , string s) {
// 	int temp;
// 	for (int i = 1; i < n; i++)
// 	{
// 		temp = s[i];
// 		if (temp >= 'a' && temp <= 'z')
// 		{
// 			if (s[i - 1] == '1')
// 			{
// 				for (int j = i; j < n; j++)
// 				{
// 					if (s[j] == temp) s[j] = '0';
// 				}
// 			}
// 			else if (s[i - 1] == '0')
// 			{
// 				for (int j = i; j < n; j++)
// 				{
// 					if (s[j] == temp) s[j] = '1';
// 				}
// 			}
// 		}
// 	}
// 	for (int i = 1; i < n; ++i)
// 	{
// 		if (s[i] == s[i - 1])return 1;
// 	}
// 	return 0;
// }
// void solve() {
// 	int n ; cin >> n;
// 	string s, a; cin >> s;
// 	a = s;
// 	int c = 0 , d = 0;
// 	char temp = a[0];
// 	a[0] = '1';
// 	for (int i = 1; i < n; ++i)
// 	{
// 		if (a[i] == temp) a[i] = '1';
// 	}
// 	c = checker(n, a);
// 	temp = s[0];
// 	s[0] = '0';
// 	for (int i = 1; i < n; ++i)
// 	{
// 		if (s[i] == temp) s[i] = '0';
// 	}
// 	d = checker(n, s);
// 	if (c == 0 || d == 0)cout << "Yes" << endl;
// 	else if (c == 1 || d == 1)cout << "No" << endl;

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
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout << 3 * i + 1 << " ";
// 	}
// 	cout << endl;
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
// 	int n, k; cin >> n >> k;
// 	vector<pair<int, int>>v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int x, y; cin >> x >> y;
// 		v[i] = make_pair(x, y);
// 	}
// 	// using the lambada func
// 	auto it = find_if(v.begin(), v.end(), [k](const pair<int, int> & p) {
// 		return p.ss == k;
// 	}
// 	                 );
// 	if (it != v.end()) cout << "yes" << endl;
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
// // ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// /*----------------------------------------------------------------------*/
// bool check_lcm(ll n) {
// 	vector<ll> v;
// 	for (ll i = 2; i <= n; ++i) {
// 		while (n % i == 0) {
// 			v.push_back(i);
// 			n /= i;
// 		}
// 	}
// 	debug(v)
// 	bl_
// 	if (n > 1) {
// 		v.push_back(n);
// 	}
// 	return v.size() >= 2;
// }
// void solve() {
// 	ll n; cin >> n;
// 	if (check_lcm(n)) cout << "Yes" << endl;
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
// vector<ll> printFibb(int n ) {
// 	vector<ll> arr;
// 	ll a = 1, b = 1 , fib = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		arr.pb(a);
// 		fib = a + b;
// 		a = b;
// 		b = fib;
// 	}
// 	return arr;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	/*---------------------------------------------*/

// 	int n; cin >> n;
// 	vector<ll> v = printFibb(n);
// 	debug(v)



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
// 	string s;
// 	vi v;
// 	for (int i = 1; i <= 9; ++i)
// 	{
// 		if (n % i == 0) {
// 			v.pb(i);
// 		}
// 	}
// 	debug(v)
// 	int m = v.size() - 1;
// 	for (int i = 0; i <= n ; ++i)
// 	{
// 		for (int j = 0; j <= m; ++j)
// 		{
// 			if (i % (n / v[j]) == 0) {
// 				char c = (v[j] + '0');
// 				s.pb(c);
// 				break;
// 			}
// 			else if (j == m) {
// 				s.pb('-');
// 			}
// 		}
// 	}
// 	cout << s << endl;
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
string calculateDigitSum(string str) {
	int sum = accumulate(str.begin(), str.end(), 0,
	[](int total, char c) { return total + (c - '0'); });
	return to_string(sum);
}
// void recursive_call(string a) {
// 	ll ans = digit_sum(stoi(a));
// 	string s = to_string(ans);
// 	if (s.length() == 1) cout << ans;
// 	else recursive_call(to_string(ans));
// }
void recursive_call(string a) {
	string c = calculateDigitSum(a);
	if (c.length() == 1) cout << c;
	else recursive_call(c);
}
void solve() {
	ll n , k; cin >> n >> k;
	string d = to_string(n);
	string s ;
	for (ll i = 0; i < k; ++i)
		s += d;
	recursive_call(s);
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

