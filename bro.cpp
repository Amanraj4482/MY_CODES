// #include<bits/stdc++.h>
// using namespace std;

// int main (){
// 	int i =5;
// 	int* p=&i;
// 	int** p2=&p;
// 	cout<<"Everything runs smoothly\n";

// 	cout<<"Printing of P "<<p <<endl;
// 	cout<<"Printing of p "<<&p << endl;//address of p
// 	cout<<"Printing of p "<<*p2 << endl;//address of p
// //p=*p2
// //i=*p=**p prints the same value 5
// cout<<i<<endl;
// cout<<**p2<<endl;
// cout<<*p<<endl;
// cout<<"*******\n";
// cout<<&i<<endl;
// cout<<p<<endl;
// cout<<*p2<<endl;
// cout<<"***"<<endl;
// cout<<&p<<endl;//adddress of p
// cout<<p2<<endl;//address stored of p
// //*p represents value
// //p represents address stored

// }

// code to print square root of the number
// #include <bits/stdc++.h>
// using namespace std;
// int findSqrt(int n)
// {
// 	int s = 0, e = n -1, mid = s + (e - s) / 2, target = n, ans = -1;
// 	while (s <= e)
// 	{
// 		if (mid * mid == target)
// 		{
// 			return mid;
// 		}
// 		if (mid * mid > target)
// 		{
// 			e = mid - 1;
// 		}
// 		else
// 		{
// 			ans = mid;
// 			s=mid+1;
// 		}
// 		mid = s + (e - s) / 2;
// 	}
// 	return ans;
// }

// int main()
// {
// 	int n;
// 	cin >> n;
// 	int ans=findSqrt(n);
// 	cout << ans << endl;

// 	int precision;
// 	cin>>precision;
// 	double update=0.1;
// 	double finalans=ans;
// 	for(double i=0; i<precision; i++){
// 		for (double j=0; j*j<n; j=j+update){
// 			finalans=j;
// 		}
// 		update=update /10;
// 	}
// 	cout<<finalans<<endl;

// 	return 0;
// }

// WEEK 4 CONNECT
// binary search
//  #include<bits/stdc++.h>
//  using namespace std;
//  int binary(int arr[] ,int size, int target){
//  	int s=0, e=size-1 , mid=s+(e-s)/2;
//  	int ans=-1;
//  	while(s<=e){
//  		if(arr[mid]==target){
//  			ans=mid;
//  			return ans;
//  		}
//  		else if(arr[mid]>target){
//  			e=mid-1;

// 		}
// 		else{
// 			s=mid+1;
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return ans;
// }

// int main(){
// 	int arr[]={1,2,4,5,6,7,8};
// 	int size=7;
// 	int target= 4;
// 	cout<<binary(arr, size,target)<<endl;
// 	return 0;
// }

// check lower bound and upper bound

// #include <bits/stdc++.h>
// using namespace std;
// int lowerBounded(int arr[], int size, int target)
// {
// 	int s = 0, e = size - 1, mid = s + (e - s) / 2, ans = -1;
// 	while (s <= e)
// 	{
// 		if (target<=arr[mid])
// 		{
// 			// storing the ans
// 			ans = mid;
// 			// left in search
// 			e=mid-1;
// 		}
// 		else if (target<arr[mid]){
// 			// left in search
// 			e = mid - 1;
// 		}
// 		else if(target>arr[mid])
// 		{//search in right
// 		 ans=arr[mid];
// 			s = mid + 1;
// 		}
// 		mid = s + (e - s) / 2;
// 	}
// 	return ans;
// }
// int upperBounded(int arr[], int size, int target)
// {
// 	int s = 0, e = size - 1, mid = s + (e - s) / 2, ans = -1;
// 	while (s <= e)
// 	{
// 		if (target==arr[mid])
// 		{
// 			// storing the ans
// 			ans = mid;
// 			// right in search
// 			s=mid+1;
// 		}
// 		else if (target<arr[mid])
// 		{
// 			// left in search
// 			e = mid - 1;
// 		}
// 		else if(target>arr[mid])
// 		{
// 			s = mid + 1;
// 		}
// 		mid = s + (e - s) / 2;
// 	}
// 	return ans;
// }
// int main()
// {
// 	int arr[] = {1, 2, 3, 3, 3, 4, 5, 7};
// 	int size = 8;
// 	int target = 3;

// 	int ch=lowerBounded(arr, size, target);
// 	cout << ch << endl;
// 	int chup=upperBounded(arr, size, target);
// 	cout << chup << endl;
// 	int total=(chup-ch)+1;
// 	cout << total << endl;
// 	return 0;
// }

// peak element

// #include <bits/stdc++.h>
// using namespace std;
// int peak(vector<int> v)
// {
// 	int s = 0, e = v.size() - 1, mid = s + (e - s) / 2, ans = -1;
// 	while (s < e)
// 	{
// 		if (v[mid] <= v[mid + 1])
// 		{//right search
// 			ans = mid;
// 			s = mid + 1;
// 		}
// 		else
// 		{//either on peak element or line b
// 			e = mid;
// 		}
// 		mid=s+(e-s)/2;
// 			}
// 			return s;
// }
// int main()
// {
// vector<int>v{4,5,6,7,1,2,3};
// int index=peak(v);
// 	cout<<index<<endl;
// 	return 0;
// }
// int comp(vector<int> arr,int target){

// selection sort
//  #include<bits/stdc++.h>
//  using namespace std;
//  int sorting(vector<int>arr){
//      for(int i=0; i<arr.size()-1;i++){
//          int index=i;
//          for(int j=i+1;j<arr.size();j++){
//              if(arr[j]<arr[index]){
//                  index=j;
//              }
//          }
//          swap(arr[i],arr[index]);
//      }
//  //printing
//  for(int i=0; i<arr.size();i++){
//      cout<<arr[i]<<endl;
//  }
//  return 0;
//  }

// int main(){
//     vector<int>arr{5,3,7,8,2,1,6};
//     sorting(arr);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
//     string remove(string s){
//         int i=0;
//         string ans="";
//         while(i<s.length()){
//             if(ans.length()>0 && ans[ans.length()-1]==s[i]){//ans ka last char equal hai?  s k first char s
//             //agr equal hai to
//             ans.pop_back();
//             }
//             else {
//                 ans.push_back(s[i]);
//             }
//             i++;
//         }
//         return ans;
//     }
// int main(){
//     string s="abbaca";
//     cout<<remove(s)<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
//     string removeO(string s, string part){
//         int pos=s.find(part);
//         while(pos!=string::npos){
//             s.erase(pos,part.length());
//             pos=s.find(part);
//         }
//     return s;
//     }
// int main(){
//     string s ="axxxxyyyyb";
//     string part="xy";
//     cout<<removeO(s , part)<<endl;
//     return 0;
// }

// valid palindrome or not then make it by 1
// #include<bits/stdc++.h>
// using namespace std;
// bool checkPalindrome(string s , int f , int e){
//     while(f<=e){
//         if(s[f]!=s[e])
//             return false;
//         f++,e--;
//     }
//     return true;
// }
//     bool validPalindrome(string s){
//             int i=0 , j=s.length()-1;
//             while(i<=j){
//                 if(s[i]!=s[j]){
//                     return checkPalindrome(s,i+1,j)||checkPalindrome(s,i,j-1);
//                 }
//                 else{
//                     i++ , j--;
//                 }
//             }
//             return true;
//     }
// int main(){
//     string s="abbaa";
//    cout<< validPalindrome(s)<<endl;

//     return 0;
// }

// *******************************************************************
// #include <vector>
// #include <iostream>
// using namespace std;

// //Print function
// void print_vector(vector<int> &vect)
//    {   cout<<"Even elements are: ";
//        for (auto i = vect.begin(); i != vect.end(); ++i)
//         {cout<< *i << " ";}
//    }

// //Return by value
// vector<int> myFunction(vector<int> &results){
//     vector <int> even_vector;
//     for (const auto &i : results) {
//         if(i%2==0){
//         even_vector.push_back(i);
//         }
//         }
//    return even_vector;
// }

// int main(){
//    vector<int> vec={20, 51, 11, 88, 44, 77, 14, 99};
//    vector<int> even_vect=myFunction(vec);
//    print_vector(even_vect);
// }

// **************************************************************

// find k closest element
// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<int>&a){
//     for(auto i = a.begin(); i != a.end(); ++i){
//         cout<<*i<<" ";

//     }
// }
// int lowerBound(vector<int> &arr,int x){
//         int s=0 ,  e=arr.size()-1,  ans =e ;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(x<=arr[mid]){
//             ans=mid;
//             e=mid-1;}
//         else if(x>arr[mid]) s=mid+1;
//         else e=mid-1;}
//         return ans;
//     }

//     vector<int>binarySearch(vector<int> &arr, int k , int x){
//         int h=lowerBound(arr,x);
//         int l =h-1;
//         while(k--){
//             if(l<0) h++;
//             else if(h>=arr.size()) l--;
//             else if(x-arr[l]>arr[h]-x) h++;
//             else l--;
//         }
//             return vector<int>(arr.begin()+l+1,arr.begin()+h);
//     }
// int main(){
//     vector<int>arr={12,16,22,30,35,39,42,45,48,50,53,55,56};
//     int k = 4 , x=35;
//     vector<int> point=binarySearch(arr,k,x);
//     print(point);
//     return 0;
// }

// exponential search
//  #include<bits/stdc++.h>
//  using namespace std;
//  int bs(string a,int s,int e , int k){
//      while(s<=e){
//          int mid=(s+e)/2;
//          if(k==a[mid]) {return mid;}
//          else if(k>a[mid]){
//              s=mid+1;
//          }
//          else {
//              e=mid-1;
//          }
//      }
//      return -1;
//  }
//  int mini(int s ,int e){
//      return min(s,e);
//  }
//  vector<int>expo(vector<int>&a , int k){
//      if(a[0]==k) return 0;
//      int i=1;
//      while(a[i]>=k&& i<a.size()){
//          i*=2; //long jump
//      }
//      return bs(a,i/2,mini(i,a.size()-1),k);
//      }

// int main(){
//     vector<int>a{3,4,5,6,11,13,14,15,56,70};
//    int k=56;
//     int ans = expo(a,k);
//     cout<<ans<<endl;
//     return 0;
// }

// count palindromic substring
//  same block if am handling the odd string
//  and if different block then i am handling the even length string
// for odd = 4, and for even =2
// mo match then next case handling
//  #include<bits/stdc++.h>
//  using namespace std;
//  int expandAroundIndex(string s,int i , int j ){
//      int count =0;
//      while(i>=0&&j<s.length()&&s[i]==s[j]){
//          count++;
//          i--;
//          j++;
//      }
//      cout<<"after expand"<<count<<endl;
//      return count;
//      }
//     int countSubstring(string s){
//          int count=0;
//          for(int i=0; i<s.length();i++){
//              //for odd
//              int oddAns=expandAroundIndex(s,i,i);
//              count=count+oddAns;
//              //for even
//              int evenAns=expandAroundIndex(s,i,i+1);
//              count=count +evenAns;
//          }
//          return count;
//          }
//  int main(){
//      string s ="abc";
//      cout<<countSubstring(s)<<endl;
//      return 0;
//  }

// #include<bits/stdc++.h>
// using namespace std;
//  string my_function(string s) {
//     return "Processed " + s;
// }
//     int main() {
//     vector<function<string(string)>> vec1 = {my_function};
//     vector<vector<function<string(string)>>> vec2;

//     vec2.push_back(vec1);

//     // Accessing elements of 2D vector
//     string result = vec2[0][0]("input string");
//     cout << result << endl;

//     return 0;
// }

// learning the pointer concept
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     //int x=5 // it assigns the addresss of x to ptr -> int *ptr =&x;
//     int i=1,*q;
//     int *p =&i;//value of i stord in *p
//     q=p;//address of p gets coppied in q
//     *q=5;//updated q=5
//     cout<<q<< " "<<*q<<"  "<<p<< "  "<<*p<<endl;
//     cout<<i<<endl;//change in the reference
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

//     void foo1(int *arr) { cout << sizeof(arr) <<endl; }
// void foo2(int arr[]) { cout << sizeof(arr) <<endl; }
// void foo3(int arr[10]) { cout << sizeof(arr) <<endl; }
// void foo4(int (&arr)[10]) { cout << sizeof(arr) << endl; }

// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     //foo1(arr);
//    //foo2(arr);
//     //foo3(arr);
//     foo4(arr);
//     return 0;
// }

// recursion
//  practise
// printing array by recursion
// #include <bits/stdc++.h>
// using namespace std;
// void printArray(int arr[], int i,int a)
// {
//     // base condition
//     if (i >= a)
//         return;
//     cout << arr[i] << " ";
//     printArray(arr, i + 1,a);
// }
// int main()
// {
//     int arr[5] = {23, 3, 5, 2, 6};
//     int a=sizeof(arr)/sizeof(arr[0]);

//     printArray(arr,0,a);

//     return 0;

// }

// // to find the maximum number of the array
// #include<bits/stdc++.h>
// using namespace std;
// void findmax(int arr[], int n , int& mini,int i){//so maxi is passing by value so that why it is local varible
//     //base case
//     if(i>=n) return ;
//     if(arr[i]<mini){
//         mini=arr[i];
//     }
//     findmax(arr,n,mini,i+1);
// }
// int main(){
//     int arr[5]={23,24,2,5,1};
//     int i=0;
//     int n=5;
//     int mini=INT_MAX;
//     findmax(arr,n,mini,i);
//     cout<<mini<<endl;
//     return 0;
// }

// practising the binary Search by recursion
//  #include<bits/stdc++.h>
//  using namespace std;
//  int find (vector<int> &arr, int s, int e, int target ){
//  //base case
//      int mid=(s+e)/2;
//  if(s>e) return -1;
//  if(arr[mid]==target) return mid;

// return(arr[mid]>target)? find(arr,s,mid-1,target):find(arr,mid+1,e,target);
// }
// int main(){
//     vector<int> arr{1,2,6,3,7,9};
//     int n=arr.size();
//     int s=0;
//     int e=n-1;
//     int target=99;
//   int a=  find(arr,s,e,target);
//     cout<<"ans->"<<a<<endl;
//     return 0;
// }

// print the subsequence of the string and count it by recursion
//  #include<bits/stdc++.h>
//  using namespace std;
//  void printSub(string a, string op, int i){
//      //base case
//      if(i>=a.length()){
//          cout<<op<<endl;
//          return ;
//      }
//      //exclude case->as it is
//      printSub(a,op,i+1);
//      //include case -> push back current element in op string
//      op.push_back(a[i]);
//      printSub(a,op,i+1);

// }
// int main(){
//     string a="aman";
//     string op="";
//     int i=0;
//     printSub(a,op,i);
//     return 0;
// }
// minimum no of element required to reach target sum
// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<int> &arr, int target)
// { // reference call
//     if (target == 0)
//         return 0;

//     if (target < 0)
//     { // in case of negative no my mini should not be updated
//         return INT_MAX;
//     }
//     // one case solving by me
//     // and futhur more recursion will get it
//     // for every element call ja rhi for each element
//     // traversing all element of array by for loop
//     int mini = INT_MAX;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         /*it will return integer*/ int store = solve(arr, target - arr[i]); // function calling;-> passing targert - current element
//         if(store!=INT_MAX)//it is because this is the ans of getting the target-arr[i] but we need only the ans of target
//         mini = min(mini, store+1);   //let say there comes int_max in the ans we add the store +1                                         // updating the mini
//         //so there should no ans that should go  out of range of interger

//     }
//     return mini;
// }

// int main()
// {
//     vector<int> arr{1, 5, 3};
//     int target = 6;
//     cout << solve(arr, target);
//     return 0;
// }

// minimum ways to reach the target
// #include<bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&arr,int target){
//     if(target==0) return 0;
//     if(target<0) return INT_MAX;
//     int mini=INT_MAX;
//     for(int i=0; i<arr.size();i++){
//         int ans=solve(arr,target-arr[i]);
//         if(ans!=INT_MAX)
//         mini=min(mini,ans+1);
//     }
//     return mini;
// }
// int main(){
//     vector<int>arr{1,2,3};
//     int target=7;
//     cout<<solve(arr,target);
//     return 0;
// }

// writing the algorithim for the merge sort
//  #include<bits/stdc++.h>
//  using namespace std;
//  void merge(int *arr,int s ,int e){
//      //this function will merge both the two array into one
//      int mid=(s+e)/2;
//      int n1=mid-s+1;
//      int n2=e-mid;
//      //now create the dynamic array for left and right array
//      int *left=new int[/*size*/n1];
//      int *right=new int[/*size*/n2];
//      //now copy the values for the left part
//      int k=s;
//      int i=0;
//      while(i<n1){
//          //put my all values of all values of left array into new array
//           left[i++]=arr[k++];
//          //arr[k++]=left[i++];
//      }
//      k=mid+1;
//      i=0;
//      while(i<n2){
//           right[i++]=arr[k++];
//          //arr[k++]=right[i++];
//      }
//      //now merge to sort wla logic
//      int leftn=0;
//      int rightn=0;
//      int arrn=s;
//      //now compare
//      while(leftn<n1&&rightn<n2){/*if my number left array number is less than right array */
//          if(left[leftn]<right[rightn]){
//              arr[arrn++]=left[leftn++];
//          }
//          else{
//              arr[arrn++]=right[rightn++];
//          }
//      }
//      //coping logic
//      while(leftn<n1) {
//          arr[arrn++]=left[leftn++];
//      }
//      while(rightn<n2) {
//          arr[arrn++]=right[rightn++];
//      }
//  }
//  void mergeSort(int *arr,int s, int e){
//      //base case
//      if(s>=e){ return;}
//      //breaking the array into two halfs
//      int mid=(s+e)/2;
//      //left half
//      mergeSort(arr,s,mid);
//      //high half
//      mergeSort(arr,mid+1,e);
//      //at last merge both the array
//      merge(arr,s,e);
//  }
//  int main(){
//      int arr[]={1,4,6,3,4,8};
//      int n=6;
//      int s =0;
//      int e=n-1;
//      mergeSort(arr,s ,e);
//      for(int i=0; i<n;i++){
//          cout<<arr[i]<<" ";
//      }
//      cout<<endl;
//      return 0;
//  }

// quick sort

// #include <bits/stdc++.h>
// using namespace std;
// int partition(int *arr, int s, int e)
// {
//     // pivot element
//     int pivotn = 0;
//     int pivote = arr[s];
//     // step:2-> finding the right position for the pivot element and placing it there
//     int count = 0;
//     for (int i = s+1; i <= e; i++)
//     {
//         if (arr[i] <= pivote)
//         {
//             count++;
//         }
//     }
//     // now i have got the right position of pivot element index
//     int rightIndex = s + count;
//     // now i swap the first element and the right postion of the element which i found
//     swap(arr[pivotn], arr[rightIndex]); // here i swapped the both but my still pivot index is s which is the starting so i need to stift it
//     pivotn = rightIndex;                // i changed by pivot index to right index which i found

//     // step3:now i need to do the elements in sequence wise
//     // left m chote and right m bade
//     int i = s;
//     int j = e;

//     while (i < pivotn && j > pivotn)
//     { // now my i and j index should both be bigger than my current pivot index
//         while (arr[i] <= pivote)
//         { // if normal case if my current element is smaller or equal to the pivoted elemnet then i++
//             i++;
//         }
//         while (arr[j] > pivote)
//         { // and right side element should be bigger than pivot element
//             j--;
//         }
//         if (i < pivotn && j > pivotn)
//             swap(arr[i], arr[j]);
//     }
//     return pivotn;
// }
// void quickSort(int *arr, int s, int e)
// {
//     // base case
//     if (s >= e)
//         return;
//     // partiotion logic
//     int p = partition(arr, s, e);
//     // pivot element -> left
//     quickSort(arr, s, p - 1);
//     // pivot element-> right
//     quickSort(arr, p + 1, e);
// }
// int main()
// {
//     int arr[] = {23,4,2,6,1,1,1,1,1,54,3,56,8,5,3,2,7,4,5,7,3,5,7};
//     // int n =end(arr)-begin(arr);
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int s = 0;
//     int e = n - 1;
//     quickSort(arr, s, e);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// // find the second largest element in an array
// #include <bits/stdc++.h>
// using namespace std;
// int secondLargest(vector<int> arr, int n)
// {
//     // find the largeset element in an array
//     int largest = 0;
//     int secondLarge = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[largest] < arr[i])
//             largest = i;
//     }
//     // cout<<arr[largest]<<endl;
//     // now again find the largest element excluding the largest element calculated above
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[largest])
//         {cout<<arr[secondLarge]<<endl;
//             // first change the value of the second largest as soon as the next element is found
//             if (secondLarge == -1){
//                 secondLarge = i;
//                 }
//             else if (arr[i] > arr[secondLarge])
//             {
//                 secondLarge=i;
//             }
//         }
//     }
//     return secondLarge;//this will return the index
// }
// int main()
// {
//     vector<int> arr{12, 35, 1, 10, 34, 1};
//     int n = arr.size();
//    int e=secondLargest(arr,n);
//    if(e==-1){
//     cout<<"no second largest element";
//    }
//    else{
//     cout<<"here it is->"<<arr[e];
//    }

//     return 0;
// }

// remove diuplicates from the array

// #include<bits/stdc++.h>

// using namespace std;
// int removeDuplicates(int arr[], int n)
// {
//   int i = 0;
//   for (int j = 1; j < n; j++) {
//     if (arr[i] != arr[j]) {
//       i++;
//       arr[i] = arr[j];
//     }
//   }
//   return i + 1;
// }
// int main() {
//   int arr[] = {1,1,2,2,2,3,3};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int k = removeDuplicates(arr, n);
//   cout << "The array after removing duplicate elements is " << endl;
//   for (int i = 0; i < k; i++) {
//     cout << arr[i] << " ";
//   }
// }

// check the roated and sorted array
//  #include<bits/stdc++.h>
//  using namespace std;
//  bool checker(int *arr,int n){
//      int count=0;
//      for(int i=0;i<=n;i++){
//          if(arr[i]<arr[i-1]){
//              count++;
//          }
//      }
//      if(arr[0]>arr[n-1]){
//          count++;
//      }
//      return count<=1;
//  }
//  int main(){
//      int arr[]={1,1,1};
//      int n=5;
//      int k=checker(arr,n);
//      cout<<k<<endl;
//      return 0;
//  }

// rotate a array by k rotation
// shifting of k element starting i with k
// the kth element should be coming at the i=0
// now put back temp to the last back
// i will start puting my temp with i=n-k
// for putting elements into temp

// #include <bits/stdc++.h>
// using namespace std;

// void rotate(int arr[], int k, int n)
// {
//     // create a temp array with size k
//     int temp[k];

//     // copy first k elements to temp array
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[i];
//     }

//     // shift remaining elements k positions to the left
//     for (int i = k; i < n; i++)
//     {
//         arr[i - k] = arr[i];
//     }

//     // copy elements from temp array back to arr
//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = temp[i - (n - k)];
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int k = 4;
//     int n = 7;

//     rotate(arr, k, n);

//     // print the rotated array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// //MOVE ALL ZEROES TO THE END
// #include<bits/stdc++.h>
// using namespace std;
// void move(int arr[],int n){
//     int i=0;
//     for(int j=0;j<n;j++){
//         if(arr[j]!=0){//if my ittrative curent element is not equal to with itterative element then swap it
//             swap(arr[i],arr[j]);
//             i++;
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,4,0,4,3,6,0,0,0};
//     int n=(end(arr)-begin(arr));
//     move(arr,n);
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// linear search

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007
// void solve()
// {
//     linear search it the
// }
// int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     cout<<"fuck u ";

//     return 0;
// }

// alt + q -> to clear terminal
// alt + j -> to hide the terminal
// alt + / -> to run the code

// insert digit
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007
// string solve(string n , int x){
//     int len=n.size();//varible to store lenght
//     int pos=len+1;//vaible to denote the postion where x must be added
//     for(int i=len-1;i>=1;i--){
//         if((n[i]-'0')>x){
//             pos=i;
//         }
//             cout<<pos<<endl;
//     }
//     n.insert(n.begin()+pos,x+'0');//insert x at the postion
//     return n;
// }
// int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

//     string n;
//     getline(cin,n);
//     int x;
//     cin>>n;

//     cout<<solve<<(n,x)<< " ";
//     return 0;
// }

// C++ implementation of above approach
// #include <bits/stdc++.h>
// using namespace std;

// // Function to insert X in N and
// // return the minimum value string
// string MinValue(int len,int X,string N)
// {

// 	// Variable to store length
// 	// of string N
// 	// int len = N.size();

// 	// Variable to denote the position
// 	// where X must be added
// 	int position = len + 1;

// 	// If the given string N represent
// 	// a negative value
// 	if (N[0] == '-') {
// 		// X must be place at the last
// 		// index where is greater than N[i]
// 		for (int i = len - 1; i >= 1; i--) {
// 			if ((N[i] - '0') < X) {
// 				position = i;
// 			}
// 		}
// 	}
// 	else {
// 		// For positive numbers, X must be
// 		// placed at the last index where
// 		// it is smaller than N[i]
// 		for (int i = len -1; i >= 0; i--) {
// 			if ((N[i] - '0') > X) {
// 				position = i;
// 			}
// 		}
// 	}
// // Insert X at that position
// 	N.insert(N.begin() + position, X + '0');

// 	// Return the string
// 	return N;
// }

// // Driver Code
// int main()
// {
// 		ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// 		#ifndef ONLINE_JUDGE
// 		freopen("input.txt", "r", stdin);
// 		freopen("output.txt", "w", stdout);
// 		#endif
// 	// Given Input
// 	string N ;

// 	getline(cin,N);
// 	int X,len;
// 	cin>>len>>X;
// 	// Function Call
// 	cout << MinValue(len,X,N) << "\n";
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007
// void solve()
// {
// }
// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// #ifndef ONLINE_JUDGE
// 	freopen("inputf.txt", "r", stdin);
// 	freopen("outputf.txt", "w", stdout);
// #endif

// 	int t = rand() % 2 + 1;
// 	cout << t << endl;
// 	while (t--)
// 	{
// 		int n = rand() % 5 + 1;
// 		cout << n << endl;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cout << (rand() % 4 + 1) << " ";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;


const ll mod  = 1e9 + 7;
const ll maxn = 1e5 + 1;
const ll inf  = 5e18 ;
const ll minf = -inf ;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mid(s,e) (s+(e-s)/2)
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
#define check cerr<<"Print"<<endl;
#define endl "\n"
#define en cout<<endl;
#define dl cerr<<endl;
#define sz(x) ((int)(x).size())
#define aman(x)  (sizeof(x) / sizeof((x)[0]))
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

vector<int> commanElement(vector<int>a,vector<int>b,vector<int>c ,int n1, int n2, int n3) {
    vector<int>ans;
    int i, j, k;
    i = j = k = 0;
    set<int>st;
    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j]&&b[j] == c[k]) {
            ans.push_back(a[i]);
            st.insert(a[i]);
            i++, j++, k++;
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else if (b[i] < c[j]) {
            j++;
        }
        else {
            k++;
        }
    }
    // for (auto i : st) {
    //     ans.push_back(i);
    // debug(ans)
    // }
    debug(ans)
    return ans;

}


int main()
{
    fastio()
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    vector<int>a={1, 5, 10, 20, 40, 80};
    vector<int>b={6, 7, 20, 80, 100};
    vector<int>c={3, 4, 15, 20, 30, 70, 80, 120};
    int n1=sz(a);
    int n2=sz(b);
    int n3=sz(c);
    debug(n1)
    debug(n2)
    debug(n3)
   debug(a)
   debug(b)
   debug(c)

    cout<<commanElement(a,b,c,n1,n2,n3);



return 0;
}