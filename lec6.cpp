 //Which is more effective while calling the functions? Explanation: 
//In the call by reference, it will just passes the reference of the 
//memory addresses of passed values rather than 
//copying the value to new memories which reduces the overall time and memory use.


// #include<bits/stdc++.h>
// using namespace std;
// //FUNCTIONS WITH A WELL DEFINED TASK
// int main(/*input parameters*/){
//     //body 
//     return 0;
// }
// //function call stack:

// //last in first out  -->>LIFO

//  #include<bits/stdc++.h>
// using namespace std;
// int a,b,c;  
//      void print1(int a);//function declaration is must 
//      void print2(int b);//without declaration we cannot define the function
//     void print3(int c);



//     void print1(int a ){
//             cout<<a<<endl;;
//             print2(b);
//     }
//     void print2(int b ){
//             cout<<b<<endl;
//             print3(c);
//     }
//     void print3(int c ){
//             cout<<c<<endl;
//     }
    
// int main(){
//      a =1;
//      b=2;
//      c=3;
//     print1(a);
//     return 0;
// }


//pass by value is creating a copy 
// #include<bits/stdc++.h>
// using namespace std;
// void printCounter(int b);
//     void printNumber(int num){//syntax of pass by value
//         cout<<num<<endl;
//         num++;
//         cout<<num<<endl;
//         printCounter(8);
//     }
//     void printCounter(int b){
//         cout<<b<<endl;
//     }
// int main(){
//     //function call 
//     //printName
//     printNumber(5);
//     return 0;
// }


//write a function to add 2 numbers
// #include<bits/stdc++.h>
// using namespace std;
//     int add (int a, int b){//function declaration
//         int result =a+b;
//         return result;
//     }
// int main(){
//     int a;
//     cout<<"Enter the value of a "<<endl;
//     cin >>a;
//     int b;
//     cout<<"Enter the value of b"<<endl;
//     cin>>b;
//     int sum=add(a,b);
//     cout<<"addition result is "<<sum;
//     return 0;
// }


//finding maximum number between 3 numbers
// #include<bits/stdc++.h>
// using namespace std;
//     int findMax(int num1,int num2,int num3){//pass by value
//         if(num1>num2 && num1>num3){
//             return num1;
//         }
//         else if(num2>num1 && num2> num3){
//             return num2;
//         }
//         else {
//             return num3;
//         }
//     }
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int maximumNum =findMax(a,b,c);
//     cout<<maximumNum<<endl;
//     return 0;
// }


//grading marks of students
// #include<bits/stdc++.h>
// using namespace std;
// //      char getGrade(int marks){
// //         if(marks>=90)
// //         return 'A';
// //         else if(marks >=80)
// //         return 'B';
// //         else if(marks >=70)
// //         return 'C';
// //         else if (marks >= 60)
// //         return 'D';
// //         else 
// //         return 'E';
// //      }

//     //by switch case statement
//     char getGrade(int marks){
//     switch (marks/10){
//         case 10 :
//         case 9 : return 'A'; break;
//         case 8 : return 'B'; break;
//         case 7 : return 'C'; break;
//         case 6 : return 'D'; break;
//         default : return 'E';
//     }}
// int main(){
//     // int marks;
//     // cout<<"Enter the marks:"<<endl;
//     // cin>>marks;
//     // char finalGrade = getGrade(marks);
//     // cout<<finalGrade<<endl;

//     for(int i=0; i<=100 ; i++){
//         char ans= getGrade(i);
//         cout<<"Grade for marks= "<<i<< " is "<<ans<<endl;
//     }
// //Grade for marks= 88 is B
// // Grade for marks= 89 is B
// // Grade for marks= 90 is A
// // Grade for marks= 91 is A
//     return 0;
//  }

//adding even numbers
// #include<bits/stdc++.h>
// using namespace std;
//     int evenSum(int n){
//         int sum =0;
//         for(int i=2; i<n; i+=2){
//             sum+=i;
//         }
//         return sum;
//     }
// int main(){
//     int n;
//     cin>>n;
//     cout<<evenSum(n)<<endl;
//     return 0;
// }


//QUIZ OF LECTURE 6
//question -4
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     if(0){
//         cout<<"Hello";
//     }
//     else {
//         cout<<"Good Bye ";
//     }
//     return 0;
// }
// output-Good Bye

//  question no 12
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a =10;
//     if(a=15){
//         time;
//         cout<<a;
//         if(n==3)
//         goto time;
//     }
//     break;
    
//     return 0;
// }


//question no 13
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n =15;
//     for(;;) cout <<n;
//     return 0;
// }



//question no 15
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b,c;
//     a=8;
//     b=7;
//     c=(a>b)?a:b;
//     cout<<"c:"<<c;
//     return 0;
// }
// c:8 output


//question 16
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a =0;
//     int b=10;
//     a=3;
//     b=7;
//     if(a&&b){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
//     return 0;
// }
// output =true;

//question 18
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a=5,b=6,c,d;
//     c=a,b;//without brackets it printing the first a value which is 5
//     d=(a,b);//with brackets it is printing the value of b which is 6
//     cout<<c<<" "<<d;
//     return 0;
// }
// //output=5 6

//question 19
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,j;
//     j=10;
//     i=(j++,j+100,999+j);
//     cout<<i;

//     return 0;
// }
// output 1010


//question 20*******
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x,y;
//     x=5;
//     y=++x*++x;
//     cout<<x<<y;
//     y=x++*++x;
//     cout<<x<<y;
    
//     return 0;
// }
// output =749963

//question 21
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     double a =21.09399;
//     float b=10.20;
     
//     int c , d;
//     c=(int)a;
//     d=(int)b;
//     cout<<c<<" "<<d;

//     return 0;
// }

//question 22
// #include<bits/stdc++.h>
// using namespace std;
//     int fun(int x=0,int y=0,int z){
//       return (x+y+z);
//     }
// int main(){
//     int b=10;
//     cout<<fun(b);
//     return 0;
// }
// output =error

//question 29 to ask ??? 
//confusion
// #include<bits/stdc++.h>
// using namespace std;
// int fun(int =0,int =0);
// int main(){
//     cout<<fun(5);
//     return 0;
// }
// int fun(int x,int y){
//     return (x+y);
// }

//question 35 doubt??
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a =5 , b=-7, c=0 , d;
//     d=++a&&++b||++c;
//     printf("\n%d %d %d %d",a,b,c,d);
//     return 0;
//}
//6-601

//question 37 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     if(~0==1)//when you do ~0 == 1 it will check for -1 == 1 which is false
//     printf("Yes\n");
//     else printf("no\n");
//     return 0;
// }

//question 39
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int y=0;
//     if(1|(y==1))
//     printf("y is %d\n",y);
//     else printf("%d\n",y);
//     return 0;
// }
//y is 0


//question 40
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int y =1;
//     if(y&(y=2))
//     printf("true %d\n",y);
//     else printf(" false %d\n",y);
//     return 0;
// }
// //true 2


//question 41
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a=10,b=5,c=5;
//     int d;
//     d=b+c==a;
//     printf("%d",d);
//     return 0;
// }
//true =1


//question 42
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a=10,b=5,c=3;
//     b!=!a;
//     c=!!a;
//     printf("%d\t%d",b,c);
//     return 0;
// }
//    Explanation:!= is a relational operator. It is just used to check the values of both the operands,there it just
// checks with b and !a that means it does not change the value of b
//And in next ! Is logical operator and it reverse the value of operand
// i.e if it is true it become false and vice versa here 1st !a makes a false I.e 0 next !a makes it 1 that is c=1

//question 