//CHAR ARRAYS
//1 byte of size 
//-128 to 127-> 2^8-1

//cin-> keywords reads until it gets space , tab, newline character , enter



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    // char name[100];
    // cout<<"Enter your name"<<endl;
    // cin>>name;
    // cout<<"Aapka name "<<name<< " hai"<<endl;

    // char name[100];
    // cin >>name;
    // for(int i=0; i<9; i++){
    //     cout<<"index: "<< i << " value:"<< name[i]<<endl;
    // }
// index: 0 value:a
// index: 1 value:m
// index: 2 value:a
// index: 3 value:n
// index: 4 value:j
// index: 5 value:a
// index: 6 value:a
// index: 7 value:n
// index: 8 value:

    // int value = (int)name[8];
    // cout<<"value is "<<value <<endl;
    // // value is //0

// char arr[100];
// // cin>>arr;
// //cin.getline(arr,50); /**********************************/
// cout<<arr;

//     return 0;
// }


// length of a string

// #include<bits/stdc++.h>
// using namespace std;
//     int getLength(char name[]){
//         int length =0;
//         int i=0;
//         while(name[i]!='\0'){
//             length++;
//             i++;
//         }
//         return length;
//     }
// int main(){
//     char name[100];
//     cin>>name;
//     cout<<"length is:"<<getLength(name)<<endl;
//     cout<<strlen(name)<<endl;
//     //length is:8
//     return 0;
// }

    ///REVERSE A STRING
    //TWO POINTER APPROACH

    // #include<bits/stdc++.h>
    // using namespace std;
    // int getLength(char name[]){
    //     int length =0;
    //     int i=0;
    //     while(name[i]!='\0'){
    //         length++;
    //         i++;
    //     }
    //     return length;
    // }
    // int reverseCharArray(char name[]){
    //   int  i=0 ,n=getLength(name), j=n-1;
    //     while(i<=j){
    //         swap(name[i],name[j]);
    //             i++; 
    //             j--;
            
    //     }
    //     return 0;
    // }
    // int main(){
    //     char name[100];
    //     cin>>name;
    //     cout<<"initially->"<< name<<endl;
    //     reverseCharArray(name);
    //     cout<<"after ->"<<name<<endl;
    //     return 0;
   // }
// initially->amanjaan
// after ->naajnama


//  REPLACES ALL THE SPACES WITH @ SYMBOL
// #include<bits/stdc++.h>
// using namespace std;
//     void replace(char ch[]){
//         int i=0; 
//         int n=strlen(ch);
//         while(i<n){
//             if(ch[i]== ' '){
//                 ch[i]='@';
//             }
//                 i++;
//         }
//     }
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     replace(ch);
//     cout<<ch;
//     return 0;
// }
//amanjaan@is@mhy@name



//  PALINDROME  OF STRINGS
// #include<bits/stdc++.h>
// using namespace std;
//     bool compare(char ch[]){
//         int i=0 , j=strlen(ch)-1; 
//         while(i<=j){
//             if(ch[i]!=ch[j])
//                return false;
//                else i++, j--;
//     }
//         return 1;
//     }
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     if(compare(ch)){
//         cout<<"yes"<<endl;
//     }
//     else cout<<"No"<<endl;
//     return 0;
// }
    
//TC O(N) AND SPACE o(n)


    //CONVERT INTO UPPER CASE ANS SMALLER CASE
    // 'a' -> 97-'a' +'A'   
//      #include<bits/stdc++.h>
//     using namespace std;
//         void changeTo(char ch[]){
//             int i=0, j=strlen(ch)-1;
//             while(i<=j){
//                 ch[i]=ch[i]-'a'+,khlkh.uylb,mn'A'; //for smaller to bigger
//                 ch[i]=ch[i]-'A'+'a'; //for bigger to smaller
//                 i++;
//             }

//         }
//     int main(){
//         char ch[100];
//         cin.getline(ch,100);
//         changeTo(ch);
//         cout<<ch<<endl;
//         return 0;
//  }
//tc O(n)
//fot the ignorance if(ch[i]>='a) && ch[i]<='z') for Babbar to BABBAR






//****************strings*************
//strings is a data type -> dynamic character array
// array is a data structure
//only we will use the string not char 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str;
//     getline(cin,str);
//     cout<<str<<endl;
//     //length of the string
//     cout<<"length "<<str.length()<<endl;
//     cout<<"isEmpty "<<str.empty()<<endl;
//     str.push_back('A'); 
//     cout<<str<<endl;
//     str.pop_back();
//     cout<<str<<endl;
//     cout<<str.substr(0,6)<<endl;

//     string a="lover";
//     string b="love";
      
//       if(a.compare(b)==0){
//         cout<< "a and b are exactly same strings"<<endl;
//       }
//       else {
//         cout<<"a and b are not same"<<endl;
//       }


//     return 0;
// }


//function for string comparison
// #include<bits/stdc++.h>
// using namespace std;
// bool compare(string a , string b){
//     if(a.length()!=b.length()){
//         return false;
//     }
//         for(int i=0; a.length(); i++){
//             if(a[i]!=b[i]){
//                 return false;
//             }
//     }
//     return true;
// }
// int main(){
//     string x="cbda";
//     string y ="bcda";

//     cout<<x.compare(y)<<endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// //     string sentence="hello jee kaise ho saare";
// //   //  string target="hello";
// //   string target="jee";
// //    // cout<<sentence.find(target)<<endl;// ->target was hello  ...got at zero index 
// //     cout<<sentence.find(target)<<endl;// -> target was jee so it returns the index 6
// // //npos -no matches were found in the sting 
// string str="this is the first message";
// string word="Babbar";

// // str.replace(0,4,word);//0 index s 4 char hatake word m jo v h replace krdo
// str.erase(10,8); //start with the 10th index and then erase all afterwards
// cout<<str<<endl;
//     return 0;
// 
