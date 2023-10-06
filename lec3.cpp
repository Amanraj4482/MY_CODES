// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // hollow rectangle
//     for (int i = 0; i < 3; i++)
//     {
//         // first row or last row--> print 5 stars*
//         if (i == 0 || i == 2)
//         {
//             for (int j = 0; j < 5; j++)
//             {
//                 cout << "* ";
//             }
//         }
//         else
//         {
//             // remaining middle rows
//             // first star
//             cout << "* ";
//             // middle space
//             for (int i = 0; i < 3; i++)
//             {
//                 cout << "  ";
//             }
//             // last star
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// * * * * *
// *       *
// * * * * *

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i, j,row ,col;
//     cin>>row>>col;
//     for (i = 0; i < row; i++)
//     {
//         if (i == 0 || i == row-1)
//         {
//             for (j = 0; j < col-1; j++)
//                 cout << "* ";
//         }

//         else
//         {
//                 cout << "* ";

//             for (j = 0; j < col-3; j++)
//             {
//                 cout << "  ";
//             }
//                 cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// HALF PYRAMID
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     int n=6;
//     for(int i=0; i<n;i++){
//         for(int j=0;  j<i+1; j++){
//             cout<<"* ";
//     }
//     cout<<endl;}
//     return 0;
// }
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n=6;
//     for(int i=0; i<n;i++){
//         for(int j=0;  j<n-i ;j++){
//             cout<<"* ";
//     }
//     cout<<endl;}
//     return 0;
// }
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n=6;
//     for(int i=0; i<n;i++){
//         for(int j=0;  j<i+1 ;j++){
//            cout<<i+1;
//     }
//     cout<<endl;}
//     return 0;
// }
// 1
// 22
// 333
// 4444
// 55555
// 666666

// #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     int n=6;
//     for(int i=0; i<n;i++){
//         for(int j=0;  j<n-i ;j++){
//            cout<<j+1;
//     }
//     cout<<endl;}
//     return 0;
// }
// 123456
// 12345
// 1234
// 123
// 12
// 1

// #include<bits/stdc++.h>
// using namespace std;

//     int n=6;
//     for(int i=0; i<n;i++){
//         //for printing space upside down traingle
//         for(int j=0;  j<n-i ;j++){
//             if(j<=5){
//                 break;
//             }
//            cout<<" ";
//     }
// int main(){
//     for(int j=0; j<n-i; j++){
//         cout<<"* ";
//     cout<<endl;
//     }}
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// float l=5, b=5,P;
// 	// P = 2*(l+b);
// 	// cout<<"Perimeter="<< P;
//     float l=5, b=5;
//     float P = 2*(l+b);
//     printf("Perimeter=%f", P);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

//     int main()
//     {
//         int n;
//         cin >> n;
//         bool isPrime = true;
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//         {
//             cout << "Prime" << endl;
//         }
//         else
//         {
//             cout << "Not Prime" << endl;
//         }

//     return 0;
//     }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n  || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// for increasing triangle j < i
// for decreasing traingle j < n-i

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,j,n=6;
//     for ( i = 0; i < n; i++)
//     {//for decreasing triangle space total n
//         for ( j = 0; j <= n-i; j++) cout<<" ";
//     //for increasing triangle stars total n
//         for(j = 0; j <= i; j++) cout<<"* ";
//         cout<<endl;
//     }
//     return 0;
// }

//        *
//       * *
//      * * *
//     * * * *
//    * * * * *
//   * * * * * *

// j<n-i
// 111111
// 11111
// 1111
// 111
// 11
// 1

// j<i
// 1
// 11
// 111
// 1111
// 11111

// for increasing triangle j < i
// for decreasing triangle j < n-i

// #include<bits/stdc++.h>
// using namespace std;
// //inverted pyramid
// int main(){
//     int i,j,n=6;
//     for ( i = 0; i < n; i++)
//     {//for increasing triangle space total n
//         for ( j = 0; j < i; j++) cout<<" ";
//     //for decreasing triangle stars total n
//         for(j = 0; j < n-i; j++) cout<<"* ";
//         cout<<endl;
//     }
//     return 0;
// }
//  * * * * * *
//   * * * * *
//    * * * *
//     * * *
//      * *
//       *

// #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     int i,j,n=6;
//     for ( i = 0; i < n; i++)
//     {//for decreasing triangle space total n
//         for ( j = 0; j < n-i; j++) cout<<" ";
//     //for increasing triangle stars total n
//         for(j = 0; j < i; j++) cout<<"* ";
//         cout<<endl;
//     }
//     for ( i = 0; i < n; i++)
//     {//for increasing triangle space total n
//         for ( j = 0; j < i; j++) cout<<" ";
//     //for decreasing triangle stars total n
//         for(j = 0; j < n-i; j++) cout<<"* ";
//         cout<<endl;
//     }

//     return 0;
// }
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n=7;
//     //upward hollow
//     for(int i=0 ; i<n; i++)
//     {   // decreasing spaces
//         for(int j=0; j<n-i;j++){
//             cout<<" ";
//         }
//         //stars
//         for(int j=0; j<2*i+1;j++){
//             //if first character of if last character
//             if(j==0 || j==2*i) cout<<"* ";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
//     //downward hollow
//     for(int i=0 ; i<n; i++)
//     {   //increasing spaces
//         for(int j=0; j<i+1;j++){
//             cout<<" ";
//         }
//         // stars
//         for(int j=0; j<2*n-2*i-1;j++){
//             //if first character of if last character
//             if(j==0 || j==2*n-2*i-2) cout<<"* ";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//        *
//       *  *
//      *    *
//     *      *
//    *        *
//   *          *
//  *            *
//  *            *
//   *          *
//    *        *
//     *      *
//      *    *
//       *  *
//        *

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n=7;
//     for(int i=0 ; i<n; i++){
//         // half dec tri
//         for(int j=0; j<n-i;j++){
//             cout<<"*";
//         }
//        // full inc pyramid space
//         for(int j=0; j<2*i+1;j++){
//             cout<<" ";
//         }
//         // half oppo dec tri
//         for(int j=0; j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0 ; i<n; i++){
//         // half inc tri
//         for(int j=0; j<i+1;j++){
//             cout<<"*";
//         }
//        // full dec pyramid space
//         for(int j=0; j<2*n-2*i-1;j++){
//             cout<<" ";
//         }
//         // half oppo inc tri
//         for(int j=0; j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// ******* *******
// ******   ******
// *****     *****
// ****       ****
// ***         ***
// **           **
// *             *
// *             *
// **           **
// ***         ***
// ****       ****
// *****     *****
// ******   ******
// ******* *******

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         // increasing triangle
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << i + 1;
//             if (j != i)
//                 cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << n-i;
//             if (j != n-i-1)
//                 cout << "*";
//         }
//         cout << endl;
//     }
// return 0;
// }

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1