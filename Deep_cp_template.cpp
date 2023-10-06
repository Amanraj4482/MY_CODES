#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
namespace __gnu_pbds {
typedef tree<int,
        null_type,
        less_equal<int>,
        rb_tree_tag,
        tree_order_statistics_node_update> ordered_set;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
}
using namespace __gnu_pbds;


void Insert(ordered_set &s, int x) { //this function inserts one more occurrence of (x) into the set.

        s.insert(x);

}


bool Exist(ordered_set &s, int x) { //this function checks weather the value (x) exists in the set or not.

        if ((s.upper_bound(x)) == s.end()) {
                return 0;
        }
        return ((*s.upper_bound(x)) == x);

}


void Erase(ordered_set &s, int x) { //this function erases one occurrence of the value (x).

        if (Exist(s, x)) {
                s.erase(s.upper_bound(x));
        }

}


int FirstIdx(ordered_set &s, int x) { //this function returns the first index of the value (x)..(0 indexing).

        if (!Exist(s, x)) {
                return -1;
        }
        return (s.order_of_key(x));

}


int Value(ordered_set &s, int idx) { //this function returns the value at the index (idx)..(0 indexing).

        return (*s.find_by_order(idx));

}


int LastIdx(ordered_set &s, int x) { //this function returns the last index of the value (x)..(0 indexing).

        if (!Exist(s, x)) {
                return -1;
        }
        if (Value(s, (int)s.size() - 1) == x) {
                return (int)(s.size()) - 1;
        }
        return FirstIdx(s, *s.lower_bound(x)) - 1;

}


int Count(ordered_set &s, int x) { //this function returns the number of occurrences of the value (x).

        if (!Exist(s, x)) {
                return 0;
        }
        return LastIdx(s, x) - FirstIdx(s, x) + 1;

}


void Clear(ordered_set &s) { //this function clears all the elements from the set.

        s.clear();

}


int Size(ordered_set &s) { //this function returns the size of the set.

        return (int)(s.size());

}
#define debug(x) cout<<"num-> "<<x<<endl;
#define int long long
#define fastio()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define vecint(vec,n) vector<int>vec(n);
#define print(vec) for(auto it:vec){cout<<it<<" ";}cout<<endl;
#define loop(i,a,b) for(int i = a; i<b; i++)
#define rloop(i,a,b) for(int i = a; i >= b; i--)
#define all(vec)  vec.begin(),vec.end()
#define f first
#define s second
#define lb(vec, k) lower_bound(all(vec), k)
#define ub(vec, k) upper_bound(all(vec), k)
#define sortas(vec) sort(all(vec))
#define sortdec(vec) sort(all(vec), greater<int>())
#define mine(vec) *min_element(all(vec))
#define maxe(vec) *max_element(all(vec))
#define cntBit(n) __builtin_popcountll(n)
#define sumarr(vec)  accumulate(all(vec),0)
#define takearr(vec, n) loop(i, 0, n ){ cin >> vec[i];}
#define parr(vec,n)  loop(i,0,n){cout<<vec[i]<<" ";}
#define yes  cout<<"YES"<<endl;
#define no   cout<<"NO"<<endl;
#define ump   unordered_map<int,int>ump;
#define ust   unordered_set<int>ust;
const int m = 1e9 + 7;
const int Ns = 1e7 + 1;
const int md = 998244353;
const int MOD = 1e9 + 7;

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int  mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int  mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int BinPow(int a, int b) {int ans = 1; while (b) {if (b & 1) {ans  = (ans * a);} b >>= 1; a = (a * a);} return ans;}
int BinPowmod(int a, int b, int mod) {int ans = 1; while (b) {if (b & 1) {ans  = (ans * a) % mod;} b >>= 1; a = (a * a) % mod;} return ans % mod;}
int MI(int i) {if (i == 1) return 1; return (MOD - ((MOD / i) * MI(MOD % i)) % MOD) % MOD;}
int gcd(int a, int b) {return b ? gcd(b, a % b) : a;}
int lcm(int a, int b) {return (a * b) % m / gcd(a, b);}
bool isPerfectSquare(int x) {if (x >= 0) {int sr = sqrt(x); return (sr * sr == x);} return false;}
bool isPowerOfTwo(int n) {if (n == 0)return false; return (ceil(log2(n)) == floor(log2(n)));} // return x && ~(x&(x-1))
int  binstringtoint(string s) {return stoi(s, 0, 2);}
bool decsort(vector<int>vec) {for (int i = 1; i < vec.size(); i++) {if (vec[i] > vec[i - 1])return false;} return true;}
bool asssort(vector<int>vec) {for (int i = 1; i < vec.size(); i++) {if (vec[i] < vec[i - 1])return false;} return true;}
int digit_sum(int n) {int ret = 0; while (n) {ret += n % 10; n /= 10;} return ret;}
int base10convert(int n, int b) {int r = 0; int ap = 0; int k = 1; while (n > 0) {r = n % 9; ap = ap + (r * k); n = n / 9; k *= 10;} return ap;}
string sbase10convert(int n, int b) {int r = 0; int ap = 0; int k = 1; while (n > 0) {r = n % 9; ap = ap + (r * k); n = n / 9; k *= 10;} return to_string(ap);}
string decToHexa(int n)
{
        string ans = "";

        while (n != 0) {
                int rem = 0;
                char ch;
                rem = n % 16;

                // check if temp < 10
                if (rem < 10) {
                        ch = rem + 48;
                }
                else {
                        ch = rem + 55;
                }
                ans += ch;
                n = n / 16;
        }    int i = 0, j = ans.size() - 1;
        while (i <= j)
        {
                swap(ans[i], ans[j]);
                i++;
                j--;
        }
        return ans;
}
string decToBinary(int n)
{
        // array to store binary number
        string ans = "";
        int binaryNum[32];

        // counter for binary array
        int i = 0;
        while (n > 0) {

                // storing remainder in binary array
                binaryNum[i] = n % 2;
                n = n / 2;
                i++;
        }

        // printing binary array in reverse order
        for (int j = i - 1; j >= 0; j--)
                ans += to_string(binaryNum[j]);

        return ans;
}
bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i <= j) {
                if (s[i] != s[j])return false;
                i++;
                j--;
        }
        return true;
}
const int N = 1000000;


ll factorialNumInverse[N + 1];

ll naturalNumInverse[N + 1];


ll fact[N + 1];


void InverseofNumber(ll p )
{
        naturalNumInverse[0] = naturalNumInverse[1] = 1;
        for (int i = 2; i <= N; i++)
                naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
}

void InverseofFactorial(ll p)
{
        factorialNumInverse[0] = factorialNumInverse[1] = 1;


        for (int i = 2; i <= N; i++)
                factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
}


void factorial(ll p)
{
        fact[0] = 1;


        for (int i = 1; i <= N; i++) {
                fact[i] = (fact[i - 1] * i) % p;
        }
}


ll ncr(ll N, ll R, ll p)
{


        ll ans = ((fact[N] * factorialNumInverse[R])
                  % p * factorialNumInverse[N - R])
                 % p;
        return ans;
}
bool check(string s, int n)
{
        stack<char>st;
        for (int i = 0; i < n; i++) {
                if (st.empty()) {
                        st.push(s[i]);
                }
                else if (st.top() == '(' && s[i] == ')') {

                        st.pop();
                }
                else {
                        st.push(s[i]);
                }
        }
        if (st.empty()) {

                return true;
        }
        return false;
}
bool isper(vector<int>vec) {
        for (int i = 0; i < vec.size(); i++) {
                if (vec[i] != i + 1)return false;
        }
        return true;
}
int longestString(int x, int y, int z) {
        int spacea = x - 1;
        int spaceb = y - 1;
        if (x <= y) {
                int ans = 0;
                ans += (2 * x + 2 * (x + 1));
                ans += 2 * z;
                return ans;
        }
        else {
                int ans = 0;
                ans += (2 * z);
                ans += (2 * (y + 1));
                ans += (2 * y);
                return ans;
        }
}
bool isprime(int n) {
        if (n == 1)return false;
        for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0)return false;
        }
        return true;
}
int LargeNumbers(int item, vector<int>& vec) {
        int l = 0;
        int r = vec.size() - 1;
        int mid = 0;
        while (l < r) {
                mid = l + (r - l) / 2;
                if (vec[mid] > item) {
                        r = mid;
                }
                else {
                        l = mid + 1;
                }
        }
        if (l == r && item > vec[l]) {
                return 0;
        }
        return vec.size() - l;
}

void DeleteItem(vector<int>& vec, int item) {
        int index = lower_bound(vec.begin(), vec.end(), item) - vec.begin();
        vec.erase(vec.begin() + index);
}

vector<int> CountLarge(vector<int>& vec) {

        vector<int> sortedvec = vec;
        sort(sortedvec.begin(), sortedvec.end());


        for (int i = 0; i < vec.size(); i++) {
                DeleteItem(sortedvec, vec[i]);
                vec[i] = LargeNumbers(vec[i], sortedvec);
        }
        return vec;
}
double al(double x, double y)
{

        return 1.0 * sqrt(pow(x, 2) - (pow(y, 2) / 4));
}


double areacal(double x, double y)
{
        return (1 * x * y) / 2.0;
}

bool sortpair( pair<int, int>pa, pair<int, int>pb) {
        if (pa.first > pb.first)return true;
        else if (pa.first < pb.first)return false;
        return pa.second < pb.second;

}

void solve() {
        string s, s2;
        cin >> s >> s2;
        bool flag = false;
        for (int i = 0; i < s.size(); i++) {
                if (s[i] == s2[i] and s[i] == '0') {
                        if (s[i + 1] == s2[i + 1] and s2[i + 1] == '1') {
                                flag = true;
                                break;
                        }
                }
        }
        if (flag) {
                yes;
                return;
        }
        no;

}

signed main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     //freopen("error.txt","w", stderr);
// #endif
        fastio();

        InverseofNumber(100007);
        InverseofFactorial(MOD);
        factorial(MOD);

        int t;
        cin >> t;

        while (t--) {

                solve();

        }




        return 0;
}
