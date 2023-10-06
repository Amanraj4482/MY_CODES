// searching algorithm -> LINEAR SEARCH -> T.C -O(N)
// binary search --> Monotonic order or sorted elements
// return index
// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(int arr[], int size, int target)
// {

// 	int start = 0;
// 	int end = size - 1;

// 	while (start <= end)
// 	{
// 		int mid = start + (end - start) / 2;
// 		int element = arr[mid];
// 		if (element == target)//element found return index as mid
// 		{
// 			return mid;
// 		}
// 		else if (target < element)
// 		{
// 			// searching on left side
// 			end = mid - 1;
// 		}
// 		else
// 		{
// 			// searching on right side
// 			start = mid + 1;
// 		}
// 		// mid = (start + end) / 2;//mid updatation and return it
// 	}
// 	// if element no found
// 	return -1;
// }
// int main()
// {
// 	int arr[] = {2, 3, 4, 5, 6, 8, 9};
// 	int size = 7;
// 	int target = 6;
// 	int indexOfTarget = binarySearch(arr, size, target);

// 	if (indexOfTarget == -1)
// 	{
// 		cout << "target not found" << endl;
// 	}
// 	else
// 	{
// 		cout << "Target found at " << indexOfTarget << " index" << endl;
// 	}

// 	return 0;
// }

// time complexity = O(log N)

// ******************************stl of binary search
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     vector <int>v{1,2,3,4,5,6};
//     if(binary_search(v.begin(),v.end(),6)){
//         cout<<"Found"<<endl;
//     }
//     else cout<<"not found "<<endl;
//     return 0;
// }

// ************************************FIND THE FIRST OCCURANCE OF AN ELEMENT
// #include <bits/stdc++.h>
// using namespace std;
// int findFirstOcc(vector<int> arr, int target)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     int mid = start + (end - start) / 2;
//     int ans = -1;
//     while (start <= end)
//     {
//         if (target <= arr[mid])
//         {
//             // search in left
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (target > arr[mid])
//         {

//             // search in right
//             int ans = arr[mid];
//             start = mid + 1;
//         }
//         else if (target < arr[mid])
//         {
//             // left search
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr{1, 2, 3, 3, 3, 3, 4, 4, 5, 4, 4, 7, 8, 9};
//     int target = 4;

//     int indexOfOcc = findFirstOcc(arr, target);
//     cout << "ans " << indexOfOcc << endl;
//     return 0;
// }
// ans = 6

//************STL TO FIND FIRST OCCURANCE
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> v{1, 2, 3, 3, 3, 3, 4, 4, 5, 4, 4, 7, 8, 9};
//     int target=3;
//     auto ans = lower_bound (v.begin(),v.end(),target);
//     cout << "ans-> " <<ans-v.begin() << endl;
//     return 0;
// }
// ans-> 2

//**************************************FIND THE LAST OCCURANCE OF THE ELEMENT
// #include<bits/stdc++.h>
// using namespace std;
//     int lastOcc(vector<int>v ,int target){
//         int s=0, e=v.size()-1, ans =-1 , mid =s+(e-s)/2;
//         while(s<=e){
//             if(target==v[mid]){
//                 ans=mid;
//                 s=mid+1;
//             }
//             else if(target<v[mid]){
//                 //search in left
//                 e=mid-1;
//             }
//             else if (target>v[mid]){
//                 //search in right
//                 s=mid+1;
//             }
//             mid=s+(e-s)/2;

//         }
//         return ans;

//     }
// int main(){
//     vector <int>v{1,2,4,5,6,7,7,7,7,8,7,8};
//     int target=7;
//     int indexLast=lastOcc(v,target);
//     cout<<"ans-> "<<indexLast<<endl;

//     return 0;
//}
// ans-> 10


//***************STL TO FIND UPPER BOUND
//     #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> v{1, 2, 3, 3, 3, 3, 4, 4, 5, 4, 4, 7, 8, 9};
//     int target=3;
//     auto ans = upper_bound (v.begin(),v.end(),target);
//     cout << "ans-> " <<ans-v.begin() << endl;
//     return 0;
// }
// ans-> 6


//PEAK IN A MOUNTAIN ARRAY
// #include<bits/stdc++.h>
// using namespace std;
//    int pivotEntry( vector<int>&arr){
//     int s=0 , e=arr.size()-1 , mid =s +(e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
// mid=s+(e-s)/2;
//     }
//     return s;
//    }


// int main(){
//     vector<int>arr{1,3,4,5,6,4,3,2,1};
//     int findIndex = pivotEntry(arr);
//     cout<<findIndex<<endl;
//     return 0;
// }
// ans is 6 because it is peak of the mountain