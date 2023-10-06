//sort 0's,1's and 2's 
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr{1,2,0,1,1,0,0,2,2,2,1,0,2};
    int start=0;
    int end=arr.size()-1;
    for(int i=0; i<arr.size();){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            i++;
            start++;
        }
        if(arr[i]==1){
            swap(arr[i],arr[end]);
            end--;
            i++;
        }
        if(arr[i]==2){
            swap(arr[end],arr[start]);
            i++;
            end--;

        }
    }
    for(auto c : arr){
        cout<<c<<" ";
    }
    return 0;
}

