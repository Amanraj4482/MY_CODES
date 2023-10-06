// Binary search in a nearly sorted array

// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(vector<int> arr, int target)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == target)
//             return mid;
//         if (mid + 1 <= e && arr[mid + 1] == target)
//             return mid + 1;
//         if (mid - 1 >= s && arr[mid - 1] == target)
//             return mid - 1;
//         if (target > arr[mid])
//         {
//             // right search
//             s = mid + 2;
//         }
//         else
//         {
//             // right search
//             e = mid - 2;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr{10, 30, 40, 20, 50, 80, 70};
//     int target = 80;
//     int ans = binarySearch(arr, target);
//     cout << "Index of " << target << " is " << ans << endl;
//     return 0;
// }

//********************divide two number using binary search
// quotient *divisor + remainder = dividend
// mid*divisor > dividend then search in left
// mid*divisor < dividend , store the answer then search in right
// stop when s>e

// #include<bits/stdc++.h>
// using namespace std;
//     int solve(int dividend, int divisor) {
//         int s=0;
//         int ans=1;
//         int e= abs(dividend); //this number is absolute remove negaive
//         int mid= s+(e-s)/2;
//         while(s<=e){
//             if(abs(mid*divisor)==abs(dividend)){
//                 //perfect divisor
//                 ans=mid;
//                 break;
//             }
//             //non perfect solution
//             if(abs(mid*divisor) <abs(dividend)){
//                  ans= mid;
//                 //search in right
//                 s=mid+1;
//             }
//             if(abs(mid*divisor) >abs(dividend)){
//                 //search in left
//                 e=mid-1;
//             }
//             //mid update
//             mid=s+(e-s)/2;
//         }
//         if((divisor <0 && dividend<0)|| (divisor >0&& dividend>0)) //if both numbers is positive or negative
//         return ans;
//         else
//         { return -ans;}
//         return ans;
//     }
// int main(){
//     double dividend =57;
//     double divisor =34;
//     double ans= solve(dividend, divisor);
//     //cout<<ans<<endl;
//     double finalAns=ans;
//     double pre=3;
//     double update = 0.1;

//     for (double i=0; i<pre; i++){
//         for(double j=0; j*abs(divisor)<=abs(dividend); j=j+update){
//              finalAns=j;
//         }
//         update=update/10;
//     }
//      if((divisor <0 && dividend<0)|| (divisor >0&& dividend>0)) //if both numbers is positive or negative
//         cout<<finalAns<<endl;
//         else
//         cout<< -finalAns<<endl;
//     return 0;
// }


// FIND THE ODD OCCURRING ELEMENT IN AN ARRAY
// all repeating occurrence of element appears in pairs ans pairs are not adjacent
// there cannot be more than two consecutive occurrence of any element
// find the element the appears odd of times
// all elements occur even number of times except one

// answer always be at even index
// if(mid%2)--> even{
// mid(even)==mid+1(odd) --> left m khade h --> ans right m hoga -> s=mid +2 (to skip searched element not to repeat);
// mid(even)-> could be ans != mid +1 (odd)--> left search -> e=mid(because mid may be the answer)
// }

// else{
// mid-1(even)==mid(old)--> left side m khada hu --> answer would be in the right ->s=mid+1;
// mid-1(even)!=mid(odd)couldn't be the answer(because of index is odd)-->search in the left-> e=,mid-1;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int oddOcc(vector<int> arr)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (s == e)
//         {
//             // single element
//             return s;
//         }
//         // 2nd case -> mid -even or odd
//         if (mid % 2 == 0)
//         {
//             if (arr[mid] == arr[mid + 1])
//             {
//                 s = mid + 2;
//             }
//             else
//             {
//                 e = mid;
//             }
//         }
//         else
//         {
//             if (arr[mid] == arr[mid - 1])
//             { 
//                   s = mid + 1;
//             }
//             else{
//                 e=mid; 
//             }
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1; 
// }

// int main()
// {
//     vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
//     int ans = oddOcc(arr);
//     cout << "index is " << ans << endl;
//     cout << "value is " << arr[ans] << endl;
//     return 0;
// }
// index is 8
// value is 3



// find pair with difference k in the array
// find k with the closest element value given in an array
// exponential search
// unbounded binary search

//**********  ADVANCE BINARY SEARCH  ***********
// book allocation
// painter partition
// eko spouse and paratha spoj
// aggressive cows

// ************3rd type question**************
// index observation question