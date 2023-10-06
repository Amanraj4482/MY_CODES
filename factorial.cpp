#include<bits/stdc++.h>
using namespace std;
    long long fact(long long n){
        long long ans =1;
        for(long long i =1 ; i<=n ; i++){
            ans*=i;
        
        }return ans;
    }
int main(){
    long long n;
    cin>>n;
  cout<<"factorial-->"<<fact(n)<<endl;
    return 0;
}

// //RECURSIVE METHOD
// int fact(int n){
//     if (n==1)
//         return 1;
//     return n*fact(n-1);
// }
// int main (){
//     int n ;
//     cin>>n;
//     cout<<fact(n)<<endl;
// }