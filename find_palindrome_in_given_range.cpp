#include<bits/stdc++.h>
using namespace std;
  bool palindrome(int n){
      int reverse=0;
      int temp=n;
      while(temp>0){
          reverse=reverse*10+temp%10;
          temp=temp/10;
      }
      //if a and n are same then n is palindrome 
        if (n==reverse)return true;
        return false;
  }
int main(){
  int a,b;
  cin >>a>>b;    
  for(int i=a; i<=b;i++){
    if(palindrome(i)){
      cout<<i <<" ";
    }

  
}
    return 0;
}
  
