// #include <bits/stdc++.h>
// using namespace std;

// // Function to insert X in N and
// // return the minimum value string
// string MinValue(int len,int X,string N)
// {

//     // Variable to store length
//     // of string N
//     // int len = N.size();

//     // Variable to denote the position
//     // where X must be added
//     int position = len + 1;

//     // If the given string N represent
//     // a negative value
//     if (N[0] == '-') {
//         // X must be place at the last
//         // index where is greater than N[i]
//         for (int i = len - 1; i >= 1; i--) {
//             if ((N[i] - '0') < X) {
//                 position = i;
//             }
//         }
//     }
//     else {
//         // For positive numbers, X must be
//         // placed at the last index where
//         // it is smaller than N[i]
//         for (int i = len -1; i >= 0; i--) {
//             if ((N[i] - '0') > X) {
//                 position = i;
//             }
//         }
//     }
// // Insert X at that position
//     N.insert(N.begin() + position, X + '0');

//     // Return the string
//     return N;
// }

// // Driver Code
// int main()
// {
//         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//         #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//         #endif
//     // Given Input
//     string N ;
//     getline(cin,N);
//     int X,len;
//     cin>>len>>X;
//     // Function Call
//     cout << MinValue(len,X,N) << "\n";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9+7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5+1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define mp make_pair
// #define pb push_back
// #define endl "\n"


// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("inputf.txt","r",stdin);
//     freopen("outputf.txt","w",stdout);
//     #endif



//     // stress testing
//     //how to generate the test cases
// srand(time(NULL));
// int t =rand ()%2+1;
// cout<<t<<endl;
// while(t--){
//     int n=rand()%5+1;
//     cout<<n<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<(rand()%4+1)<<" ";
//     }
//     cout<<endl;
// }
//     return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007
// void isSafe() {};
// void solveMaze(int maze[3][3], int rows, int col, int i, int j , vector<vector<bool>>&visited, vector<string>&path, string output) {
// //i-> source cordinate of x
// //j-> source cordinate of y
//     //base case
//     if (i == rows - 1 && j == col - 1) {
//         //answer found
//         path.push_back(output);//need to store the value of the output in the store
//         return ;
//     }
//     //down->i+1 , j   // ky down jana safe h
//     if (isSafe(i + 1, j, rows, col, maze, visited) {
//     visited[i + 1][j] = true; //array k bound k andr hona chahiye,maze ki condition pr 1 hona chahiye ,visited k maze k wha pr false hona chahiye
//         solveMaze(maze, rows, col, i + 1, j, visited, path, output, 'D');
//         //backtrack
//         visited[i + 1][j] = false;
//         //agr ye safe to mai visited mark kr dunga
//     }
//     //left-> i, j-1


//right-> i, j+1

//up->i-1 , j



// }
// int main() {
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int maze[3][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};
//     int rows = 3;
//     int col = 3;
//     vector<vector<bool>>visited(rows, vector<bool>(col, false)); //2d vector initialised with false
//     //source ki value k true mark kredete h
//     visited[0][0] = true;
//     int t;
//     vector<string>path;
//     string output = "";
//     solveMaze(maze, rows, col,/*source postition*/0, 0, visited, path, output);

//     return 0;
// }



// ctrl+shift+d->copy and paste previous line in next line
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

//merge sort
// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9+7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5+1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// void merge(int *arr, int s , int e){
//     //this function is going to merge two function into one

//     int mid=(s+e)/2;
//     int n1=mid-s+1;
//     int n2=e-mid;



// }

// void mergeSort(int *arr,int n , int s, int e){
//     //base case
//     if(s>=e) return;
//     int mid=(s+e)/2;
//      mergeSort(arr,s,mid);
//      mergeSort(arr,mid+1,e);
//      merge(arr,s,e);

// }


// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif

//     /*ll t=1;
//     cin >> t;

//     while(t--)
//     {
//         if(solve())
//         {
//             // cout << "YES" << endl;
//         }
//         else
//         {
//             // cout << "NO" << endl;
//         }
//     }*/
//     int arr[]={1,6,3,5,2};
//     int n=5;
//     int s=0, e=n-1;
//     mergeSort(arr,n,s,e);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<< " ";
//     }
//     cout<<endl;



//     return 0;
// }




//multiplies
// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define mp make_pair
// #define pb push_back
// #define endl "\n"

// void solve(int a , int b) {
//     if (a % b == 0||b%a==0) {
//       cout << "Multiples" <<   endl;
//     }
//     else {
//         cout << "No Multiples" << endl;
//     }

// }
// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int a , b;
//     cin >> a >> b;
//     solve(a, b);
//     return 0;
// }


//STL WITH UNACADEMY SIR


// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),s.end())};
// #define ff first
// #define ss second
// #define vs vector<string>


// /*void solve(){

// }
// */

// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     //chef and min colouring
//     //m colours and m boxes of all colours //
//     //reording is allowed with non consecutive boxes
//     //pair<Ai, colour> ;
//     //sorting- based on number of balls//that is colours are suffled
//     //every colour should be unique
//     //count vector of m size -> initially m size // colour pick -> freq++ // colour drop->> freq--;
//     //two pointers-> left pointer and right pointer
//     //whenever i will pick an element i will increase the frequency
//     // and we will move the right pointer till the time we got right colour

//     //diff -> candidate for the final answer
//     //initially the value of count is zero

//     int t;
//     cin >> t;
//     while (t--) {
//         int m, n;
//         cin >> n >> m;
//         vector<pair<ll, int>>v(n); //the last one is size of the vector
//         loop(i, 0, n - 1) { //variable is i with 0 to n-1
//             cin >> v[i].ff; //first element
//             v[i].ss = i % m; //unique value store
//         }
//         // for(int i=0 ;i<n;i++){
//         //     cout<<v[i].ff<<" ";
//         // }

//         int count = m;
//         int right = 0;
//         ll ans = INT_MAX;
//         sort(v.begin(), v.end());
//         //if the vector is of pair then it will sort on the first value in increasing order
//         vector<int> cnt(m,0);//cnt name vector intialised with 0
//         loop(left,0,n-1){
//             while(right<n and count >0){//either right is out of boundary and count ends up with the 0
//                 count -=cnt[v[right].ss]==0;
//                 //right is poiting jis v box ko colour nikalo if the is not picked then pick it
//                 cnt[v[right].ss]++;
//                 right++;
//             }
//                 if(count==0){//we got m uniq boxes
//                 ans=min(ans,v[right-1].ff-v[left].ff);
//                 }
//                 if(cnt[v[left].ss]>0){
//                     cnt[v[left].ss]--;
//                 }
//                 //missing?
//                 count+=cnt[v[left].ss]==0;//if my current is on left that reaches to zer0 that drops all the colour
//             }
//             cout<<ans <<endl;
// }
// return 0;
// }


//sort numbers
// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())
// //we have to wrap array in structure and pass that structure as a parameter to a function
// // void solve(vector<int>arr,int n) {

// //     sort(arr.begin(),arr.end());
// // for (int i = 0; i <n; i++) {
// //         cout << arr[i] << endl;
// //     }
// //     cout << endl;
// // }
// int main()
// {

//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//  int arr[3];
//  int n=3;
//  for(int i=0;i<n;i++){
//     cin>>n;
//  }
//  for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
//  }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// // const ld eps  = 1e-9 ṁ,ṁṇ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// // #define pb push_back
// // #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};
// #define bl cout<<endl;


//   ll sum(ll n)
// {
//     if (n%2==0)
//     {
//         ll ans = n/2;
//         ans*=(n+1);
//         return ans;
//     }else
//     {
//         ll ans = (n+1)/2;
//         ans*= n;
//         return ans;
//     }
// }
// int main (){
//         ios_base :: sync_with_stdio(false);
//         cin.tie(NULL);
//         cout.tie(NULL);

//         #ifndef ONLINE_JUDGE
//         freopen("input.txt","r",stdin);
//         freopen("output.txt","w",stdout);
//         #endif
// int t;
// cin>>t;
// while(t--)
// {
//     ll a,b; cin>>a>>b;
//     ll l = min(a,b);
//     ll r = max(a,b);
//     ll sum_r = sum(r);
//     ll sum_l = sum(l);
//     sum_r+=l;
//     cout<<sum_r-sum_l;
//     bl

// }
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};

// /*void solve(){

// }
// */

// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif

// //     ll n;
// //     cin>>n;
// // if ((n & 1)== 0){
// // }
// // else{cout<<"NO";}
//     check

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};
// #define bl cout<<endl;

// int solve(int n){
//     //base case
//     if(n==1) return 1;
//      return n+solve(n-1);
// }
// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
//     int n;cin>>n;
//     cout<<solve(n)<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};
// #define bl cout<<endl;

// bool solve(ll a, ll b) {
//     if (a >= b) return true;
//     else return 0;
// }
// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ll a, b; cin >> a >> b;
//     if (solve(a, b)) {
//         cout << "Yes";
//     }
//     else {cout << "No";}
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};
// #define bl cout<<endl;

// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
// vector<int>v;
// int a;
// int max=0 ;
// int min=0;
// while(cin>>a){
//     v.push_back(a);
// }
//     min=*min_element(v.begin(),v.end());
//     max= *max_element(v.begin(), v.end());
//     cout<<min<<" "<<max<<"\n";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// //main function
// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     vector<int> v;
//     int a;
//     // we can also mention size here like
//     // vector<int> v(n);
//     while (cin >> a) {
//         v.push_back(a);
//     }
//     for (auto &p : v)
//     {
//         cout << p << " ";
//     }
//     cout<<endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};
// #define bl cout<<endl;

// /*void solve(){

// }
// */

// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif

//     string a1,a2,b1,b2;
//     cin>>a1>>a2>>b1>>b2;
//     if(a2==b2){
//         cout<<"ARE Brothers"<<endl;
//     }
//     else{
//         cout<<"NOT";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};
// #define bl cout<<endl;

// /*void solve(){

// }
// */

// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     string str;
//     getline(cin, str);
//     int i=0;
//     if (str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] = tolower(str[i]);
//             cout<<str<<endl;

//     }
//     else if(str[i]>='a'&&str[i]<='z'){
//         str[i] = toupper(str[i]);
//         cout<<str<<endl;
//     }
//     return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};
// #define bl cout<<endl;

// /*void solve(){

// }
// */

// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif

//     int a,b;
//     string q,s;
//     cin>>a>>s>>b>>q;
//     int c=ab;
//     // cout<<a<<s<<b<<q<<c<<endl;
//     if(a+b==c ||a-b==c||a*b==c ){
//         cout<<"Yes";
//     }
//     else{cout<<a*b;}
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9 + 7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define check cout<<"Print"<<endl;
// #define mp make_pair
// #define pb push_back
// #define endl "\n"
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define loopprev(i,a,b) for(int i=(a);i>=(b);i--)
// #define logarr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<" ";
// #define log(args...) {string _s=#args; replace(_s.begin(),_s.end())};
// #define bl cout<<endl;

// int solve(vector<int>v){
// int ans=1;
// for(int i=0; i<v.size();i++){
// ans*=v[i];
// }
// int ans2=ans%100;
// return ans2;
// }
// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif

//     vector<int>v;
//     int a;
//     while(cin>>a){
//         v.push_back(a);
//     }
//     cout<<solve(v);
//     return 0;
// }

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
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cout<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
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

// void solve(int n){
//     int ans=1;
//     loop(i ,1 ,n){
//         if(n%i==0){
//             ans=i;
//             cout<<ans<<endl;
//         }
//     }

// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     int n;
//     cin>>n;
//     solve(n);
//     return 0;
// }

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
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t<<endl;}
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

// void solve(int n){
//     int count=0;
//     loop(i,2,n){
//         if (n%i== 0){
//             count++;
//             debug(i)
//             debug(count)
//         }
//     }
//     if(count>=1){
//         cout<<"No"<<endl;
//     }
//     else{cout<<"yes"<<endl;}
// }
// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     int n;cin>>n;
//     solve(n);
//     return 0;
// }


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

// void solve(vector<int>v,int t){
//     int Even=0;
//     int Odd=0;
//     int Positive=0;
//     int Negative=0;
//     loop(i , 0, t){
//         if(v[i]%2==0){
//             Even++;
//             debug(i)
//         }
//         else if(v[i]%2!=0){
//             Odd++;
//             debug(i)
//         }
//         if(v[i]>0){
//             Positive++;
//         }
//         else if(v[i]<0){
//             Negative++;
//         }
//     }
//     cout<<"Even: "<<Even<<endl;
//     cout<<"Odd: "<<Odd<<endl;
//     cout<<"Positive: "<<Positive<<endl;
//     cout<<"Negative: "<<Negative<<endl;
// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif
// int t;cin>>t;
// vector<int>v;
// int n;
// while(cin>>n){
//     v.push_back(n);
// }
// solve(v,t);
//     return 0;
// }


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

// void solve(){

// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif




//     return 0;
// }

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
// // #define check cout<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
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

// void solve(int k , int reqlen,int start,int currl,bool check[],char a[]){
//     if(currl>reqlen){
//         return;
//     }
//     else if(currl==reqlen){
//         loop(i,0,reqlen){
//             if(check[i]==true){
//                 cout<<a[i]<<" ";
//             }
//         }
//         cout<<endl;
//         return;
//     }
//     if(start==k){
//         return ;
//     }
//     check[start]=true;
//     solve(k,reqlen,start+1,currl+1,check,a);
//     check[start]=false;
//     solve(k,reqlen,start+1,currl,check,a);

// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     int k,s;cin>>k>>s;
//     bool check[s];
//     char a[s];
//     loop(i,0,s){
//         cin>>a[i];
//         check[i]=false;
//     }
//     solve(k,k+s,0,0,check,a);





//     return 0;
// }

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

// void solve(){

// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     int a;
//     int t;cin>>t>>a;

//     for (int i = 0; i <= a.length(); ++i)
//     {


// }







//     return 0;
// }
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

// void solve() {

// }

// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif
//     ll k, s; cin >> k >> s; ll count = 0;
//     for (int i = 0; i <= k; ++i)
//     {
//         for (int j = 0; j <= k; ++j)
//         {
//             for (int m = 0; m <= k; ++m)
//             {
//                  ll sum = i+j+m;
//                     if (s==sum)
//                     {
//                         count++;
//                     }
//             }
//         }
//     }
//     cout << count << endl;
//     return 0;
// }


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

// void sieveOfErathosthenes(int n) {
//     //creating a boolean array with prime[0...n] and initilizing with as true to all
//     //a value in prime [i] will finally be false if i is not a prime else true.

//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));

//     for (int i = 2; i <= n; ++i)
//     {
//         //if prime[i] is not changed then it is prime
//         if (prime[i] == true) {
//             //update all multiples of p greater than or equal to the squre of it numbers which are
//             //multiples of p and are less than p^2 are already beem marked
//             for (int j = i * i ; j <= n; j += i) {
//                 dl
//                 prime[j] = false;
//             }
//         }
//     }
//     //print all prime numbers
//     for (int i = 2; i <= n; i++) {
//         if ( prime[i]) {
//             cout << i << " ";
//         }
//     }
// }

// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif

//     int n; cin >> n;
//     sieveOfErathosthenes(n);
//     return 0;
// }

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

// int solve(int n){
//     if(n==1) return 0;
//     if(n==2) return 1;
//     //base case
//     else{
//         return solve(n-1)+solve(n-2);
//     }}

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     int n;cin>>n;
//     cout<<solve(n);


//     return 0;
// }

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

// void solve(){

// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     int n,m,a;cin>>n>>m>>a;
//     int ans=min(n,(min(m,a)));
//     debug(ans)
//     cout<<ans<<endl;
//     return 0;
// }

//setprecision wali question
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

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     // int t;cin>>t;
//     // while(t--){
//     double n,m,a;cin>>n>>m>>a;
//     double rec=n*m;
//     double sq=a*a;
//     double ans=rec/sq;
//     debug(rec)
//     debug(sq)
//     debug(ans)
//     cout<<fixed<<setprecision(0)<<ceil(n/a)*ceil(m/a)<<endl;
// // }
//     return 0;
// }


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

// void solve(vector<int> t,int size){
//     for (int i = 0; i < size; ++i)
//     {
//         if(t[i]==1){
//                     return cout<<"HARD";
//                 }
//               return cout<<"EASY";

//     }


// }
// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif
//     int size;cin>>size;
//     vector<int>t;
//     for(int i=0;i<size;i++){
//         int temp;cin>>temp;t.pb(temp);

//     }
//     solve(t,size);



//     debug(t)

//     return 0;
// }


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

// int solve(vector<int>v, int n) {
//     for (int i = 0; i < n; ++i)
//     {
//         int temp; cin >> temp; v.pb(temp);
//     }
//     for (int i = 0; i < n; ++i)
//     {
//         if (v[i] == 1) {
//             return 1;
//         }
//     }

//     return 0;

// }

// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif

//     int n; cin >> n;
//     vector<int>v;
//     if(solve(v, n)){
//         cout<<"HARD"<<endl;
//     }
//     else{
//         cout<<"EASY"<<endl;
//     }


//     return 0;
// }

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

// void solve(){

// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif

//     int t;cin>>t;
//     while(t--){
//         int a,b,c,d;cin>>a>>b>>c>>d;
//         int max1=max(a,b);
//         int max2=max(c,d);

//         // if(max1>=a&&max1>=b && max2>= c&& max2>=d){
//             if(max1>=(c,d)&&max2>=(a,b)){
//             cout<<"YES"<<endl;}
//             else {
//             cout<<"NO"<<endl;
//         }
//         // }
//         // else{
//         //     cout<<"NO"<<endl;
//         // }
//         debug(max1)
//         debug(max2)
//         dl

//     }


//     return 0;
// }

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
// #define check cerr<<"Print"<<endl;
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

// void solve(ll n, ll m) {
//     ll a = 0;
//     ll b = 0;
//     for (ll i = 0; i <= n; ++i)
//     {
//         if ((i * i) > 0 && i * i <= n) {
//             a++;
//         }
//     }
//     for (ll i = 0; i <= m; ++i)
//     {
//         if ((i * i) > 0 && i * i <= m&&n-pow(a,2)>0) {
//             b++;
//         }
//     }


//     ll p1 = n - abs(pow(a, 2));
//     ll p2 = m - abs(pow(b, 2));
//     debug(a)
//     debug(b)
//     debug(p1)
//     debug(p2)
//     ll count=0;
//     if(p1==b&&p2==a){
//         count++;
//     }
//         cout<<count<<endl;
// }
// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif

//     ll n, m; cin >> n >> m;
//     solve(n, m);

//     return 0;
// }
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
// #define check cerr<<"Print"<<endl;
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

// void solve(ll n, ll m) {
//     ll a = 0;
//     ll b = 0;
//     for (ll i = 0; i <= n; ++i)
//     {
//         if ((i * i) > 0 && i * i <= n&&m-pow(b,2)>0) {
//             a++;
//         }
//     }
//     for (ll i = 0; i <= m; ++i)
//     {
//         if ((i * i) > 0 && i * i <= m&&n-pow(a,2)>0) {
//             b++;
//         }
//     }
//     a=sqrt(n-b);
//     ll p1 = n - abs(pow(a, 2));
//     ll p2 = m - abs(pow(b, 2));
//     debug(a)
//     debug(b)
//     debug(p1)
//     debug(p2)
//     dl
//     ll count=0;
//     if(p1==b&&p2==a){
//         if(p1==a&&p2==b){count++;}
//         count++;
//     }
//     if(n==1&&m==1){
//         count++;}
//         cout<<count<<endl;
//     }

// int main()
// {
//     fastio()
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
// #endif

//  int t;cin>>t;
//  while(t--){
//     ll n, m; cin >> n >> m;
//     solve(n, m);}

//     return 0;
// }
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

// void solve(){

// }

// int main()
// {
//     fastio()
//     #ifndef ONLINE_JUDGE
//     freopen("error.txt","w",stderr);
//     #endif
//     ll n;cin>>n;
//     string t=to_string(n);
//     ll count=0;
//     for (ll i = 0; i < t.size(); ++i)
//     {
//         ll last_digit=n%10;
//         debug(last_digit)
//         if(last_digit==1||last_digit==4){

//         }
//         else{
//             count++;
//         }
//         n=n/10;
//         last_digit=n;
//     }
//     debug(count)
//     if(count<=0){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }


//lecture -15
//if the odd count will be 1 or 0 then only palidrome can be made

//brute force solution
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	//taking the input of the test cases
// 	int t; cin >> t;
// 	while (t--) {
// 		int n, q;//and our string is one based
// 		cin >> n >> q;//length of string and queries
// 		string s; cin >> s;
// 		while (q--) {
// 			int l, r; cin >> l >> r;
// 			int hsh [26];
// 			for (int i = 0; i < 26; ++i) {
// 				hsh[i] = 0;
// 			}
// 			l--; r--;//this is one based decreased for making zero based indexing
// 			for (int i = l; i <= r; ++i) {
// 				hsh[s[i] - 'a']++;//if s[i]==a then a-a =0 and 0-> 1 increment
// 			}
// 			//from l to r all character has been hashed
// 			//a is mapped with 0 and b is mapped with 1 similarly all the letters mapped
// 			int oddCnt = 0;//those letters which has count odd from l to r
// 			for (int i = 0; i < 26; ++i)
// 			{
// 				if (hsh[i] % 2 != 0) oddCnt++;
// 			}
// 			if (oddCnt > 1) cout << "NO\n";
// 			else cout << "YES\n";
// 		}
// 	}
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	//taking the input of the test cases
// 	int t; cin >> t;
// 	while (t--) {
// 		int n, q;//and our string is one based
// 		cin >> n >> q;//length of string and queries
// 		string s; cin >> s;
// 		while (q--) {
// 			int l, r; cin >> l >> r;
// 			int hsh [26];
// 			for (int i = 0; i < 26; ++i) {
// 				hsh[i] = 0;
// 			}
// 			l--; r--;//this is one based decreased for making zero based indexing
// 			for (int i = l; i <= r; ++i) {
// 				hsh[s[i] - 'a']++;//if s[i]==a then a-a =0 and 0-> 1 increment
// 			}
// 			//from l to r all character has been hashed
// 			//a is mapped with 0 and b is mapped with 1 similarly all the letters mapped
// 			int oddCnt = 0;//those letters which has count odd from l to r
// 			for (int i = 0; i < 26; ++i)
// 			{
// 				if (hsh[i] % 2 != 0) oddCnt++;
// 			}
// 			if (oddCnt > 1) cout << "NO\n";
// 			else cout << "YES\n";
// 		}
// 	}
// 	return 0;
// }



//_____FINDING THE GCD OF A NUMBER_______(____PRECOMPUTATION___)______
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	//pre computation of forwared gcd and backward gcd
// 	int t; cin >> t;
// 	while (t--) {
// 		int n, q;
// 		cin >> n >> q;
// 		int forward[n + 10];
// 		int backward[n + 10];
// 		forward[0] = backward[n + 1] = 0;
// 		int a[n + 10];
// 		for (int i = 1; i <= n; i++) {
// 			cin >> a[i];
// 		}
// 		// forward array gcd calculation
// 		for (int i = 1; i <= n; i++)
// 			forward[i] = __gcd(forward[i - 1], a[i]);
// 		// backward array gcd calculation

// 		for (int i = n; i >= 0; --i)
// 			backward[i] = __gcd(backward[i + 1], a[i]);
// 		while (q--) {
// 			int l, r; cin >> l >> r;
// 			int gc = 0;
// 			cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
// 		}
// 	}
// 	return 0;
// }
//O(T*(N+N))

//BRUTE FORCE TC->O(T*(Q*N))=N^3
// int main() {
// 	int t; cin >> t;
// 	while (t--) {
// 		int n, q;
// 		cin >> n >> q;
// 		int a[n + 10];
// 		for (int i = 1; i <= n; i++) {
// 			cin >> a[i];
// 		}
// 		while (q--) {
// 			int l, r; cin >> l >> r;
// 			int gc = 0;
// 			for (int i = 1; i <= l - 1; i++) {
// 				gc = __gcd(gc, a[i]);
// 			}
// 			for (int i = r + 1; i <= n; i++) {
// 				gc = __gcd(gc, a[i]);
// 			}
// 			cout << gc << endl;
// 		}
// 	}
// 	return 0;
// }
// 1
// 3 3
// 2 6 9
// 1 1
// 2 2
// 2 3

//MEDIUM TECHNIQUE PRECOMPUTATION
//ARRAY MANIPULATION
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e7 + 10; //declaring the global arrat of full size
// long long int ar[N];

// int main() {
// 	int n, m;
// 	cin >> n >> m;
// 	while (m--) {
// 		int a , b, d;
// 		cin >> a >> b >> d;//we have to add d from index ( a, b);

// 		// add the number at the index at a and substract the same number at index b
// 		// and if we take back the prefix sum then we will  get the exact same as
// 		// we added d from the index a to index b



// 		//we will now use the precomputation technique
// 		// for (int i = a; i <= b; ++i) {
// 		// 	ar[i] += d;
// 		// }
// 	}
// 	long long mx = -1;
// 	for ( int i = 1; i <= n; ++i) {
// 		if (mx < ar[i]) {
// 			mx = ar[i];
// 		}
// 	}
// 	cout << mx << endl;

// 	return 0;
// }





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

// void solve() {

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int t;
// 	cin >> t;
// 	while (t --) {
// 		vector<int> a(3);
// 		for (auto &e : a)
// 			cin >> e;
// 		sort(a.begin(), a.end());
// 		if (a[1] + a[2] >= 10)
// 			cout << "YES" << endl;
// 		else {
// 			cout << "NO" << endl;
// 		}
// 	}
// 	return 0;
// }
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

// void solve() {

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif



// 	bool f_a = 0, f_b = 0, f_c = 0; //default is zero
// 	int n; cin >> n;
// 	string s; cin >> s;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (s[i] == 'A')
// 			f_a = 1;
// 		if (s[i] == 'B')
// 			f_b = 1;
// 		if (s[i] == 'C')
// 			f_c = 1;
// 		if (f_a && f_b && f_c) {
// 			cout << i + 1;
// 			break;
// 		}
// 	}


// 	return 0;
// }

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

// void solve() {

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	//n people | schedule for the d days
// 	// 0 then it is free
// 	// x then occupied on that day

// 	int n , d; cin >> n >> d; //n is the row
// 	// d is the col
// 	int c = 0;
// 	int ans = 0;

// 	vector<string> s(n);
// 	for (int i = 0; i < n; i++) {
// 		cin >> s[i];
// 	}
// 	//iterate the loop with the col inside row
// 	for (int i = 0; i < d; i++)//row
// 	{
// 		bool flag = 1;

// 		for (int j = 0; j < n; ++j)//col
// 		{
// 			if (s[j][i] == 'x') {
// 				flag = 0; break;
// 			}
// 		}
// 		if (flag) {
// 			c++;
// 			ans = max(c, ans);
// 		}
// 	}
// 	cout << ans << endl;


// 	return 0;
// }



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

// void solve() {

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	int t; cin >> t;
// 	while (t--) {
// 		debug(t)

// 		int n ; cin >> n;
// 		int j = 1;
// 		int v[n];
// 		for (int i = 1; i <= n; i++) {
// 			cin >> v[i];
// 		}
// 		for (int i = 1; i <= n; i++) {
// 			if ( j != 1) {
// 				v[i] += 1;
// 			}
// 			debug(v[i])
// 		}
// 	}
// 	return 0;
// }
