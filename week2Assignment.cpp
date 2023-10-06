// number system
// method to represent numeric value or quantities using different digits

// convert decimal to binary
// method --> division method and bitwise method
// 1.obtain bit with bitwise AND operation i.e (N&1)
// 2.right shift N by 1.(N=N>>1)
// 3.repeat above steps till N>0
// 4.Reverse the bits so obtained
// #include <bits/stdc++.h>
// using namespace std;
// int decimalToBinary(int n)
// {
//     int binary = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         int bit = (n & 1);
//         binary = bit * pow(10, i++) + binary;
//         n = n >> 1;
//     }
//     return binary;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << decimalToBinary(n) << endl;
//     return 0;
// }

// Binary to decimal
// 1.multiply each digit with its place value
// 2. Add up all place values
// 3.sum is the decimal number

// #include <bits/stdc++.h>
// using namespace std;

//     int binaryToDecimal(int n)
//     {
//         int decimal = 0;
//         int i = 0;
//         while (n)
//         {
//             int bit = n % 10;
//             decimal = decimal + bit * pow(2, 1 ++);
//             n /= 10;
//         }
//         return decimal;
//     }
// int main()
// {
//     int n;
//     cin>>n;
//     int binary =decimalToBinary(n);
//     cout<<binary<<endl;
//     return 0;
// }