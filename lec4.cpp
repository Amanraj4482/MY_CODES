// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n=6;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+j+1<<" ";
//     }
//     cout<<endl;}
//     return 0;
// }
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// 6 7 8 9 10 11

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         // decreasing spaces
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // numbers
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << j + i + 1;
//         }
//         //    1
//         //   23
//         //  345
//         // 4567
//         // reverse increasing counting
//         int s = 2 * i;
//         for (int j = 0; j < i; j++)
//         {
//             cout << s, s--;
//         }

//         cout << endl;
//     }

//     return 0;
// }
//    1
//   232
//  34543
// 4567654

// pending code
//  #include <bits/stdc++.h>
//  using namespace std;

// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         // decreasing spaces
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // increasing pyramid
//         int j;
//         int start = j + 1;
//         for (j = 0; j < 2 * i + 1; j++)
//         { // first i or last i
//             if (j == 0 || j == n)
//                 if (j % 2 == 0)
//                 { /*even*/
//                     cout << start;
//                     start++;
//                 }
//                 else
//                 { // odd
//                     cout << " ";
//                 }
//         }
//         else
//         {
//             // first col
//             if (j == 0)
//             {
//                 cout << 1;
//             }
//             // last col
//             else if (j == 2 * i )
//             {
//                 cout << i + 1;
//             }
//             else
//             {
//                 cout < " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// even -->numbers
// odd ---->spaces

// BITWISE OPRATORS
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     //bool a = false;
//     //bool b = true;
//     //cout<< (a^b);
//     //cout<< (3&4); //at bit level
//     //first bit if =1 then negative
//     //first bit  if =0 then postive

//    //-->* left shift and right shift
//     // left shift multiplies by 2
//     // right shift of positive number only divides by 2
//     //if negative numbers comes then there is a catch not happens on negative numbers

//     int a =5;
//     //int b=4;
//     cout<<(++a)*(++a);//49 if a =5
//     //cout<<(--a)*(b++);

//    // cout<<a++<<endl<<a;
//     return 0;
// }

// Ternary operators
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     int age =15;
// (age<18)?cout<<"can vote":cout<<"cannot vote";
// (num%==0)? cout<<"even" : cout<<"odd";
//     return 0;
// }

// WEEK 2 CONNECT

//number to digit
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     int n=528;
//     for(;n!=0;n=n/10){
//         int rem=n%10;
//         cout<<rem<<" ";
//     }
//     return 0;
// }



//digit to number
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int digit[] = {8, 3, 5, 6};
//     int ans = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         ans = ans * 10 + digit[i];
//     }
//     cout << ans << endl;
//     return 0;
// } 


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =15;
    //ans --> store number  of set bit
    int ans =0;
    while(n!=0){
        //found one set bit
        //so increment set bit count
        if(n&1){
            ans++;
        }
        //right shift
        n=n>>1;
    }
    cout<<"number of set bits "<< ans <<endl;
    return 0;
}