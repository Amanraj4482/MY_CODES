  vector -data structure (dynamic array)
 syntax->vector<int>arr;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // create vector
    vector<int> arr;
    // int ans =(size(arr)/sizeof(int));
    // cout<<ans<<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // INSERT
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    // remove /delete
    arr.pop_back();
    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;
    vector<int> brr(10,-1);//initailize with -1
   // vector<int>brr(n); //initialize all elements with zero
    cout << "Size of b " << brr.size() << endl;
    cout << "capacity of b " << brr.capacity() << endl;//how many elemets can store

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    //printing crr
    vector<int>crr{1,2,3,4};
    for (int i = 0; i < crr.size(); i++)
    {
        cout <<crr[i] << " ";
    }
    cout<<"Vector is empty or not "<<crr.empty()<<endl;//0--> false
    return 0;
}

UNIQUE ELEMENT

#include<bits/stdc++.h>
using namespace std;
    int findUnique(vector <int> arr){
        int ans=0;
    for(int i=0;i<arr.size();i++){
        ans^=arr[i];//0^1^2^2^3^3^4^4^5
    }
    return ans;
    }

int main(){
        int n;
        cin>>n;

        vector<int>arr(n);
        //taking input
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }
        cout<<"Unique Element is "<<findUnique(arr) <<endl;
    return 0;
}

UNION IN ARRAY
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 5, 7, 9};
    int sizea = 6;
    int brr[] = {2, 3, 4, 6, 8};
    int sizeb = 5;
    int element;

    vector<int> ans;

    // push all elements of vector arr
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }

    // push all elements of vector brr
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    //print ans
    cout << "Printing ans array" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

INTERSECTION OF ARRAY

 #include<bits/stdc++.h>
 using namespace std;

int main(){
     vector<int>arr={1,2,3,3,4,5};
     vector<int>brr={3,4,6,3,5,9};

     vector<int>ans;

    //outer loop on ar vector
    for(int i=0; i<arr.size();i++){
        int element =arr[i];
        //for every element run loop on brr
        for(int j=0; j<brr.size();j++){
            if(element ==brr[j]){
                //mark it
                brr[j]=INT_MIN;
                ans.push_back(element);
            }
        }
    }

    //print ans

    for(auto a :ans) {
        cout<<a<<" ";
    }

    return 0;
}

PAIR SUM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 8;
    vector<int> arr{1, 2, 3, 5, 6};
    // print all pairs
    // outer loop will traverse for each element
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // for every element,will traverse on aage wale elements

        for (int j = i + 1; j < arr.size(); j++)
        {
            // cout << "(" << element << "," << arr[j] << ")" << endl;
            if (element + arr[j] == sum)
            {
                cout << "Pair found -> " << element << "," << arr[j] << endl;
                // Pair found -> 2,6
                // Pair found -> 3,5
            }
        }
    }
    return 0;
}
(1,3)
(1,4)
(1,5)
(1,6)
(3,4)
(3,5)
(3,6)
(4,5)
(4,6)
(5,6)



TRIPLET SUM
#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=8;
    vector<int>arr{1,2,3,4,5,6,7};
    for(int i=0;i<arr.size();i++){
        int element1  =arr[i];
        for(int j=i+1;j<arr.size();j++){
            int element2=arr[j];
            for(int k=j+1;k<arr.size();k++){
                int element3 =arr[k];
              //cout << "(" << element1 << "," << element2 << "," <<element3<<")"<< endl;
              if(element1+element2+element3==sum){
                cout<<"Triplet pair-> "<<"("<<element1<<","<<element2<<","<<element3<<")"<<endl;
                // Triplet pair-> (1,2,5)
                // Triplet pair-> (1,3,4)
              }

            }
        }
    }
    return 0;
}
(1,2,3)
(1,2,4)
(1,2,5)
(1,2,6)
(1,2,7)
(1,3,4)
(1,3,5)
(1,3,6)
(1,3,7)
(1,4,5)
(1,4,6)
(1,4,7)
(1,5,6)
(1,5,7)
(1,6,7)
(2,3,4)


SORT 0'S AND 1'S
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr{0,1,0,1,1,0,0,0,1,1,1};
    int start=0;
    int end=arr.size()-1;
    for(int i=0;i<arr.size();){
        if(arr[i]==0){
            //swap from left
            swap(arr[start],arr[i]);
            i++;
            start++;
        }
        if(arr[i]==1){
            //swap from right
            swap(arr[i],arr[end]);
            end--;
            i++;
        }    
    }
    for(auto a:arr){
        cout<<a<<" ";
    }
    return 0;
}
0 0 0 0 0 1 1 1 1 1 1 