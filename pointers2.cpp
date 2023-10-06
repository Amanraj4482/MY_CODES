// to find the length of array
//int len = *(&arr + 1) - arr;
//*(&arr + 1) is the address of the next memory location
// just after the last element of the array
// #include<bits/stdc++.h>
// using namespace std;
// //in symbol table there is maping of varible with address
// //we cannot change the address of symbol table by any change
// //we can access the sub parts of array by the help of pointers
// int main(){
//     int arr[4]={1,2,3,4};
//     int i=3;
//     // cout<<arr<<endl;//base address of this array
//     // cout<<&arr<<endl;//base address
//     // cout<<&arr[0]<<endl;// base address
//     // cout<<arr[0]<<endl;//12
//     // cout<<*arr<<endl;
//     // cout<<*(arr+1)<<endl;
//     // cout<<*(arr)+1<<endl;
//     // cout<<arr[i]<<endl;
//     // cout<<i[arr]<<endl;
//     // cout<<*(i+arr)<<endl;
//     // cout<<arr+1<<endl;
//     // cout<<arr<<endl;
//     // *arr=*arr+2;
//     // cout<<arr<<endl;
//     // cout<<*arr<<endl;
//     // cout<<"------------"<<endl;
//     // int *p=arr;//base address gets stored
//     // cout<<p<<endl;//base address
//     // cout<<&p<<endl;//address of p
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[4]={5,6,7,8};
//     int *p=arr;
//     int*q=arr+1;
//     cout<<arr<<endl;//base address of arr
//     cout<<&arr<<endl;//base address
//     cout<<arr[0]<<endl;//5
//     cout<<&arr[0]<<endl;//base address
//     cout<<p<<endl;//base address of arr
//     cout<<&p<<endl;//addess of p in symbol table
//     cout<<*p<<endl; //5
//     cout<<q<<endl;//address of arr[1]
//     cout<<&q<<endl;//address of q
//     cout<<*q<<endl;//6
//     cout<<*(p)+1<<endl;//6
//     cout<<*(p)+2<<endl;//7
//     cout<<*(p)+3<<endl;//8
//     cout<<*(q)+4<<endl;//10

//     return 0;
// }

// char array
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     char ch[10]="babbar";
//     char *c=ch;
//     cout<<c<<endl;//behaviour of cout is different for char pointers
//     //prints the total string present in the c
//     cout<<ch<<endl;//prints string
//     cout<<&ch<<endl;//base address
//     cout<<ch[0]<<endl;//b
//     cout<<&c<<endl;//address of c
//     cout<<*c<<endl;//prits the first character of string
//     cout<<c<<endl;//print string
//     //*c=*c(c+0)=c[0]->0th index ->B
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     char name[10]="Sherbano";
//     char *cptr=&name[0];
//     cout<<name<<endl;//ptrint string->Sherbano
//     cout<<&name<<endl;//base address of string
//     cout<<name+3<<endl;//starts print by 3 index->rbano
//     cout<<*name+3<<endl;//86
//     cout<<*(name+3)<<endl;//only prints the index->r
//     cout<<cptr<<endl;//->Sherbano
//     cout<<&cptr<<endl;//address of its own
//     cout<<*cptr<<endl;//s
//     cout<<*cptr +1<<endl;//84
//     cout<<cptr +1<<endl;//herbano
//     cout<<*cptr +7<<endl;//90
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// //      char ch= 'k';
// //      char* cptr=&ch;
// //      cout<<cptr<<endl;//k�a
// // //printing until u get the null character



//     char name[10]= "babbar";
//     char*c ="babbar";

// //temp storage -> "babbar";
// // memory change -> copy to name array ki storoge
// //but
// //temp storage="BAbbar"
// //c -> c pointing to temp storage of babbar which is a bad practise
// //
//     return 0;
// }

//confusion in this code
// #include<bits/stdc++.h>
// using namespace std;
// void solve(int *arr){//pointer passing
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Size inside solve function "<<n<<endl;//size is
//     cout<<"arr:"<<arr<<endl;
//     cout<<"&arr:"<<&arr<<endl;
//     arr[0]=50;
//     //pass by reference
//     //coping is passing
//     // array can be changed here by pointers
// }
// int main(){
//     int arr[10]= {1,2,3,4};
//     cout<<"Size inside main function "<<sizeof(arr)<<endl;//size is 40
//     cout<<arr<<endl;
//     cout<<&arr<<endl;
//     for(int i=0; i<10; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     cout<<endl<<endl<<"Now calling solve function "<<endl;
//     solve(arr);
//     cout<<"wapas main function me aagye h"<<endl;
//     for(int i=0; i<10;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }
//Size inside main function 40
// 0x61fee0
// 0x61fee0
// 1 2 3 4 0 0 0 0 0 0


// Now calling solve function
//Size inside solve function 8
// arr:0x61fee0
// &arr:0x61fed0
// wapas main function me aagye h
// 50 2 3 4 0 0 0 0 0 0

// #include<bits/stdc++.h>
// using namespace std;
// void update(int *p){
//     cout<<"addressn stored inside p is :"<<p<<endl;
//     cout<<"address of p is :"<<&p<<endl;
//     *p=*p+10;

// }
// int main(){
//     int a =5;
//     cout<<"Address of a is:"<<&a<<endl;
//     int*ptr=&a;
//     cout<<"address stored in ptr is: "<<ptr<<endl;
//     update(ptr);
//     cout<<"value of a is:"<<a<<endl;
//     return 0;
// }

// Address of a is:0x61ff08
// address stored in ptr is: 0x61ff08
// address strod inside p is :0x61ff08
// address of p is :0x61fef0
// value of a is:15


