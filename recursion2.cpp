//int &b=a here &means refernce varible->that is same memory different name

//climb stairs
//1 stair at a time or 2 stair at a time
// find no of ways to reach nth stair

//there is one way for reaching on 0th stair
// #include<bits/stdc++.h>
// using namespace std;
// int ways(int n){
//  if(n==0||n==1) return 1;
//  return ways(n-1)+ways(n-2);
// }
// int main(){
// cout<<ways(3)<<endl;//total 3 ways for 3rd stair
//     return 0;
// }

//printing array by recursion//--------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void print (int arr[] , int n, int i){
//     //base case
//     cout<<i<<"->";
//     if(i>=n) return ;
//     cout<<arr[i]<<" ";
//     //baki recursion sambhal lega
//     print(arr,n,i+1);//print i k aage wla but if we apply pre increment then it will run
//     //phle copy kr lo baadh m increment krna to 0 hi copy hote ja rhi baar baar aur copy hote hi call ho ja rha

//     cout<<endl;
// }
// int main(){

//     int arr [5]={10,20,30,40,50};
//     int n=5;
//     int i=0;
//     print (arr,n,i);
//     return 0;
// }
// #include<bits/stdc++.h>//-------------------------
// using namespace std;
// void print (int a[], int n) {
// 	//base case
// 	if (n == 0) return ;
// 	cout << a[0] << " "; //priting the first element
// 	//recalling the print function
// 	print(a + 1, --n); //giving the subarray with the base address +1 , and decrementing the n upto 0
// }
// int main() {
// 	int a[5] = {1, 2, 3, 4, 5};
// 	int n = 5;
// 	print(a, n);
// 	return 0;
// }
//output - 1 2 3 4 5

//PRINT THE REVERSE ARRAY------------------
// #include<bits/stdc++.h>
// using namespace std;
// void print (int a[], int n) {
// 	//base case
// 	if (n == 0) return ;
// 	//recalling the print function
// 	print(a + 1, --n); //giving the subarray with the base address +1 , and decrementing the n upto 0
// 	cout << a[0] << " "; //priting the first element
// }
// int main() {
// 	int a[5] = {1, 2, 3, 4, 5};
// 	int n = 5;
// 	print(a, n);
// 	return 0;
// }
//5 4 3 2 1

//to find the maximum number//---------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void findMax(  int arr[] , int n  , int i , int& maxi){passa by refereence
// //base case
// if(i>=n)//agr array pura tranverse ho gya to wapas aa jao
// return ;
// //1 case solve krna h
// //current element is greater than maxi
// if(arr[i]>maxi){
//     maxi=arr[i]; //then current gets stored in  the maxi
// }
// //baki recursion sambhal lega
// findMax(arr,n,i+1,maxi);
// }
// //same memory different names


// int main(){
// int arr[5]={1,23,45,67,87};
// int n=5;
//     int maxi = INT_MIN;
//     int i=0;
//     findMax(arr,n,i, maxi);

//     cout<<maxi<<endl;
//     return 0;
// }
//hence the maximum number is 87



//  //finding minimum using recusion//-------------------------
// #include<bits/stdc++.h>
// using namespace std;
// void findmin(int arr[], int size, int i, int& mini){
//     if(i>=size) return ;
//     if(arr[i]<mini){
//         mini=arr[i];
//     }
//     findmin(arr,size,i+1,mini);
// }
// int main(){
// int arr[5]={23,43,6,2,7};
// int size=5;
// int i=0;
// int mini=INT_MAX;
// findmin(arr,size,i,mini);
// cout<<mini;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// bool checkKey(string str, int n , int i ,int key,int &count){
//     //base case
//     if(i>=n) return -1;
//     if(str[i]==key)
//     count++;
//     //baki recursion smbhall lega
//     return checkKey(str,n,i+1,key,count);
// }
// int main(){
//     string str="lovebabber";
//     char key='b';
//     int n=str.length();
//     int i=0;
//     int count=0;
//     cout<<checkKey(str,n,i,key,count)<<endl;
//     cout<<count<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool find (string str, char key, int n, int i ) {
// 	if (i >= n) return false;
// 	if (str[i] == key)return true;
// 	return find(str, key, n, ++i);;
// }
// int main() {
// 	string str = "love babbar";
// 	int n = str.length(), i = 0;
// 	char key = 'c';
// 	cout << find(str, key, n, i) << endl;
// 	return 0;
// }

// //printing digits by recursion
// #include<bits/stdc++.h>
// using namespace std;
// void printDigits(int n) {
// 	//base case;
// 	if (n == 0) return ;
// 	//1 case i will solve and bacha hua recursion print kr dega
// 	printDigits(n / 10);
// 	int digit = n % 10; //when a number is modulobe then its last digit is exactracted
// 	cout << digit << " ";
// 	//now we have to pass the number again removing the last digit
// }
// int main() {
// 	int n = 657;
// 	printDigits(n);
// 	return 0;
// }


//count the no of digits
// #include<bits/stdc++.h>
// using namespace std;
// void print(int n, int c) {
// 	if (n == 0) return;
// 	print(n / 10, ++c);
// 	int digits = n % 10;
// 	cout << digits << " ";

// }
// int main() {
// 	int n = 10432, c = 0;
// 	print(n, c);
// 	return 0;
// }


