#include <iostream>
using namespace std;

int main()
{
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
//count digits of number
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
//Reversing number 
// int num , reversedNum = 0;
// cout <<"Num:";
// cin >> num;

// while ( num!= 0)

// {reversedNum *= 10;
// reversedNum += num % 10;
// num/= 10;
// }
// cout<< "Reversed : " << reversedNum;
int num ;
cout << "Num : ";
cin >> num;

int factorial = 1;
 for (i = 1 ; i<=num ; i++){
    factorial *= i ;

 }
 cout<<num<<"! =" << factorial;
return 0;
}