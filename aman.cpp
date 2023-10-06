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

// 	// n students from 1 to n
// 	// n chairs from 1 to n
// 	// i student sits on the chair pi

// //whose number is equal to the chair nubmer they are intially seated on the count
// 	//will give us the minimum number of moves required to make all the students happy
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int n;
// 		cin >> n;
// 		int p[n + 1];
// 		for (int i = 1; i <= n; i++)
// 		{
// 			cin >> p[i];
// 		}
// 		int cnt = 0;
// 		for (int i = 1; i <= n; i++)
// 		{
// 			if (p[i] != i)
// 			{
// 				for (int j = i + 1; j <= n; j++)
// 				{
// 					if (p[j] == i)
// 					{
// 						swap(p[i], p[j]);
// 						cnt++;
// 						break;
// 					}
// 				}
// 			}
// 		}
// 		cout << cnt << endl;
// 	}

// 	return 0;
// }
// //0 2 2 1  1
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// pair <int, string > myPair (10, "aman");
// 	// pair<string , string > myPair2("string1", "string2");
// 	// cout << myPair2.first << endl;
// 	// cout << myPair2.second << endl;

// 	pair<int, int > pair1(1, 2);
// 	pair<int, int > pair3(3, 4);
// 	pair<int, int > pair4 = pair1;
// 	pair1.swap(pair3);//swapping both the pairs
// 	// cout <<  (pair1 == pair3 ? true  : false  );
// 	// swapped both the variables

// 	// cout << pair1.first << " " << pair1.second << endl;
// 	// cout << pair4.first << " " << pair4.second << endl;

// 	// making a pair from two elements
// 	int x = 4;
// 	double y = 3.4;
// 	auto myPair5 = make_pair(x, y);
// 	// cout << myPair5.first << " " << myPair5.second << endl;


// 	// accessing the elements using the tie

// 	pair<int, string > person = make_pair(23, "John");
// 	int age;
// 	string name;
// 	tie(age, name) = person;
// 	// cout << age << " " << name << endl;

// 	// initilizing the pair elements with the default values

// 	pair<int, int> p = pair<int, int>();




// 	return 0;
// }



// doubly circular node
// #include<bits/stdc++.h>
// using namespace std;

// typedef struct node {
// 	int data;
// 	struct node * next;
// 	struct node * prev;
// } Node;

// Node * create_node(int value) {
// 	Node * new_node = (Node *)malloc(sizeof(Node));
// 	new_node->next = NULL;
// 	new_node->prev = NULL;
// 	new_node->data = value;
// 	return new_node;
// }

// void insert_at_beg(Node ** head, int value) {
// 	Node * new_node = create_node(value);
// 	if (*head == NULL) {
// 		*head = new_node;
// 		new_node->next = *head;
// 		new_node->prev = *head;
// 	}
// 	// finding the last node
// 	Node * last_node = (*head)->prev;
// 	(*head)->prev = new_node;
// 	new_node->next = (*head);
// 	new_node->prev = last_node;
// 	last_node->next = new_node;
// 	(*head) = new_node;
// }
// void insert_at_end(Node ** head, int value) {
// 	Node * new_node = create_node(value);
// 	if (*head == NULL) {
// 		*head = new_node;
// 		new_node->next = *head;
// 		new_node->prev = *head;
// 	}
// 	// finding the last node
// 	Node * last_node = (*head)->prev;
// 	last_node->next = new_node;
// 	new_node->prev = last_node;
// 	new_node->next = (*head);
// 	(*head)->prev = new_node;
// }

// void destroy_beg(Node ** head) {
// 	Node * current = *head;
// 	Node * last_node = (*head)->prev;
// 	// for the single node present in the list
// 	if ((*head)->next == *head) {
// 		*head = last_node = NULL;
// 		free(current);
// 	}
// 	// more than one node present in the list
// 	else {
// 		*head = (*head)->next;
// 		(*head)->prev = last_node;
// 		last_node->next = *head;
// 		free(current);
// 	}
// }
// void destroy_end(Node ** head) {
// 	Node * last_node = (*head)->prev;
// 	Node * current = last_node;
// 	// for the single node present in the list
// 	if ((*head)->next == *head) {
// 		*head = last_node = NULL;
// 		free(current);
// 	}
// // more than one node present in the list
// 	last_node = last_node->prev;
// 	// last_node is pointing to the second last node
// 	// we will store the address of the first node
// 	last_node->next = (*head);
// 	(*head)->prev = last_node;
// 	free(current);
// }
// void destroy_pos(Node ** head, int pos ) {
// 	Node * current = *head;
// 	Node * last_node = (*head)->prev;
// 	int i = 1;
// 	while (i < pos) {
// 		current = current->next;
// 		i++;
// 	}
// 	// i am at pos =2
// 	current->prev->next = current->next;
// 	current->next->prev = current->prev;
// 	// the node which i want to delete is the last node pos
// 	if (current->next == *head) {
// 		last_node = current->prev;
// 		free(current);
// 	}
// 	else {
// 		free(current);
// 	}
// }
// void printing(Node * head) {
// 	Node * current = head;
// 	while (1) {
// 		printf("%d\n", current->data);
// 		current = current->next;
// 		if (current == head) {
// 			break;
// 		}
// 	}
// }
// int main() {
// 	Node * head = NULL;
// 	insert_at_beg(&head, 10);
// 	insert_at_beg(&head, 20);
// 	insert_at_beg(&head, 30);
// 	insert_at_end(&head, 50);
// 	insert_at_end(&head, 60);
// 	destroy_beg(&head);
// 	destroy_end(&head);
// 	destroy_pos(&head, 2);
// 	printing(head);
// 	return 0;
// }


// // circular linked list

// #include<bits/stdc++.h>
// using namespace std;
// typedef struct node {
// 	int data;
// 	struct node * next;
// } Node;

// Node * create_node(int value) {
// 	Node * new_node = (Node*)malloc(sizeof(Node));
// 	new_node->next = NULL;
// 	new_node->data = value;
// 	return new_node;
// }

// void push_beg(Node **head, int value) {
// 	Node *new_node = create_node(value);

// 	if (*head == NULL) {
// 		*head = new_node;// the new_node becomes the head node
// 		new_node->next = *head;// and it's head pointer is set to point itself
// 		return;
// 	}
// 	// if list is not empty
// 	else {
// 		new_node->next = (*head)->next;
// 		(*head)->next = new_node;
// 	}
// }
// void push_end(Node **head, int value) {
// 	Node *new_node = create_node(value);

// 	if (*head == NULL) {
// 		*head = new_node;// the new_node becomes the head node
// 		new_node->next = *head;// and it's head pointer is set to point itself
// 		return;
// 	}
// 	// if list is not empty
// 	// the last node should cotain the address of the first node
// 	else {
// 		new_node->next = (*head)->next;
// 		(*head)->next = new_node;
// 		(*head) = new_node;
// 	}
// }
// void push_pos(Node ** head, int value, int pos) {
// 	Node * new_node = create_node(value);
// 	int i = 1;
// 	(*head) = (*head)->next;
// 	while (i < pos - 1) {
// 		(*head) = (*head)->next;
// 	}
// 	// reached before the pos
// 	// update the right link first
// 	new_node->next = (*head)->next;
// 	(*head)->next = new_node;
// }
// void printing(Node *head ) {
// 	if (head == NULL) {
// 		return;
// 	}
// 	Node * current = head;
// 	while (1) {
// 		printf("%d ", current->data);
// 		current = current->next;
// 		if (current == head) {
// 			break;
// 			// existing the loop when we reach the head again
// 		}
// 	}
// }
// void deletion_at_beg(Node ** head) {
// 	Node *current = *head;
// 	Node * last_node = (*head);
// 	// for one node in the list
// 	if (current->next == *head) { //pointing to itself
// 		(*head) = NULL;
// 		free(current);
// 		return ;
// 	}
// 	while (last_node->next != (*head)) {
// 		last_node = last_node->next;
// 	}
// 	*head = current->next; // Move head to the next node
// 	last_node->next = *head; // Update last node's next to point to the new head
// 	free(current); // Free the memory of the first node
// }
// void deletion_at_end(Node ** head) {
// 	Node *current = *head;
// 	Node * last_node = (*head);
// 	// for one node in the list
// 	if (current->next == *head) { //pointing to itself
// 		(*head) = NULL;
// 		free(current);
// 		return ;
// 	}
// 	while (last_node->next != (*head)) {
// 		current = last_node;
// 		last_node = last_node->next;
// 	}
// 	// Update the second-to-last node's next pointer to point to the head
// 	current->next = *head;
// 	free(last_node); // Free the memory of the last node
// }
// void deletion_at_pos(Node **head, int pos) {
// 	Node* current = *head;
// 	Node* prev = NULL;
// 	// traverse ot find the node at the given postion
// 	int i = 1;
// 	while (i < pos && current->next != *head) {
// 		prev = current;
// 		current = current->next;
// 		i++;
// 	}
// 	// i am standing at the pos =2
// 	prev->next = current->next;
// 	free(current);
// }
// int main() {
// 	Node * head = NULL;
// 	push_beg(&head, 12);
// 	push_beg(&head, 11);
// 	push_end(&head, 13);
// 	push_end(&head, 15);
// 	push_pos(&head, 23, 2);
// 	deletion_at_beg(&head);
// 	deletion_at_end(&head);
// 	deletion_at_pos(&head, 2);
// 	printing(head);
// 	return 0;
// }
// // 11 23 12 13 15
// // 23 12 13 15 first node deletion
// // 23 12 13 _last_node deletion
// // 23 13 deletion at the pos =2



// #include<bits/stdc++.h>
// using namespace std;

// typedef struct node {
// 	int data;
// 	struct node * next;
// } Node ;

// typedef struct stack {
// 	Node * top ;
// } Stack;

// //creating a node
// Node * creating_node(int value) {
// 	Node * new_node = (Node * )malloc(sizeof(Node));
// 	new_node->next = NULL;
// 	new_node->data = value;
// 	return new_node;
// }

// //creating a struct
// Stack * creating_stack() {
// 	Stack * new_stack = (Stack * )malloc(sizeof(Stack));
// 	new_stack->top = NULL;
// 	return new_stack;
// }

// int isEmpty(Stack * new_stack) {
// 	return new_stack->top == NULL;
// }

// void push_beg(Stack *new_stack, int value) {
// 	//creating a node
// 	Node * new_node = creating_node(value);
// 	new_node->next = new_stack->top;
// 	//giving the add of the last node to the first node that is up node
// 	// the address of the last node is contained by the stack->top
// 	new_stack->top = new_node;
// 	// and then update the address of the top and give the address of the new_node
// }
// int pop(Stack * new_stack) {
// 	// checking the empty
// 	if (isEmpty(new_stack)) {
// 		printf(" Stack is empty");
// 		return 0;
// 	}
// 	// traversal is needed
// 	Node * temp = new_stack->top;
// 	int data = temp->data;
// 	new_stack->top = new_stack->top->next;
// 	free(temp);
// 	return data;
// 	//giving the addres of the last second to the last
// }
// int peek(Stack * new_stack) {
// 	// checking the empty
// 	if (isEmpty(new_stack)) {
// 		printf(" Stack is empty");
// 		return 0;
// 	}
// 	return new_stack->top->data;
// }
// void printing(Stack * new_stack) {
// 	if (isEmpty(new_stack)) {
// 		printf(" Stack is empty");
// 		return ;
// 	}
// 	Node* current = new_stack->top;
// 	while (current != NULL) {
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// }
// int main() {
// 	Stack * new_stack = creating_stack();
// 	push_beg(new_stack, 10);
// 	push_beg(new_stack, 20);
// 	push_beg(new_stack, 30);
// 	push_beg(new_stack, 40);
// 	printing(new_stack);
// 	printf("pop-> %d\n ", pop(new_stack));
// 	printf("\npeek-> %d\n ", peek(new_stack));
// 	printing(new_stack);
// 	return 0;
// }


// queue with the linked list
// #include<bits/stdc++.h>
// using namespace std;

// typedef struct node {
// 	int data;
// 	struct node * next;
// } Node;

// typedef struct queue {
// 	Node * front;
// 	Node * rear;
// } Queue;

// void init(Queue * Q) {
// 	Q->front = NULL;
// 	Q->rear = NULL;
// }

// int isEmpty(Queue * Q) {
// 	return Q->front == NULL;
// }

// void enqueue(Queue * Q, int value) {
// 	// creating a node for the enqueue
// 	Node * new_node = (Node *)malloc(sizeof(Node));
// 	new_node->data = value;
// 	new_node->next = NULL;

// 	// there are two condition that the queue is empty or having some element in it
// 	if (isEmpty(Q)) {
// 		// if empty then insert the new node and then point the front and rear part of the queue to it
// 		Q->front = new_node;
// 		Q->rear = new_node;
// 		return;
// 	}
// 	// the elements are addres from the rear part to the front it goes
// 	Q->rear->next = new_node; // giving the address of the new node to the rear next part
// 	Q->rear = new_node; // point the rear on the new node

// }
// int dequeue(Queue * Q) {
// 	// checking empty for the dequeuing
// 	Node * current = Q->front;
// 	if (isEmpty(Q)) {
// 		printf("Queue is empty");
// 		return 0;
// 	}
// 	// traversing
// 	while (current != NULL) {
// 		Node * temp = current;
// 		current = current->next;
// 		free(temp);
// 	}
// 	Q->front = NULL;
// 	Q->rear = NULL;
// }
// void printing(Queue * Q){

// }
// int main() {
// 	Queue Q;
// 	initilize(&Q);

// 	enqueue(&Q, 10);
// 	enqueue(&Q, 20);
// 	enqueue(&Q, 30);

// 	printing(&Q);
// 	return 0;
// }


// #include <stdio.h>
// int main()
// {
// 	int arr[100] = { 0 };
// 	int i, x = 7, pos = 3, size = 5;
// 	for (i = 0; i < 10; i++)
// 		arr[i] = i + 1;
// 	size++;
// 	for (i = size - 1; i >= pos; i--)
// 		arr[i] = arr[i - 1];
// 	arr[pos - 1] = x;
// 	for (i = 0; i < size; i++)
// 		printf("%d ", arr[i]);
// 	return 0;
// }
// // 1 2 3 4 5 //input
// // 1 2 7 3 4 5 //output


// #include<bits/stdc++.h>
// using namespace std;
// typedef struct node {
// 	int data;
// 	struct node * next;
// 	struct node * prev;
// } Node ;

// Node * create_node (int value) {
// 	Node * new_node = (Node* )malloc ( sizeof(Node));
// 	new_node->next = NULL;
// 	new_node->prev = NULL;
// 	new_node->data = value;
// 	return new_node;
// }
// void insert_at_beg(Node ** head, int value) {
// 	Node * new_node = create_node(value);
// 	//cheking if the linked list is empty if empty then we are inserting the
// 	//first node
// 	if (*head == NULL) {
// 		*head = new_node; //as this the only node in the list
// 		//set the 'next' and 'prev' to point itself because of only node in the list
// 		new_node->next = new_node;
// 		new_node->prev = new_node;
// 		return;
// 	}
// 	//if the linked list is not empty containg the a node
// 	//find the last node of the list

// 	//1.create the last node next -> point to the * head -> prev
// 	Node * last_node = (*head)->prev;
// 	//give the first node address to the new_node
// 	new_node->next = *head;
// 	//point the address of the new_node to the current head prev
// 	(*head)->prev = new_node;
// 	//linking the new_node to the last node
// 	new_node->prev = last_node;
// 	//and also last node next should pointes to the new_node
// 	last_node->next = new_node;
// 	//make the head pointer to point to the first node which is new node
// 	*head = new_node;
// }

// void insert_at_end(Node ** head, int value) {
// 	//create a new node
// 	Node * new_node = create_node(value);
// 	//if the list is empty then we are inserting the first node
// 	if (*head == NULL) {
// 		*head = new_node;
// 		//since there is single node they are pointing to itself
// 		new_node->next = new_node;
// 		new_node->prev = new_node;
// 		return;
// 	}
// 	//list containg the single node
// 	//find the last node it should be point to the *head ->prev
// 	Node * last_node = (*head)->prev;
// 	//giving the address of the new_node to last node next
// 	//effectively inserting the node at the end
// 	last_node->next = new_node;
// 	//point the new_node  prevto the last node
// 	new_node->prev = last_node;
// 	//new_node next should point to the current head node
// 	new_node->next = *head;
// 	//update the *head prev to the new_node next which is last
// 	(*head)->prev = new_node;
// }

// void insert_at_pos(Node ** head, int value, int pos) {
// 	Node * new_node = create_node(value);
// 	Node * current = *head;
// 	int i = 1;
// 	while (i < pos - 1) {
// 		current = current->next;
// 		i++;
// 	}
// 	// i am stading at the pos 2 after this only i will insert the node
// 	new_node->prev = current;
// 	new_node->next = current->next;
// 	current->next = new_node;
// 	new_node->next->prev = new_node;
// }
// void deletion_at_beg(Node ** head) {
// 	Node *current = *head;
// 	Node * last_node = (*head);
// 	// for one node in the list
// 	if (current->next == *head) { //pointing to itself
// 		(*head) = NULL;
// 		free(current);
// 		return ;
// 	}
// 	while (last_node->next != (*head)) {
// 		last_node = last_node->next;
// 	}
// 	*head = current->next; // Move head to the next node
// 	last_node->next = *head; // Update last node's next to point to the new head
// 	free(current); // Free the memory of the first node
// }
// void deletion_at_end(Node ** head) {
// 	Node *current = *head;
// 	Node * last_node = (*head);
// 	// for one node in the list
// 	if (current->next == *head) { //pointing to itself
// 		(*head) = NULL;
// 		free(current);
// 		return ;
// 	}
// 	while (last_node->next != (*head)) {
// 		current = last_node;
// 		last_node = last_node->next;
// 	}
// 	// Update the second-to-last node's next pointer to point to the head
// 	current->next = *head;
// 	free(last_node); // Free the memory of the last node
// }
// void deletion_at_pos(Node **head, int pos) {
// 	Node* current = *head;
// 	Node* prev = NULL;
// 	// traverse ot find the node at the given postion
// 	int i = 1;
// 	while (i < pos && current->next != *head) {
// 		prev = current;
// 		current = current->next;
// 		i++;
// 	}
// 	// i am standing at the pos =2
// 	prev->next = current->next;
// 	free(current);
// }
// void printing(Node * head) {
// 	Node * current = head;
// 	while (1) {
// 		printf("%d\n", current->data);
// 		current = current->next;
// 		if (current == head) {
// 			break;
// 		}
// 	}
// }
// int main() {
// 	Node * head = NULL;
// 	insert_at_beg(&head, 10);
// 	insert_at_beg(&head, 20);
// 	insert_at_beg(&head, 30);
// 	insert_at_end(&head, 50);
// 	insert_at_end(&head, 60);
// 	insert_at_pos(&head, 1, 3);
// 	deletion_at_beg(&head);
// 	deletion_at_end(&head);
// 	deletion_at_pos(&head, 2);
// 	printing(head);
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
// 	int n ; cin >> n;
// 	vector<int>a(n), b(n);
// 	int ans = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> a[i];
// 		cin >> b[i];
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (a[i] < b[i])continue;
// 		else {
// 			if (b[i] < a[i]) {
// 				ans++;
// 			}
// 		}
// 	}
// 	cout << ans << endl;
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


// // void solve() {
// // 	ll n; cin >> n;
// // 	vector< ll >v(n);
// // 	vector<ll> a(n + 1, 0);
// // 	ll l = 0, r = 0 , maxi = -1, sum = 0, b = 0;
// // 	ull count = 0;
// // 	for (int i = 0; i <= n; ++i)
// // 	{
// // 		cin >> v[i];
// // 		v[i] *= -1;
// // 		a[i + 1] = a[i] + v[i];
// // 	}
// // 	for (int i = 1; i <= n; ++i)
// // 	{
// // 		check
// // 		for (int j = 1; j <= n; ++j)
// // 		{
// // 			l = i , r = j;
// // 			count++;
// // 			sum = a[r] - a[l - 1];
// // 			if (sum < 0) {
// // 				// If the sum is negative, we can increase it by flipping
// // 				// subarrays with odd number of negative elements.
// // 				if (count % 2 == 1) {
// // 					sum *= -1;
// // 				}
// // 			}
// // 			// debug(sum)
// // 			maxi = sum;

// // 			maxi += maxi + sum;
// // 			if (sum > maxi) {
// // 				maxi = sum;
// // 				count = 1; // Reset the count for new maximum
// // 				maxi = max(maxi, sum);
// // 			} else if (sum == maxi) {
// // 				// Increment the count for same maximum sum
// // 				count++;
// // 			}

// // 		}
// // 		maxi = max(maxi, sum);
// // 		debug(maxi)
// // 	}
// // 	// debug(count)
// // }

// void solve() {
// 	ll n;
// 	cin >> n;

// 	vector<ll> v(n);
// 	vector<ll> a(n + 1, 0);
// 	ull count = 0;

// 	for (int i = 0; i < n; ++i) {
// 		cin >> v[i];
// 		v[i] *= -1;
// 		a[i + 1] = a[i] + v[i];
// 	}

// 	ll maxi = a[1]; // Initialize maxi with the sum of the first element

// 	for (int i = 1; i <= n; ++i) {
// 		for (int j = i; j <= n; ++j) {
// 			ll sum = a[j] - a[i - 1];

// 			if (sum > maxi) {
// 				maxi = sum;
// 				count = 1; // Reset the count for new maximum
// 			} else if (sum == maxi) {
// 				// Increment the count for same maximum sum
// 				count++;
// 			}
// 		}
// 	}

// 	cout << "Maximum Sum: " << maxi << endl;
// 	cout << "Minimum Operations: " << count << endl;
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
// // int a[N];
// // int pf[N];
// // int main() {
// // 	int n; cin >> n;
// // 	for (int i = 1; i <= n; ++i)
// // 	{
// // 		cin >> a[i];
// // 		pf[i] = pf[i - 1] + a[i];
// // 	}
// // 	int t; cin >> t;
// // 	while (t--) {
// // 		int l, r; cin >> l >> r;
// // 		cout << pf[r] - pf[l - 1] << endl;
// // 	}
// // 	return 0;
// // }



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
// 	ull n; cin >> n;
// 	vector< ll >v(n);
// 	for (ull i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	ull sum = 0, count = 0;// count of negative sub arrays
// 	bool op = false;

// 	for (ull i = 0; i < n; ++i)
// 	{
// 		sum += abs(v[i]);
// 		if (v[i] < 0 && !op) {
// 			op = true;
// 			++count;
// 		}
// 		if (v[i] > 0) {
// 			op = false;
// 		}
// 	}
// 	cout << sum << " " << count << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int t; cin >> t;
// 	while (t--) {
// 		solve();
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef struct node {
// 	char data;
// 	struct node * left , * right;
// } Node ;

// Node * create_node(char value) {
// 	Node * new_node = (Node *)malloc(sizeof(Node));
// 	new_node->data = value;
// 	new_node->left = NULL;
// 	new_node->right = NULL;

// 	return new_node;
// }
// void add_left_node(Node *& new_node , char value ) {
// 	new_node->left = create_node(value);
// }
// void add_right_node(Node *& new_node , char value ) {
// 	new_node->right = create_node(value);
// }
// void inorder_traversal(Node *& new_node) {
// 	if (new_node == NULL) {
// 		return;
// 	}
// 	inorder_traversal(new_node->left);
// 	printf("%c ", new_node ->data);
// 	inorder_traversal(new_node->right);
// }


// void preorder_traversal(Node *& new_node) {
// 	if (new_node == NULL) {
// 		return;
// 	}
// 	printf("%c ", new_node ->data);
// 	inorder_traversal(new_node->left);
// 	inorder_traversal(new_node->right);
// }


// void postorder_traversal(Node *& new_node) {
// 	if (new_node == NULL) {
// 		return;
// 	}
// 	inorder_traversal(new_node->left);
// 	inorder_traversal(new_node->right);
// 	printf("%c ", new_node ->data);
// }
// int main() {
// 	Node * root = create_node('A');
// 	add_left_node(root, 'B');
// 	add_right_node(root, 'C');
// 	add_left_node(root->left, 'D');
// 	add_right_node(root->left, 'E');
// 	add_left_node(root->right, 'F');
// 	add_right_node(root->right, 'G');

// 	printf("Inorder   =>  ");
// 	inorder_traversal(root);
// 	printf("\n");
// 	printf("preorder  =>  ");
// 	preorder_traversal(root);
// 	printf("\n");
// 	printf("postorder =>  ");
// 	postorder_traversal(root);

// 	return 0;
// }


// // Inorder   =>   D B E A F C G
// // preorder  =>   A D B E F C G
// // postorder =>   D B E F C G A



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

// void print(Node* head) {
// 	Node* temp = head;
// 	while (temp != NULL) {
// 		cout << temp ->data << " ";
// 		temp = temp ->next;
// 	}
// 	cout << endl;
// }

// void removeDuplicates(Node* &head) {
// 	if ( head == NULL) {
// 		cout << "LL is empty" << endl;
// 		return;
// 	}
// 	if (head ->next == NULL) {
// 		cout << "Single Node in LL" << endl;
// 		return ;
// 	}

// 	// >1 node in LL
// 	Node* curr = head;

// 	while (curr != NULL) {
// 		if ((curr ->next != NULL) && (curr ->data == curr ->next ->data) ) {
// 			//equal
// 			// Node* temp = curr ->next;
// 			curr ->next = curr ->next ->next;
// 			//delete node
// 			// temp ->next = NULL;
// 			// delete temp;
// 		}
// 		else {
// 			// not equal
// 			curr = curr ->next;
// 		}
// 	}


// }

// int main() {

// 	// Node* head = new Node(1);
// 	// Node* second = new Node(2);
// 	// Node* third = new Node(2);
// 	// Node* fourth = new Node(3);
// 	// Node* fifth = new Node(4);
// 	// Node* sixth = new Node(4);
// 	// head -> next = second;
// 	// second -> next = third;
// 	// third -> next = fourth;
// 	// fourth -> next = fifth;
// 	// fifth -> next = sixth;

// 	Node * head = new Node (1);
// 	Node * second = new Node (2);
// 	Node * third = new Node (2);
// 	Node * forth = new Node (3);
// 	Node * fifth = new Node (4);
// 	Node * sixth = new Node (4);
// 	Node * seventh = new Node (5);
// 	Node * eighth = new Node (6);



// 	head ->next = second;
// 	second ->next = third;
// 	third ->next = forth;
// 	forth ->next = fifth;
// 	fifth ->next = sixth;
// 	sixth ->next = seventh;
// 	seventh ->next = eighth;
// 	// eighth ->next = NULL;

// 	cout << "input LL: ";
// 	print(head);

// 	removeDuplicates(head);
// 	cout << "output LL: " ;
// 	print(head);




// 	return 0;
/*// }
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node * next;
	Node(int value) {
		this->data = value;
		this->next = NULL;
	}
};
void printer(Node *head ) {
	Node * current = head;
	while (current != NULL) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}
void remove_duplicates(Node *& head ) {
	if ( head == NULL) {
		cout << "LL is empty" << endl;
		return;
	}
	if (head -> next == NULL) {
		cout << "Single Node in LL" << endl;
		return ;
	}
	// >1 nodes in the linked list

	Node * curr = head; //for traverse
	while (curr != NULL) {
		if ((curr->next != NULL) && curr->data == curr->next ->data) {
			// equals
			Node * temp = curr->next;
			curr ->next = curr ->next ->next;
			temp ->next = NULL;
			delete temp;
		}
		else {
			// move forward the curr pointer
			curr = curr->next;
		}
	}

}
Node * sorting_without_data_replacement(Node *& head) {
	// creating the dummy nodes

	Node * head_1 = new Node(-1);
	Node * tail_1  = head_1;

	Node * head_2 = new Node(-1);
	Node * tail_2 = head_2;

	Node * head_0 = new Node(-1);
	Node * tail_0 = head_0;;


	// travesing the linked list

	Node * curr = head;
	while (curr != NULL) {
		if (curr->data == 0) {

			Node * temp = curr;
			curr = curr->next;
			temp ->next = NULL;
			delete temp;

			tail_0 ->next = temp;
			tail_0 = temp;
		}
		else if (curr->data == 1) {

			Node * temp = curr;
			curr = curr->next;
			temp ->next = NULL;
			delete temp;

			tail_1 ->next = temp;
			tail_1 = temp;
		}
		else if (curr->data == 2) {

			Node * temp = curr;
			curr = curr->next;
			temp ->next = NULL;
			delete temp;

			tail_2 ->next = temp;
			tail_2 = temp;
		}
	}

	// modifying the one list
	Node * temp = head_1;
	head_1 = head_1 ->next;
	temp ->next = NULL;
	delete temp;

	// modifying the two list
	temp = head_2;
	head_2 = head_2 ->next;
	temp ->next = NULL;
	delete temp;

	// head joining
	if (head_1 != NULL) {
		tail_0 ->next = head_1; // if the one is null
		if (tail_2 != NULL) { // check for the head_2
			tail_1->next = head_2;
		}
	}
	else { // head_1 is null
		if (head_2 != NULL) {
			tail_0->next = head_2;
		}
	}

	// remove dummy nodes of the zero
	temp = zero_head;
	zero_head = zero_head ->next;
	temp ->next = NULL;
	delete(temp);

	return zero_head;

}
int main() {

	Node * head = new Node (2);
	Node * second = new Node (1);
	Node * third = new Node (1);
	Node * forth = new Node (0);
	Node * fifth = new Node (0);
	Node * sixth = new Node (2);
	Node * seventh = new Node (1);



	head ->next = second;
	second ->next = third;
	third ->next = forth;
	forth ->next = fifth;
	fifth ->next = sixth;
	sixth ->next = seventh;
	seventh->next = NULL;


	cout << "Input LL:     ";
	printer(head);

	// cout << "Sorted List:  ";
	// sortList_data_replacement(head);

	// head = sort_without_data_replace(head);
	// printer(head);

	remove_duplicates(head);
	cout << "Remove:       ";
	printer(head);

	return 0;
}*/



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

// int solve() {
// 	int n;
// 	cin >> n;
// 	vector<int> v(n);
// 	for (int i = 0; i < n; ++i) {
// 		cin >> v[i];
// 	}
// 	sort(v.begin(), v.end());
// 	for (int i = 1; i < v.size(); i++) {
// 		if (v[i] != v[i - 1] + 1) {
// 			return v[i - 1] + 1;
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


// 	cout << solve();

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

// int solve() {

// 	int n, m;
// 	cin >> m >> n;
// 	vector<vector<int>> v(n, vector<int>(3));
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			cin >> v[i][j];
// 		}
// 	}
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			cout << v[i][j] << " ";
// 		}
// 		cout << endl;
// 	}



// 	return 0;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	cout << solve();


// 	return 0;
//


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

// void solve2() {
// 	int n; cin >> n;
// 	string s;
// 	cin >> s;
// 	string zz;

// 	for (int i = 0; i < n; ++i)
// 	{
// 		int j = i;
// 		cout << s[i];
// 		i++;

// 		while (i < n && s[i] != s[j])i++;
// 	}
// 	cout << zz << endl;

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
// 		solve2();
// 	}


// 	return 0;
// }

// // void solve() {
// // 	int n; cin >> n;
// // 	string s;
// // 	cin >> s;
// // 	string zz;

// // 	for (int i = 0; i < n; ++i)
// // 	{
// // 		int j = i;
// // 		if ((i + 2 <= n) && (s[i + 1] == s[i] /*|| s[i + 2] == s[i]*/) ) {
// // 			zz += s[i];
// // 		}
// // 		else if (zz.size() <= 0) {
// // 			zz += s[0];
// // 			break;
// // 		}
// // 	}
// // 	cout << zz << endl;

// // }
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/

int max_height(Node * root) {
	if (root == NULL) return 0;
	return max(max_height(root->left), max_height(root->right)) + 1;
}
if a tree becomes unbalanced when a node is inserted into the right side of the parent
+ 2 , -1(crNode -- left rotate)  , 0
	- 2 (crNode -- left rotate) , -1 , 0
	Node* rotateLeft(Node* parent) { // this parent is pointing to the cirNode
	//  y is pointing to the right of the parent
	//  and T2 is pointing to the left of the y
	Node* Gparent = parent->right;
	Node* newNode = Gparent->left;
	// left rotate on parent(critical node)
	Gparent->left = parent;
	parent->right = newNode;
	// Update heights
	parent->height = max_height(parent);
	Gparent->height = max_height(Gparent);
	return Gparent; // now y is pointing to the root ( B )
}
/*------------------------------------------------------------------------------------------------------------------*/
// if a node is inserted in the left side of the parent , then tree need a right rotation
// -2 , +1 (crNode -- right rotate) , 0
// +2 (crNode -- right rotate) , +1 , 0
Node* rotateRight(Node* Gparent) {
	Node* parent = Gparent->left;
	Node* newNode = parent->right;
	parent->right = Gparent;
	Gparent->left = newNode;
	// Update heights
	Gparent->height = max_height(Gparent);  // max heights
	parent->height = max_height(parent);  // max heights
	return parent; // x becoms the root node of the tree
}
