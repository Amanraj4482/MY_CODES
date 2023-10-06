// SORT COLOURS***************
// given a n array nums with n objects colored red , white or blue , sort them in-place so that objects of the same color ate adjacent with the colors in the order red,, white and blue
// you must solve this problem without using the library sort function
// by stl of sort function tc=n(logn) space=O(n)
// sorting -> by counting method
//

//*********this question is pending its not completed
// #include <bits/stdc++.h>
// using namespace std;
// void sortColours(vector<int> &nums)
// {
//     int zeros, ones, twos;
//     zeros = ones = twos=0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 0)
//         {
//             zeros++;
//         }
//         else if (nums[i] == 1)
//         {
//             ones++;
//         }
//         else
//         {
//             twos++;
//         }
//     }
//     // spread all the counting
//     int i = 0;
//     while (zeros--)
//     {
//         nums[i] = 0;
//         i++;
//     }
//     while (ones--)
//     {
//         nums[i] = 1;
//         i++;
//     }
//     while (twos--)
//     {
//         nums[i] = 2;
//         i++;
//     }
// }
// int main()
// {
// int nums[]={0,2,1,1,0,2};
// sortColours(nums);
// for(auto f : nums){
//     cout<<f<<" ";
// }
//     return 0;
// }

// **********MOVE ALL NEGATIVE NUMBER TO THE LEFT SIDE OF AN ARRAY
// DUTCH FLAG ALGORITHM
// #include <bits/stdc++.h>
// using namespace std;
// void moveAllNegToLeft(int *a, int n)
// {
//     int l = 0, h = n - 1;
//     while (l < h)
//     {
//         if (a[l] < 0)
//         {
//             l++;
//         }
//         else if (a[h] > 0)
//         {
//             h--;
//         }
//         else
//         {
//             swap(a[l], a[h]);
//         }
//     }
// }
// int main()
// {
//     int a[] = {1, 3, -4, 5, -6,0,-5,-45,9};
//     int n = sizeof(a) / sizeof(int);
//     moveAllNegToLeft(a, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//-45 -5 -4 -6 0 5 3 1 9

// MISSING ELEMENTS FROM AN ARRAY WITH DUPLICATES
// METHOD 1
//  #include<bits/stdc++.h>
//  using namespace std;
//      void findMissingElement(int* a,int n){
//          //visited method
//          for(int i=0;i<n;i++){
//              int index =abs(a[i]);//return absolute
//              if(a[index-1]>0){
//                  a[index-1] *=-1;
//              }
//          }
//          // for(int i=0;i<n;i++){
//          //     cout<<a[i]<<" ";
//          // }
//          for(int i=0;i<n;i++){
//              if(a[i]>0){
//                  cout<<i+1<<" ";
//          }
//      }
//      }
//  int main(){
//      int n;
//      int a[]={1,3,5,4,3};
//      n=sizeof(a)/sizeof(int);
//      findMissingElement(a,n);
//      return 0;
//  }
//  //missing element was 2



// METHOD 2
// SORTING + SWAPING
// #include <bits/stdc++.h>
// using namespace std;
// int i = 0;
// while (i < n)
// {
//     int index = [i] - 1;
//     if ()
// }

// int main()
// {

//     return 0;
// }

//FINDING THE DUPLICATE NUMBERS
//given an array of integers nums containg n+1 integers where each intereger is int the range i,n incliusive there is only one repeated number in number in nums return this repeated number
//must solve the problem without modifuing the array nums and uses only constant extra space
//brute force method-> sort the array and check the adjacent element if equal then return duplicate run the loop till n-1


//method 2-> negative marking method
// we can use the elememts as their indexes because the contrains that is n+1 size










//#FIND SECOND REAPEATING ELEMENT
//METHOD 1- slecting target and then target== element
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

// int firstRepeated(int a[],int n){
//     loop(i,0,n){
//         bool isRepeated=false;
//         loop(j,i+1,n){
//             if(a[i]==a[j]){
//                 isRepeated=true;
//                 return i+1;
//             }
//         }
//     }
//     return -1;//if not found
// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     int a[]={1,5,3,4,3,5,6};
//     int n =7;
//     cerr<<firstRepeated(a,7);
//     return 0;
// }
//1 based indexing so the ans is 2
//this method is not worth it because of the tle



//METHOD 2-> BY HASING
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

// int firstRepeated(int a[], int n) {
//     unordered_map<int, int>hash;
//     loop(i, 0, n) {
//         hash[a[i]]++;
//     }
//     loop(i, 0, n) {
//         if (hash[a[i]] > 1) {
//             return i + 1;
//         }
//     }
//     return -1;

// }

// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif

//     int a[] = {1, 5, 3, 4, 3, 5, 6};
//     int n = 7;
//     cerr << firstRepeated(a, n);
//     return 0;

// }
// //tc->O(n)
//so the ans is 2 with the indexing of 1





//------------------------------------------------------------------------------------
//QUES->COMMON ELEMENT IN 3 SORTED ARRAY
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