// double pointer
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a =5;
// int* p=&a;//this is pointer to int
// int** q=&p;//and this is pointer to pointer
//  cout<<&a<<endl;//address of a 
//  cout<<a<<endl;//value of 5
//  cout<<p<<endl;//address of a 
//  cout<<&p<<endl;//address of itself p
//  cout<<*p<<endl;//address which points the value inside p which is equls to 5
//  cout<<q<<endl;//address of p
//  cout<<&q<<endl;//address of  q
//  cout<<*q<<endl;//address which points the value inside p which is equls to address of &p
//  cout<<**q<<endl;//points to the value of a=5

//     return 0;
// }
//0x61ff0c
// 5
// 0x61ff0c
// 0x61ff08
// 5
// 0x61ff08
// 0x61ff04
// 0x61ff0c
// 5


// #include<bits/stdc++.h>
// using namespace std;
// void util(int*p){//pass by value
//     // p=p+1;//there is copy created and change in that only
//     *p=*p+1;//same memory but update in value
// }
// int main(){
//     int a=5;
//     int *p=&a;
//     cout<<"before"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     util(p);
//     cout<<"after"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void solve (int **p){
//     **p=**p+1;
// }
// int main(){
//     int x=12;
//     int* p=&x;
//     int** q =&p;
//     solve(q);
//     cout<<x<<endl;
// }


//REFERENCE VARIABLE
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a=5;
//     //creating a referece varible
//     int &b=a;
//     //b-> is a referece varible & pointing to the same memory location of a
//     // in a symbol table a and b both refers to the same address
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<&a<<" "<<&b<<endl;
// 5
// 5
// 0x61ff08 0x61ff08
//     return 0;
// }


//pass by value
//no change in the main function 
// #include<bits/stdc++.h>
// using namespace std;
// void solve(int b){
//     b++;
// }
// int main(){
//     int a =5;
//     solve(a);
//     cout<<a<<endl;

//     return 0;
// }
//->5




//pass by reference
// #include<bits/stdc++.h>
// using namespace std;
// void solve(int&b){
//     b=50;
// }
// int main(){
//     int a =5;
//     solve (a);
//     cout<<a<<endl;
//     return 0;
// }
//->50



//pass by reference
// #include<bits/stdc++.h>
// using namespace std;
// void solve(int* b){
//     *b=*b+1;
// }
// int main(){
//     int a=13;
//     int *p=&a;//making a pointer then passing the address of a
//     solve(&a);//here directly passing the address of a 
//     cout<<a<<endl;//->14
//     return 0;
// }

 
//pointer with value and pass by reference
//  #include<bits/stdc++.h>
//  using namespace std;
//  void solve (int*& p ){//with int *p -> pass by value 
//  //with int *&p -> pass by reference-> same memory different names
//     // *p=*p+1;
//     p=p+1;
//  }
//  int main(){
//     int a =5;
//     int *p=&a;
//     cout<<p<<endl;
//     solve (p);//possing address of p
//     cout<<p<<endl;
//     cout<<a<<endl;
//     return 0;
//  }


// #include<bits/stdc++.h>
// using namespace std;
//     int *solve(){
//         int a=25;
//         int *ans=&a;
//         return ans;
//     }
// int main(){
//     cout<<solve ();//0x61fef0 in case not writing the cout
//     //address of ans
//     return 0;
// }

// home work
// return by reference
