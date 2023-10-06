//when i press fire button it copies the whole line 
//button 4 is undo 
//middle button is for paste



// checking the sorted array by recursion
// if your aage wla element is greater than piche wla then aage badh jao else return false
// when i == n-1 then stoping conditio

// #include<bits/stdc++.h>
// using namespace std;
// //referecing to save memory and time
// bool checkSorted(vector<int>&arr,int& n,int i){//by it by reference
// //base case
// if(i==n-1) return true;//array is totally sorted i reaches to the end of the array
// // now i have to solve 1 case baaki recursion samhall lega
// //1 case should be check that atleast tow elments are sorted or not
// if(arr[i+1]<arr[i]) return false;
// return checkSorted(arr,n, i+1);

// }
// int main(){
//     vector<int>v{1,2,3,4,5};
//     int n=5;
//     int i=0;
//     bool isSorted=checkSorted(v,n,i);
//     if(isSorted==true){
//         cout<<"yes it is !"<<endl;
//     }
//     else {
//         cout<<"No !"<<endl;
//     }
//     return 0;
// }

// binary search by recursion
//  we can also do this code by pass by reference
// but this code is done by passing the value of the array which is consuming space and creating copy
// where in case of array the pointers passes not the value of aray

// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(vector<int> &arr, int s, int e, int key)
// { // by using & operator we are referencing it
//     // base case
//     // case 1
//     // s>e invalid array
//     if (s > e)
//         return -1;
//     // case 2 key found
//     int mid = (s + e) / 2;
//     if (arr[mid] == key)
//         return mid;
//     // find one and other recursion will find
//     // arr[mid] <key right search
//     // arr{mid}>key left search
//     // ternary operator
//     return (arr[mid] < key) ? binarySearch(arr, mid + 1, e, key) : binarySearch(arr, s, mid - 1, key);
//     // if(arr[mid]<key){
//     //    return  binarySearch (arr,mid+1,e,key);
//     // }
//     // else return binarySearch(arr,s,mid-1,key );
//     // we cannot by reference the expression but if we give a varible name to that expression with suitable datatype then we can reference it
// }
// int main()
// {
//     vector<int> v{1, 3, 5, 6, 7};
//     int target = 7;
//     int n = v.size();
//     int s = 0;
//     int e = n - 1;
//     int ans = binarySearch(v, s, e, target);
//     cout << "ans is " << ans << endl;
//     return 0;
// }

// if we pass the code by refernce or by pointer then there will be no difference upon the time complexities


//**********************************subsequence of a string
//this question can also be done by bit masking
//if n is the no of string the total subsequence = 2 ^ n ->power set
//include and exclude pattern
//include means (concatinate)-> add in output string
//exclude(as it is) -> do nothing in out put string
//where initial output string is "empty"
//when i=0 then include =>arr[i=0]with i++ and then include=> arr[i=0+1] with i++;ans stop when i reaches max string position
//2nd choice->exclude y ->before it was x ans now also it will be
//exclude case on xy -> exc 'x' i++ string will be "EMPTY" 
//again includeans exclude where i stand on i=1; where arr[i]='y' 
//for including 'y' in empty string ->'y' where i is out of string 
//for excluding 'y' in empty string ->'empty' where i is out of string
// at last we get 'xy' 'x' 'y' 'empty'


//note-> when we exclude "x"->form "empty"string then no sence of this result will be "empty"
// #include<bits/stdc++.h>
// using namespace std;
// void printSubsequence(string str, string output , int i){
//     //base case
//     if(i>=str.length()) {
//         cout<<output<<endl; //print the subsequence at the time and return it
//         return ;//there must be return in base case either there is void or non void
//     }
//     //exclude
//     printSubsequence(str,output,i+1);//as it is and increase i the by 1
//     //include
//     output.push_back(str[i]);//output wali string me current character ko include krna padega
//      output=output + str[i]//same as above 
//     printSubsequence(str,output,i+1);
// }
// int main(){
//     string str="aman";
//     string output="";
//     int i=0;
//     printSubsequence(str,output,i);
// return 0;}





