// int interpolationSearch( vi & v, int tar) {
// 	int low = 0, high = sz(v) - 1;
// 	while (low <= high && v[low] <= tar && v[high] >= tar) {
// 		int pos = low + (tar - v[low]) / (v[high] - v[low] * (high - low));
// 		if (v[pos] == tar) return pos;
// 		else if (v[pos] < tar) low = pos + 1;
// 		else high = pos - 1;
// 	}
// 	return -1;
// }
/*---------------------------------*/
// int binarySearch(vi & v, int tar) {
// 	int s = 0, e = sz(v) - 1;
// 	while (s <= e) {
// 		int mid = (s + e) / 2;
// 		if (tar == v[mid]) return mid;
// 		else if (tar < v[mid]) e = mid - 1;
// 		else s = mid + 1;
// 	}
// 	return -1;
// }
/*---------------------------------*/
// void removeDuplicates(vi & v ) {
// 	int j = 0;
// 	for (int i = 1; i < sz(v); ++i)
// 	{
// 		if (v[i] != v[j]) {
// 			j++;
// 			v[j] = v[i]; //move unique element to front
// 		}
// 	}
// 	v.resize(j + 1); // upto index j=3 then there are 4 unique element
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/

// stack with array

// #include <bits/stdc++.h>
// using namespace std;
// #define bl cerr<<"\n";
// #define en cout<<"\n";

// typedef struct Stack {
// 	int capacity, top, *arr;
// } St;
// St* createStack(int capacity) {
// 	St *newStack = (St*)malloc(sizeof(St));
// 	newStack->capacity = capacity;
// 	newStack->top = -1;
// 	newStack->arr = (int*)malloc(newStack->capacity * sizeof(4));
// 	return newStack;
// }
// int isFull(St * newStack) {return newStack->top + 1 == newStack->capacity;}
// int isEmpty(St * newStack) {return newStack->top == -1;}
// void pushElement (St * newStack, int data) {
// 	if (isFull(newStack)) return ;
// 	newStack->arr[++newStack->top] = data; // preincrememt of the index
// }
// int popElement(St * newStack) {
// 	if (isEmpty(newStack)) return 0;
// 	return newStack->arr[newStack->top--];
// }
// int peekElement(St * newStack) {
// 	if (isEmpty(newStack)) return 0;
// 	return newStack->arr[newStack->top];
// }
// void destroyStack(St * newStack) {
// 	free(newStack->arr);
// 	free(newStack);
// }
// void printStack(St * newStack) {
// 	if (isEmpty(newStack)) return ;
// 	for (int i = newStack->top; i >= 0; i--)
// 		cout << newStack->arr[i] << " ";
// }
// int main() {
// 	St * newStack = createStack(100); //of capacity 100
// 	pushElement(newStack, 10);
// 	pushElement(newStack, 20);
// 	pushElement(newStack, 30);
// 	printStack(newStack); en
// 	cout << "Pop : " << popElement(newStack); en
// 	cout << "Peek : " << peekElement(newStack); en
// 	printStack(newStack); en
// 	/*30 20 10
// 	Pop : 30
// 	Peek : 20
// 	20 10*/

// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
// Stack with using the Linked List

// #include <bits/stdc++.h>
// using namespace std;
// #define en cout<<"\n";

// typedef struct Node {
// 	int data;
// 	struct Node *next;
// } Nd;
// typedef struct Stack {
// 	Nd *top;
// } St;
// // creating a node
// Nd * createNode(int data) {
// 	Nd * newNode = (Nd*) malloc(sizeof(Nd));
// 	newNode->data = data;
// 	newNode->next = nullptr;
// 	return newNode;
// }
// // creating a stack
// St * createStack() {
// 	St * newStack = (St*) malloc(sizeof(St));
// 	newStack->top = nullptr;
// 	return newStack;
// }
// int isEmpty(St * newStack) {return newStack->top == NULL;}
// void pushElement(St * newStack, int data) {
// 	Nd * newNode = createNode(data);
// 	newNode->next = newStack->top;
// 	newStack->top = newNode;
// }
// int popElement(St * newStack) {
// 	if (isEmpty(newStack)) return 0;
// 	Nd * temp = newStack ->top;
// 	int data = temp->data;
// 	newStack->top = newStack->top->next;
// 	free(temp);
// 	return data;
// }
// int peekElement (St * newStack) {
// 	if (isEmpty(newStack)) return 0;
// 	return newStack->top->data;
// }
// void printStack(St * newStack) {
// 	if (isEmpty(newStack)) return ;
// 	Nd * curr = newStack->top;
// 	while (curr != nullptr) {
// 		cout << curr->data << " ";
// 		curr = curr->next;
// 	}
// }
// int main() {
// 	St * newStack = createStack();
// 	pushElement(newStack, 10);
// 	pushElement(newStack, 20);
// 	pushElement(newStack, 30);
// 	printStack(newStack); en
// 	cout << "pop : " << popElement(newStack); en
// 	cout << "peek : " << popElement(newStack); en
// 	printStack(newStack); en
// 	/*30 20 10
// 	pop : 30
// 	peek : 20
// 	10*/
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
//Queue with the Array
// circular Queue

#include <bits/stdc++.h>
using namespace std;
#define en cout<<"\n";

#define cap 5
typedef struct queue {
	int front, rear, sz, arr[cap];
} Queue;
void initilize(Queue *& q) {
	q->front = 0, q->rear = -1, q->sz = 0;
}
int isEmpty(Queue * q) {return q->sz == 0;}
int isFull(Queue * q) {return q->sz == cap;}
void enqueue(Queue * q, int data) { // from the rear part
	if (isFull(q)) return;
	q->rear = (q->rear + 1) % cap;
	q->arr[q->rear] = data;
	q->sz++;
}
int dequeue(Queue * q) {
	if (isEmpty(q)) return 0;
	else{
	int temp = q->arr[q->front];
	q->front = (q->front + 1) % cap;
	q->sz--;
	return temp;
	}
}
int frontElement(Queue * q) {
	if (isEmpty(q))return 0;
	return q->arr[q->front];
}
int backElement(Queue * q){
  if (isFull(q)) return 0;
  return q->arr[q->rear];
}
void printQueue(Queue * q) {
	if (isEmpty(q))return;
	for (int i = 0; i < q->sz; i++) cout << q->arr[(q->front + i) % cap] << " ";
}
int main() {
	Queue *q = new Queue; initilize(q);
	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 30);
	printQueue(q); en
	cout << "Dequeue : " << dequeue(q); en
	cout<<"after deletion : ";
	printQueue(q); en
	cout << "Front : " << frontElement(q); en
	cout << "Back : " << backElement(q); en
	return 0;
}
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Queue with Linked List

// #include <bits/stdc++.h>
// using namespace std;
// #define en cout<<"\n";


// typedef struct Node {
// 	int data;
// 	struct Node *next;
// } Nd;
// typedef struct Queue {
// 	Nd * front, * rear;
// } Queue;
// Nd * createNode(int data) {
// 	Nd * newNode = (Nd*)malloc(sizeof(Nd));
// 	newNode->data = data;
// 	newNode->next = nullptr;
// 	return newNode;
// }
// void ini(Queue * q) {
// 	q->front = q->rear = nullptr;
// }
// int isEmpty(Queue * q) {return q->front == nullptr;}
// void enqueue(Queue * q, int data) { //rear
// 	Nd * newNode = createNode(data);
// 	if (isEmpty(q)) {
// 		q->front = q->rear = newNode;
// 		return;
// 	}
// 	q->rear->next = newNode;
// 	q->rear = newNode;
// }
// int dequeue(Queue * q) { // front
// 	if (isEmpty(q)) return 0;
// 	Nd * temp = q->front; // first node pointing
// 	int data = temp->data;
// 	q->front = q->front->next;
// 	free(temp);
// 	if (q->front == nullptr) q->rear = nullptr; // for the single node
// 	return data;
// }
// int peek(Queue * q) {
// 	if (isEmpty(q)) return 0;
// 	return q->front->data;
// }
// void printQueue(Queue * q) {
// 	if (isEmpty(q)) return;
// 	Nd * curr = q->front;
// 	while (curr != nullptr) {
// 		cout << curr->data << " ";
// 		curr = curr->next;
// 	}
// }
// int main() {
// 	Queue * q = new Queue;
// 	ini(q);
// 	enqueue(q, 10);
// 	enqueue(q, 20);
// 	enqueue(q, 30);
// 	enqueue(q, 40);
// 	printQueue(q); en
// 	cout << "Dequeue : " << dequeue(q); en
// 	cout << "Peek : " << peek(q); en
// 	printQueue(q); en
// 	enqueue(q, 50);
// 	printQueue(q);
// 	/*10 20 30 40
// 	Dequeue : 10
// 	Peek : 20
// 	20 30 40
// 	20 30 40 50*/
// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
// Linked List All operations ------>
// Single Linked List

// #include <bits/stdc++.h>
// using namespace std;
// #define en cout<<"\n";
// typedef struct Node {
// 	int data;
// 	struct Node * next;
// } Nd;
// Nd * createNode(int data) {
// 	Nd * newNode = (Nd*)malloc(sizeof(Nd));
// 	newNode->data = data;
// 	newNode->next = nullptr;
// 	return newNode;
// }
// void insertBeg(Nd *& head, int data) {
// 	Nd * newNode = createNode(data);
// 	newNode->next = head;
// 	head = newNode;
// }
// void insertPosition(Nd *& head, int data, int pos) {
// 	if (pos <= 0 )return;
// 	if (pos == 1) {
// 		insertBeg(head, data);
// 		return;
// 	}
// 	Nd * newNode = createNode(data);
// 	Nd * curr = head;
// 	int i = 0;
// 	while (i < pos - 1) {
// 		curr = curr->next; i++;
// 	}
// 	newNode->next = curr->next;
// 	curr->next = newNode;
// }
// void insertEnd(Nd *& head, int data) {
// 	Nd * newNode = createNode(data);
// 	if (head == nullptr) {
// 		head = newNode;
// 		return;
// 	}
// 	Nd * curr = head;
// 	while (curr->next == NULL) {
// 		curr = curr->next;
// 	}
// 	curr->next = newNode;
// }
// void deleteBeg(Nd *& head) {
// 	if (head == nullptr) return;
// 	Nd * curr = head;
// 	head = head->next;
// 	delete(curr);
// }
// void deleteEnd(Nd *& head) {
// 	if (head == nullptr) return;
// 	Nd * curr = head, *prev;
// 	while (curr->next != nullptr) {
// 		prev = curr;
// 		curr = curr->next;
// 	}
// 	if (prev == nullptr) {
// 		head = nullptr;
// 		return;
// 	}
// 	prev->next = nullptr;
// 	delete curr;
// }
// void deleteAtPos(Nd *& head, int pos) {
// 	if (head == nullptr) {
// 		cout << "List is empty" << endl;
// 		return;
// 	}
// 	if (pos == 0) {
// 		deleteBeg(head);
// 		return;
// 	}
// 	Nd * curr = head, *prev = nullptr;
// 	int i = 0;
// 	while (curr != nullptr and i < pos - 1) {
// 		prev = curr;
// 		curr = curr->next;
// 		i++;
// 	}
// 	if (curr == nullptr)cout << "Out of Range" << endl;
// 	prev->next = curr->next;
// 	delete curr;
// }
// void printLL(Nd * head) {
// 	Nd * curr = head;
// 	while (curr != nullptr) {
// 		cout << curr->data << " ";
// 		curr = curr->next;
// 	}
// }
// int main() {
// 	Nd * head = nullptr;
// 	insertBeg(head, 10);
// 	insertBeg(head, 20);
// 	insertBeg(head, 30);
// 	insertBeg(head, 40);
// 	insertBeg(head, 50);

// 	// printLL(head); en
// 	// insertPosition(head, 80, 3);
// 	// printLL(head); en
// 	// deleteBeg(head);
// 	// printLL(head); en
// 	// deleteEnd(head);
// 	printLL(head); en
// 	deleteAtPos(head, 3); en
// 	printLL(head); en
// 	// 50 40 30 20 10
// 	// 50 40 30 80 20 10
// 	// 40 30 80 20 10
// 	// 40 30 80 20
// 	// when deleting the 3rd node
// 	// 50 40 20 10

// 	return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Doubly Linked List-----> All operations
// for the deletion of the node there can be 3 cases from the beg , end , and pos

#include<bits/stdc++.h>
using namespace std;

typedef struct node {
	int data;
	struct node * next, * prev;
} Node;
Node * createNode(int value) {
	Node * newNode = (Node *)malloc(sizeof(Node));
	newNode->next = newNode->prev = NULL;
	newNode->data = value;
	return newNode;
}
void insertAtBeg(Node *& head, Node*& tail, int value) {
	Node * newNode = createNode(value);
	if (head == nullptr)tail = newNode;
	else head->prev = newNode;
	newNode->next = head;
	head = newNode;
}
void insertAtEnd(Node *& head, Node*& tail, int value) {
	Node * newNode = createNode(value);
	if (head == nullptr) {
		// both head and tail pointing to the newNode
		tail = head = newNode;
		return;
	}
	// step 1: first i given the address of the newNode to the next of the tail
	// step 2: then the address of the tail to the newNode prev
	// step 3:and finally pointing the tail to the end of the list that is the newNode
	tail->next = newNode;
	newNode->prev = tail;
	tail = newNode;
}
void insertAtPos(Node *& head, Node*& tail, int value, int pos) {
	Node * newNode = createNode(value);
	Node * curr = head;
	int i = 0;
	while (i < pos - 1) {
		curr = curr->next; i++;
	}
	newNode->prev = curr;
	newNode->next = curr->next;
	curr->next = newNode;
	newNode->next->prev = newNode;
}
void deleteBeg(Node *&head) {
	if (head == NULL) {
		return;
	}
	Node * temp = head;
	head = head->next;
	delete temp;
}
void deleteEnd(Node*& head, Node *& tail) {
	if (tail == NULL) {
		return;
	}
	Node * temp = tail;
	tail = tail->prev;
	if (tail != NULL) tail ->next = NULL;
	else head = NULL;
	delete temp;
}
void deletePos(Node *& head, int pos) {
	if (pos == 0) {
		return;
	}
	if (pos == 1) {
		deleteBeg(head);
		return;
	}
	if (pos > 1) {
		int i = 0;
		Node *curr = head;
		Node *prev = nullptr;
		while (curr != nullptr && i < pos - 1) {
			prev = curr;
			curr = curr->next;
			i++;
		}
		if (curr == nullptr) {
			printf("Out of Bounds");
			return;
		}
		prev->next = curr->next;
		if (curr->next != nullptr) {
			curr->next->prev = prev;
		}
		delete curr;
	}
}

void printing(Node *&head) {
	Node * curr = head;
	while (curr != nullptr) {
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}
void insertionLL(Node *& head, Node*&tail) {
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 20);
	insertAtEnd(head, tail, 30);
	insertAtEnd(head, tail, 40);
	insertAtBeg(head, tail, 60);
	insertAtBeg(head, tail, 70);
	insertAtBeg(head, tail, 80);
	// int index = 2;
	// insertAtPos(head, tail, 100, index);
	printing(head);
	// deleteBeg(head);
	// deleteEnd(head, tail);
	// deletePos(head, 5);
	printing(head);
}
int main() {
	Node * head = NULL, * tail = NULL ;
	insertionLL(head, tail);
	return 0;
}
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
// Circular Linked List--->
// #include <bits/stdc++.h>
// using namespace std;
// typedef struct node {
// 	int data;
// 	struct node * next;
// } Node;
// Node * createNode(int value) {
// 	Node * newNode = (Node*)malloc(sizeof(Node));
// 	newNode->data = value;
// 	newNode->next = NULL;
// 	return newNode;
// }
// void insertAtBeg(Node *&head, int value) {
// 	Node * newNode = createNode(value);
// 	if (head == NULL) {
// 		head = newNode; // the newNode becomes the head Node,
// 		newNode->next = head; // and it's next pointer is set to itself , creating a circular reference
// 		return;
// 	}
// 	else {
// 		newNode->next = head->next; // next pointer of the newNode is set to the next pointer o fthe current head Node, This ensures that the new node is inserted after the head node
// 		head->next = newNode; // the next pointer of the current head node is updated to point to the newNode effectively inserting the new Node at the begnining of the circular linked list
// 	}

// }
// void insertions(Node *& head) {
// 	insertAtBeg(head, 10);
// 	insertAtBeg(head, 20);
// 	insertAtBeg(head, 30);
// }
// int main() {
// 	Node * head;
// 	insertions(head);
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

// void bubbleSort(vector<int>&v) {
// 	for (int i = 1; i < sz(v); i++) {
// 		for (int j = 0; j < sz(v) - i; j++) {
// 			if (v[j] > v[j + 1]) {
// 				swap(v[j], v[j + 1]);
// 			}
// 		}
// 	}
// }
// void insertionSort(vector<int>&v) {
// 	int i, j, element;
// 	for (i = 1; i < sz(v); i++) {
// 		j = i; element = v[i];
// 		while (j > 0 and v[j - 1] > element) {
// 			v[j] = v[j - 1]; j--;
// 		}
// 		v[j] = element;
// 	}
// }
// void selectionSort(vector<int>&v) {
// 	int i, j, minpos;
// 	for (i = 0; i < sz(v) - 1; i++) {
// 		minpos = i;
// 		for (j = i + 1; j < sz(v); j++) if (v[j] < v[minpos])minpos = j;
// 		if (minpos != i) swap(v[i], v[minpos]);
// 	}
// }
// void merge(vector<int>& v , int low , int mid, int high) {
// 	int index = 0, left = low, right = mid + 1;
// 	vector<int>temp(high - low + 1);
// 	while (left <= mid && right <= high) {
// 		if (v[left] <= v[right]) temp[index++] = v[left++];
// 		else temp[index++] = v[right++];
// 	}
// 	while (left <= mid) temp[index++] = v[left++];
// 	while (right <= high) temp[index++] = v[right++];
// 	for (int i = low; i <= high; ++i) v[i] = temp[i - low];
// }
// void mergeSorting(vector<int> & v, int low , int high ) {
// 	if (low == high)return;
// 	int mid = (low + high) / 2;
// 	mergeSorting(v, low, mid);
// 	mergeSorting(v, mid + 1, high);
// 	merge(v, low, mid, high);
// }
// int partition(vector<int> &v, int left, int right) {
// 	int pivot = v[left]; // Choose the first element as the pivot
// 	int i = left + 1; // Index for elements less than or equal to pivot
// 	for (int j = left + 1 ; j <= right; ++j) {
// 		if (v[j] <= pivot) {
// 			swap(v[i], v[j]);
// 			i++;
// 		}
// 	}
// 	// Place pivot in its correct position
// 	swap(v[left], v[i - 1]);
// 	return i - 1;
// }
// void quickSort(vector<int>&v , int s, int e) {
// 	if (s < e) {
// 		int pivot_index = partition(v, s, e);
// 		// sort the subarray
// 		quickSort(v, s, pivot_index - 1);
// 		quickSort(v, pivot_index + 1, e);
// 	}
// }
// void solve() {
// 	int n; cin >> n;
// 	vector<int>v(n); for (int i = 0; i < n; i++)cin >> v[i];
// 	// bubbleSort(v);
// 	// insertionSort(v);
// 	// selectionSort(v);
// 	// mergeSorting(v, 0, n - 1);
// 	// quickSort(v, 0, n - 1);
// 	each(v);
// }
// int main() {
// 	solve();
// 	return 0;
// }











