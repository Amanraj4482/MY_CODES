
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
// 		if (target==arr[mid])
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
// 		 //ans=arr[mid];
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
// 	int arr[] = {5,6,6,6,6,7,7,8,9};
// 	int size = 10;
// 	int target =7;

// 	int ch=lowerBounded(arr, size, target);
// 	cout << ch << endl;
// 	int chup=upperBounded(arr, size, target);
// 	cout << chup << endl;
// 	int total=(chup-abs(ch))+1;
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
// 		else//(v[mid]>[v[mid+1]) this represents line b and peak both
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

// pivot element
// input rotated and sorted array
// no duplicate element

// #include<bits/stdc++.h>
// using namespace std;
//    int point( vector<int>arr){
//     int s=0, e=arr.size()-1 , mid =s+(e-s)/2;
//     while(s<=e){
//         //for sorted array
//         cout<<"value of mid"<<mid<<endl;
//         if(s==e) return s;
//         cout<<"value of s--> "<<arr[s]<<" -->"<<arr[mid]<<endl;
//         //two extra cases
//         if(mid<=e&&arr[mid]>arr[mid+1]){
//             cout<<"gf"<<endl;
//         return mid;}
//         if(mid-1>=0&&arr[mid-1]>arr[mid]){
//             cout<<"fg"<<endl;
//             return mid-1;}

//         if(arr[s]>arr[mid]){
//             cout<<"what happens"<<endl;
//             cout<<"value of e__ "<<e<<endl;
//             //right search
//             e=mid-1;

//             cout<<"value of e "<<e<<endl;
//         }
//         else{
//             cout<<"what is value of s "<<mid<<endl;
//             s=mid+1;//right search
//             cout<<"value of s is not "<<s<<endl;
//         }
//         mid=s+(e-s)/2;
//     }
//     cout<<"return something"<<endl;
//     return -2;
//    }
// int main(){
//   //  vector<int>arr{9,10,11,4,5,6};
//     vector<int>arr{1,3,4,5,6,7};
//     int t=point(arr);
// cout<<t<<" "<<arr[t]<<endl;
//     return 0;
//}

// search in a sorted and roatated array
//  #include<bits/stdc++.h>
//  using namespace std;
//      int pivot(vector<int>arr){
//          int s=0, e=arr.size()-1, mid=s+(e-s)/2;
//          while(s<=e){
//              if(s==e) return s;
//              if(mid-1>0&&arr[mid-1]>arr[mid]) return mid-1;
//              if(mid<e&&arr[mid]>arr[mid+1]) return mid-1;

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
//     int target=0;
//     int down= search(nums,target);
//     cout<<down<<endl;

//     return 0;
// }

// code to print square root of the number

// #include<bits/stdc++.h>
// using namespace std;
//     int sqrt(int target){
//         int s=0,e=target/2,mid=s+(e-s)/2;
//         int ans=-1;
//     while(s<=e){
//         if(mid*mid==target) return mid;
//         if(mid*mid<target){
//             //left search
//             ans=mid;
//            s=mid+1;
//             }
//        else {
//         e=mid-1;
//     }
//     mid=s+(e-s)/2;
//            }
//            return ans;}
// int main(){
//     int target=26;
//     int pre=3;
//     int ans=sqrt(target);
//     double update=0.1,
// double finalAns=ans;
//     for(double i=0;i<pre;i++){
//         for(double j=0;j*j<=target;j=j+update){
//             finalAns=j;
//         }
//         update=update/10;
// }cout<<finalAns<<endl;
//     return 0;
// }

//  BINARY SEARCH IN 2D ARRAY//i=x/c  and j=x%c ->where x =mid



//SEARCH IN NEARLY SORTED ARRAY
//DIVIDE divisor quotient

// #include<bits/stdc++.h>
// using namespace std;
//     int div(int divided,int divisor){
//         int s=0, e=abs(dividend),mid=s+(e-s)/2,ans=1;    
//         while(s<=e){
            
//         }
        
//     }
// int main(){
//     int dividend =22;
//     int divisor = 7;
//     int quo=dividend%divisor;

    

//     return 0;
// }
