// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// ARRAY DECLARATION
// int arr[7]={1,2,3,4,5,6,7};
// cout<<arr<<endl;//0x61fef4
// //BOTH SHOWS THE SAME BASE ADDRESS
// cout<<&arr<<endl;//0x61fef4
// cout<<"Array created successfully"<<endl;

// printing all the values of array
//     for(int index=0; index<7;index++){
//         cout<<arr[index]<<endl;
//     }

// int arr[10];
// cout<<"Enter the input values in array"<<endl;
// //taking the inputs from the user
// for(int i=0; i<10;i++){
//     cin>>arr[i];
// }
// //printing the values of array
// for(int i=0; i<10;i++){
//     cout<<arr[i]<<" ";
// }
// int arr[5];
// cout<<"Enter the input values in array"<<endl;
// //taking the inputs from the user
// for(int i=0; i<5;i++){
//     cin>>arr[i];
// }
// //printing the values of array
// for(int i=0; i<5;i++){
//     cout<<2*arr[i]<<" ";//2 4 6 8 10
// }

// memset go for geeks for geeks
//  int arr[10];
//  memset(arr,2,arr[10]);
//  for(int i=0;i<10;i++){
//      cout<<arr[i]<<endl;
//  }

//     return 0;
// }

// getting which is passing reference or value
//  #include<bits/stdc++.h>
//  using namespace std;

//     void printArray(int arr[], int size){//call by reference
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     //change in actual array -call by reference
//     void inc(int arr[], int size){//while passing array always pass the array name and size of the array

//         arr[0] = arr[0] + 10;//add 10 to the arr[0] value
//         printArray(arr, size);
//     }
// int main(){
//     int arr[] = {5, 6};
//     int size = 2;
//     inc(arr, size);//pass by reference
//     printArray(arr, size);//pass by refe
//     return 0;
// }

// //************LINEAR SEARCH IN ARRAY************
// #include<bits/stdc++.h>
// using namespace std;
//     //linear search
//     bool find(int arr[],int size,int key){
//         for(int i=0; i<size; i++){
//             if(arr[i]==key) return true;
//         }
//         return false;
//     }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     cout<<"Enter the key to find "<<endl;
//     int key;
//     cin >>key;
//     if(find(arr,size,key)){
//         cout<<"found";
//     }
//     else {
//         cout<<"Notfound"<<endl;
//     }
//     return 0;
// }

//*********rough for linear search****************
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size=8;
//     int key=8;
//     bool flag=0;
//     //0->not found
//     //1-->found

//     //linear search
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             flag =1;
//         }
//     }
//     //comparison
//     if(flag==1) cout<<"found"<<endl;
//     else cout<<"not found"<<endl;
//     return 0;
// }

// Count 0's and 1's in Arrays
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     int arr[]={1,0,1,0,0,0,1,1,0,1,2,3,4,5,6};
//     int size = 15;
//     //initial of both no 0 and 1
//     int numZero =0;
//     int numOne =0;
//     for(int i =0;i<size;i++){
//         if(arr[i]==0){
//             //if zero found increment numZero
//             numZero++;
//         }
//         //if one found increment numOne
//         if(arr[i]==1){
//             numOne++;
//     }}
//     cout<<"0's-> "<<numZero<<"   "<<"1's-> "<<numOne <<endl;
//     return 0;
// }

// MAXIMUM NUMBER ans MINIMUM NO IN AN ARRAY
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     int arr[]={1,4,5,6,7,8,9};
//     int size=7;
//     int max=INT_MIN;//minimum psble value in int
//     int min=INT_MAX;//MAXIMUM PSBLE value in int
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];}

//         }
//         cout<<"Maximum no is "<<max <<endl;
//         cout<<"Minimum no is "<<min <<endl;
//     return 0;
// }

// //EXTREMES PRINTING IN ARRAY
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int size=7;
//     int start=0;
//     int end=size-1;
//     for(int i=0;i<size;i++){
//         if(start>end){
//             break;
//         }
//         if(start==end){
//             cout<<arr[start]<<" ";
//         }
//         else{
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";}
//         start++;
//         end--;}
//     return 0;
// }

// REVERSE AN ARRAY
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = 5;
//     int start = 0;
//     int end = size - 1;
//     for (int i = 0; i < size; i++)
//     {
//         if(start<=end){
//         swap(arr[start], arr[end]);
//         cout << arr[i] << " ";
//         start++;
//         end--;}
//         else{
//         cout << arr[i] << " ";
//         start++;
//         end--;}
//     }
//     return 0;
// } 