// //SELECTION SORT -> either the element are in increasing order or decreasing order
// // in total n-1 round the array got sorted
// #include<bits/stdc++.h>
// using namespace std;
//     int sortArr(vector<int>arr){
//         //outer loop-> (n-1) rounds
//         for(int i=0;i<arr.size()-1;i++){
//         int minIndex=i;
//             for(int j=i+1;j<arr.size();j++){
//             //inner loop -> index of minimum element in range i->till end of the array
//             if(arr[minIndex]>arr[j]){
//                 //new min index then store
//                 minIndex=j;
//             }
//         }
//         // swap
//         swap(arr[i], arr[minIndex]);
//     }
//     //printing
//     for(int i=0;i<arr.size() ;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
//     }

// int main(){
//     vector<int>arr{1,5,6,7,3,8};
//     sortArr(arr);
//     return 0;
// }
// t.c = n^2


//*********************  BUBBLE SORTING
// every ith round -> ith largest element ko uski right position pr place krte hai

// #include <bits/stdc++.h>
// using namespace std;
// int bubbleSort(vector<int> arr)
// {
//     for(int i=1; i<arr.size();i++){
//         int swapped=0;
//         for (int j = 0; j < arr.size()-i; j++)
//         {

//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 swapped++;
//             }
//         }
//         if(swapped==0){
//             //sort ho chuka hai, no need to check in further round
//             break;
//         }
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }
// int main()
// {
//     vector<int> arr{4, 2, 6, 1, 8, 3, 10,9,7};
//     bubbleSort(arr);
//     return 0;
// }
// 1
// 2
// 3
// 4
// 6
// 7
// 8
// 9
// 10
// tc of the bubble sort is O(n^2)
//best case complexity is O(n)



//****************INSERTION SORT
//1.fetch 2.comparison 3. shifting 4.coping
#include<bits/stdc++.h>
using namespace std;
    int insertion(vector<int>arr){
        for(int i=1;i<arr.size();i++){
            //step- A -> fetch
            int val=arr[i];
            //step B -> compare
         int j=i-1;
            for(;j>=0;j--){
                if(arr[i]>val){
                //step C ->shift
                arr[j+1]=arr[j];
                }
                else break;
            }
            //step D -> copy
            arr[j+1]=val;

        }
        //printing 
        for(int i=0;i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
int main(){
    vector<int>arr{1,6,4,2,8,3};
    insertion(arr);
    return 0;
}

// //******************sorting*****************
//pre defined function 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr{5,3,7,8,2,1,6};
//     for(int i=0; i<arr.size();i++){
//     sort(arr.begin(),arr.end());
//         cout<<arr[i]<<endl;
//         }

//     return 0;
// }