// sorting algorithm- merge sort 

// divide and conquer - technique
// for the two sorted arrays
//  find the mid
//  break the array into two halfs
//  by recursion  - sort the two array
//  merge both half sorted array

// what approach should i use such that the answer array should also be merged-by pointer approach
// comparing ans inserting the element from array 1 and 2
// whenever 1st or 2nd array get end when traversing then insert bacha hua element in ans array
// continuing the sorting that finding the mid
//  we get finally the sorted element in the form of single element
// after merging the array always be sorting
// breaking the two parts into such as  s to mid and mid +1 to end

// #include <bits/stdc++.h>
// using namespace std;
// // this function merges two array
// void merge(int *arr, int s, int e)
// {
//     int mid = (s + e) / 2;                // find int the mid with starting index and ending index
//     /*new array*/ int len1 = mid - s + 1; // length of the left array 0-3+1 if the length is 4
//     /*new array*/ int len2 = e - mid;

//     // creating the dynamically array creating for len1 and len2
//    // int arr[n]; this is bad practise
//     int *leftarr = new int[len1];//sorted array
//     //new keyword return address where as pointes always stores the pointer address
//     //len1 lenght ka integer ka address return kr rha h wo address store ho rha h left(name) name k pointer k andr
//     //ek array bna pda h us array k starting box ko left(name) pointer kr rha h
//     int *rightarr = new int[len2];//sorted array

//     // coping the values
//     //for the left part
//     int k = s; // starting index of the array
//     for (int i = 0; i < len1; i++)
//     { // left ware arry k ander jo v values h un sbko copies kr rha h
//         leftarr[i] = arr[k];//left wale array k andr jo v mera actual array ki value h wo insert krdo
//         //aur insert krne k baad aage badh jana
//         k++;
//     }

//     //another method for coping
//      // int i=0;
//     // while(i<len1){
//     //   leftarr[i++]=arr[k++];
//     // }


//     //copies the values for the right part
//     k = mid + 1; // and the second part starts from the mid +1
//     for (int i = 0; i < len2; i++)
//     { // right ware array k ander jo v values h un sbko copies kr rha h arr[k] m
//         rightarr[i] = arr[k];
//         k++;
//     }

//     // merge to sorted wla logic
//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainArrayIndex = s; // the main or actual array that is arr which is referencely passed in the function is starting from the k

// //comparison wla logic
//     while (leftIndex < len1 && rightIndex < len2)
//     { // jbtk dono array khtm ni ho jati
//         // if these condition satisfies then the loop runs

//         // checking which values is smaller
//         if (leftarr[leftIndex] < rightarr[rightIndex])
//         {  // agr mere left wale index k andr jo elements h usme jo values padi h wo choti h right wale elements k andr jo element padi h usse
//             arr[mainArrayIndex++] = leftarr[leftIndex++]; // to main main arrya k andr apne ans ko place kr dunga
//             // this both will be incremented after using
//         }
//         else
//         {
//             arr[mainArrayIndex++] = rightarr[rightIndex++];
//         }
//     }
//     // copy logic for left array
//     while (leftIndex < len1)
//     {
//         arr[mainArrayIndex++] = leftarr[leftIndex++];
//     }

//     // copy logic for right array
//     while (rightIndex < len2)
//     {
//         arr[mainArrayIndex++] = rightarr[rightIndex++];
//     }
//     // toodoo - delete left and right wla newly created array
//     // now array has been sorted
// }

// void mergeSort(int *arr, int s, int e)//passing the starting index of the array
// //same as int arr[]
// { // this array is pass by reference
//     // base case
//     // if there is single element then it will alredy considered as sorted
//     // s==e means single element that is already sorted
//     // s>e invalid array 
//     if (s >= e)
//     { // stoping consition
//         return;
//     }
//     // breaking the array into left and right part aur recursion s bolo sort kr k  laae aur unko merge krdo
//     int mid = (s + e) / 2;
//     // left part ka sorting by recursion
//     mergeSort(arr, s, mid); // starting index of left part s and ending is mid
//     // right part sort krdo by recursion
//     mergeSort(arr, mid + 1, e); // starting mid and ending be e
//     // now merge2 sorted  arrays
//     merge(arr, s, e);
    
// }
// int main()
// {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
 
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif

//     int arr[] = {1,3,2,4,5};
//     int n = 5;
//     int s = 0;
//     int e = n - 1; 
//     mergeSort(arr, s, e);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
// time complexity of this code is nlogn
// T(n)=k(constants)+T(n/2)+T(n/2)(right wali call)+n*k(merge krne ki complexity)
// T(n)=2T(n/2)+n*k



//solve it without extra space -inplace merge sort
// and also solve 
// inversionn count-merge sort question


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={99};
//     int left[]={1,2,3,4};
//     int right[]={5,6,7,8};
//     int n=4;
//     int k=1;
//     int i=0;
//     while(i<n){
//     // left[i++]=right[n++];
//     left[i++]=arr[k++];
//     // arr[k++]=left[i++];
//     // arr[k++]=right[i++];
//     }
//     for(int i=0; i<n;i++){
//         // cout<<left[i]<<" ";
//         cout<<arr[i]<<" ";
//         cout<<"left"<<left[i]<<endl;
//     }
//     cout<<endl;
//     return 0;
// }
