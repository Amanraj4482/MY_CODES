// REMOVE ALL ADJACENT DUPLICATES IN STRING
// INPUT->"abbaca"
// output->"ca"
// explanation-> in "aabbca" we could remove "bb" since the letters are adjacent and equal and this is the only possible move.
// The result of this move is that the string is "aaca", of which only "aa" is possible , os the final string is "ca"

// sol-> answer ka last char = string k current char s
// popback else pushback

// #include <bits/stdc++.h>
// using namespace std;
// string removeDuplicate(string str)
// {
//     string ans = " ";
//     int i = 0;
//     while (i < str.length())
//     {
//             if (ans.length()> 0 && (ans[ans.length() - 1] == str[i]))
//             {
//                 ans.pop_back();
//             }
//             else
//             {
//                 ans.push_back(str[i]);
//             }
//         i++;
//     }
//     return ans;
// }
// int main()
// {
//     string str = "abbaca";
//     cout<<removeDuplicate(str)<<endl; //ca
//     return 0;
// }
// tc =O(n)

// REMOVE ALL OCCURANCE OF A SUBSTRING
// by the method of find and erase
//  #include<bits/stdc++.h>
//  using namespace std;
//      string removeOcc(string s, string part){
//          int pos=s.find(part); //finding the index where the part is started-> so it return the valid index or no postion i.e npos
//          while(pos!=string::npos){//till we are getting the valid index
//              s.erase(pos,part.length());//then we will erase that part the starting index of the part(starting index of the string which is to be removed) ,length of the string 2ns parameter
//              pos=s.find(part);// updating
//          }
//          return s;
//      }
//  int main(){
//      string s="daabcbaabcbc";
//      string part ="abc";
//      cout<<removeOcc(s,part);
//      return 0;
//  }

// homework->implement erase and find function



//************** VALID PALINDROME OR NOT IF NOT THEN MAKE IT BY REMOVING THE SINGLE CHAR
// by two pointer approach

// #include <bits/stdc++.h>
// using namespace std;
// bool checkPalindrome(string s, int i, int j)
// {
//     while (i <= j)
//     {
//         if (s[i] != s[j])

//             return false;
//             i++;
//             j--;

//     }
//     return true;
// }
// bool validPalindrome(string s)
// {
//     int i = 0, j = s.length() - 1;
//     while (i <= j)
//     {
//         if (s[i] != s[j])
//         {
//             // ek baar i ko remove ek baar j ko remove
//             return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
//         }
//         else
//         {
//             // s[i]==s[j]-> no removal needed
//             i++, j--;
//         }
//     }
//     return true;
// }
// int main()
// {
//     string s = "abbaa";
//     cout << validPalindrome(s) << endl;
//     return 0;
// }


//**********MINIMUM TIME DIFFERENCE
//minimum minute difference
// #include<bits/stdc++.h>
// using namespace std;
//     int findMinDifference(vector<string>& timePoints){
//         //step 1 - convert the time string into minutes integer value
//         vector<int> minutes;
//         for(int i=0; i<timePoints.size();i++){
//             string curr = timePoints[i];
//             int hours=stoi(curr.substr(0,2));//string to integers
//             int min =stoi(curr.substr(3,2));
//             int totalMinutes=hours +60 +min;
//             minutes.push_back(totalMinutes);
//         }
//         //step 2 - sorting
//         sort(minutes.begin(),minutes.end());
//         //step 3- difference and calculate min diff
//         int mini=INT_MAX;
//         int n=minutes.size();
//         for(int i=0;i<n-1;i++){
//             int diff= minutes [i+1]-minutes [i];
//             mini=min(mini,diff);
//         }
//         //something is missing
//         int lastDiff1= (minutes[0]+1440)-minutes[n-1];
//         int lastDiff2 = minutes[n-1]-minutes[0];
//         int lastDiff =min(lastDiff1,lastDiff2);
//              mini=min(mini,lastDiff);
//     return mini;
//     }

// int main(){
//     vector<string> time={"10:00","00:00"};
//     cout<<findMinDifference(time);
//     return 0;
// }



//************* COUNT   PALINDROME SUBSTRINGS
//number of palindromic substrings
// same block if am handling the odd string
// and if different block then i am handling the even length string
//for odd = 4, and for even =2

// #include<bits/stdc++.h>
// using namespace std;
//     int expandAroundIndex(string s, int left, int right){
//         int count=0;
//         while(left>=0&& right<s.length()&& s[left]==s[right]){
//             count++;
//             left--;
//             right++;
//         }
//         return count;
//     }
//     int countSubstring(string s){
//         int count =0;
//         int n=s.length();
//         for(int center=0;center<n; center++){
//             //odd
//             int oddAns=expandAroundIndex(s,center ,center);
//             count=count+oddAns;
//             // even
//             int evenAns=expandAroundIndex(s,center,center+1);
//             count = count+ evenAns;
//         }
//         return count;
//     }
// int main(){
//     string s ="noon";
//     cout<<countSubstring(s)<<endl;
//     return 0;
// }


//homework->>
//valid anagram
// reverse only letter
// longest common prefix
// reverse vowels of a string
// isomorphic string
// re-organise string
// group anagrams
// longest palindromic substring
// find index of first occurance in a string
// string to integer
// sting compression
// integer to roman
// zigzag conversion



// largest number
// custom sort string
// verify alien dictionary
// longest word in dictionary through deleting
