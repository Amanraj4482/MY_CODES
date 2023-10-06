// #include<bits/stdc++.h>
// using namespace std;

// int main(){}


//   //STL VECTORS
//   //DYNAMIC IN NATURE
//     vector<int> v;

//     //this both are same but emplace_back is better in than push_back
//     v.push_back(1);
//     v.emplace_back(2);


//     vector<pairs<int,int>vec;

//     v.emplace_back{1,2};

//     vector<int> v(5,100);
//     vector<int> v(5);

//     vector<int> v1(5,20);
//     vector<int> v2(v1);

//     //v.begin is directly pointing to
//     //the memory in an cetain vector

//     // *(v.begin())--> access of element
//     // v.begin()-->access of memory of the element stored
//     // {20,10,15,6,7}
//     vector<int> ::itrator it = v.begin();
//     it++; //moving to the next memory location
//     cout<<*(it)<" "; //it prints the value 10

//     it = it +2;
//     cout<<*(it)<<" "; //prints 6 shifted location uptwo


//     vector<int>::iterator it =v.end(); //it points right after comes to 7
//     it--; //then it moves to 7

//     // reverse iterator
//     vector<int> :: iterator it = v.rend(); //this points before 20 location
//     // and after {it++;} it moves to 20

//     vector<int>:: iterator it v.rbegin(); //it points to directly to 7 ;
//     it++ //**it points to 6;

//     cout<<v.back()<<" "; // the element is 7


//     // loops printing iterator
//     for(vector<int> ::iterator it = v.begin(); it != v.end(); it++){
//       cout<<*(it)<<" "; //prints the value of vector
//     }//priting of entire vector [v.begin()] from the first elements
//     //untill it not equal to the last element

//     //SHORTCUT to define iterator
//     //{vector<int>::iterator}---> auto
//     for(auto it = v.begin(); it != v.end(); it++){
//       cout<<*(it)<<" ";}

//       for(auto it:v){
//         cout<<it<<" ";
//       }// iteration on the datatypes..

//     //{10,20,12,23}
//     v.erase(v.begin()+1);//{10,12,23}

//     //{10,20,12,23,35}
//     v.erase((v.begin()+2), v.begin()+4); //{10,20,35}  {start, end)  ***imp***   end is not included.


//      //Insert function
//      vector<int> v(2,100); //{100, 100}
//      v.insert(v.begin(), 300); //{300,100,100}
//      v.insert(v,begin()+1/*right after 300*/ ,2/*two two occurances of 10*/,10); //{300,10,10,100,100}

//      vector<int> copy {2,50}; //{50,50};
//      v.insert(v.begin(), copy.begin(), copy.end()); //{50.50,300,10,10,100,100};


//       //{10,20}
//       cout<<v.size();//-->(2)   will give the size of vector

//       v.pop_back(); // {10}

//       //v1--> {10,20}   v2--> {30,40}
//       v1.swap(v2); //v1--> {30,40}   v2--> {10,20}


//       v.clear(); //erases the entire vector

//       cout<<v.empty(); //if element presents then -->false
//                       //if element not present -->true


//       //LIST it gives front operations as well

//       void explainList()
//       list<int> ls;
//       ls.push_back(2); //{2}
//       ls.emplace_back(4); //{2,4}
//       ls.push_front(5);//{5,2,4}
//       ls.emplace_front(); //{2,4}

//       //rest functions same as vector
//       //begin , end rbegin , rend clear insert ,size, swap

//        void explainDeque()
//        dq.push_back(1); // {1}
//        dq.emplace_back(2); // {1, 2}
//        dq.push_front(4); // {4, 1, 2}
//        dq.emplace_front(3); // {3, 4, 1, 2}
//        dq.pop_back();//{3,4,1}
//        dq.pop_front(); //{4,1}
//        dq.back();
//        dq.front();

//        //rest functions same as vector
//        //begin , end ,rbegin , rend ,clear ,insert ,size , swap


//         //STACKING --> no indexing are there in stack
//         //TOP PUSH POP

//         void explainStack()

//         stack<int> st;
//         st.push(1); //{1}
//         st.push(2); //{2,1}
//         st.push(4); //{4,2,1 }
//         st.push(4); //{4,4,2,1}
//         st.emplace(5); //{5,4,4,2,1}

//         cout<<st.top(); //prits 5



/*------------------------------------------------------------------------------------------------------------------*/

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define ff first
// #define ss second
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cout<<endl;
// #define bl_ cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}

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
// bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// /*----------------------------------------------------------------------*/

// void solve() {
//         int n , m; cin >> n >> m;
//         string s, t; cin >> s >> t;
//         if (s == t) cout << "0" << endl;
//         else if ((t.substr(0, n).compare(s) == 0) && (t.substr(m - n, n).compare(s) != 0)) {
//                 cout << "1" << endl;
//         }
//         else if (t.substr(0, n).compare(s) != 0 && t.substr(m - n, n).compare(s) == 0) {
//                 cout << "2" << endl;
//         }
//         else if (t.substr(0, n) == s && t.substr(m - n, n) == s) {
//                 cout << "0" << endl;
//         }
//         else cout << "3" << endl;
// }
// int main()
// {
//         fastio()
// #ifndef ONLINE_JUDGE
//         freopen("error.txt", "w", stderr);
// #endif
//         /*---------------------------------------------*/
//         solve();
//         // int t ; cin >> t;
//         // t = 1;
//         // while (t--) solve();
//         return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;

// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define ff first
// #define ss second
// #define mid(s,e) (s+(e-s)/2)
// #define check cerr<<"~~~"<<endl;
// #define endl "\n"
// #define bl cout<<endl;
// #define bl_ cerr<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define sumarr(vec)  accumulate(all(vec),0)
// int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}

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
// bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// /*----------------------------------------------------------------------*/

// void solve() {
//         int n ; cin >> n;
//         string s = to_string(n);
//         debug(s)
//         int c = 0;
//         for (int i = 1; i < (int)s.length(); ++i)
//         {
//                 debug(s[i - 1])
//                 debug(s[i])
//                 if (s[i - 1] > s[i]) {
//                         ++c;
//                 }
//         }
//         debug(c)
//         bl_
//         if (c + 1 == (int) s.length())cout << "Yes" << endl;
//         else cout << "No" << endl;
// }

// int main()
// {
//         fastio()
// #ifndef ONLINE_JUDGE
//         freopen("error.txt", "w", stderr);
// #endif
//         /*---------------------------------------------*/
//         solve();
//         // int t ; cin >> t;
//         // t = 1;
//         // while (t--) solve();
//         return 0;
// }
/*------------------------------------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<int> vi;

const ll mod  = 1e9 + 7;
const ll maxn = 1e5 + 1;
const ll inf  = 5e18 ;
const ll minf = -inf ;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ff first
#define ss second
#define mid(s,e) (s+(e-s)/2)
#define check cerr<<"~~~"<<endl;
#define endl "\n"
#define bl cout<<endl;
#define bl_ cerr<<endl;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define mine(vec) *min_element(all(vec))
#define maxe(vec) *max_element(all(vec))
#define sumarr(vec)  accumulate(all(vec),0)
int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}

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
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
/*----------------------------------------------------------------------*/

void solve() {
        int n ; cin >> n;

}

int main()
{
        fastio()
#ifndef ONLINE_JUDGE
        freopen("error.txt", "w", stderr);
#endif
        /*---------------------------------------------*/

        int t ; cin >> t;
        t = 1;
        while (t--) solve();


        return 0;
}
