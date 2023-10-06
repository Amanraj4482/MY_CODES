//lets practise pointer
//full control of memory

//question 1->
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     float f=10.5;
//     float p=2.5;
//     float* ptr=&f;
//     (*ptr)++;
//     *ptr=p;
//     cout<<*ptr<<" "<<f<<" "<<p;
//     return 0;
// }
// 2.5 2.5 2.5

//question 2->
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a =7,b=17;
//     int *c=&b;
//     *c =7;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }
// 7 7

//question 3->
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int *ptr=0;//here ptr is a null pointer
//     //so when we are dereferecing the null pointer
//     //this will give error ans this will be runtime error
//     int a=10;
//     *ptr=a;
//     cout<<*ptr<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // which of the following will give the address of a varible 'b' pointed by 'a' ie
//     int b=10;
//     int *a=&b;//storing the address of b
//     cout<<a<<endl; //it stores the address of b as its value

//     return 0;
// }


// // what will be the output?
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   //a->97
//     char ch ='a';
//     char* ptr=&ch;//*ptr is pointing int value of char ch
//     ch++;//97+1 which points to the b
//     cout<<*ptr<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a =7;
//     int *c =&a;//c is storing the base address of a  ans pointing the value of a =7
//      c=c+1;//where c is storing the address of a so if a address is 300 then 300+4 becuase it is int pointer
//      //where 304 is random or garbage
//      cout<<a <<" "<<*c <<endl;//7 6422284
//     return 0;
// }

// //assume that memory address of varible 'a is and an integer takes 4 bytes what will be the output
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a=7;
//     int *c=&a;
//     c=c+3;//400 + 12=412
//     cout<<c<<endl;
//     cout<<*c <<endl; prints the garbage value
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     char arr[20];
//     int i;
//     for (i = 0; i < 10; i++) {
//         *(arr + i) = 65 + 'i';
//     }
//     *(arr + i) = '\0';
//     cout << arr;
//     return 0;
// }
//this gives the ans ABCDEFGHIJ

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     char *ptr;
//     char Str[] = "abcdefg";
//     ptr = Str;
//     ptr += 5;
//     cout << ptr;
//     //print until we get the null


//     return 0;
// / }


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int numbers[5];
//     int * p;
//     p = numbers;
//     *p = 10;
//     p = &numbers[2];
//     *p = 20;
//     p--;
//     *p = 30;
//     p = numbers + 3;
//     *p = 40;
//     p = numbers;
//     *(p + 4) = 50;
//     for (int n = 0; n < 5; n++) {
//         cout << numbers[n] << " ";
//     }
//     10 30 20 40 50
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     char st[] = "ABCD";
//     for (int i = 0; st[i] != '\0'; i++) {
//         cout << st[i] << *(st) + i << *(i + st) << i[st] << endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//     float *ptr1 = &arr[0];
//     float *ptr2 = ptr1 + 3;
//     cout << *ptr2 << " ";
//     cout << ptr2 - ptr1;

//     return 0;
// }
// 90.5 3

// #include<bits/stdc++.h>
// using namespace std;
// void changeSign(int *p) {
//     *p = (*p) * -1;
// }

// int main() {
//     int a = 10;
//     changeSign(&a);
//     cout << a << endl;
//     return 0;
// }
// -10

// #include<bits/stdc++.h>
// using namespace std;
// void fun(int a[]) {
//     cout << a[0] << " ";
// }
// int main() {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
//     return 0;
// }
//2 1

// #include<bits/stdc++.h>
// using namespace std;
// void square(int *p) {
//     int a = 11;
//     p = &a;
//     *p = (*p) * (*p);
// }
// int main() {
//     int a = 10;
//     square(&a);
//     cout << a << endl;
//     return 0;
// }
// // 10

// #include<bits/stdc++.h>
// using namespace std;
// void q(int z) {
//     z += z;
//     cout << z << " ";
// }
// void p(int *y) {
//     int x = *y + 2;
//     q(x);
//     *y = x - 1;
//     cout << x << " ";
// }
// int main() {
//     int x = 5;
//     p(&x);
//     cout << x;
//     return 0;
// }
// 14 7 6

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int a = 10;
//     int *p = &a;
//     int **q = &p;
//     int b = 20;
//     *q = &b;
//     (*p)++;
//     cout << a << " " << b << endl;
//     return 0;
// }

// 10 21

// #include<bits/stdc++.h>
// using namespace std;
// int f(int x, int *py , int** ppz) {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;//7+7+5
// }
// int main() {
//     int c, * b, **a;//a pointer can store the address of a normal
//     // varible while double pointer can store the address of a pointer varible
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a);

//     return 0;
// }

// 19


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int ***r, **q, *p, i = 8;
//     p = &i;
//     (*p)++;
//     q = &p;
//     (**q)++;
//     r = &q;
//     cout << *p << " " << **q << " " << ***r;
//     return 0;
// }

// 10 10 10

// #include<bits/stdc++.h>
// using namespace std;
// void increment(int **p) {//**P is pointing the value inside the *ptr
//     //which will be incremented
//     (**p)++;
// }
// int main() {
//     int num = 10;
//     int *ptr = &num;
//     increment(&ptr);
//     cout << num << endl;
//     return 0;
// }

//11

