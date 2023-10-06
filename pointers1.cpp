// POINTERS
// int x = 12  -> a symbol table is created with the address and 12 is stored in that
//&->ampersand address of operator->hexadecimal value
//*deference operator;
// int* ptr = (stores always address)
// ptr->it stores the location of the other varible as its own value->value of ptr
//&ptr-> prints the address of this varible
//*ptr->it access the value the location it stores and extracts the value of that location
//*ptr->value stored at ptr
// ptr always stores the address thus its size is always contant 8byte
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a =5;
    // int* ptr=&a;/*b is a pointer to a which contain integer data*/
    // //access the value ptr is printing to
    //  cout<<*ptr<<endl;

    // bad practise
    //  int *ptr;
    //  cout<<*ptr<<endl; //segmentation fault

    // int *ptr=0;/*null pointer*/
    // cout<<*ptr<<endl;

    // we cannot give int value to pointer declared varible
    //  int a=5;
    //  int *ptr=&a;//address of a gets stored in ptr and when it derefrence it can access the value location at a
    //  //poiner gets copied
    //  int *dusraPtr=ptr; //address of a get stored //*dusraptr access or pointing the value stored in a

    int a = 10;
    int *p = &a;
    int *q = p;
    int *r = q;
    
    cout<<a<<endl;//10
    cout<<&a<<endl;//address of a
    cout<<p<<endl;//address of a
    cout<<&p<<endl;//address of p
    cout<<*p<<endl;//10
    cout<<q<<endl; //address of a
    cout<<&q<<endl; //address of q
    cout<<*q<<endl;//10
    cout<<r<<endl;//address of a
    cout<<&r<<endl;//address of r
    cout<<*r<<endl;//10
    cout<<(*p + *q + *r)<<endl;//30
    cout<<(*p)*2 +(*r)*3<<endl;//50
    return 0;
}