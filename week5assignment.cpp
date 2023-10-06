// *************************VALID ANAGRAM-> An Anagram is word or pharase formed by rearraging the letter of a different word or phrase,typically using all the original letters exactly once
// method 1 -sorting
// ascii of a -97 and A is 65
// method 1- brute force by sorting
//  #include<bits/stdc++.h>
//  using namespace std;
//      bool isAnagram(string s ,int m, string t,int n){
//          if(s.length()!=t.length()) return false;
//          sort(s.begin(),s.end());
//          sort(t.begin(),t.end());
//          for(int i=0; i<m ; i++){
//              if(s[i]!=t[i]) return false;
//          }
//          return true;
//      }
//  int main(){
//     string s="anagram";//aaagmnr
//     int n=s.length();
//     string t="nagaram";//aaagmnr
//     int m=t.length();
//     isAnagram(s ,m, t,n);
//     if(isAnagram(s ,m, t,n)==1){
//      cout<<"yes"<<endl;
//     }
//     else{
//      cout<<"no"<<endl;
//     }
//      return 0;
//  }

// method 2->by counting
// no of respective charcters in 't' string should be same to that of string
// frequcy table - a- 3 , g -1 , m-1 , r -1
// total sum =7 as same as the frequency table of s
// if the ftble of both are same then both are valid anagram of each other

// hashing or making frequency table
// making a array of 256 and incresing the count of it
// hash->frequency table-256     char ->1 byte -> ascii -> bit->2^8
// #include <bits/stdc++.h>
// using namespace std;
// bool isAnagram(string s, string t)
// {
//     int freqTable[256] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         /*hashing table*/ freqTable[s[i]]++;
//     }
//     for (int i = 0; i < t.size(); i++)
//     {
//         freqTable[t[i]]--;
//     }

//     for (int i = 0; i < 256; i++)
//     {
//         if (freqTable[i]!= 0)
//             return false;
//     }
//     return true;
// }
// int main()
// {
// string s="rat";
// string t="car";
// if(isAnagram(s,t)) cout<<"yes";
// else cout<<"No";
//     return 0;
// }

// *************************REVERSE ONLY LETTERS
// All the characters that are not English letters remain in the same position
// All the English letters (lowercase or uppercasae) should be reversed
// method -> two pointer approach with some rules
//  character mapping-> a-z[97-122] and A-Z[65-90]
// if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))-> then this is alphabet
// stl in c++-> isalpha(ch)-> returns true or false

// #include <bits/stdc++.h>
// using namespace std;
// string reverseString(string s)
// {
//     int l = 0, h = s.length() - 1;
//     while (l < h)
//     {
//         if (isalpha(s[l]) && isalpha(s[h]))
//         {
//             swap(s[l], s[h]);
//             l++;
//             h--;
//         }
//         else if (!isalpha(s[l]))
//         {
//             l++;
//         }
//         else
//         {
//             h--;
//         }
//     }
//     return s;
// }
// int main()
// {
//     string s = "Test1ng-Leet=codeQ!";
//         // ans ->  Qedo1ct-eeLg=ntseT!
//         cout<<reverseString(s)<<endl;
//     return 0;
// }
// with the complexity of O(n)

// *****************************LONGEST COMMON PREFIX
// array of strings
// #include <bits/stdc++.h>
// using namespace std;
// string longestCommonPrefix(vector<string> &s)
// {   string ans;
//     int i = 0;
//     while (true)
//     {
//         char curr_ch = 0;
//         for (auto a : s)
//         {
//             if(i>=a.size()){ i should be greater than any size of string size
//                 //out of bound check

//                 curr_ch=0;
//                 break;
//             }
//             // just started
//             if (curr_ch == 0)
//             { // uninitilised
//                 curr_ch = a[i];
//             }
//             else if (a[i] != curr_ch)
//             { // comparing the first character of first string to all the first character of all string
//                 curr_ch = 0;
//                 break;
//             }
//         }
//         if (curr_ch == 0)
//         {
//             break;
//         }
//         ans.push_back(curr_ch);
//         i++;
//     }
//     return ans;
// }
// int main()
// {
//   vector<string> s={"flower", "flow", "flight"};
//     cout<<longestCommonPrefix(s)<<endl;
//     return 0;
// }



// REVERSE VOWEL OF A STRING
// if the vowels are present then reverse it otherwise aage badh jao
// two pointer approach
// #include<bits/stdc++.h>
// using namespace std;
//      bool isVowel(char ch){
//         ch=tolower(ch);
//         return ch=='a' || ch=='e'|| ch=='i' || ch=='o'|| ch=='u';
//         //if the ch is equal to any of the vowel then it is vowel
//      }
//     string reverseVowels(string s){
//         int l=0,h=s.size()-1;
//         while(l<h){
//             if(isVowel(s[l])&&isVowel(s[h])){
//                 swap(s[l],s[h]);
//                 l++;
//                 h--;
//             }
//             else if(isVowel(s[l])==0){//s[l] is not vowel then it is equal to zero
//                 l++;
//             }
//             else{
//                 //s[h] is not vowel
//                 h--;
//             }
//         }
//         return s;
//     }
// int main(){
//    string s="leetcode";
//    cout<<reverseVowels(s);/*leotcede*/
//     return 0;
// }


//  ISOMORPHIC STRING
// two strings s and t are isomorphic if the characters in s can be replaced to get t
// all occurrences of a chracter must be replaced with another character while preserving the order of characters .No two characters
// may map to the same character , but a character may map to itself
// egg is a isomorphic of add
// make a hash map and iterate s =paper t=title -> /*hash(s[i]=t[i])*/ the p is mapped with t ans similarly
// & b[i] ==1  is character of b is mapped ? check so that is dont get doubled map

// if successfully mapped hash of s then i can make 'add' from 'egg'
// #include<bits/stdc++.h>
// using namespace std;
//     bool isIsomorphic(string s , string t){
//         int hash[256]={0}; //all initilised with 0 & mapping of each char of language 's' to lang 't'
//         bool istCharMapped[256]={0};//stores if t[i] char already mapped with s[i].
//         for(int i=0;i<s.size();i++){
//             if(hash[s[i]]==0&&istCharMapped[t[i]]==0){//if not mapped -> hash of s of i  && t[i] is not mapped or previously is maped? i.e equal to zero
//             hash[s[i]]=t[i]; //whatever the position of t[i] will be mapped to s[i]
//             istCharMapped[t[i]]=true; //mark true the array of tCharMapped
//             }

//             cout<<"Map :"<<s[i]<<"-"<<t[i]<<endl;
//         }
//         //conversion process
//         for(int i=0; i<s.size();i++){
//             if(char(hash[s[i]])!=t[i]){
//                 return false;
//             }
//         }
//         return true;
//     }
// int main(){
//     string s = "sun";
//     string t = "run";
//    if(isIsomorphic(s,t)==1) cout<<"yes it is.."<<endl;
//    else cout<<"No :)"<<endl;
//     return 0;
// }
// Map :s-r
// Map :u-u
// Map :n-n
// yes it is..




// REORGANISE STRING
// given s string s, rearrange the characters of s so that any two adjacent characters are not the same.
// return any possible rearranged of s or return
// can be solved by priority queue

// method 2 - greedy approach
// finding the most occurent character and fit it non adjacently
// fill the rest character
// convert hash
// when I am placing must occurant character it should be placed in one go
// if not psble then return null
// place other character with 1 index gap

// a-z[097-122]
// maping a -> 0   and z -> 25

// #include<bits/stdc++.h>
// using namespace std;
//     string reoraganiseString (string s){
//         int hash[25]={0};
//         for(int i=0; i<s.size();i++){
//             hash[s[i]-'a']++;
//         }
//         //find the most frequent char
//         char max_freq_char;
//         int max_freq =INT_MIN;
//         for(int i=0 ; i<26;i++){
//             if(hash[i]>max_freq){
//                 max_freq=hash[i];
//                 max_freq_char=i+'a';
//             }
//         }
//         int index='0';
//         while(max_freq>0 && index<s.size()){
//             s[index]=max_freq_char;
//             max_freq--;
//             index+=2;
//         }
//         if(max_freq != 0){
//             return "";
//         }
//         hash[max_freq_char -'a']=0;
//         //lets place the rest of the characters/
//         for(int i=0 ; i<26 ;i++){
//             while(hash[i]>0){
//                 index=index>=s.size() ? 1: index;  //if index goes out of bound then bring index at position 1
//                 s[index]=i+'a';
//                 hash[i]--;
//                 index+=2;
//             }
//         }
//         return s;
//     }
// int main(){
//    string s="aab";
//    cout<<reoraganiseString(s);
//     return 0;
// }


// GROUP ANAGRAMS
// given an array of string str group the anagrms together you can return the answer in any order
// identify anagrams wrt each string
// method 1 -> if(anagram )-> sort A , sort B  (A=B)
// map -> aet-> eat , tea, ate           ant-> tan, nat          abt-> bat
// entries will be grouped with the help of map
// first sort then make entry  i.e  string and vector of string
// where key is string and its value is vector
// in map there first called key and the second called value

// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<string >>groupAnagrams(vector<string> &strs ) {
// 	map<string, vector<string> >map;
// 	for (auto str : strs) {
// 		string s = str; //storing in s and then sorting it
// 		sort(str.begin() , str.end());
// 		map[s].push_back(str);
// 	}
// 	// returning in vector of vector
// 	vector<vector<string>>ans;
// 	for (auto it = map.begin() ; it != map.end(); it++) { //iterating the map
// 		ans.push_back(it->second);//second is called value in the map
// 	}
// 	return ans;
// }
// int main() {
// 	vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
// 	for (auto c : strs) {
// 		cout << c << " ";
// 	}

// 	return 0;
// }
// eat tea tan ate nat bat


//LONGEST PALINDROMIC STRING
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

// bool isPalindrome(string&s, int i, int j) {
// 	while (i < j) {
// 		if (s[i] != s[j]) {
// 			return false;
// 		}
// 		i++, j--;
// 	}
// 	return true;
// }
// string longestPalindromic(string s, int n) {
// 	//creating a empty string anss
// 	string ans = "";
// 	//using two for loop for the extraction of substing by
// 	//i(0)->n  and other loop   j(i)->n
// 	for (int i = 0; i < n; i++) {
// 		for (int j = i; i < n; j++) {
// 			if (isPalindrome(s, i, j)) { //checking the substring isPalindrome or not
// 				//string s , start, end
// 				string t = s.substr(i, j - i + 1);
// 				ans = t.size() > ans.size() ? t : ans;
// 			}
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

// 	string s = "babad";
// 	int n = s.size();
// 	cerr << longestPalindromic(s, n);

// 	return 0;
// }


//FIND THE INDEX OF THE FIRST OCCURANCE
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

// int str(string haystack, string needle) {
// 	int n = haystack.size();
// 	int m = needle.size();
// 	for (int i = 0; i <= n - m; i++) {
// 		for (int j = 0; j < m; j++) {
// 			if (needle[j] != haystack[i + j]) {
// 				break;
// 			}
// 			if (j == m - 1) {
// 				return i;
// 			}
// 		}
// 	}
// 	return -1;
// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	string needle = "ans";
// 	string haystack = "afuckansfuck";
// 	cout << str(haystack, needle);//so the ans is the 5 index
// 	return 0;
// }



//CONVERT NUMBERS TO INTEGERS
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

// string intToRoman(int num) {
// 	string romanSymbols[ ] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
// 	int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
// //creating the empty string for storing the ans
// 	string ans = "";
// 	for (int i = 0; i < 13; i++) {
// 		while (num >= values[i]) {
// 			ans += romanSymbols[i];
// 			num -= values[i];
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
// 	int num;
// 	cin >> num;
// 	cerr << intToRoman(num);
// 	return 0;
// }


//ZIG-ZAG CONVERSION
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

//theory->
// PAYPALISHIRING->    P   A   H   N
//                     A P L S I I G
//                     Y   I   R
//and then read line by line -> "PAHNAPLISIIGYIR"
//string and given the no of rows

// string convert(string s, int numRow) {
// 	if (numRow == 1) return s;
// 	vector<string>zigzag(numRow);//with the size of numRow
// 	int i = 0, row = 0;	//current iteration on original string
// 	bool direction = 1;
// 	while (true) {
// 		if (direction) {
// 			while (row < numRow && i < s.size()) {
// 				zigzag[row++].push_back(s[i++]);
// 			}
// 			row = numRow - 2;
// 		}
// 		else {
// 			while (row >= 0 && i < s.size()) { //goes up till row becomes equal to 0
// 				zigzag[row--].push_back(s[i++]);//decreasing the row number because will go up to down till num-1
// 			}
// 			row = 1; //set row =1
// 		}
// 		if (i >= s.size()) break; //code to coming out of the original while loop
// 		direction = !direction;
// 	}
// 	string ans = "";
// 	for (int i = 0; i < zigzag.size(); i++) {
// 		ans += zigzag[i]; //concatinating the ans;
// 		cerr << zigzag[i];

// 	}
// 	return ans;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	string s = "ABCD";
// 	int numRow = 3;
// 	convert(s, numRow);
// 	return 0;
// }

//LARGEST NUMBER
//arrange the given no such that we can get the largest nubmer by sorting
//	1-finding all the permutations and then comparing all finding the max no
//n factorial complexity of 1st method
//	2nd~method
//

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

// static bool mycomp(string a, string b) {
// 	string t1 = a + b;
// 	string t2 = b + a;
// 	return t1 > t2; //desending order
// }//while comparing with the two strings whichever will be the larger keep it at the first place
// string largestNumber(vector<int>& nums) {
// 	vector<string> a;
// 	for (auto n : nums) {
// 		a.push_back(to_string(n));
// 	}
// 	//lets sort in desending order with custom comparator
// 	sort(a.begin(), a.end(), mycomp);
// 	debug(a)
// 	if (a[0] == "0") return "0";
// 	string ans = "";
// 	// for (int i = a.size() - 1; i >= 0; i--) {
// 	// 	ans += a[i];
// 	// 	cout << a[i];
// 	// }
// 	for (auto str : a) {
// 		ans += str;
// 		cerr << str;
// 	}
// 	return ans;
// }
// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif
// 	vector<int>s {1, 2, 3, 4};
// 	vector<int>d {0, 0, 0};
// 	cerr << largestNumber(d);//returing 0 at d vector
// 	return 0;
// }