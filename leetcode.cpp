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
// #define sz(x) ((ll)(x).size())
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

// vector<int> solve() {
// 	vector<ll>nums;
// 	ll target; cin >> target;
// 	ll tt;
// 	while (cin >> tt) {
// 		nums.pb(tt);
// 	}
// 	vector<int> result;

// 	for (long long i = 0; i < nums.size() - 1; ++i) {
// 		for (long long j = i + 1; j < nums.size(); ++j) {
// 			long long sum = nums[i] + nums[j];

// 			if (sum == target) {
// 				result.push_back(i);
// 				result.push_back(j);
// 				debug(result)
// 				return result;
// 			}
// 		}
// 	}
// 	return result; // If no solution is found
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	solve();



// 	return 0;
// }


#include<bits/stdc++.h>/*
using namespace std;

int parition(vector<int>&v, int low , int high) {
	int pivot = v[low];
	int pivot_index = low + 1;
	for (int i = low + 1; i <= high; ++i)
	{
		if (v[i] <= pivot) {
			swap(v[pivot_index], v[i]);
			pivot_index++;
		}
	}
	swap(v[low], v[pivot_index - 1]);
	return pivot_index - 1;
}
void quickSort(vector<int>&v , int low , int high) {
	if (low < high) {
		int pivot_index = parition(v, low , high);
		quickSort(v, low , pivot_index - 1);
		quickSort(v, pivot_index + 1, high);
	}
}
void solve() {
	int n ; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	int low = v[0],  high = v[n - 1];
	quickSort(v, low , high);
	for (auto i : v) {
		cout << i << " ";
	}

}
void merge(vector<int>&v , int low , int high , int mid) {
	int left = low;
	int right = mid + 1;
	vector<int>temp(high - low + 1);
	int k = 0;
	while (left <= mid && right <= high) {
		if (v[left] <= v[right]) {
			temp[k++] = v[left++];
		}
		else {
			temp[k++] = v[right++];
		}
	}
	while (left <= mid) {
		temp[k++] = v[left++];
	}
	while (right <= high) {
		temp[k++] = v[right++];
	}
	for (int i = low ; i <= high; i++) {
		v[i] = temp [i - low];
	}
}
void merge_sort(vector<int> &v , int low , int high) {
	if (low == high) return ;
	int mid = (low + high) / 2;
	merge_sort(v, low , mid);
	merge_sort(v, mid + 1 , high);
	merge(v, low, high, mid);

}
void solve1() {
	int n ; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	int low = 0,  high = n - 1;
	merge_sort(v, low , high);
	for (auto i : v) {
		cout << i << " ";
	}

}
int main() {
	// solve();
	solve1();
	return 0;
}
*/
// #include<bits/stdc++.h>
// using namespace std;

// void push_at_the_end(stack<int>&s, int t) {
// 	if (s.empty()) {
// 		s.push(t);
// 		return;
// 	}
// 	if (s.top() <= t) {  // if it is, the 't' element is pushed onto the stack , effectvelu insertig it at the correct sorted position
// 		s.push(t);
// 	}
// 	// now create a space for 'inserting the 'target element'
// 	int top_element = s.top();
// 	s.pop();
// 	push_at_the_end(s, t);
// 	// call continues to insert the 'target' element at its correct soreted position in the stack
// }
// void stack_reverse(stack<int>&s) {
// 	if (s.empty()) return;
// 	int t = s.top();
// 	s.pop();
// 	stack_reverse(s);
// 	push_at_the_end(s, t);
// }
// void print_stack(stack<int>&s) {
// 	while (!s.empty()) {
// 		cout << s.top() << endl;
// 		s.pop();
// 	}
// 	cout << endl;
// }
// int main() {
// 	stack<int> s;
// 	s.push(10);
// 	s.push(30);
// 	s.push(50);
// 	s.push(70);
// 	s.push(90);
// 	stack_reverse(s);
// 	print_stack(s);
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// //front and rare should be null at the initial stage
// //if am adding the first element then my front and rare becomes the first element]

// //increamenting the rare part if enqueueing
// typedef struct node {
// 	int data;
// 	struct node* next;//towards itself referencing
// } Node;

// typedef struct queue {
// 	Node * front;
// 	Node * rear ;
// } Queue ;

// void initialize(Queue * Q) {
// 	Q->front = NULL;
// 	Q->rear = NULL;
// }

// int isEmpty(Queue * Q) {
// 	return Q->front == NULL;
// }

// void enqueue(Queue * Q, int value) {
// 	//creation of a node memory for the node without any checking
// 	Node * new_node = (Node *)malloc(sizeof(Node));
// 	new_node->data = value;
// 	new_node->next = NULL;

// 	//two conditions either empty or having nodes already
// 	if (isEmpty(Q)) {
// 		Q->front = new_node;
// 		Q->rear = new_node;
// 	}
// 	else {
// 		Q->rear->next = new_node;
// 		Q->rear = new_node;
// 	}
// }

// int dequeue(Queue * Q) {//bother about the front because happends in the front
// 	if (isEmpty(Q)) {
// 		printf("Queue is Empty");
// 		exit(1);
// 	}
// 	else {
// 		//have to be returned the data that has to be deleted
// 		Node * temp = Q->front; //temprory pointer for pointing at the first node
// 		int data = temp->data;
// 		Q->front = Q->front->next;
// 		free(temp);

// 		//for the single node q -> front is already is null
// 		if (Q->front == NULL) {
// 			Q->rear = NULL;
// 		}
// 		return data;
// 	}
// }

// int peek(Queue * Q) {
// 	//topmost element is front data part
// 	if (isEmpty(Q)) {
// 		printf("Empty Q");
// 		exit(1);
// 	}
// 	else {
// 		return Q->front->data;
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

// void destroy_stack(Queue * Q) {
// 	Node * current = Q->front;
// 	while (current != NULL) {
// 		Node * temp = current;
// 		current = current->next;
// 		free(temp);
// 	}
// 	//because we don't have created the memory allocation for the Queue part
// 	Q->front = NULL;
// 	Q->rear = NULL;
// }
// int main() {
// 	Queue Q ;
// 	initialize(&Q);//call by reference

// 	enqueue(&Q, 10);
// 	enqueue(&Q, 20);
// 	enqueue(&Q, 30);

// 	printing(&Q);

// 	printf("peek %d\n", peek(&Q) );
// 	printf("dequeued %d\n", dequeue(&Q) );


// 	return 0;
// }

// Enqueue 10
// Enqueue 20
// Enqueue 30
// peek 10
// dequeued 10



//QUEUE WITH ARRAYS

//front -> 0  rear -> -1  size=0
//circular queue
/*
#include<bits/stdc++.h>
using namespace std;

#define cap 5
//circular queue
typedef struct queue {
int front;//index
int rear;//index
int size;
int arr[cap];//static memeory allocation
} Queue;

void initilize(Queue* Q) {
	Q->front = 0;
	Q->rear = -1;
	Q->size = 0;
}
int isEmpty(Queue * Q ) {
	return Q->size == 0;
}

int isFull(Queue * Q ) {
	return Q->size == cap;
}

void enqueue(Queue * Q, int value) {
	if (isFull(Q)) {
		printf("Overflow");
		return;
	}
	//normal queue
	// Q->rear = Q->rear + 1;
	//for the circular queue
	Q->rear = (Q->rear + 1) % cap;//wrapping the last index to the first
	//will come back to the zero again
	Q->arr[Q->rear] = value;
	//deque then size decreaese
	Q->size++;
}
int dequeue(Queue * Q) {
	if (isEmpty(Q)) {
		printf("its empty");
		exit(1);
	}
	int ans = Q->arr[Q->front];
	Q->front = (Q->front + 1) % cap;//circular queue
	Q->size--;
	return ans;
}

int peek(Queue * Q) { //peeking through front
	if (isEmpty(Q)) {
		printf("Emtpy stack\n");
		return 0;
	}
	return Q->arr[Q->front];
}
void printing(Queue * Q) {
	//if the stack is empty i cannot print anything
	if (isEmpty(Q)) {
		printf("Emtpy stack\n");
		return ;
	}
	for (int i = 0; i < Q->size; ++i)
	{
		printf("%d ", Q->arr[(Q->front + i % cap)]);
	}
}

//there is nothing to free in the function because of the static array
int main() {
	Queue Q; initilize(&Q);//call by reference
	enqueue(&Q, 10);
	enqueue(&Q, 20);
	enqueue(&Q, 30);
	enqueue(&Q, 40);
	printing(&Q);
	printf("\nDequeued->%d\n", dequeue(&Q));
	printf("\npeek % d\n", peek(&Q));
	printing(&Q);
	return 0;
}*/

// 10 20 30 40
// Dequeued->10

// peek  20
// 20 30 40



// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	vector<int>v = {1, 2, 4, 5};
// 	for (int i = 0; i < (int) v.size(); ++i)
// 	{

// 		if (i < 3) { /*i == 0/1*/
// 			cout << "fuck" << endl;
// 			if (i == 1) {
// 				cout << "fuck 2" << endl;
// 			}
// 			else if ( i == 2) {
// 				if (i == 2) {
// 					continue;
// 				}
// 				cout << "fuck 3" << endl;
// 			}
// 		}
// 		else {
// 			cout << i << endl;
// 		}
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main() {
// 	ll t;
// 	cin >> t;
// 	for (ll i = 1; i <= t; i++)
// 	{
// 		ll n, k, x;
// 		cin >> n >> k >> x;
// 		if (k == 1)
// 			cout << "NO" << endl;
// 		else
// 		{
// 			if (x != 1)
// 			{
// 				cout << "YES" << endl;
// 				cout << n << endl;
// 				for (ll j = 1; j <= n; j++)
// 				{
// 					cout << "1";
// 					if (j != n)
// 						cout << " ";
// 					else
// 						cout << endl;
// 				}
// 			}
// 			else
// 			{
// 				if (n % 2 == 0)
// 				{
// 					cout << "YES" << endl;
// 					cout << n / 2 << endl;
// 					for (ll j = 1; j <= n / 2; j++)
// 					{
// 						cout << "2";
// 						if (j != n / 2)
// 							cout << " ";
// 						else
// 							cout << endl;
// 					}
// 				}
// 				else
// 				{
// 					if (k == 2)
// 						cout << "NO" << endl;
// 					else
// 					{
// 						cout << "YES" << endl;
// 						cout << ((n - 3) / 2) + 1 << endl;
// 						cout << "3";
// 						for (ll j = 1; j <= (n - 3) / 2; j++)
// 							cout << " 2";
// 						cout << endl;
// 					}
// 				}
// 			}
// 		}
// 	}
// 	return 0;
// }



// #include <iostream>

// int main() {
// 	int t;
// 	std::cin >> t;

// 	while (t--) {
// 		int n, k;
// 		std::cin >> n >> k;

// 		bool found = false;
// 		for (int x = 0; x < 2; x++) {
// 			if (n - x * k >= 0 && (n - x * k) % 2 == 0) {
// 				std::cout << "YES" << std::endl;
// 				found = true;
// 				break;
// 			}
// 		}

// 		if (!found) {
// 			std::cout << "NO" << std::endl;
// 		}
// 	}

// 	return 0;
// }




