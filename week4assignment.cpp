//***************K -DIFF IN A AN ARRAY**********************
// given an array of intergers nums and an integer k , return the niubmer of uniquw k-diff pairs in the array.
// there should be nums[i] not equal to the nums[j]
// nums[i]-nums[j]=k
// return the unique pairs
// notice that |val| denotes the absolute difference
// k is positive where k = 2

// method 1: brute force->
// consider each & and every pairs = difference
//  for(int i=0; i<n;i++){
//      for(int j=i+1; j<n;j++){
//          if((abs(a[i])-a[j])==k){
//              count++;
//          }
//      }
//  }
// with the tc of O(n^2)

// method 2: two pointer approach
// step:1 sort the array
// i =0 and j=i_+1
// difference of a[j]-a[i]==k -> check
// if yes then store then i++ and j++
// else if (diff >k) and then i++
// else j++

// #include<bits/stdc++.h>
// using namespace std;
//     int findPairs(vector<int>arr,int k){
//         sort(arr.begin(),arr.end());
//         set<pair<int,int>>ans;
//         int i=0 , j =1 ;

//         while(j<arr.size()){
//             int diff = arr[j]-arr[i];
//             if(diff==k){
//                 ans.insert({arr[i],arr[i]});
//                 //cout<<arr[i]<<" "<<arr[j]<<endl;
//                 ++i, ++j;
//             }
//             else if(diff>k) i++;
//             else {j++;}
//             if(i==j) j++;
//         }
//         return ans.size();
//     }
// int main(){
//         vector<int>arr{3,1,4,1,5};
//         int k=2;

//         cout<< findPairs(arr,k)<<endl;
// return 0 ;
//     }
// 1 3
// 3 5

// method 3-> Binary search
// a[j=a[i]+k
//*******NOT SOLVED TILL NOW SEE THIS AGAIN

//   #include<bits/stdc++.h>
//   using namespace std;
//     int binaryS(vector<int> & nums, int start, int k){
//         int end =nums.size()-1;
//         while(start <=end){
//             int mid = (start+end)/2;
//             if(nums[mid]==k){
//                 return mid;
//             }
//             else if(k>nums[mid]){
//                 start=mid+1;
//             }
//             else {
//                 end=mid-1;
//             }
//         }
// return -1;
//     }
//     int findPairs(vector<int> & nums, int k){
//         sort(nums.begin (),nums.end());
//         set<pair<int,int>>ans;
//         for(int i=0;i<nums.size();i++){
//             if(binaryS(nums, i+1 , nums[i]+k != -1)){
//                 ans.insert(nums[i],nums[i]+k);
//             }
//         }
// return ans.size();
//     }
//   int main(){
//     vector<int>arr{3,1,4,1,5};
//         int k=2;

//         cout<< findPairs(arr,k)<<endl;
//     return 0;
//   }

//  FIND K CLOSEST ELEMENT
// given a sorted integer array arr two intergers k and x return the k closest intergers to x in the array .the result should also be sorted ascending order

// by two pointer method
//  #include<bits/stdc++.h>
//  using namespace std;
//      void print(vector<int> &vect){
//           for (auto i = vect.begin(); i != vect.end(); ++i)
//          {cout<< *i << " ";}

//     }
//    vector<int> findClosestElements(vector<int> &arr, int k , int x){
//         int l=0 , h=arr.size()-1;
//         while(h-l>=k){
//         if(x-arr[l]>arr[h]-x){
//             l++;
//         }
//         else {
//             h--;
//         }
//     }
//     // vector<int>ans_vector;
//     // for(int i=l;i<=h;i++){
//     //     ans_vector.push_back(arr[i]);
//     // }
//     // return ans_vector; // this took 134 ms to this code

//     return vector<int>(arr.begin()+l,arr.begin()+h+1);//it took 73 ms to run this code
//     }
// int main(){
//     vector<int>arr={12,16,22,30,35,39,42,45,48,50,53,55,56};
//     int k = 4 , x=35;
//     vector<int> print_vector=findClosestElements(arr,k,x);
//     print(print_vector);
//     return 0;
// }
// // 30 35 39 42
//____________________________________________________________________________________________
// 2nd method -> binary Search and two pointer method
// from lower to higher moving
//  which is small high++
// low and high are not included in the ans
//------------------------------------------------------------------------------------------
//  #include<bits/stdc++.h>
//  using namespace std;
//  void print(vector<int> &a){
//           for (auto i = a.begin(); i != a.end(); ++i)
//          {cout<< *i << " ";}

//     }
// int lowerBound(vector<int>&arr,int x){
//     int start=0 , end=arr.size()-1, ans=end;
//     while(start<=end){
//         int mid=(start+end)/2;
//     if(arr[mid]>=x){
//         ans=mid;
//         end=mid-1;
//     }
//     else if(x>arr[mid]){
//         start=mid+1;
//     }
//     else {
//        end= mid-1;
//     }
//     }
//     return ans;
// }
//     vector<int> bsMethod(vector<int>&arr,int k , int x){
//         //lower bound x
//         int h = lowerBound(arr,x);
//         int l=h-1;
//         while(k--){//this loop is running k times
//         if(l<0){
//             h++;
//         }
//         else if(h>= arr.size()){
//             l--;
//         }
//        else if(x-arr[l]>arr[h]-x){
//             h++;
//         }
//         else{
//             l--;
//         }
//         }
//     return vector<int>(arr.begin()+l+1,arr.begin()+h);
//     }
// int main(){
//        vector<int>arr={12,16,22,30,35,39,42,45,48,50,53,55,56};
//     int k = 4 , x=35;
//     vector<int> print_vector=bsMethod(arr,k,x);
//     print(print_vector);
//     return 0;
// }
// //this took 39ms

// // 30 35 39 42
//------------------------------------------------------------------------------------------
// *************EXPONENTIAL SEARCH****************
// doubling search , galloping search , stranik search
// on a sorted array apply
// application - on large array , search in infinte array , better than binary search when x is in the beginning

// #include<bits/stdc++.h>
// using namespace std;
// int bs(vector<int>&a, int start, int end , int k ){
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(a[mid]==k){
//             return mid;
//         }
//         else if(k>a[mid]){
//             start=mid+1;
//         }
//         else{
//             end =mid-1;
//         }
//     }
//     return -1;
// }
// int mini(int s , int e){
//     return min(s , e);
// }

//     int exponentialSearch(vector<int>&a , int k){
//         if(a[0]==k) return 0;
//         int i=1;
//         while(i<a.size() && a[i]<=k){
//             i=i*2 ; // i*=2;  // i =i<< 1; ;;long jump
//         }
//     return bs(a , i/2 , mini(i, a.size()-1),k);
//     }
// int main(){
//    vector<int>a{3,4,5,6,11,13,14,15,56,70};
//    int k=56;
//     int ans = exponentialSearch(a,k);
//     cout<<ans<<endl;
//     return 0;
// }

// in case of binary search tc = log(n)
// ans in case of expo search tc =log(2^log(m)-1);

//**************************UNBOUNDED SEARCH**************
// find the element in an infinite array sorted
// making the subarray
// #include<bits/stdc++.h>
// using namespace std;
//     int bs(vector<int>&a , int start , int end,int target){
//         while (start <= end) {

//         int mid = start + (end - start) / 2;

//         if (target < a[mid]) {
//             end = mid - 1;
//         }
//         else if (target > a[mid]) {
//             start = mid + 1;
//         }
//         else {
//             // ans found
//             return mid;
//         }
//     }
//     return -1;
// }
//     int unbound(vector<int> a, int k){
//         int i=0 , j=1;
//         while(a[j]<k){
//             i=j;
//             j=j*2;
//         }
//         return bs(a,i,j,k);
//     }
// int main(){
//     vector<int>a{3, 5, 7, 9, 10, 90, 100, 130,140, 160, 170,342,500};
//     int k=500;
//     int ans=unbound(a,k);
//     if(ans==-1){
//         cout<<"Element not found"<<endl;
//     }
//     else {
//         cout<<"Element found at index "<<ans<<endl;
//     }
//     return 0;
// }
// Element found at index 12

//**************BOOK ALLOCATION PROBLEM************
// make a search space-> try to allocate each student at most (mid=)
// #include <bits/stdc++.h>
// using namespace std;
// bool isPossibleSolution(int a[], int n, int m, int sol)
// {
//     int pageSum = 0;
//     int count = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > sol)
//             return false;
//         if (pageSum + a[i] > sol)
//         {
//             count++;
//             pageSum = a[i];
//             if (count > m) return false;
//         }
//             else pageSum += a[i];
//     }
//     return true;
// }
// int findPages(int a[], int n, int m)
// {
//     if (m > n)
//         return -1;
//     int s = 0, e = accumulate(a, a + n, 0); /*(start, end,initial sum =0)*/
//     int ans = -1;
//     while (s <= e)
//     {
//         int mid = (s + e) >> 1; // right shift by one        }
//         if (isPossibleSolution(a, n, m, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int a[]={12,34,67,90};
//     int n=4;
//     int m=2;
//     cout<<findPages(a,n,m)<<endl;

//     return 0;
// }
// 113 is the output

//	BOOK ALLOCATION PROBLEM
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;


// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cout<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
// #define dl cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// bool isPossibleSolution(int a[], int n, int m, int sol)
// {int round=0;
// 	int pageSum = 0;
// 	int count = 1;
// 	for (int i = 0; i < n; i++)
// 	{
// round++;
// debug(round)
// 		if (a[i] > sol)
// 			{return false;}
// 		cerr<<"**********intital**********"<<endl;
// 		 debug (i) debug(a[i])
// 		 debug(sol)
// 		if (pageSum + a[i] > sol)
// 		{
// 		cerr<<"if---------"<<endl;
// 			debug(count)
// 			count++;
// 			pageSum = a[i];
// 			debug(pageSum)
// 			if (count > m) {
// 				cerr<<"<<<<<<<false>>>>>>"<<endl;
// 				return false;}
// 		}
// 		else {
// 		cerr<<"else---------"<<endl;
// 			// pageSum += a[i];
//         pageSum=pageSum+a[i];
// 		debug(pageSum)
// 		}
// 		dl
// 	}
// 	cerr<<"<<<<<<<<true>>>>>>>"<<endl;
// 	return true;
// }
// int findPages(int a[], int n, int m)
// {
// 	if (m > n)
// 		return -1;
// 	int s = 0, e = accumulate(a, a + n, 0); /*(start, end,initial sum =0)*/
// 	int ans = -1;
// 	while (s <= e)
// 	{
// 		int mid = (s + e) >> 1; // right shift by one        }
// 		if (isPossibleSolution(a, n, m, mid))
// 		{
// 			ans = mid;
// 			e = mid - 1;
// 		}
// 		else
// 		{
// 			s = mid + 1;
// 		}
// 	}
// 	return ans;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	int a[] = {12, 34, 67, 90};
// 	int n = 4;
// 	int m = 2;
// 	cout << findPages(a, n, m) << endl;

// 	return 0;
// }


//PAINTER'S PARTION PROBLEM->>
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;


// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cout<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
// #define dl cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// bool sum(ll a[], ll k , ll n, ll mid) {
// 	ll elesum = 0;
// 	ll count = 1;
// 	loop(i, 0, n) {
// 		if (a[i] > mid) { return false;}
// 		if (elesum + a[i] > mid) {
// 			count++;
// 			elesum = a[i];
// 			if (count > k) {return false;}//if allocations is greater than no of painters
// 		}
// 		else {
// 			elesum += a[i];
// 		}
// 	}
// 	return true;
// }
// ll painters(ll a[], ll k , ll n) {
// 	//if no of painters (k) is greater than the no of woods(n) so return -1
// 	if (k > n) return -1;
// 	ll s = 0, e = accumulate(a, a + n, 0),ans=-1;
// 	//or for accumulate ->
// 	//loop(i,0,n){int e+=a[i];}
// 	while (s <= e) {
// 		ll mid = (s + e) / 2;
// 		if (sum(a, k, n, mid)) {
// 			ans = mid;
// 			e = mid - 1;
// 		}
// 		else {
// 			s = mid + 1;
// 		}
// 	}
// 	return ans;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	ll a[] = {10, 20, 30, 40};
// 	ll k = 2;
// 	ll n = 4;
// 	cerr<<painters(a, k, n);
// 	return 0;
// }



//EKO SPOJ
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long int ll;
// typedef long double lld;
// typedef unsigned long long ull;


// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cout<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
// #define dl cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// ll isPossibleSolution(vector<ll>a,int m, int n, int mid){
// 	ll woodCollected=0;
// 	for(ll i=0;i<a.size();i++) {
// 		if(a[i]>mid){//mid=sawBladeheight is greater than a->trees then we will neglect
// 			// or if a[i] or trees[i] is greater than mid or sawBlageheight then we will collect and add the trees cutted portion
// 			woodCollected+=a[i]-mid;
// 		}
// 	}
// 	return woodCollected>=m;
// }
// ll maxSawHeight(vector<ll>a,int m,int n){
// 	ll s=0,e=*max_element(a.begin(),a.end()),ans=-1;
// 	while(s<=e){
// 		ll mid=s+(e-s)/2;
// 		if(isPossibleSolution(a,m,n,mid)){
// 			ans=mid;//save ans
// 			s=mid+1;
// 		}
// 		else{
// 			e=mid-1;
// 		}
// 	}
// 	return ans;
// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     ll m,n;
//     cin>>m>>n;
//     vector<ll>a;
//     while(n--){
//     	ll height;
//     	cin>>height;
//     	a.pb(height);
//     }
//     cerr<<maxSawHeight(a,m,n);
//     return 0;
// }
// 7 4
// 20 15 10 17


//PARATHA SPOJ

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;


// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cout<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
// #define dl cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// int isPossibleSolution(vector<int>cooksRanks,int nP,int mid){
// 	int currParatha=0;//initial cooked paratha
// 	// for(int i=0; i<cooksRanks.size();i++)
// 		loop(i,0,cooksRanks.size()){
// 		int R=cooksRanks[i],j=1;
// 		int timeTaken=0;
// 		while(1){
// 			if(timeTaken+j*R<=mid){
// 				++currParatha;
// 				timeTaken+=j*R;
// 				++j;
// 			}
// 			else{
// 				break;
// 			}
// 		}
// 		if(currParatha>=nP){
// 			return true;
// 		}
// 	}
// 	return false;

// }
// int minTimeToCompleteOrder(vector<int>cooksRanks,int nP) {
// 	int start=0;
// 	int highestRank=*max_element(cooksRanks.begin(),cooksRanks.end());
// 	int end=highestRank*(nP*(nP+1)/2);
// 	int ans=-1;
// 	while(start<=end){
// 		int mid=(start+end)/2;
// 		if(isPossibleSolution(cooksRanks,nP,mid)){
// 			ans=mid;
// 			end=mid-1;
// 		}
// 		else{
// 			start=mid+1;
// 		}
// 	}
// 	return ans;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt","w", stderr);
// #endif

// 	int T; cin >> T;
// 	while (T--) {
// 		int nP, nC; //no of parathas and no of cooks
// 		cin >> nP >> nC;
// 		vector<int>cooksRanks;
// 		while(nC--){
// 			int R;cin>>R;
// 			cooksRanks.pb(R);
// 		}
// 		cout<<minTimeToCompleteOrder(cooksRanks,nP)<<endl;
// 	}
// 	return 0;
// }
// input:
// 3
// 10
// 4 1 2 3 4
// 8
// 1 1
// 8
// 8 1 1 1 1 1 1 1 1

// ouput:
// 12
// 36

