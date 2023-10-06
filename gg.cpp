
// float num1, num2;
// char operation;

//    cout << "aman calculator" << endl;
// cin >> num1 >>operation>> num2;

// switch (operation)
// {
// case '+':
//     cout << num1 << operation << num2 << "=" << num1 + num2;
//     break;
// case '-':
//     cout << num1 << operation << num2 << "=" << num1 - num2;
//     break;
// case '*':
//     cout << num1 << operation << num2 << "=" << num1 * num2;
//     break;
// case '/':
//     cout << num1 << operation << num2 << "=" << num1 / num2;
//     break;
// case '%':
//     bool isNum1Int, isNum2Int;
//     isNum1Int = ((int)num1 == num1);
//     isNum2Int = ((int)num2 == num2);

//     if (isNum1Int && isNum2Int)
// cout <<num1 <<operation <<num2 <<"="<< (int)num1 % (int)num2;
// else
// cout <<"Not Valid";
// break;
// default:cout <<"Not valid operation!"<<endl; break;
// }
// int year , month ;
// cout << year, month;
// cin >> year >> month;
// switch (month);
// {
// case '2':
//     (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days month" : cout << "28 days month";
//     break;
// case '4':
// case '6':
// case '9':
// case '11':
//     cout << "30 days month";
//     break;
// case '1':
// case '3':
// case '5':
// case '7':
// case '8':
// case '10':
// case '12':
//     cout << "31 days month";
//     break;
// default:
//     cout << "Not valid";
// }
// return 0;
//     int counter = 100;
//     while (counter <=500)
//     {
//         if (counter % 3== 0 && counter % 5== 0)
//         cout<< counter <<" is divisible\n";
//         counter ++;

//     }
//     return 0 ;
// }
// int num = 1;
// while (num <=70)
// {
//     if (num % 7 ==0)
//     cout<<num<<"\n" ;
//     num++;

// }
// count digits of number
// int num;
// cout << " Num " ;
// cin >> num;
// if (num == 0)
// cout <<"You have the value 0\n";
// else
// {
//     int counter = 0;
//     while (num >0){
//         num /= 10;
//         counter ++;
//     }
//     cout<< "Number contains "<<  counter << " digits\n";
// }
// Reversing number
// int num , reversedNum = 0;
// cout <<"Num:";
// cin >> num;

// while ( num!= 0)

// {reversedNum *= 10;
// reversedNum += num % 10;
// num/= 10;
// }
// cout<< "Reversed : " << reversedNum;
// int num ;
// cout << "Num : ";
// cin >> num;

// int factorial = 1;
//  for (int i = 1 ; i<=num ; i++){
//     factorial *= i ;

//  }
//  cout<<num<<"! = " << factorial;
// int num , factorial = 1;
// cout <<"Number :";
// cin >> num;

// for (int i = 1 ; i <= num ; i++){
// factorial *= i;}
// cout<<num<<" ! = " << factorial;
// int userPin = 1234, pin, errorCounter = 0;
// do
// {
//     cout << "PIN : ";

//     cin >> pin;

//     if (pin != userPin) errorCounter++;
// }

//     while (errorCounter < 3 && pin != userPin) ;

//     if (errorCounter < 3)
//         cout<< "Loading..";
//      else
//          cout << " Blocked..";
//     int num , factorial = 1;
//     cout << "NUM :";
//     cin >> num ;
//     for ( int i = 1 ; i <= num; i ++){
//     factorial *= i ;}
// cout << num <<" ! = "<< factorial;
// Nesting do while loop and for loop
// int grade, sum = 0;
// for (int i= 0; i<3 ;i ++){
//     do { cout <<" Enter grade "<< i +1 <<":";
//     cin >> grade ;}
//     while (grade < 1|| grade > 5 );
//     sum += grade;
//      }
//     cout << "sum = "<<sum<< endl;
//     cout << " Avg grade =" << (float )sum / 3.0;

// Multiplicatiobn table
// for (int i = 29; i <= 29; i ++){
//     for (int j = 1; j <= 10; j++){
//         cout << i<< "*"<< j << "=" <<i * j << endl;}

//     cout << endl;
// }

// for( int i = 99; i<= 99 ; i++){
//     for ( int j = 1; j <= 10 ; j ++){
//         cout <<i<<"*"<<j<<"="<<i*j<<endl;   }
//         cout << endl;

// }
// int h, w;
// cout <<"H :";
// cin >> h;
// cout <<"W :";
// cin >> w;
// char symbol;
// cout << "symbol :";
// cin>> symbol;
// for(int i =0; i<h ;i++ ){
//     for (int j =0 ; j<w ; j++ ){
//         cout<<setw(3)<<symbol;
//     }
//     cout << endl;
// }

//  int l;
//  cout<< "L:";
//  cin >> l;
//  char symbol;
//  cout << "symbol :";
//  cin >> symbol;
//   for ( int i= 1; i<= l ; i++){
//     for (int j=1 ;j<=i ; j++){
//         cout << setw(2)<< symbol ;
//     }
//     cout << endl;
//   }
// int l;
// cout << "L:";
// cin >> l;
//  for (int i =l ; i>=1 ; i--){
//     for(int j =1 ; j <= i ; j++){
//         cout << setw(3)<< "*";
//     }
//     cout << endl;}
// int l;
// cout<<"L:";
// cin >> l;
// char symbol ;
// cout <<"symbol :";
// cin >> symbol;

// for(int i = l ; i>=1 ; i--){
//     for(int j = 1 ; j <= i ; j++){
//         cout << setw(3)<< symbol ;

//     }
//     cout <<endl<<endl;
// }
// int number;
// cout<<"Number:";
// cin>> number ;
// bool check = true;
// for (int i =2 ; i < number ; i++){
//     if (number % i ==0){
//         check = false;
//         break;
//     }
// }
// if (check)
// cout <<"Prime number"<<endl;
// else {
// cout<< "Not prime number"<< endl;}

// int n, i, m = 0, flag = 0;
// cout << "number: ";
// cin >> n;
// m = n / 2;
// for (i = 2; i <= m; i++)
// {
//     if (n % i == 0)
//     {
//         cout << " not Prime" << endl;
//         flag = 1;
//         break;
//     }
// }[]
// if (flag == 0)
//     cout << "Prime" << endl;
// int profit(string name)
// {
//     cout << "My name is " << name << endl;
//     return 0;}
// int main(){
// profit("Aman");
//     return 0;

// void showMenu()
// {
//     cout << "******Menu******" << endl;
//     cout << "1. Check balance" << endl;
//     cout << "2. Deposit" << endl;
//     cout << "3. Withdraw" << endl;
//     cout << "4. Exit" << endl;
// }
// int main()
// {
//     int option;
//     double balance = 500;
//     do
//     {
//         showMenu();
//         cout << " Option: ";
//         cin>>option;
//         switch (option)
//         {
//         case 1:
//             cout << " Balance is " << balance << "$" << endl; break;
//         case 2:
//             double depositAmount;
//             cout << "Deposit Amount:";
//             cin >> depositAmount;
//             balance += depositAmount;
//             break;
//         case 3:
//             cout << "Withdraw Amount:";
//             double withdrawAmount;
//             cin >> withdrawAmount;
//             if (withdrawAmount <= balance)
//                 balance -= withdrawAmount;
//             else
//                 cout << "Not enough money" << endl;
//             break;
//         }
//     } while (option != 4);

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     // code for decreasing space 
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i; j++)
//         {
//             cout<<" ";
//         }
//         // code for printing increasing stars
//         for (int j = 0; j < i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
      
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
 // up to down increasing


//  #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0,p=0; i < n; i++,p++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<p;
//         }
       
//         cout<<endl;
        
//     }
//     return 0;
// }
// 1
// 22
// 333
// 4444
// 55555

//  #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0,p=n; i < n; i++,p--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<p;
//         }
       
//         cout<<endl;
        
//     }
//     return 0;
// }
// 5
// 44
// 333
// 2222
// 11111

//  #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0,p=0; i < n; i++,p+=2)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<p;
//         }
       
//         cout<<endl;
        
//     }
//     return 0;
// }
// 2
// 44
// 666
// 8888
// 1010101010


//  #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0,p=0; i < n; i++,p+=2)
//     {//for increasing triangle
//         for (int j = 0; j < i; j++)
//         //for odd rows print 1 and for even print 2
//         if(i%2==0) cout<<"2";
//         else cout<<"1";
//         cout<<endl;
//     }
//     return 0;
// }
// 1
// 22
// 111
// 2222
// 11111


//  #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     //outer loop runs for the upper diamond
//     for (int i = 0,p=0; i < n; i++,p++)
//     {   //for decreasing space
//         for (int j = 0; j < n-i; j++) cout<<" ";
//         //for diamond printing with removing 1 column 
//         for (int j = 0; j < i-1; j++) cout<<p;
//         for (int j = 0; j < i; j++) cout<<p;
//         cout<<endl;
        
//     }
//     //outer loop runs for the lower diamond
//     for (int i = 0,p=n; i < n; i++,p--)
//     {   //for increasing space
//         for (int j = 0; j < i; j++) cout<<" ";
//         //for diamond printing with removing 1 column 
//         for (int j = 0; j < n-i-1; j++) cout<<p;
//         for (int j = 0; j < n-i; j++) cout<<p;
//         cout<<endl;
//     }
//     return 0;
// }
     
//     1
//    222
//   33333
//  4444444
// 555555555
//  4444444
//   33333
//    222
//     1
//for increasing triangle j < i
//for decreasing triangle j < n 


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,j,n=6;
//     for(i=0; i<n;i++){
//   for(j=i;j<n;j++) cout<<"* ";
//   cout<<endl;}
//     return 0;}

//     for(i=0; i<n;i++){
//   for(j=i;j<n;j++) cout<<"* ";
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// *

//for(i=0; i<n;i++){
//for(j=0;j<n-i;j++) cout<<"* ";
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// *


//left rotate of an array by 1
#include<bits/stdc++.h>
using namespace std;
//function to rotate the array




int main(){
    vector<int>arr={1,2,3,4,5};
   
    int r=1;

    int leftRotate(vector<int>arr, int r){
    int temp[arr.size()];
    int a=0;
    int i;
    //storing the all elements after the index 0 to the front of the temp[a] array
    for(int i=r; i<arr.size();i++){
        temp[a]=arr[i];
        a++;
    }
    //storing the elements starting from r 
    for(int i=0; i<r;i++){
        temp[a]=arr[i];
        a++;
    }
    // Copying the elements of temp[] in arr[] to get the final rotated array
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = temp[i];
    }}
    for(auto c:arr[i]){
        cout<<c<<" ";
    }
    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// // Function to rotate array
// void Rotate(int arr[], int d, int n)
// {
// 	// Storing rotated version of array
// 	int temp[n];

// 	// Keeping track of the current index
// 	// of temp[]
// 	int k = 0;

// 	// Storing the n - d elements of
// 	// array arr[] to the front of temp[]
// 	for (int i = d; i < n; i++) {
// 		temp[k] = arr[i];
// 		k++;
// 	}

// 	// Storing the first d elements of array arr[]
// 	// into temp
// 	for (int i = 0; i < d; i++) {
// 		temp[k] = arr[i];
// 		k++;
// 	}

// 	// Copying the elements of temp[] in arr[]
// 	// to get the final rotated array
// 	for (int i = 0; i < n; i++) {
// 		arr[i] = temp[i];
// 	}
// }

// // Function to print elements of array
// void PrintTheArray(int arr[], int n)
// {
// 	for (int i = 0; i < n; i++) {
// 		cout << arr[i] << " ";
// 	}
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
// 	int N = sizeof(arr) / sizeof(arr[0]);
// 	int d = 2;

// 	// Function calling
// 	Rotate(arr, d, N);
// 	PrintTheArray(arr, N);

// 	return 0;
// }
