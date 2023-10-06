#include<iostream>
using namespace std;



int main(){


#ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif

        //stress testing 
         
         //understand how to generate test cases
        
        // wap to fidn the second largest number in the array

        // constraints 
        // 1 <=T <=10
        // 1<= N<= 100000
        // 1<= a[i]<= 1000000

        //rand  % 10 --> { 0,1,2,4,5.. random no}
        
        int t = rand () %10+1;
        cout<<t << endl;
        while (t--){
            int n = rand () % 100000+1;
            cout<<n<< endl;
            for(int i =0; i<n;i++){
                cout<<(rand()%1000000 +1) <<" ";
            }cout<<endl;
            return 0;
        }
        }