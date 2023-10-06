#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int y = 0;
    while (x > 0)
    {    // finding the reverse of a number
        // Exract the last digit
        int digit = x % 10;
        // appending the last digit
        y = y * 10 + digit;
        // shrinking the x digit by discarding the last digit
        x = x / 10;
    }

    return y;
}
int main()
{
    int x;
    cin >> x;
    int dummy = reverse(x);
    if (dummy == x)
    {
        cout << "palindrome " << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
    return 0;
}


// //(s.lenght()-1) index of last element in a string
// // palindrome check for string
// #include <bits/stdc++.h>
// using namespace std;
// bool isPalindrome(string s)
// {
//     int left = 0;
//     int right = s.length() - 1;
//     while (left < right)
//     {
//         //The isalnum() function checks whether the argument passed is an 
//         //alphanumeric character (alphabet or number) or not.
//         if (!isalnum(s[left]))
//             left++;
//         else if (!isalnum(s[right]))
//             right--;
//         if (s[left] != s[right])
//         {
//             return false;
//         }
//         else
//         {
//             left++;
//             right--;
//         }
//     }
//     return true;
// }
// int main()
// {
//     string a;
//     cin >> a;
//     //  a=getchar();
//     bool ans = isPalindrome(a);
//     if (ans == true)
//     {
//         cout << "Palindrome" << endl;
//     }
//     else
//     {
//         cout << "Not palindrome " << endl;
//     }
//     return 0;
// }