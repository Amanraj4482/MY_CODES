// recursive -> when a function calls itself directly or indirectly
// jab bigger problem ki sol -> depend krti ho chotti and same type ki problem pr

// 1.base condition
// 2.recursive realtion / recursive call
// 3.processing->optioal

// factorial by recursive
//  #include<bits/stdc++.h>
//  using namespace std;
//  int fact(int n){
//      if(n==0||n==1) return 1;
//      else return n*fact(n-1);
//  }
//  int main(){
//      cout<<"factorial->"<<fact(5);
//      return 0;
//  }

// print counting
//  #include<bits/stdc++.h>
//  using namespace std;
//  void count(int n){
//      if(n==0) return;
//      // counting part
//      cout<<n<<endl;
//      //recursive relation
//      count(n-1);
//  }
//  int main(){
//      count(10);
//      return 0;
//  }
// 10
//  9
//  8
//  7
//  6
//  5
//  4
//  3
//  2
//  1

// tail AND head RECURSION
//  first base case then processing and then recursive realation
//  where as in head recursion recursive relation is written before processing

// FIBBONACCI SERIES
// #include <bits/stdc++.h>
// using namespace std;
// int fibonacci(int n)
// {
//     if (n == 1)
//         return 0;
//     if (n == 2)
//         return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main()
// {
//     cout << fibonacci(7);
//     return 0;
// }