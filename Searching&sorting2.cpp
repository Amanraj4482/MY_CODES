// C++ program to demonstrate sort()

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int arr[] = { 0, 1, 5, 8, 9, 6, 7, 3, 4, 2 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// Sort the elements which lies in the range of 2 to
// 	// (n-1)
// 	sort(arr + 2, arr + n);

// 	cout << "Array after sorting : \n";
// 	for (int i = 0; i < n; ++i)
// 		cout << arr[i] << " ";

// 	return 0;
// }

// FIND PIVOT ELEMENT
// #include <bits/stdc++.h>
// using namespace std;
// int findPivot(vector<int> v)
// {
//     int s = 0, e = v.size() - 1, mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (mid + 1 <= v.size() && v[mid] > v[mid + 1])
//         {
//             return mid;
//         }
//         if (mid - 1 >= 0 && v[mid - 1] > v[mid])
//         {
//             return mid - 1;
//         }
//         if (v[s] >= v[mid])
//         {
//             // search in left
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> v{3, 4, 6, 7, 8, 1, 2};
//     int ans = findPivot(v);
//     cout << "Pivot element is " << v[ans] << endl;

//     return 0;
// }

// SEARCH IN ROTATED SORTED ARRAY
// #include<bits/stdc++.h>
// using namespace std;
//     int pivot(vector<int>arr){
//         int s=0, e=arr.size()-1, mid=s+(e-s)/2;
//         while(s<=e){
//             if(s==e) return s;
//             if(mid-1>0&&arr[mid-1]>arr[mid]) return mid-1;
//             if(mid<e&&arr[mid]>arr[mid+1]) return mid-1;

//             if(arr[s]>arr[mid]){
//                 e=mid-1;
//             }
//             else{s=mid+1;}
//             mid=s+(e-s)/2;
//         }
//         return -1;
//     }
//     int binaryS(vector<int>arr,int s,int e, int target){
//         int  mid=s+(e-s)/2;
//         while(s<=e){
//             if(target==arr[mid]) return mid;
//             if(target<arr[mid]) {
//                 //left search
//                 e=mid-1;
//             }
//             else{
//                 s=mid+1;
//             }
//             mid=s+(e-s)/2;
//         }
//         return -1;}
//     int search(vector<int>&nums , int target){
//         int index=pivot(nums);
//         int ans=0;
//         if(target>=nums[0]&&target<=nums[index]){
//             ans=binaryS(nums,0,index,target);
//         }
//         else{
//             ans=binaryS(nums,index+1,nums.size()-1,target);
//         }
//         return ans;
//     }
// int main(){
//     vector<int>nums{4,5,6,7,0,1,2};
//     int target=3;
//     int down= search(nums,target);
//     cout<<down<<endl;
    
//     return 0;
// }

// SQUARE OF A NUMBER USING BINARY SEARCH
//  #include<bits/stdc++.h>
//  using namespace std;
//      int findSqurt(int n){
//          int s =0,e =n/2,mid=s+(e-s)/2;
//          int target =n;
//          int ans=-1;
//          while(s<=e){
//              if(mid*mid==target)
//              return mid;
//              if(mid*mid>target){
//                  //left search
//                  e=mid-1;
//              }
//              else {
//                  //ans store
//                  ans=mid;
//                  //right search
//                  s=mid+1;
//              }
//              mid=s+(e-s)/2;
//          }
//          return ans;
//      }

// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int ans=findSqurt(n);
//     cout<<"Ans is "<<ans<<endl;

//     int precision ;
//     cout<<"Enter the number of precision floating digits"<<endl;
//     cin>>precision;
//     double step=0.1;
//     double finalAns=ans;
//     for(double i =0; i<precision; i++){
//         for(double j=0; j*j<n; j=j+step){
//                finalAns=j;

//         }
//         step =step /10;}
//         cout<<"final ans "<<finalAns<<endl;
//     return 0;
// }
// Enter the number
// Ans is 3
// Enter the number of precision floating digits
// final ans 3.1622

//*********************BINARY SEARCH ON 2D ARRAY
// int start = 0 , int end = n*m-1;
// row index = mid/col  and column index =mid % col
// arr[row index ][col index ] < target --> search in right
// else { search in left}

// #include <bits/stdc++.h>
// using namespace std;
// //int searchBinary2d(vector < vector<int> arr(3, vector<int> m))
// int binarySearch(int arr[][4] ,int row, int col , int target)
// {
//     int start = 0, end = row * col - 1, mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//        int  rowIndex = mid / col; // mid /col
//         int colIndex = mid % row;

//         int element = arr[rowIndex][colIndex];
//         if (element == target)
//         {   cout<<"found at "<<rowIndex << " "<< colIndex<<endl;
//             return true;
//         }
//         if (element < target)
//         {
//             // search in right
//             start = mid + 1;
//         }
//         else
//         {
//             // element > target -> search in left
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2 ;
//     }
//     return false;
// }
// int main()
// {
// int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
// int row=5;
// int col =4;
// int target=19;
// bool ans=binarySearch(arr,row,col,target);
// if(ans){
//     cout<<"Found"<<endl;
// }
// else{
//     cout<<"Not found"<<endl;
// }

//     return 0;
// }

// search in a nearly sorted array in log time
// division of 2 no using binary search
// find odd occurring element using binary search

// #include<bits/stdc++.h>
// using namespace std;
// int call(){
//     int t=10;
// //     while(t--){
// //         cout<<t<<" ";
// //             }
// //             return 0;
// if (t==10)
// return t;}
// int main(){
//     call();
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int call()
// {
//     int t = 10;
//     while (t --)
//     {
//         if (t == 10)
//         {
//             return t;
//         }
//     }
//  //   return t ;
// }
// int main()
// {
//     call();
//     return 0;
// }