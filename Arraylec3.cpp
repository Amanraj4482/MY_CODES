// 2d array
// for the input purpose copy this
//  1 2 3
//  4 5 6
//  7 8 9

// col*i+j  that why it mandatory to pass the size of the col to calculate the index

// #include <bits/stdc++.h>
//     using namespace std;

// int main()
// {
//     // declaration of 2-d array
//    // int arr[3][3];
//     // initailisation
//     int brr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     // row-wise printing
//     // outer loop
//     for (int i = 0; i < 3; i++)
//     {
//         // inner loop runs for each row printing value of each column
//         for (int j = 0; j < 3; j++)
//         {
//             cout << brr[i][j] << " ";
//         }
//         cout << endl;
//     }
// // 1 2 3
// // 4 5 6
// // 7 8 9
// //---------------------------------------------------
//     //col wise printing
//     //outer loop
//      for (int i = 0; i < 3; i++)
//     {
//         // inner loop runs for each col printing value of each row
//         for (int j = 0; j < 3; j++)
//         {
//             cout << brr[j][i] << " ";
//         }
//         cout << endl;
//     }
// // 1 4 7
// // 2 5 8
// // 3 6 9
//     return 0;
// }

// // colwise printing

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[4][3];
//     int row=4;
//     int col=3;
//     cout<<"talking input row-wise"<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0; j<col; j++){
//         cin>>arr[i][j];
//     }}
//     cout<<"Printing col wise"<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0; j<col; j++){
//          cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
//   }

//     return 0;
// }

//--------------------------------------------------------
// ROW WISE PRINTING
// #include <bits/stdc++.h>
// using namespace std;
// void printRowwiseSum(int arr[][3], int row, int col)
// { // col wise must be given you can leave the size of the row
//     // row wise sum printing-->row wise traversal
//     cout << "Priting row-wise sum" << endl;
//     for (int i = 0; i < row; i++)
//     {
//     int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum += arr[i][j];
//         }
//         cout << sum << endl;
//     }
// }
// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     cout << "Talking input row-wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Printing col wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     printRowwiseSum(arr, row, col); // name of the 2d array and size of the row and col
//     return 0;
// }

// //Talking input row-wise
// // Printing col wise
// // 1 2 3
// // 4 5 6
// // 7 8 9
// // Printing row-wise sum
// // 6
// // 15
// // 24

//--------------------------------------------------------
// COL WISE PRINTING
// #include <bits/stdc++.h>
// using namespace std;
// void printColwiseSum(int arr[][3], int row, int col){
//     // col sum printing-->row wise traversal
//     cout << "Priting row-wise sum" << endl;
//     for (int i = 0; i < row; i++)
//     {
//     int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum += arr[j][i];
//         }
//         cout << sum << endl;
//     }
// }
// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     cout << "Talking input row-wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Printing col wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     printColwiseSum(arr, row, col); // name of the 2d array and size of the row and col
//     return 0;
// }

// Talking input row-wise
//  Printing col wise
//  1 2 3
//  4 5 6
//  7 8 9
//  Priting row-wise sum
//  12
//  15
//  18

// LINEAR SEARCH
// #include <bits/stdc++.h>
// using namespace std;
// bool findKey(int arr[][3], int row, int col, int key)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == key)
//                 return true;
//         }
//     }
//     //value is not present
//     return false;

// }

// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     int key =6;
//     cout << "Talking input row-wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Printing col wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// if(findKey(arr,3,3,6)){
//     cout<<"Found -> "<<key<<endl;
// }
// else cout<<"Not Found"<<endl;

//     return 0;
// }

// MAXIMUM AND MINIMUM NUMBER IN 2-D ARRAY
//  #include<bits/stdc++.h>
//  using namespace std;
//       int getMax(int arr[][3],int row,int col){
//          int maxi=INT_MIN;
//          for(int i=0; i<row;i++){
//              for(int j=0; j<col ;j++ ){
//                  if (arr[i][j]>maxi){
//                      maxi=arr[i][j];
//                  }
//              }
//          }
//          return maxi;
//       }
//       int getMin(int arr[][3],int row,int col){
//          int min=INT_MAX;
//          for(int i=0; i<row;i++){
//              for(int j=0; j<col ;j++ ){
//                  if (arr[i][j]<min){
//                      min=arr[i][j];
//                  }
//              }
//          }
//          return min;
//       }
//  int main(){
//      int arr[3][3];
//      int row = 3;
//      int col = 3;
//      cout << "Talking input row-wise" << endl;
//      for (int i = 0; i < row; i++)
//      {
//          for (int j = 0; j < col; j++)
//          {
//              cin >> arr[i][j];
//          }
//      }

//     cout << "Printing col wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout<<"Maximum element-> "<<getMax(arr,3,3)<<endl;
//     cout<<"Minimum element-> "<<getMin(arr,3,3)<<endl;
// // Maximum element-> 9
// // Minimum element-> 1
//     return 0;
// }





// TRANSPOSE THE MATRIX        ROW-->COL  COL-->ROW
// #include <bits/stdc++.h>
// using namespace std;
// void trans(int arr[][3], int row, int col,int transposeArr[][3])
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             transposeArr[j][i]=arr[i][j];
//         }
//     }
// }
// void printArray(int arr[][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr[3][3];
//     int row = 3;
//     int col = 3;
//     cout << "Talking input row-wise" << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int transposeArr[3][3];
//     printArray(arr,3,3);
//     trans(arr,3,3,transposeArr);
//     printArray(transposeArr,3,3);

//     return 0;
// }
// Talking input row-wise
// 1 2 3 
// 4 5 6 
// 7 8 9 

// 1 4 7 
// 2 5 8 
// 3 6 9

//VECTOR OF VECTOR

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    //METHOD 1 OF 2D VECTOR
    // vector<vector<int> >arr;

    // vector<int>a{1,2,3};
    // vector<int>b{4,5,6};
    // vector<int>c{7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);


    // for(int i=0;i<arr.size();i++){
    //     for(int j=0; j<arr[0].size();j++){//when no of col is same in all rows then arr[0].size() we can find the length
    //         cout<<arr[i][j]<<" ";         //arr[i].size() we can find the length of any order and can print also
    //     }
    //     cout<<endl;
    // }
//the input is same is output
// 1 2 3 
// 4 5 6 
// 7 8 9
        

    //METHOD 2 OF 2D VECTOR

    //     int row=3;
    //     int col=5;

    //     vector<vector<int> >arr(row,vector<int>(col,0));
    //     for(int i=0;i<arr.size();i++){
    //     for(int j=0; j<arr[0].size();j++){//when no of col is same in all rows then arr[0].size() we can find the length
    //         cout<<arr[i][j]<<" ";         //arr[i].size() we can find the length of any order and can print also
    //     }
    //     cout<<endl;
    // }
// row =3 , with col=5 , all initialised with 0
// 0 0 0 0 0 
// 0 0 0 0 0 
// 0 0 0 0 0

        //size of row = arr.size()
        //size of col = arr[0].size()        //if square matrix

//     return 0;
// }  


//from geeks of geeks
// #include<bits/stdc++.h>
// using namespace std;

// //main function
// int main() {
//     vector<vector<int>> v;
//     int row, column, a;
//     cin>>row;
//     // taking input into 2D vector from user
//     for(int i=0 ; i<row ; i++) {
//          cin>>column;
//          vector<int> p;
//          for(int j=0 ; j<column ; j++) {
//               cin>>a;
//               p.push_back(a);
//          }
//          v.push_back(p);
//     }
//     // displaying 2D vector value
//     for(auto q: v) {
//         for(auto it: q) {
//             cout<<it<<" ";
//          } 
//          cout<<endl;
//      }
//       return 0;



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //define a vector of vectors
//     vector<vector<int> >s;
//     //fill the inner vector , then insert it into the outer
//     for(int i=0; i<3;i++){
//         vector<int>temp;
//         for(int j=0 ; j<3 ; j++){
//             temp.push_back(i);
//         }
//         s.push_back(temp);
//     }
//     //display all elments to thge user
//     for(int i=0;i<s.size();i++){
//         for(int j=0; j<s[i].size();j++){
//             cout<<s[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }










//HOMEWORK


//sort 0's,1's and 2's 
//move all -ve no to one side of array
//find duplicate of an element
//find missing element
//find first repeating element 
// find common elements in 3 array
//factorial of large no
//rotate matrix by 90b degree
//spiral matrix
//wave matrix

    