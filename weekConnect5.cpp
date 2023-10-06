//sort function custum comparator

// #include<bits/stdc++.h>
// using namespace std;
//     // bool cmp(char first ,char second){
//     //     return first >second ; 
//     // }//->sort this order in decending order

//     bool compare(int a, int b ){
//         return a>b; //decending order
//     }
// int main(){
//     // string s = "babbar";
//     // //lexographical order -> sort all string into-> abcdefghijklmnopqrstuvwxyz
//     // sort(s.begin(),s.end(),cmp);
//     // cout<<s<<endl;

//     vector<int>v{54,2,6,8,4,3,1};
//     sort(v.begin(),v.end(),compare);
//     for(auto i: v){
//         cout<<i<<endl;
//     }
//     return 0;
// }



//MAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    //creation of map
    map<int,char> mymap; 
    mymap[0]='a';
    mymap[1]='b';
    mymap[25]='z';
    cout<<"yourmap->"<<mymap[25]<<endl;
    return 0;
}