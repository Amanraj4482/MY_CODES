//structurs and functions
//passing structure varibale as argument lecture 1
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// struct student {
//  char name[50];
//  int age;
//  int roll_no;
//  float marks;
// };

// void print (char name[], int age , int roll , float marks) {
//  printf("%s %d %d %.2f", name , age, roll, marks);//%2.f represents the precision of the two decimal
// }
// int main() {
//  struct student s1 = {"Nick", 16, 50, 72.5};
//  print(s1.name, s1.age, s1.roll_no, s1.marks);


//      return 0;

// }
// //Nick 16 50 72.50

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// //entering single char and its value to map
// // instead of passing the copies of the structure members, we can pass their addresses (or refreence).
// struct charset {
//  char s;
//  int i;
// };
// void keyValue (char*s , int* i) {//key means letter and value means associated code of that letter
//  scanf("%c %d ", s , i);
// }
// int main() {
//  int j;
//  struct charset cs;
//  keyValue(&cs.s, &cs.i);//dot operator has greater precedence over and operator
//  printf("%c %d", cs.s, cs.i);

//  return 0;
// }
// // A 3 -> A 3 ( gets printed

//passing structure variable as argument
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// //unlike arrays, name of the structure varubales are not pointers.
// //it is passed by value
// struct point {
//  int x, y;
// };
// void print(struct point p) {
//  printf("%d %d\n", p.x, p.y);
// }
// int main() {
//  struct point p1 = {23, 45};
//  struct point p2 = {46, 80};
//  print(p1);
//  print(p2);
//  return 0;
// }

//how to pass pointer to structures as arguments
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// //if the size of the structure is very large then passing the copy of the whole structure is not efficient.
// //better choice: pass the address of the structure
// //use the arrow operator(->) to access the structure members inside the alled function.

// struct point {
//  int x, y;
// };
// void print(struct point *p) {
//  printf("%d %d\n", p->x, p->y);//calling the members associated with the p
// }
// int main() {
//  struct point p1 = {23, 45};
//  struct point p2 = {46, 80};
//  print(&p1);//we are passint the address
//  print(&p2);
//  return 0;
// }
// 23 45
// 46 80



//part 4->
//RETURNING STRUCTURE VARIBALE FROM A FUNCTION IS SIMILAR TO RETURNING A VARIABLE FROM A FUNCTION
// #include <stdio.h>
// struct point {
//  int x;
//  int y;
// };

// struct point edit (struct point p) {
//  (p.x)++;
//  p.y = p.y + 5;
//  return p;
// }
// void print (struct point p) {
//  printf("%d %d\n", p.x, p.y);
// }
// int main() {
//  struct point p1 = {23, 45};
//  struct point p2 = {56, 90};
//  p1 = edit(p1);
//  p2 = edit(p2);
//  print(p1);
//  print(p2);
//  return 0;
// }
//the parameter type and argument type must be matched
// 24 50
// 57 95


//RETURNING A POINTER TO A STRUCTURE FROM THE FUNCTION
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// struct point {
//  int x, y;
// };
// struct point* fun(int a, int b) {
//  struct point *ptr = (struct point *)malloc(sizeof(struct point));
//  //allocating the memory at heap by using the malloc
//  //i want the malloc to allocate the memory equivalent to the memory of the struct point above
//  //malloc will return the void so i have tycasted it

//  ptr->x = a;
//  ptr->y = b + 5;
//  return ptr;//returning a ptr of struct point*
//  //in malloc the memory intact in its place
// }
// void print(struct point *ptr) {
//  printf("%d %d\n", ptr->x, ptr->y);
// }
// int main() {
//  struct point *ptr1, *ptr2;
//  ptr1 = fun(2, 3);
//  ptr2 = fun(2, 3);
//  print(ptr1); print(ptr2);
//  free(ptr1); free(ptr2);//calling the free function for the deallocating the memory
//  return 0;
// }
// 2 8
// 2 8


//PASSING ARRAY OF STRUCTURE AS ARGUMENT
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// struct point {
//  int x;
//  int y;
// };
// //compiler will allocate contiguous block of memory of the datat members of the structure.
// void print(struct point arr[]) {
//  int i;
//  for (i = 0; i < 2; i++)
//      printf("%d %d\n", arr[i].x , arr[i].y);
// }

// int main() {
//  struct point arr[2] = { {1, 2}, {3, 4}};//declaration of array two structure
//  print(arr);//passing the address of the array by passing the name of it
//  return 0;
// }
//1 2
// 3 4



//SELF REFRENTIAL STRUCTURES
//DEF->self refrential structures are those structures in which one or
//more pointeres points to the structures of the same type
// #include <stdio.h>
// // struct self {
// //   int p;
// //   struct self *ptr;//this is the pointer to the struct self itself
// // };

// struct code {
//  int i;
//  char c;
//  struct code *ptr;//declared the self refrential structure
// };

// int main() {
//  struct code var1;
//  struct code var2;
//  var1.i = 54;
//  var1.c = 'A';
//  var1.ptr = NULL;

//  var2.i = 54;
//  var2.c = 'A';
//  var2.ptr = NULL;

//  var1.ptr = &var2;//giving the address of var2 with var1.ptr
//  //var1.ptr will now contain the address of var2 ptr

//  //var1 can access the var2 members as well
//  printf("%d %c ", var1.ptr->i, var1.ptr->c);//with var1 i am trying to access the memner of var2
//  return 0;
// }
//54 A


//INTRODUCTION TO LINKED LIST->>>>>>>>>
//single linked list -> Navigation is forward only
//doubly linked list -> forward and backward navigation is possible
//circular linked list ->Last element is linked to the first element.


//A single linked list is a list made up of nodes that consists of two parts.
//1-> Data(Contains the actual data)
//2-> Link(Contains the address of the next node of the list.)

//by using the HEAD pointer we can access the first node of the linked list
//In the linked list nodes are scattered here and there in the memory but.
//they are still connected with each other.
//HEAD(& 1st node)->1st NODE(& 2nd node)->2st NODE(& 3nd node)
// because of the link part of the node all are connected to each other
//LINKED LIST IS THE LINKED REPRESENTATION OF LIST.



//HOW TO CREATE A SINGLE LINKED LIST
//Self Refrential structure is a structure which contains a pointer to a structure of the same type.
//we will use self Refrential structure for creating a node of the single linked list


//CREATING A SELF REFRENTIAL STRUCTURE TO REPRESENT THE NODE
//in single linked list -> multiple data and single link
// #include <stdio.h>
// #include <stdlib.h>//to call malloc function
// struct node {
//  int data;//it can be any data
//  struct node *link;//this link is pointer to a struct node
// };
// int main() {
//  //we will create pointer head which is pointed to struct node only
//  struct node *head = NULL;//this pointer can access the data and link part of the nodes
//  //this is the pointer to the first node of the node
//  //calling malloc function to create a memory address of struct node
//  head = (struct node *)malloc(sizeof(struct node));
//  //a memory has been allocated for the data and the link part
//  //now malloc will return the void pointer thus we needed to typecase it into the struct part
//  //typecating void to the struct node is not mandatory part
//  head-> data = 45; //head can go inside the data and access it
//  head-> link = NULL;
//  //printing the data part on the screen
//  printf("%d", head->data);

//  //creating the current pointer which points the second node of the linked list
//  struct node *current = (struct node*)malloc(sizeof(struct node));
//  current->data = 34;
//  current->link = NULL
//   head->link = current; //the link part of the 1st node contains the address of 2ns node data
//  //which means that the first node is connected to the seconde node
//  //creating the single linked list+adding the third node
//  struct node *current2 = (struct node*)malloc(sizeof(struct node));
//  current2->data = 33;
//  current2->link = NULL;
//  current->link = current2;
//  //unnessary method is used to create the third linking node to this

//  //there is only one way to access the 1st node by creating a head pointer
//  //there must be a pointer to store the address of the node
//  //if pointer will not be created then there is no way to access the node
//  return 0;
// }

// //output-> 45


//what does head->link -> link -> can accessed of wnd node of the link
//Head-> link-> link ->link ->Null
//with the help of head pointer we cann accessed complete list

//code of method 2

//CREATING THE SINGLE LINKED LIST WITH THE 3 NODES WITHE THE HELP OF HEAD AND CURRENT
//WITH SINGLE POINTER
// #include <stdio.h>
// struct node {
//  int data ;
//  struct node *link;
// };
// int main() {
//  struct node *head = (struct node*)malloc(sizeof (struct node));
//  head-> data = 45;
//  head -> link = NULL;

//  struct node *current  = (struct node*)malloc(sizeof(struct node));
//  current ->data = 98;
//  current-> link = NULL;
//  head-> link = current;

//  current = (struct node*)malloc(sizeof(struct node));
//  current -> data = 2;
//  current-> link = NULL;

//  head-> link->link = current;


//  return 0;
// }

//lecture->36
//traversing the single linked list-> means a sigle lined list means visiting each node of single liked list until the end node reached
//our job is to calculate the total number of nodes by traversing the linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//  int data;
//  struct node *link;
// };

// //function is to count the no of nodes
//couting the nodes
// void count_of_nodes(struct node *head) {
//  int count = 0;
//  if (head == NULL)//head must contain the address of the first node of the list
//      printf("Linked List is empty");
//  struct node *ptr = NULL;
//  ptr = head;//ptr points to the first node of the list
//  while (ptr != NULL) {//this loop runs until ptr becomes null
//      count++;
//      //printf("%d",ptr->data);//access the data part of the node and we print the data part of the node
//      ptr = ptr->link;//with the help of ptr i can access the link part of the first node
//  }
//  printf("%d", count);
// }
// void print_data(struct node *head) {
//  if (head == NULL)//head must contain the address of the first node of the list
//      printf("Linked List is empty");
//  struct node *ptr = NULL;
//  ptr = head;//ptr points to the first node of the list
//  while (ptr != NULL) {//this loop runs until ptr becomes null
//      printf("%d",ptr->data);
//      //printf("%d",ptr->data);//access the data part of the node and we print the data part of the node
//      ptr = ptr->link;//with the help of ptr i can access the link part of the first node
//  }
// }
// int main() {
//  count_of_nodes(head);//head is the pointer to the first node of the linked list shown
//print_data(head);
//  return 0;
// }


//time complexity -> O(N)  IN CASE OF LINKED LIST
//lecture 39
//how to insert the node at the end of the list
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// //we will use the ptr as the traversing pointer after reaching the ptr at the
// //last node we will update the null part with the last node address
// //then last node link will filled with the
// //by using the prt->link = temp; we can update the link part of the node with the
// struct node {
//  int data;
//  struct node *link;//self refrential node
// };
// add_at_end(struct node *head, int data) {//where struct node is the datatype
// //creating two diff pointers ptr and temp
//  struct node *ptr , *temp;
//  ptr = head;//ptr and head both poiting the address of the first node
//  //creating a new node
//  temp = (struct node*)malloc(sizeof(struct node));//where temp is pointing at the node or it is pointing on it

//  temp->data = data;//we are updating the data part of the temp node by the value
//  temp->link = NULL;//and also the link part by the NUll

//  while (ptr->link != NULL) {//code of traversing the list by using the ptr pointer
//      ptr = ptr->link;//updating the ptr by the ptr pointing to the link part or the address of the 2nd node
//  }
//  //after coming out of the loop ptr->link points the NULL part of the last node
//  //so update that address by the temp node(data=67,link =NULL)
//  ptr->link = temp;
// }
// int main() {
// //addition of node at the end of the link
//  add_at_end(head, 67);//a pointer head is pointing to the first value of the node
//  //where 67 is the data part
//  return 0;
// }

//LECTURE 40 ->COMPARISON OF time complexities THE LINKED LIST AND ARRAY TO INSERT THE DATA THE END OF THE NODE

//OPTIMAL CODE FOR THE CREATION AND INSERTION OF THE DATA--------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//  int data;
//  struct node *link;
// };
// struct node* add_at_end(struct node *ptr, int value) {//ptr is poiting to the 2nd node
//  //where value is containing the next data which is 3rd node data 90 ater total one iteration
//  //creating the new temp pointer poiting to the 80 node
//  struct node *temp = (struct node*)malloc(sizeof(struct node));
//  temp->data = value;//updated by the frist data=70
//  temp->link = NULL;

//  //updating the previous link part of the node at down one
//  ptr->link = temp;//ptr which was poiting to the first node it updating the link part by the 2nd address contained in the temp
//  return temp;  //temp is struct node type returned
//  //returning the address of the 2nd node
// }
// int main() {
//  //creating the node with head pointer pointing to it
//  struct node *head = (struct node*)malloc(sizeof(struct node));
// //head data and link part assignment
//  head->data = 70;//here data is the member of the struct part it cannot be changed
//  head->link = NULL;//the node of the list

//  struct node *ptr = head;//ptr also contains the address of the first node
//  ptr = add_at_end(ptr, 80);//the address which was returned of the 2nd node is received in the ptr
//  ptr = add_at_end(ptr, 90);
//  ptr = add_at_end(ptr, 100);
//  //at the last ptr is pointing to the last node
//  ptr = head;//then ptr is poiting to the first node of the list

//  while (ptr != NULL) {//from start to the end traversal
//      //PRINTING THE DATA ON THE SCREEN
//      printf("%d\n", ptr->data);
//      ptr = ptr->link;
//  }
//  return 0;
// }
// O(1) constant amount of time
//70
// 80
// 90
// 100


//in array is not full
// #include<stdio.h>
// #include<stdlib.h>
// int add_at_end(int a[], int freepos, int last_value) {
//  a[freepos] = last_value;//we will go the particular index and we will store the data (last_value)
//  //then freepos will be increamented as again the empty slot
//  freepos++;
//  return freepos;
// }

// int main() {
//  int a[10];
//  int i, n , freepos;
//  scanf("%d", &n);
//  for (i = 0; i < n; i++)
//      scanf("%d", &a[i]);
//  freepos = n;//maintains the empty slot in freepos variable in the array
//  //using the n as the index of the empty slot storing the number in freepos
//  freepos = add_at_end(a, freepos, 10); //addting the 10 at the end


//  //priting part
//  for (i = 0; i < freepos; i++) {
//      printf("%d\n", a[i]);
//  }
//  return 0;

// }
//1
// 2
// 3
// 10


//INSERTING A NODE AT THE BEGINNING
//ptr->link=head;
//updating the head=ptr;    before head was poiting the previous first
// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//  int data;
//  struct node*link;
// };
// struct node* add_beginning(struct node* head, int num) {
//  struct node *ptr = (struct node*)malloc (sizeof(struct node));
//  ptr->data = num;
//  ptr->link = NULL;

//  ptr->link = head;
//  head = ptr;
//  return head;
// }
// int main() {
//  //first node is creating
//  struct node * head = (struct node*)malloc(sizeof(struct node));
//  head->data = 45;
//  head->link = NULL;


//  //2nd node pointer creating with the data part
//  struct node*ptr = (struct node*)malloc(sizeof(struct node));
//  ptr->data = 98;
//  ptr->link = NULL;


//  //updating the head (link)part to point to the 2nd node
//  head->link = ptr;//pointing to the 2nd node address

//  int data = 10;//data of the new node which is to be inserted
//  head = add_beginning(head, data);//head and data both are pass by value
//  //update the ptr by head //ptr is also pointing on 1st node
//  ptr = head;
//  while (ptr != NULL) {
//      printf("%d\n", ptr->data);
//      ptr = ptr->link;//ptr is updating ahead and pointing the next's nodes
//  }
//  return 0;
// }
//10 45 98

//2ND METHOD TO INSERTING THE DATA IN THE LINKED LIST
//pass by refrence
// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//  int data;
//  struct node*link;
// };
// void add_beginning(struct node** head, int num) {//another pointer head is required to store the address of another pointer address pointing on the 2nd node(45)
//  //this 3  block of code will create a node for us
//  struct node *ptr = (struct node*)malloc (sizeof(struct node));
//  ptr->data = num;
//  ptr->link = NULL;

//  ptr->link = *head;//ptr link connects to the 2nd node
//  *head = ptr;//this head is local to the function
// }
// int main() {
//  //first node is creating
//  struct node *head = (struct node*)malloc(sizeof(struct node));
//  head->data = 45;
//  head->link = NULL;


//  //2nd node pointer creating with the data part
//  struct node*ptr = (struct node*)malloc(sizeof(struct node));
//  ptr->data = 98;
//  ptr->link = NULL;
//  //updating the head (link)part to point to the 2nd node
//  head->link = ptr;//pointing to the 2nd node address

//  int data = 10;//data of the new node which is to be inserted
//  add_beginning(&head, data);//head and data both are pass by value
//  //update the ptr by head //ptr is also pointing on 1st node
//  ptr = head;
//  while (ptr != NULL) {
//      printf("%d\n", ptr->data);
//      ptr = ptr->link;//ptr is updating ahead and pointing the next's nodes
//  }
//  return 0;
// }


//addting the data at the beginning of the array
//shifting all the elements towards right
// #include<stdio.h>
// #include<stdlib.h>
// int adding_beg(int arr[], int n, int data) {
//  for (int i = n - 1; i >= 0; i--) {
//      arr[i + 1] = arr[i];
//  }
//  arr[0] = data;
//  return n + 1;
// }
// int main() {
//  int n, arr[10], data = 10, i;
//  scanf("%d", &n);
//  for (i = 0; i < n; i++) {
//      scanf("%d", &arr[i]);
//  }
//  n = adding_beg(arr, n, data);
//  for (i = 0; i < n; i++)
//      printf("%d\n", arr[i]);
//  return 0;
// }
//10
// 11
// 12
// 13
// 14



//INSERTION AT THE CERTAIN POSITION AT SINGLY LINKED LIST
//Assumption: Position where the new node needs to be inserted is given to us
//inserting at the position =3 after 2
//Step->1->create a node-> head and ptr where ptr will point initially at the head and then use for traversal
//Step->2->traverse a node
//Step->3-> update the links
//ptr2->link=ptr->link
//ptr->link=ptr2;


//something mistake in this code
// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//  int data;
//  struct node* link;
// };
// void at_the_end(struct node *head , int data) {
//  struct node *temp = (struct node *)malloc(sizeof(struct node));
//  temp->data = data;
//  temp->link = NULL;

// //updating the previous link part of node
//  head->link = temp;
// }

// void add_at_pos(struct node *head, int data, int pos) {
//  struct node *ptr = head;//points at the first node of the list
//  struct node* ptr2 = (struct node*)malloc(sizeof(struct node));
//  ptr2->data = data;
//  ptr2->link = NULL;
//  //travesing the list with the pos variable

//  pos--;
//  while (pos != 1) {
//      ptr = ptr->link;
//      pos--;
//  }
//  ptr2->link = ptr->link;
//  ptr->link = ptr2;
// }
// int main() {

//  struct node *head = (struct node*)malloc ( sizeof(struct node));
//  head->data = 45;
//  head->link = NULL;

//  at_the_end(head, 98);
//  at_the_end(head, 3);

//  int data = 67, position = 3;
//  add_at_pos(head, data, position);
//  struct node *ptr = head;//pointing at the first node of the list

//  while (ptr != NULL) {
//      printf("%d\n", ptr-> data);
//      ptr = ptr->link;
//  }
// }
// //traget->67 at pos =3
// //45 98 3
// //45 98 67 3

//INSERTING THE ELEMENT AT THE CERTAIN POS IN THE ARRAY
// #include <stdio.h>
// #include <stdlib.h>
// void add_at_pos(int arr[], int arr2[], int n, int data, int pos) {
//  int index = pos - 1, i;
//  for (i = 0; i <= index - 1; i++) //from 0th to index-1 copying and pasting
//      arr2[i] = arr[i];
//  arr2[index] = data;//data has inserted
//  int j;
//  for ((i = index + 1, j = index); (i < n + 1, j < n); ( i++, j++)) {
//      arr2[i] = arr[j];
//  }
// }
// int main() {
//  int arr[] = {1, 2, 3, 4, 5};
//  int pos = 2, data = 10, i;
//  int n = sizeof(arr) / sizeof(4);
//  int arr2[n + 1]; //1 extra space created
//  add_at_pos(arr, arr2, n, data, pos);
//  for (i = 0; i <= n ; i++)
//      printf("%d\n", arr2[i]);
//  return 0;
// }
//1 10 2 3 4 5
//time complexity O(n)
//We can't return an array from a function because an
//array created in the funtion is local to that function

//This is the reason why arr2[] has been passed as a parameter to a function
//Passing arr2 ( name of the array) is equivalent to passing the address of the first block of arr2.
//So the changes made in called function will be reflected n the caller function.


//lecture 49***************************************************8

//HOW TO DELETE THE FIRST NODE OF THE SINGLE LINKED LIST

//VOID POINTER
//it can point to any data of any data type can can be typecasted to any type
//We cannot dereference a void pointer
// int main() {
//  int n = 10;
//  void *ptr = &n;
//  printf("%d", *(int*)ptr);//typecasted is first
// }
//malloc and calloc returns a void pointer they can allocate a memory fro any type of data.

// void reverse_list(struct node **head) {
//  //we cannot move our head pointer before updating the link part of the second node.
//  struct node * current1 = NULL ;
//  struct node *current = *head;
//  struct node * current2 = NULL;

//  while (current != NULL) {//stop when head becomes null
//      current2 = current->next;
//      current->next = current1;
//      current1 = current;
//      current = current2;
//  }
//  *head = current1;
// }

// #include <stdio.h>
// #include<stdlib.h>
// struct node {
//  int data;
//  struct node* next;
// };
// struct node* create_node(int value) {
//  struct node* new_node = (struct node*)malloc(sizeof(struct node));
//  new_node->data = value;
//  new_node->next = NULL;
//  return new_node;
// }
// void printing(struct node *head) {
//  struct node* current = head;
//  while (current != NULL) {
//      printf("%d ", current->data);
//      current = current->next;
//  }
// }
// void insert_end(struct node**head, int value) {
//  struct node* new_node = create_node(value);
//  if (*head == NULL) {
//      *head = new_node;
//      return;
//  }
//  //if the head is filled
//  struct node* current = *head;
//  while (current->next != NULL) {
//      current = current->next;
//  }
//  current->next = new_node;
// }
// void insert_beg(struct node**head, int value) {
//  struct node* new_node = create_node(value);
//  new_node->next = *head;
//  *head = new_node;
// }
// void insert_at_pos(struct node** head, int value, int index) {
//  if (index < 0) return ;
//  if (index == 0) { //if the index is equal to the zero
//      insert_beg(head, value);
//      return ;
//  }
//  struct node* new_node = create_node(value);
//  struct node* current = *head;
//  int count = 0;
//  while (*head != NULL && count < index - 1) {
//      current = current->next;
//      count++;
//  }
//  new_node->next = current->next;
//  current->next = new_node;
// }
// void delete_beg(struct node** head) {
//  if (*head == NULL) {
//      printf("LIST IS EMPTY");
//      return;
//  }
//  struct node* current = *head;
//  *head = current->next;
//  free(current);
// }
// void delete_end(struct node** head) {//it needs two pointers
//  struct node* current = *head;
//  while (current->next->next != NULL) {
//      current = current->next;
//  }
//  if (current == *head) {
//      *head = NULL;
//      free(current);
//      return;
//  }
//  current->next = NULL;
//  free(current->next);
// }
// void delete_pos(struct node **head, int pos) {
//  struct node* current = *head, *temp;
//  int i = 2;
//  while (i < pos) {
//      current = current->next;
//      i++;
//  }
//  temp = current->next;
//  current->next = temp->next;
//  free(temp);
// }
// void delete_whole(struct node** head) {
//  struct node* current = *head;
//  while (current != NULL) {//until current becomes null
//      current = current->next;
//      free(*head);
//      *head = current;
//  }
// }
// // void reverse_list(struct node **head) {
// //   //we cannot move our head pointer before updating the link part of the second node.
// //   struct node * current1 = NULL ;
// //   struct node *current = *head;
// //   struct node * current2 = NULL;

// //   while (current != NULL) {//stop when head becomes null
// //       current2 = current->next;
// //       current->next = current1;
// //       current1 = current;
// //       current = current2;
// //   }
// //   *head = current1;
// // }
// void reverse_list(struct node** head) {
//  struct node *current = *head;
//  struct node *current1 = NULL;
//  while (current != NULL) {
//      current = (*head)->next;
//      (*head)->next = current1;
//      current1 = *head;
//      *head = current;
//  }
//  *head = current1;
// }
// int main() {
//  struct node* head = NULL;
// //insertion at the ending
//  insert_end(&head, 10);
//  insert_end(&head, 20);
//  insert_end(&head, 30);
// //insertion at the beginnig
//  insert_beg(&head, 40);
//  insert_beg(&head, 50);

// //insertion at the any position
//  int data = 60, pos = 2;
//  insert_pos(&head, data, pos);

// //delete from beginning
//  delete_beg(&head);
// // //delete from ending
//  delete_end(&head);
// //delete from specified position
//  delete_pos(&head, pos); //pos=2;
//  delete_whole(&head);
//  reverse_list(&head);//head will point to last of the list
//  printing(head);
// }
// 50 60 40 10 20 30
//delete from beg=60 40 10 20 30
//delete from end=60 40 10 20
//delete form the pos=60 10 20
// reversed =30 20 10 40 60 50

//Implemeting the data by the array
// #include<bits/stdc++.h>
// using namespace std;
// //we should have the array to store the data of the stack

// //The blueprint of stack
// struct Stack {
//  int capacity;
//  int top;
//  int *arr;//this is the pointer and it will point the where my array is
// };

// //creating a stack
// struct Stack* create_stack(int _capacity) {
//  struct Stack* new_stack = (struct Stack*)malloc(sizeof(struct Stack));
//  new_stack-> capacity = _capacity;
//  new_stack->top = -1; //to denote the stack is NULL means having the zero element
//  new_stack->arr = (int*)malloc(new_stack->capacity * (sizeof(4))); //accessing the stack capacity

//  return new_stack;
// }

// int isFull(struct Stack* new_stack) {
//  return new_stack->top == new_stack-> capacity - 1; //stack is full
// }

// int isEmpty(struct Stack* new_stack) {
//  return new_stack->top == -1; //stack is empty
// }
// //nothing to return for the pushing
// void Push(struct Stack* new_stack, int value) {
//  //is it full?
//  if (isFull(new_stack)) {
//      printf("This is overflow");
//      return;
//  }
//  //accessing the array
//  new_stack->arr[++new_stack->top] = value; //top has been increamented and put the value inside it.
//  // printf("size =>%d \nThe value =>%d\n", new_stack->top, value);

// }
// //here the last elemeted is pointed by the pop
// int Pop(struct Stack* new_stack) {
//  //is it Empty?
//  if (isEmpty(new_stack)) {
//      printf("This is Empty");
//      return 0;
//  }
//  return new_stack->arr[new_stack->top--]; //top is first point to the second last element
//  //so that top will be the last element by decreamenting it
// }

// int Peek(struct Stack * new_stack) {
//  //if the underflow is there we cannot peek it
//  if (isEmpty(new_stack)) {
//      printf("Empty stack");
//  }
//  return new_stack->arr[new_stack->top];//we don't have to delete it
// }

// void printing(struct Stack* new_stack) {
//  //if the stack is empty i cannot print anything
//  if (isEmpty(new_stack)) {
//      printf("Emtpy stack not print");
//      return ;
//  }
//  //inside the stack in the array
//  //data inside the array printing
//  for (int i = new_stack->top; i > -1; i--) {
//      printf("%d ", new_stack->arr[i]);
//  }
// }

// void destroy_stack(struct Stack* new_stack) {
//  //1st freeing of the memory of the array then stack
//  free(new_stack->arr);
//  free(new_stack);
// }
// int main() {
//  //checking the conditions
//  //1. overflow
//  //2. underflow


//  struct Stack* new_stack = create_stack(100);
//  //pushing element
//  Push(new_stack, 10);
//  Push(new_stack, 20);
//  Push(new_stack, 30);
//  //poping out the element
//  // Pop(new_stack);
//  // Peek(new_stack);
//  // Peek(new_stack);
//  //printing the stack value
//  printing(new_stack);
//  //destroing the stack
//  // destroy_stack(new_stack);
//  return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// struct Stack {
//  int capacity;
//  int top;
//  int *arr;
// };
// struct Stack* create_stack(int _capacity) {
//  struct Stack * new_stack = (struct Stack*)malloc (sizeof(4));
//  new_stack->capacity = _capacity;
//  new_stack->top = -1;
//  new_stack->arr = (int*)malloc(new_stack->capacity * (sizeof(4)));
//  return new_stack;
// }
// int isFull(struct Stack * new_stack) {
//  return new_stack->top == new_stack->capacity - 1;
// }
// void push(struct Stack* new_stack, int value) {
//  //is it full?
//  if (isFull(new_stack)) {
//      printf("Stack is full");
//      return;
//  }
//  new_stack->arr[++new_stack->top] = value;
// }
// int isEmpty(struct Stack * new_stack) {
//  return new_stack->top == -1;
// }
// int pop(struct Stack* new_stack) {
//  //is it empty
//  if (isEmpty(new_stack)) {
//      printf("Yes it is Empty");
//      return 0;
//  }
//  return new_stack->arr[new_stack->top--];
// }
// void printing(struct Stack * new_stack) {
//  //is it empty ?
//  if (isEmpty(new_stack)) {
//      printf("Yes its Empty");
//      return;
//  }
//  for (int i = new_stack->top; i >= 0; i--) {
//      printf("%d ", new_stack->arr[i]);
//  }
// }
// int peek(struct Stack * new_stack) {
//  //is it empty?
//  if (isEmpty(new_stack)) {
//      printf("Yes its Empty");
//  }
//  return new_stack->arr[new_stack->top];
// }
// void destroy_stack(struct Stack * new_stack) {
//  free(new_stack->arr);
//  free(new_stack);
// }
// int main() {
//  struct Stack* new_stack = create_stack(100);
//  push(new_stack, 100);
//  push(new_stack, 200);
//  push(new_stack, 300);
//  push(new_stack, 400);
//  // pop(new_stack);
//  peek(new_stack);
//  printing(new_stack);
//  destroy_stack(new_stack);
//  return 0;
// }



//VIGHNESSS SIR

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// #define MAX_SIZE 100

// struct Stack {
//  int top;
//  unsigned capacity;
//  char* array;
// };

// struct Stack* createStack(unsigned capacity) {
//  struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
//  stack->capacity = capacity;
//  stack->top = -1;
//  stack->array = (char*)malloc(stack->capacity * sizeof(char));
//  return stack;
// }

// int isFull(struct Stack* stack) {
//  return stack->top == stack->capacity - 1;
// }

// int isEmpty(struct Stack* stack) {
//  return stack->top == -1;
// }

// void push(struct Stack* stack, char item) {
//  if (isFull(stack)) {
//      printf("Stack Overflow\n");
//      return;
//  }
//  stack->array[++stack->top] = item;
// }

// char pop(struct Stack* stack) {
//  if (isEmpty(stack)) {
//      printf("Stack Underflow\n");
//      return '\0';
//  }
//  return stack->array[stack->top--];
// }

// char peek(struct Stack* stack) {
//  if (isEmpty(stack)) {
//      return '\0';
//  }
//  return stack->array[stack->top];
// }

// int isOperand(char ch) {
//  return isalnum(ch);
// }

// int precedence(char op) {
//  switch (op) {
//  case '+':
//  case '-':
//      return 1;
//  case '*':
//  case '/':
//      return 2;
//  case '^':
//      return 3;
//  }
//  return -1;
// }

// void infixToPostfix(const char* infix, char* postfix) {
//  struct Stack* stack = createStack(MAX_SIZE);
//  int i, j;
//  char ch, x;

//  j = 0;
//  for (i = 0; infix[i] != '\0'; i++) {
//      ch = infix[i];
//      if (isOperand(ch)) {
//          postfix[j++] = ch;
//      } else if (ch == '(') {
//          push(stack, ch);
//      } else if (ch == ')') {
//          while ((x = pop(stack)) != '(') {
//              postfix[j++] = x;
//          }
//      } else {
//          while (!isEmpty(stack) && precedence(ch) <= precedence(peek(stack))) {
//              x = pop(stack);
//              postfix[j++] = x;
//          }
//          push(stack, ch);
//      }
//  }

//  while (!isEmpty(stack)) {
//      x = pop(stack);
//      postfix[j++] = x;
//  }

//  postfix[j] = '\0';

//  free(stack->array);
//  free(stack);
// }

// int main() {
//  char infix[MAX_SIZE], postfix[MAX_SIZE];

//  fgets(infix, sizeof(infix), stdin);

//  infixToPostfix(infix, postfix);

//  printf("%s\n", postfix);

//  return 0;
// }



//doubly linked list by jenny
// #include<bits/stdc++.h>
// using namespace std;
// struct node {
//  int data;
//  struct node* prev;
//  struct node* next;
// };

// //creation of a doubly linked list
// struct node * create_node( int value) {
//  struct node* new_node = (struct node *)malloc(sizeof(struct node));
//  new_node->data = value;
//  new_node->next = NULL;
//  new_node->next = NULL;
//  return new_node;
// }

// void insert_at_beg(struct node** head , int value) {
//  struct node* new_node = create_node(value);
//  new_node->next = *head;
//  *head = new_node;
// }

// void insert_at_end(struct node** head, struct node ** tail, int value) {
//  struct node* new_node = create_node(value);
//  if (*head == NULL) {
//      *tail = *head = new_node;
//      return;
//  }
//  (*tail)->next = new_node;
//  new_node->prev = (*tail);
//  (*tail) = new_node;
// }
// void insert_at_pos(struct node** head, struct node** tail, int value, int index) {
//  struct node * new_node = create_node(value);
//  struct node* current = *head;
//  int i = 0;
//  while (i < index - 1) {
//      current = current->next;
//      i++;
//  }
//  //currently i am at the index
//  new_node->prev = current;
//  new_node->next = current->next;
//  current->next = new_node;
//  new_node->next->prev = new_node;

// }
// void printing(struct node* head) {
//  struct node * current = head;
//  while (current != NULL) {
//      printf("%d ", current->data);
//      current = current->next;
//  }
// }
// int main() {
//  struct node* head = NULL;
//  struct node* tail = NULL;
//  insert_at_end(&head, &tail, 11);
//  insert_at_end(&head, &tail, 12);
//  insert_at_end(&head, &tail, 13);
//  insert_at_end(&head, &tail, 14);

//  insert_at_beg(&head, 16);

//  insert_at_pos(&head, &tail, 40, 2);
//  printing(head);
//  return 0;
// }

// doubly linked list
/*#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node * next;
    Node * prev;

    Node (int value) {
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
Node * create_node(int value) {
    return new Node(value);
}

void printer(Node *& head ) {
    Node * current = head;
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }

}
void insert_at_beg(Node *& head , Node *& tail , int value) {
    Node * new_node = create_node(value);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head ->prev = new_node;
    head = new_node;
}
void insert_at_end(Node *& head , Node *& tail , int value) {
    Node * new_node  = create_node(value);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}
int getLength( Node * & head ) {
    Node * current = head;
    int len = 0;
    while (current != NULL) {
        current = current->next;
        len++;
    }
    return len;
}
void insert_at_pos(Node *& head , Node *& tail  , int value , int pos) {
    Node * new_node = create_node(value);
    if (head == NULL) return;
    if (pos == 1) {
        insert_at_beg(head , tail , value);
        return;
    }
    int len = getLength(head);
    if (len <= pos) {
        insert_at_end(head, tail , value);
        return;
    }
    int i = 1;
    Node * left = head;
    while (i < pos - 1) {
        left = left->next;
        i++;
    }

    Node * right = left ->next;

    left->next = new_node;
    new_node->prev = left;
    right ->prev = new_node;
    new_node->next = right;
}
// Node * reverse_linked_list_using_loop(){

// }
Node * reverse_linked_list_using_recursion(Node *& left , Node *& current) {
    if (current == NULL) {
        return left;
    }
    Node * right = current->next;
    current->next = left;
    left = current;
    current = right;
    return reverse_linked_list_using_recursion(left, current);
}
Node * reverse_linked_list_using_loop(Node * & head ) {
    Node * left = NULL;
    Node * current = head;
    while (current != NULL) {
        Node * right = current->next;
        current->next = left;
        left = current;
        current = right;
    }
    return left;
}

int main() {
    Node * head = NULL;
    Node * tail = NULL;
    insert_at_beg(head , tail , 20);
    insert_at_beg(head , tail , 10);
    insert_at_beg(head , tail , 0);

    insert_at_end(head , tail , 40);
    insert_at_end(head , tail , 50);
    insert_at_end(head , tail , 60);

    insert_at_pos(head , tail , 70, 2);

    Node * left = NULL;
    Node * current = head;
    // head = reverse_linked_list_using_recursion(left, current);
    head = reverse_linked_list_using_loop(head);

    printer ( head );
    return 0;
}

*/




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
// 	ll n, m, k, h; cin >> n >> m >> k >> h;
// 	vector<int> v(n);
// 	int hd_v = 0, count = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		hd_v = abs(v[i] - h);
// 		debug(hd_v)
// 		// debug(hd_v % k)
// 		if (v[i] != h && hd_v % k == 0 ) {
// 			if ( hd_v <= (m - 1)*k)
// 				count++;
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

// 	ll t;
// 	cin >> t;
// 	t = 1;
// 	while (t--) {

// 		solve();
// 	}
// 	return 0;
// }


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

// void solve() {
// 	int n = 8;
// 	vector<string>v(8);
// 	for (int i = 0; i < n; i++) {
// 		cin >> v[i];
// 	}
// 	string ans = "";
// 	for (int i = 0; i < n; ++i)  // col
// 	{
// 		for (int j = 0; j < n; ++j) //row
// 		{
// 			for (int k = i ; k < 8 && v[i][j] != '.'; k++  ) {
// 				ans += v[i][j];
// 				i++;
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

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >> t;
// 	while (t--) {
// 		vector<char>c(22);
// 		int k = 0;
// 		vector<vector<char>>v(8, vector<char> (8)); // row and col
// 		for (int i = 0; i < 8; ++i)
// 		{
// 			for (int j = 0; j < 8; ++j)
// 			{
// 				cin >> v[i][j];
// 			}
// 		}
// 		for (int i = 0; i < 8; ++i) //col
// 		{
// 			for (int j = 0; j < 8; ++j) //row
// 			{
// 				if (v[i][j] >= 'a' && v[i][j] <= 'z') { //checking for the char part
// 					for (k = 0; k < 22; ++k)  // copying all the chars  in the vector char
// 					{
// 						c[k] = v[i][j];
// 						break;
// 					}
// 					cout << c[k];
// 				}
// 			}
// 		}
// 		cout << endl;

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
// 	int n; cin >> n;
// 	int maxi = -1, best_quality = 0;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		int word, quality;
// 		cin >> word;
// 		cin >> quality;
// 		if (word <= 10 && quality > maxi) {
// 			maxi = i;
// 			best_quality = quality;
// 		}
// 	}
// 	cout << maxi << endl;
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
// 	int n = 3;
// 	vector<vector<char>>v(n, vector<char>(n));
// 	bool xWins = 0, oWins = 0, plusWins = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{
// 			cin >> v[i][j];
// 		}
// 	}
// 	for (int i = 0; i < n; ++i) //row
// 	{
// 		//row checking
// 		//i = 0 , 1, 2
// 		if (v[i][0] == v[i][1] && v[i][1] == v[i][2]) {

// 			// 1 row i=0 => 00_[i][0]  01_[i][1]  02_[i][2]
// 			// 2 row i=1=>  10_[i][0]  11_[i][1]  12_[i][2]
// 			// 3 row 1=2=>  20_[i][0]  21_[i][1]  22_[i][2]

// 			if (v[i][0] == 'X') xWins = true;
// 			if (v[i][0] == 'O') oWins = true;
// 			if (v[i][0] == '+') plusWins = true;
// 		}
// 		// //column checking
// 		if (v[0][i] == v[1][i] && v[1][i] == v[2][i]) {

// 			// 1 col i=0 => 00_[0][i]  10_[1][i]  20_[2][i]
// 			// 2 col i=1 => 01_[1][i]  11_[1][i]  21_[2][i]
// 			// 3 col i=2 => 02_[2][i]  12_[1][i]  22_[2][i]


// 			if (v[0][i] == 'X') xWins = true;
// 			if (v[0][i] == 'O') oWins = true;
// 			if (v[0][i] == '+') plusWins = true;
// 		}
// 	}
// 	//digonal check

// 	// // top to left & bottom to right
// 	if (v[0][0] == v[1][1] && v[1][1] == v[2][2]) {
// 		if (v[0][0] == 'X') xWins = true;
// 		if (v[0][0] == 'O') oWins = true;
// 		if (v[0][0] == '+') plusWins = true;
// 	}
// 	// top to right && bottom to left
// 	if (v[0][2] == v[1][1] && v[1][1] == v[2][0]) {
// 		if (v[0][2] == 'X') xWins = true;
// 		if (v[0][2] == 'O') oWins = true;
// 		if (v[0][2] == '+') plusWins = true;
// 	}


// 	if (xWins) {
// 		cout << "X" << endl;
// 	} else if (oWins) {
// 		cout << "O" << endl;
// 	} else if (plusWins) {
// 		cout << "+" << endl;
// 	}
// 	else {
// 		cout << "DRAW" << endl;
// 	}
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
// 	int n = 3;
// 	vector<vector<char>>v(3, vector<char>(3));
// 	bool xWins = 0, oWins = 0, plusWins = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{
// 			cin >> v[i][j];
// 		}
// 	}

// 	for (int i = 0; i < n; ++i)
// 	{
// 		// horizontal checking
// 		if (v[i][0] == v[i][1] && v[i][1] == v[i][2]) {
// 			if (v[i][0] == 'X') xWins = true;
// 			if (v[i][0] == 'O') oWins = true;
// 			if (v[i][0] == '+') plusWins = true;
// 		}

// 		// //column checking
// 		// if (v[0][i] == v[1][i] && v[1][i] == v[2][i]) {
// 		// 	if (v[0][i] == 'X') xWins = true;
// 		// 	if (v[0][i] == 'O') oWins = true;
// 		// 	if (v[0][i] == '+') plusWins = true;
// 		// }

// 		//digonal checking
// 	}
// 	if (xWins) cout << "X" << endl;
// 	else if (oWins) cout << "O" << endl;
// 	else if (plusWins) cout << "+" << endl;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	// int t; cin >> t;
// 	// while (t--) {
// 	solve();
// 	// }


// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// class Node {
// public:
// 	int data;
// 	Node * next;
// 	Node (int value) {
// 		this->data = value;
// 		this->next = NULL;
// 	}
// };
// void printer(Node *& head ) {
// 	Node * current = head;
// 	while (current != NULL) {
// 		cout << current->data << endl;
// 		current = current->next;
// 	}
// }
// Node * get_middle_node(Node * head ) {
// 	if (head == NULL) {
// 		cout << "list is empty" << endl;
// 		return head;
// 	}
// 	Node * slow = head;
// 	Node * fast = head ;

// 	while (fast ->next != NULL ) {
// 		fast = fast ->next;
// 		slow = slow ->next;
// 		if (fast ->next != NULL) {
// 			fast = fast->next;
// 		}
// 	}
// 	return slow;
// }

// bool detect_loop(Node *& head ) {
// 	Node * slow = head;
// 	Node * fast = head;


// 	if ( head == NULL) {
// 		cout << "LL is empty" << endl;
// 		return false;
// 	}
// 	while (fast != NULL) {
// 		fast = fast ->next;

// 		if (fast != NULL) {
// 			fast = fast->next;
// 			slow = slow ->next;
// 		}
// 		if (slow == fast ) {
// 			return true;
// 		}

// 	}
// 	return false;
// }
// Node * find_starting_point_of_loop(Node *& head ) {
// 	// slow and fast approch
// 	Node * slow = head ;
// 	Node * fast = head;

// 	while (fast != NULL ) {
// 		fast = fast->next;
// 		if (fast != NULL) {
// 			fast = fast ->next;
// 			slow = slow ->next;
// 		}
// 		if (slow == fast) {
// 			slow = head;
// 			break;
// 		}
// 	}
// 	while (slow != fast ) {
// 		slow = slow->next;
// 		fast = fast->next;
// 	}
// 	return slow;
// }
// Node * reverse_k_nodes_using_while(Node * head, int k ) {
// 	if (head == NULL) {
// 		cout << "Empty ll" << endl;
// 		return head;
// 	}
// 	Node * back = NULL;
// 	Node * current = head;
// 	Node * front = current->next;
// 	int count = 0;
// 	while (count < k) {
// 		front = current->next;

// 		current->next = back; //break current link
// 		back = current;
// 		current = front;
// 		count++;
// 	}
// 	if (front != NULL) {
// 		head ->next = reverse_k_nodes_using_while(front , k);
// 	}
// 	return back;

// }
// int get_Length(Node *&head) {
// 	Node * current = head;
// 	int len = 0;
// 	while (current != NULL) {
// 		current = current->next;
// 		len++;
// 	}
// 	return len;
// }
// Node * reverse_k_nodes(Node * &head, int k ) {
// 	if (head == NULL) {
// 		cout << "ll is empty" << endl;
// 		return NULL;
// 	}
// 	int len = get_Length(head);
// 	if (k > len) {
// 		return head;
// 	}
// 	// it means no of nodes is ll is >= k
// 	// step 1 : reverse first k modes of k

// 	// make the 3 pointers
// 	Node * back = NULL;
// 	Node * current = head;
// 	Node * front = current->next;

// 	int count = 0;
// 	while (count < k ) {
// 		// find the front
// 		front = current->next;
// 		// move current back
// 		current->next = back;
// 		back = current;
// 		current = front;
// 		count++;
// 		// first k nodes gets reversed
// 	}
// 	// step 2 : Attached left nodes
// 	// check there is ahead nodes or not
// 	//	recursive call
// 	if (front != NULL) {
// 		// we have the nodes left to reverse
// 		// connecting this with the head ->next
// 		head->next = reverse_k_nodes(front , k ); //head , k
// 		// since we have to solve the left nodes and to send the head of that node list
// 	}
// 	// front ->poiting to the last node of the k group

// 	// step 3 : return head of the modified linked list

// 	return back; //starting node of the linked list
// }
// int main() {
// 	Node * head = new Node(10);
// 	Node * second = new Node(20);
// 	Node * third = new Node(30);
// 	Node * fourth = new Node(40);
// 	Node * fifth = new Node(50);
// 	Node * sixth = new Node(60);
// 	Node * seventh = new Node(70);

// 	head ->next = second;
// 	second ->next = third;
// 	third ->next = fourth;
// 	fourth ->next = fifth;
// 	fifth->next = sixth;
// 	sixth ->next = seventh;
// 	seventh ->next = NULL;

// 	// even case (fast = head )
// 	// odd case (fast =head ->next)
// 	// printer(head);
// 	// cout << "Middle " << get_middle_node(head)->data << endl;

// 	// cout << (detect_loop(head) ? "Present\n" : "Absent\n") << endl;

// 	// cout << "Starting Loop => " << find_starting_point_of_loop ( head)->data << endl; // this is the starting point of the loop

// 	// head = reverse_k_nodes_using_while(head , 7);
// 	head = reverse_k_nodes(head , 7);

// 	printer(head);



// 	return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;
// #define print(x) for(int i =0 ;i<(int)x.size();i++) cout<<x[i]<<" ";
// int f(int &n) {
// 	return (6 ^ n);
// }
// void solve() {
// 	int n ; cin >> n;
// 	vector<int> v(n);
// 	for (int i = 0; i < n; i++) cin >> v[i];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int ans = f(v[i]);
// 		cerr << ans << endl;

// 	}

// }
// int main() {
// 	int t ; cin >> t;
// 	t = 1;
// 	while (t--) solve();
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define print(x) for(int i =0 ;i<(int)x.size();i++) cout<<x[i]<<" ";

int main() {
	cout << (1 ^ 6);
	cout << (2 ^ 6);
	cout << (5 ^ 6);
	return 0;
}




