// minimum no of element required to reach target sum ---------------------
// with the elements present in array and having the target
// there are two ways -> 1. from 5 to 0 reach the target -> no need of aditional varible
// 2.form 0 to 5 -> need of aditional varible which would be initialised by mini= INT_max
// coin chain problem------------------------
// when getting -1 that is invalid case do not update the mini
// return the min(of both mini and INT_MAX)
// har ek element k liye pure element ki call ja rhi h


// this will get reach from 5 to 0
// #include<bits/stdc++.h>
// using namespace std;
// int solve(vector<int>& arr, int target){
//     //base case
//     if(target ==0){
//         //element required to make zero is zero
//         return 0;
//     }
//     if(target<0){// or for reaching 0 to 5 output is greater than target
//         //no updatation of mini
//         return INT_MAX;//by using the infinte max coins i can make -1 coins
//     }
//     //let's solve one case
//     int mini=INT_MAX;
//     for(int i=0; i<arr.size();i++){//call for every element of the array
//     int ans=solve (arr,target-arr[i]);//it may be possible that it is the mini poslbe ans
// it is because this is the ans of getting the target-arr[i] but we need only the ans of target
//     if(ans!= INT_MAX)//this is valid value
// let say there comes int_max in the ans we add the store +1
//     mini=min(mini,ans+1);//we are doing ans+1 because this ans is made for the target-1 not the target that why we need to add +1
//         so there should no ans that should go out of range of interger

//     }
//      return mini;
// }
// int main(){
//     vector<int>arr{1,2};
//     int target=5;
//     int ans=solve(arr,target);
//     cout<<"answer is->"<<ans<<endl;
//     return 0;
// }

// answer is 3




// //this code getting wrong====>failure in this code
// //same question will be doing by reaching from o to 5
// // ans should be getting the 3
// // 111 21 12 three ways in which minimum ways is3,2,2 of their min->2
// //for the target there will call for each and every element from the given array
// //and for accessing the element and calling them can be done by using the for loop
// #include<bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&arr,int target,int output){
//     //two base case
//     //return 0 ka mtlb can be created by 0 coins
//     //but int _Min ka mtlb h cannot be created it is invalid
//     // cout<<target<<","<<output<<endl;
//     if(output==target) return 0;
// if(output>target){return -5;}//if we will not consider this then there would be tle in the this code
//     int miniWays=-10;
//     //traversing through the array
//     for(int i=0; i<arr.size();i++){
//     // cout<<"output ye h->"<<output<<endl;
//         int ans=solve(arr,target,output+arr[i]);//this ans can be both invalid or valid
// // cout<<target<<","<<arr[i]<<endl;
//     //cout<<target<<","<<arr[i]<<"+"<<output<<"ans->"<<ans<<endl;
//         //either it reaches target to 5 or to max target
//         //if this ans is valid then i have to update my maxi
//         //and if not then this need to be ignored
//         /*but what we need the ans is*/
//         //if my ans is equals to int min then this will be considered invalid
//         // if(ans!=INT_MIN)//this is the valid so i need to update this
//         if(ans!=-miniWays)//agr ans int_min nhi to tbhi update kiya h miniways ko
//         cout<<"answer is->"<<ans<<endl;
//         //ignore the int_min
//         miniWays=max(miniWays,ans-1);
//     }
//     //aur unme s jo min ans hoga wohi ans hoga
//     return miniWays;
// }
// int main(){
//     vector<int>arr{1,2,3};
//     int target=7;
// int ans=solve(arr, target,0);
//     cout<<ans;
//     return 0;
// }




// CUT INTO SEGMENTS****************
// INPUT - n is given which shows the length of rod
// to find-max no of segment can be made provided that each segment should of length x , y, z
// here we are not calling the value in which we were calling in last code by int max or int min
// #include<bits/stdc++.h>
// using namespace std;
// int solve(int n,int x, int y ,int z){
//     //base case->rod ko cut kr k kb rokoge when the length of rod will be o
//     if(n==0) return 0;//when the length of the rod is zero then we cannot cut so is means we cut in 0 segments
//     // checking for which we are not cutting in negative values
//     //ky n-x zero hai? agr ha tbhi call karunga
//     if(n<0){//IF the lenght of the rod is negative
//     //in that case the maximum would be int _min
//         return INT_MIN;
//     }
//        int a=solve(n-x,x,y,z)+1;//in which x portion is cut from the n lenght of the rod
//        //this solve functi0n is giving the ans of n-x but we need the answer of n so we
//      will add +1(we are considering the n part of the rod as 1)
//       int  b=solve(n-y,x,y,z)+1;//in which y portion is cut from the n lenght of the rod
//       int  c=solve(n-z,x,y,z)+1;//in which z portion is cut from the n lenght of the rod
//     //in the final answer we need the maximum number
//     int ans=max(a,max(b,c));
//     return ans;
// }
// int main(){
//     int n=7,x=5,y=2,z=2;
//     //where n is the length of the rod
//     //this solve function will return maximum no of segment
//     // ans->valid0>which will be greater than ans equal to zero or invalid->which will be less equal to zero
//     int ans=solve(n,x,y,z);
//     if(ans<0) ans=0;
//     cout<<ans;
//     return 0;
// }
// //time complexity is in exponential
// //we are calling 3 calls for the every element


// <==MAXIMUM SUM OF NON ADJACENT ELEMETNS ==>
// we have to return the maximum sum of subsequence in which no two elemets are adjacent
//  kisi element ka present hona aur na hona this shows that
//  => inclusion and exclusion pattern ->> house robber problem
//  there will be two calls for each element first one will be include and the other one will be exclude
//  when including the i=0 nubmer in ans that would be initilised by zero we have to update i by i+2 so that it won't add the adjacent number
//  when including the arr[i=0 and i=i+2] the both will be added in the ans which would be intitilised by zero
//  when i get outs of the array length then that is the base case of the function
//  initialised the maxisum and update in base case
// i+1 will be the adjacent element

//  #include<bits/stdc++.h>
//  using namespace std;
//  void solve (vector<int>&arr, int sum , int &maxi,int i){
//     //base case
//     if(i>=arr.size()){//when reaches the total length of the array
//     //update maxi
//     maxi=max(sum ,maxi);
//          return ;
//          }

//  //include
// solve(arr,sum+arr[i],maxi,i+2);//sum will be updated as sum + cureent value
//  //exclude
// solve(arr,sum,maxi,i+1);
//  }

//  int main(){
//     vector<int>arr{2,1,4,9};
//     int sum=0;
//     int maxi=INT_MIN;
//     int i=0;
// solve (arr,sum ,maxi,i);//We cnt cout here because it is pass by reference not returing somthing becuase it si void function
//     cout<<maxi<<endl;
//     return 0;
//  }
//  11 is the answer
//  this code will give tle because it is recursive code


//  this all question will again be taought in dp


// try at home
//  in inclusion ans exclustion we assume only one quantity of element
//  but in coin quesion the quantity of every coin is infinte
