// #include <stdio.h>
// #include <stdlib.h>
// #include<time.h>
// int main(){
//   int n, guess, nguessess=1;
//   srand(time(0));
//   n=rand ()%100+1;//genrates a random num between 1 and 100
// //printf("The number is %d\n",n);
// //keep running the loop until the number is guessed
// do{
//      printf("Guess the number between 1 to 100\n");
//      scanf("%d",&guess);
//      if(guess>n){
//       printf("lower number please\n");
//      }
//      else if(guess<n){
//       printf("higher number please\n");
//      }
//     else{
//       printf("You guessed it in %d attempts \n",nguessess);
//     }
//     nguessess++;
// } while(guess!=n);
// return 0;
// }

// FUNCTION CALLING


//  #include<stdio.h>
//  #include<conio.h>
//  #include<stdlib.h>
//  void print(int n){
//    for (int  i = 0; i <n; i++)
//    {
//    printf("%c\n",'*');
//    }
//    printf("%c\n",'*');
//  }
//  int take(){
//  printf("Enter a number:\n");
//  int i;
//  scanf("%d",&i);
//  return i;
//  }
//  int main(){
//    //print(7 );
//   int c=take();
//   printf("Entered number is : %d",c);
//    return 0;
//  }



// //FACTORIAL BY RECURSIVE METHOD



// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int fact(int n){
//   if(n==1 || n==0){
//     return 1;
//   }
//   else{
//     return (n*fact(n-1));
//   }
// }
// int main(){
//   int n;
//   printf("Enter the no:\n ");
//   scanf("%d",&n);
//   printf("The factorial of %d is %d",n, fact(n));

//   return 0;
// }

// POINTERS**********


//  #include<stdio.h>
//  #include<conio.h>
//  #include<stdlib.h>
//  int main(){
//     printf("Lets us learn the pointers\n");
//      int a =76;
//      int* ptra =&a;
//      printf("The value of %x\n",ptra);
//      printf("The value of %x\n",ptra);
//    return 0;
//    // %X · It is used to print the hexadecimal unsigned integer,
//    //but %X prints the alphabetical characters in uppercase such as A, B, C, etc.
//  }

//***********************************RECURSIVE*****************************
// FIBONACCI SERIES
//  #include<stdio.h>
//  #include<conio.h>
//  #include<stdlib.h>
//  //RECURSIVE APPORACH
//  int fib(int n){
//    if( n==1 || n==0 )
//      return -(n-1);
//      return (fib(n-1)+fib(n-2));
//  }
//  //ITERATIVE APPORACH
//  int fibo(int n){
//    int a=0;
//    int b=1;
//    for (int i = 0; i < n-1; i++)
//    {
//      /*b=a+b ;*/b+=a;
//      a=b-a;
//    }
//    return a;
//  }
//  int main(){
//    int n;
//    scanf("%d",&n);
//    printf("The value at %d is %d\n",n,fib(n));
//  //runtime 1509ms

//   printf("The value at %d is %d",n,fibo(n));
// //runtime 55ms
//   return 0;

//   //In fibonacci series the runtime of
//   //recursive function is more than iterative apporach
// }



//INDIRECT RECURSION CASE
// write a program to print numbers from 1 to 10 in such
//  a way that when number is odd , add 1 and when number is even
//   substract 1.

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void odd();
// void even();
// int n = 1;
// void odd()
// {
//     if (n <= 10)
//     {
//         printf("%d"" ", n + 1);
//         n++;
//         even();
//     }
//     return;
// }

// void even()
// {
//     if (n <= 10)
//     {
//         printf("%d"" ", n - 1);
//         n++;
//         odd();
//     }
//     return;
// }
// int main()
// {
//     odd();
// }



//RECURSIVE QUESTION
// how many call being called by this function
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void get(int n){
//     if(n<1)
//     return;
//     get(n-1);
//     get(n-3);
//     printf("%d"" ",n);
// }
// int main(){
//     int n =6;
//     get(6);
//     printf("%d",n);
//     return 0;
// }
//so get(6) function invoked 25 times before returning to mains



//RECURSIVE QUESTION 2

//HOW MANY NUMBER OF TIMES THE STAR WILL BE PRINTED ON THE SCREEN

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void fun1(int n){
//     int i=0;
//     if(n<1)
//     fun1(n-1);
//     for(i=0; i<n;i++)
//     printf(" * ");
// }
// int main(){
//     fun1(4);
//     return 0;
// }

// my ans is -- n
// but the actual answer is n(n+1)/2;


// ARRAY
//  #include<stdio.h>
//  #include<conio.h>
//  #include<stdlib.h>
//  int main(){
//    int arr[10];
//    int i=0;
//    printf("Printing:\n");
//    for(; i<5 ; i++){
//      scanf("%d",&arr[i]);
//    printf("%d\n",arr[i]);
//    }
//    return 0;
//  }

//RECURSIVE QUESTION 3
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int fun(int n){
//     int x=1 ,k;
//     if(n==1) return x;
//     for (k=1; k<n ; ++k)
//     x=x+fun(k)*fun(n-k);
//     return x;
// }
// int main(){
//     printf("%d",fun(5));

//     return 0;
// }
//ans is 51


//RECURSIVE QUESTION 5

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void count(int n){
//     static int d =1;
//     printf("%d",n);
//     printf("%d",d);
//     d++;
//     if(n>1) count(n-1);
//     printf("%d",d);
// }
// int main(){
//     count(3);
//     return 0;
// }
//312213444



//******************************ARRAY******************************
//DEFINE MACROS FOR ARRAY
//for printing array index and values

//   #include <stdio.h>
//   #include <conio.h>
//   #include <stdlib.h>
//   #include <math.h>
//   #include <string.h>
//   #include <time.h>
//   #include <ctype.h>
//   #define N 5
//   int main(){
//     int a[N], i;
//     printf("\nArray index are as follows:\n");
//     for(i=0 ; i<N;i++){
//         printf("%d"" " ,i);
//         scanf("%d",&a[i]);
//     }
//     printf("\nArray elemts are as follows:\n");
//     for(i=0; i<N ;i++){
//         printf("%d"" ",a[i]);
//     }

//     return 0;
//   }


//******************repeated digit in an array********************
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//     int seen[10]={0};
//     int N;
//     scanf("%d",&N);
//     while(N>0){
//        int rem =N%10;
//         if(seen[rem]==1)
//         break;
//         seen[rem]=1;
//         N=N/10;
//     }
//     if(N>0)
//         printf("YES");
//         else
//         printf("NO");
//     return 0;
// }




//SIZE OF ELEMENTS IN AN ARRAY
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//     int a[]={34,46,3,4,6,7,8,84,343,7,8};
//     printf("%d",sizeof(a)/sizeof(a[0]));
//     return 0;
// }
// total no of elements is 11


//**********************************VARIABLE LENGTH ARRAYS****************************

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//     int n;
//     printf("Enter the no of elements you want to reverse:\n");
//     scanf("%d",&n);
//     int a[n];//length of an array
//     int i;
//     printf("Enter all the %d elements :\n",n/*printing accepted length */);
//     for(i=1; i<=n ; i++){
//         scanf("%d",&a[i]/*accepting all inputs in array*/);
//     }
//     printf("Elements in reverse order are:\n");
//     for(i=n; i>=1; i--){
//         printf("%d"" ",a[i]);
//     }
//     return 0;
// }

//****************************POINTERS***********************

// int x=5 , *ptr =&x;    assign address of x to ptr as value and also ptr has its own address different
// printf--*ptr (prints value)
// printf--ptr (prints address)


//int *ptr;
//*ptr 1;
//output
//_________Segmentation fault is caused by program trying to read or write an illegal memory location
//value of derefernce oprator is an operator that is use d to access the value stored at the location pointed by the pointer
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//     int i=1,*q;
//     int *p =&i;//value of i stord in *p
//     cout<<*q<<"   "<<q<<endl;
//     q=p;//address of p gets coppied in q
//     *q=5;//updated q=5
//     printf("%d",i);
//     return 0;
// }


//***************Finding min and max value in array with pointers********************
//with the help of pointers we make changes in the min and max with the help of reference not with the change in the value which will be not reflected in the main function
//  #include <stdio.h>
//  #include <conio.h>
//  #include <stdlib.h>
//  #include <math.h>
//  #include <string.h>
//  #include <time.h>
//  #include <ctype.h>
//     void minMax(int arr[], int len , int *max, int *min){
//         *min=*max =arr[0]/*=23*/;//initializing both min and max with the first element of an array
//         for(int i=0; i<len ; i++){//running loop throughout the array length
//             if(arr[i]>*max)//if element is greater than value intially containg max=23  then update my *max address with the present element
//                 *max=arr[i];

//             if(arr[i]<*min)//if element is lower than value intially containg min=23  then update my *min address with the present element
//             *min=arr[i];//storing updated value
//         }
//     }
//     int main(){
//         int a[]={23,4,16,77,2,65,9,0};
//         int min , max;
//         int len =sizeof(a)/sizeof(a[0]);//length of an array
//         minMax(a,len,&max,&min);//giving inputs to functions
//         printf("Minimum value in the array is : %d and Maximum value is: %d", min , max);
//         return 0;
//     }


//FINDING MID OF THE ARRAY

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int *findMid (int a[], int n){//retuning some address or pointer cannot return the integer value because it initilized with the pointer that is dereference oprator
//     return &a[n/2];//(&)-> returning address a[2]=6 get the element of index 2
// }
// int main(){
//     int a[]={2,4,6,7,10};
//     int n=sizeof(a)/sizeof(a[0]);//no of elements stored in this array  n=5
//     int *mid = findMid (a,n);//parameters passes to the findMid function is a= the whole array and n=size
//     printf("%d",*mid);//value printed in *mid container
//     return 0;
// }
//for (line 462) returning address back to *mid for receiving that address a pointer must be


//**************WORD OF CAUTION************
//Never ever try to return the address of an automatic variable
// for example:
// int *fun(){
//     int i=10;
//     return &i;//this local address of this &i gets destroyed in this brackets only
// }
// int main(){
//     int *p =fun ();
//     printf("%d",*p);
// }

//but if we write *p=&i then it is wrong becuase here * symbol indicates the indirection operator and we cannot assign the address to some integer varible
//therefore in the first statement there is not need 0f * symbol in front of p it simply means we are assigning the address to a pointer


//how to print the address of a variable?
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int i =10;
//   int *p =&i;
//   printf("The address of variable i is %p", p);
//   return 0;
// }

//----->>>>
//printing the address of i variable ..
// if i is a variable and p points to i which of the following expressions are aliases of i?
//ans is *p ans *&i

// int i =10;
// int *p = &i;

// (i)=value(10)=address(1000)
// (p)=value(1000)=address(2000)

// a--> *p =*(1000)=10
// b--> *&p =*(&p)=*(2000)=1000//address of p
// c--> &p=2000
// d--> *i =*(10) doesn't make sense
// e--> *&i=*(&i)= *(1000)=10


//***********ARRAY**********
//sum of elements of an array
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int a[]={1,1,1,1,1};
//   int sum =0, *p;
//   //for(p=&a[0];p<=&a[4];p++)  //&a[0]--address of first element of array
//   for(p=a ; p<= a+4; p++)   //a -- name of the array means address of the first element
//     sum = sum + *p;

//     printf("Sum is %d",sum);
//   return 0;
// }


//*********REVIEW THIS CODE----------->>>>>
//  int main(){
// int a[] = {11,22,36,5,2};
// int *p = &a[0];//assing the first value of 11 to the p
// int i,sum=0;
// for(i=0;i<=sizeof(a[4]/a[0]);i++){
//   sum+= *(p+i);
// }
// printf("%d",sum);
// return 0;
// }

//sizeof(a)/sizeof(a[0]) ---->> size of whole array divided by first single array
//*(a+i)=a[i]--- used in line 529




//*********************REVERSE A SERIES OF A NUMBER USING POINTERS----lecture 116
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// #define N 5
// int main(){
//   int a[N], *p;
//   printf("Enter %d elements in the array:",N);
//   for(p=a; p<=a+N-1;p++)
//   scanf("%d", p);

//   printf("Elements in reverse order\n");
//   for(p=a+N-1; p>=a; p--)
//   printf("%d"" ",*p);
//   return 0;
// }




//we are not passing the whole array we just passing the base address
//name of the address represents the address of the array
//An array name is always treated as a pointer
//int *b is equal to int b[]
//base address means 1st element address in array

//PASSING ARRAY AS AN ARGUMENT TO A FUNCTION
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int add(int b[],int len){
//   int sum = 0, i;
//   for(i=0;i<len;i++)
//     sum +=b[i];
//     return sum;
// }
// int main(){
//   int a[]={1,3,4,5};
//   int len=sizeof(a)/sizeof(a[0]);
//   printf("%d",add(a,len));
//   return 0;
// }


//USING POINTERS TO PRINT 2D ARRAYS
//c stores multi dimentational arrays in row major order
//use single for loop instead of double for loop to print 2d array
// for(p=&a[0][0];p<=&a[1][1];p++)
// printf("%d",*p);




//ADDRESS ARTHEMATIC OF 2D ARRAY USING POINTERS

// **a=>*(*a)=>*(*(a+0))=>*(*(a+0))=>a[0][0]=>1
// *(a+1)=>*(pointer to the 2nd 1d array)=>pointer ot the 1st element of 2nd 1D array
// **(a+1)+1=>pointer to the 1st element of 2nd 1D array+1 =>pointer to the 2nd element of the 2nd 1D array
// *((a+1)+1)=>*pointer to the 2nd element of 2nd and 1D array=>4=>a[1][1]

// int a[2][2][2];
// a=>pointer to the 2D array
// [2]=>two 2D array
// [2]=>Each of which contains two 1D array
// [2]=>Each of which contains two elements


//POINTER POINTING TO AN ENTIRE ARRAY
// int main (){
//   int a[5]={1,2,3,4,5};
//   int (*p)[5]=&a;  -->int (*p)[5]--> pointer to the whole array of 5 elements
//   printf("%p",p);
//   return 0;
// }

//  int (*p)[5]=&a;
//  *b=pointer to the 1st element of 1st 1D array
//  &*b=b=pointer to the 1st 1D array



//pointer question
//what is the value printed by this program
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int f (int *a, int n){/*    *a is cally     and    f(&a[0],6) is the caller*/
//   if (n<= 0) return 0;
//   else if (*a %2 ==0) return *a+f(a+1, n-1);
//   else return *a-f(a+1, n-1);
// }
// int main(){
//   int a[]={12,7,13,4,11,6};
//   printf("%d",f(a,6)); /*here a represents the first element address*/
//   getchar();
//   return 0;
// }
//--->15 ans


//pointers important question
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
//   void swap(int *x, int *y){
//   static int *temp;
//   temp =x;
//   x=y;
//   y=temp;
// }
// void printtab(){
//   static int i, a=-3 , b=-6;
//   i=0;
//   while(i<=4){
//     if((i++)%2==1) continue;
//     a+=i;
//     b+=i;
//   }
//   swap(&a ,&b);
//   printf("a=%d, b=%d\n",a,b);
// }
// int main(){
//   printtab();
//   printtab();
//   return 0;
// }
// a=6, b=3
// a=15, b=12


//pointer question
//what should be the contents of the array b at the end of the program?
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int i , j;
//   char a[2][3]={{'a','b','c'},{'d','e','f'}};
//   char b[3][2];
//   char *p=*b;
//   for(i=0;j<3;j++){
//     for(j=0;j<3;j++);{
//       *(p+2*j+i)=a[i][j];
//     }
//   }
//   return 0;
// }
//a b
//c d
//e f


//*********STRING********//

//each char takes 1 byte of memory location
//compiler treats a string literals a pointers to the first character
//so to the printf or scanf we are passing a pointer ot the first character of a string literal.


// char *ptr ="Hello world"
// ptr contains the address of the character of the string literal.
// char *ptr ="Jenny";
// *ptr = 'M';----> NOT ALLOWED
// string literals are also known as string constants they have been allocated a read only memory
// so we cannot alter them

// "H"-->(STRING) represented by a pointer to a character 'H'
// 'H'-->(CHAR CONST) represeted by an integer (ASCII CODE :72)


//we cannot modify a string literal
// char *ptr ="HELLO";
// *ptr ='M';

//but we can modify a char array
// char s[6]="HELLO";
// s[0]='M';


// char *ptr ="HELLO";
// to print it
// printf("%s",ptr);
// puts(s);


// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int input(char str[], int n){
//   int ch, i=0;
//   while ((ch = getchar())!='\n')
//    if (i<n)
//       str[i++]=ch;
//       str[i]='\0';
//       return i;
// }/*getchar() function is used to read one character at a time form the user input
// it returns an integer equivalent to the Ascii code of the character*/
// int main(){
//   char str[100];
//   int n = input(str,5);
//   printf("%d %s", n ,str);
//   return 0;
// }

//TO PRINT ALL CHARACTERS
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int ch;
//   for(ch='A';ch<='Z'; ch++)
//   putchar(ch);
//   return 0;
// }

//TO COPY STRING
//char strcpy(char destination ,const char* source)
//strncpy(destination,source , sizeof(destination))
//#include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   char str1 [10]="Hello";
//   char str2 [10];
//   char str3 [10];
//   strcpy(str3,(strcpy(str2,str1)));
//   printf("%s %s",str2,str3);
//   return 0;
// }

//RETURNING LENGTH OF A STRING
//STRLEN
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   char *str = "HELLo WORLD";
//   printf("%d",strlen(str));
//   return 0;
// }

//STRCAT (STRING CONCATENATE FUNCTION)
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   char str1[100], str2[100];
//   strcpy(str1,"Welcome to india\n");
//   strcpy(str2, "Teri maa ki chut");
//   strcat(str1,str2);
//   printf("%s",str1);
//   return 0;
// }
//An undefined behaviour can be observed if size of str1 isn't long enough to a accomodate the additional characters of str 2


//STRING COMPARISON FUNCTION-->STRCMP
//lower case between 97 to 122
//upper case between 65 to 90
//0 to 9 between 48 to 57
//spaces are less than all printing characters value -32

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   char *s1="abc";
//   char *s2="abe";
//   if (strcmp(s1,s2)<0)
//   printf("s1 is than s2");
//   else
//   printf("s1 is greater than or equal to s2");
//   return 0;
// }


//ARRAY OF STRINGS
// ARRAY OF POINTERS

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   char *fruits[]={"2 Oranges","2 Apples","3 Bananas","1 Pineapple"};
//   if(strcmp(fruits[2],fruits[3])<0)
//   printf("%s are lesser than %s" , fruits[1],fruits[2]);
//   else if(strcmp(fruits[2],fruits[3])>0)
//   printf("%s are greater than %s" , fruits[2],fruits[3]);

//   return 0;
// }


//string question 3
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   char c[]="GATE2023";
//   char *p=c;
//   printf("%s",p+p[3]-p[1]);
//   //it reads the all character after a array string address of specific address
//   return 0;
// }

//string question
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
//   void foo(char *a)
//   {
//     if(*a && *a != ' '){
//       foo(a+1);
//       putchar (*a);
//     }}
// int main(){
//   char *a="ABCD EFGH";
//   foo(a);
//   return 0;
// }


//string question
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//    char *c ="GATECSIT2023";/*pointer c poiting to the first character to the STRing*/
//    char *p =c;
//    printf("%d", (int)strlen(c+2[p]-6[p]-1));
//   return 0;
// }
// size=2
// strlen return a size_t type data therefore , (int) will
// convert the size_t to int type. This is called TYPE CASTING



//FUNCTION POINTER IN C
//how to declare a pointer to an array
// int *ptr[10]--->WRONG
// the precedence of the operators precedence of [] is higher than *
//solution: int (*ptr)[10];  *ptr is a pointer which is pointing to an array of 10 integers
//----------------------------------------------------------------------------
//how to declare a pointer to a function
// int (*ptr)(int,int)--> *ptr is a pointer which is pointing to a function containig two integer
// arguments and it returns an integer


//assigning the address of a function to a funciton pointer
// int add(int a, int b){
//   return a+b;
// }
// int main(){
//   int (*ptr)(int, int)=&add;
//   //or
//   int (*ptr)(int,int);
//   ptr=&add;

//   return =ptr(10,20);
//   printf("%d", result);
// }




//DESIGINING A CALCULATOR PROGRAM USING FUNCTION POINTER
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// #define ops 4
// float sum(float a,float b) {return (a+b);}
// float sub(float a,float b) {return (a-b);}
// float multi(float a,float b) {return (a*b);}
// float divi(float a,float b) {return (a/b);}

// int main(){
//   float (*ptr2func[ops]) (float,float) ={sum,sub,multi,divi};
//   int choice;
//   float a,b;
//   printf("Enter your choice:0 for sum , 1 for sub , 2 for multi , 3 for divi:\n ");
//   scanf("%d",&choice);
//   system("cls");
//   printf("Enter the two numbers:\n");
//   scanf("%d %d ",&a,&b);
//   printf("%f", ptr2func[choice](a,b));

//   return 0;
// }


//STRUCTURES
//A structure is a user defined data type that can be used to group elements od different types into a single type

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
//   struct{
//   char *engine;
// }car1,car2;
// int main()
// {
//   car1.engine="DDis 190 engine";
//   car2.engine="1.2L kappa dual vtvt";
//   printf("%s\n",car1.engine);
//   printf("%s",car2.engine);

//   return 0;
// }



//USING THE TYPEDEF KEYWORD
//Syntax: typedef existing_data_type new_data_type
//typedef gives freedom othe user by allowing them to create their own types
//for example:

// #include<stdio.h>
// typedef int INTEGER;

// int main(){
//   INTEGER var =100;
//   printf("%d",var);
//   return 0;
// }
// prints : 100

//  MACROS LIKE FUNCIIONS
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// #define add(x,y) x+y
// int main(){
//   printf("addition of two numbers:%d",add(4,3));
//   return 0;
// }

//MORE EXAMPLE -- comparison
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// #define greater(x,y) if(x>y) \]
//         printf("%d is greater than %d",x,y); \]
//         else
//         printf("%d is lesser than %d", x,y);
// int main(){
//   greater (5,6);
//   return 0;
// }



//USES OF DEFINTION AS FUNCITON
// #include <stdio.h>
// #define add(x,y) x+y
// int main(){
//   printf("result of expression a*b+c is: %d",5*add(4,3));
//   return 0;
// }


//******************FILE MANAGEMENT IN C******************

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   FILE *Fpointer;
//   //fputc (character,file_pointer) //-->prints or write the character to the file
//   char data[25]="Anil shety dfjad";
//   int length =strlen(data);
//   int counter;


//   Fpointer =fopen("anil.txt","a");
//   if(Fpointer==NULL)
//   printf("Unable to create the file");
//   else{
//     for(counter =0; counter <length;counter++){
//       printf("Writing the charcter %c \n",data[counter]);
//       fputc(data[counter],Fpointer);
//     }
//   printf("Data written to the file succesfully");

//   fclose(Fpointer);}
//   // fopen("file_name","mode");//what you do with that file that is use of mode
//   // "r"//-->for reading mode
//   // "w"//-->for writing mode
//   // "a"//-->edit or append
//   // "r+"//-->open the file for both reading and writing
//   // "w+"//-->same read and write
//   // "a+"//-->no lost and edit
//   // "rb"//--> fpr working with the binary file
//   // "r+w"//
//   return 0;
//}



// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>

// FILE *pf;
// pf =fopen("anil.txt","w");
// int main(){

//   return 0;
// }
//********************************************************************************


//<------------------****************GETCHAR PUTCHAR PUTS GETS FUNCTION ***************------------------->
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
// char c;
// printf("Enter the character\n");
//  c = getchar();//takes the input a single character
// printf("Entered character is :");
// putchar(c);this prints that single character

//    char c[10];
//   gets(c);//it takes input any length of string
//   puts(c);// displays the output taken by gets function

//   return 0;
//  }

//PROGRAM TO CHECK WHETHER THE ENTERED NUMBER IS EVEN OR ODD
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int number;
//   printf("Enter the number\n");
//   scanf("%d",&number);
//   if(number%2==0)
//   printf("EVEN");
//   else
//   printf("ODD");
//   return 0;
// }


//PROGRAM TO RELATE TO INTERGERS
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int n1 , n2;
//   scanf("%d %d ",&n1,&n2);
//   if(n1==n2) printf("Equal");
//   else if (n1>n2) printf("%d is greater than %d \n",n1,n2);
//   else printf("%d is greater than %d \n",n2,n1);
//   return 0;
// }

//PROGRAM TO FIND THE FACTORIAL OF A NUMBER
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int n , fact=1;
//   scanf("%d",&n);
//   if(n>1){
//     for(int i =1; i<=n; i++){
//   fact*=i;}
//   printf("factorial of %d! is %d",n,fact);
//   }
//  else
//   printf("Enter no greater than 1");

//   return 0;
// }


//********************REVIEW THIS CODE

// //program to add numbers until zero
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   double n, sum =0;
//   do{
//     printf("Enter a number ");
//     scanf("%lf",&n);
//     sum+=n;
//   }
//   while(n!=0.0);
//     printf("Sum=%2lf",sum);
//   return 0;
// }

//PROGRAM TO CALCULATE SUM OF MAXIMUM NO 10
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   double n, sum=0;
//   for(int i =0; i<=10; i++){
//     printf("Enter a no %d:", i);
//     scanf("%lf",&n);
//     if(n<0.0)
//     break;
//     sum +=n;
//   }
//   printf("sum=%2lf",sum);
//   return 0;
// }



//find the minimum of a set of 10 numbers
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int a[10], i,min;
//   for(i=0; i<10;i++){
//     scanf("%d",&a[i])
//   }
//   min=99999;
//   for(i=0;i<10,i++)
//   {
//     if(a[i]<min)
//     min=a[i];
//   }
//   printf("\n Minimum is %d ",min);
//   return 0;
// }




//Declare a struture name student read and write the following information realted to student using structure
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
//     struct student
//     {
//         char name[50];
//         char grade[50];
//         int id;
//     }s1,s2;

//     void stud(struct student *s);
//     int main(){
//         struct student s;
//  strcpy(s1.name,"Aman raj");
//  strcpy(s1.grade,"btech cse 1st year");
//  s1.id=4482;
//  strcpy(s2.name,"Priyanshu pandey");
//  strcpy(s2.grade,"btech cse 1st year");
//  s2.id=9805;

//  stud(&s1);
//  stud(&s2);
//  getch();
//  return 0;}

//  void stud (struct student *s){
//      printf("Student Name is %s:\n",s->name);
//      printf("Student Grade is %s:\n",s->grade);
//      printf("Student ID is %d:\n",s->id);

//         }


//PROGRAM TO CHECK PALINDROME IN C
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// //PROGRAM TO REVERSE A NUMBER
// int reverse(int n){
//   int rev=0, rem;
//   while(n>0){
//     rem=n%10;
//     rev=rev*10+rem;
//     n/=10;
//   }
//   return rev;
// }
// int main (){
//   int n;
//   scanf("%d",&n);
//   int digit=reverse(n);
//   if(digit==n) printf("P");
//     else printf("NP") ;
//     return 0;

// }
//program to print daimond
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int i,n,j;
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n-i;j++)
//            {
//                printf(" ");
//            }
//          for(j=1;j<=i*2-1;j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//      }

// for(i=n-1;i>0;i--)
//     {
//         for(j=1;j<=n-i;j++)
//            {
//                printf(" ");
//            }
//          for(j=1;j<=i*2-1;j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//      }
//   return 0;
// }
//program to print factorial of number
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int fact(int n){
//   if(n==0  || n==1) return 1;
//   return n*fact(n-1);
// }
// int main(){
//   int n;
//   scanf("%d",&n);
//   printf("%d",fact(n));
//   return 0;
// }

// //The length of the string until the first digit is found is:
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int len=0;
//   char c[10]={"Xbox360"};
//   for(int i=0; c[i]!='\0';i++){
//   if(isdigit(c[i])){
//     break;
//   }
//   len++;}
//   printf("%d",len);
//   return 0;
// }

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[100];
//     int i, length = 0;
//     printf("Enter a string: ");
//     scanf("%s", str);
//     for(i = 0; str[i] != '\0'; i++) {
//         if(isdigit(str[i])) {
//             break;
//         }
//         length++;
//     }
//     printf("The length of the string until the first digit is found is: %d\n", length);
//     return 0;
// }



///PATTERN OF DAIMOND

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   int n=5 ,i,j;
//   scanf("%d",n);
//   //for printing space upside down triangle
//   for(i=1; i<=n;i++){
//     for(j=i;j<=n;j++){
//       printf(" ");
//     }//for printing incresing traingle
//     for(j=1;j<i;j++){
//       printf("*");
//     }
//     for(j=1;j<=i;j++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }
//      *
//     ***
//    *****
//   *******
//  *********


//PATTERN OF NUMBER
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   //for printing space upside down triangle
//   int n=5,i,j;
//   for(i=1; i<=n;i++){
//     for(j=1;j<=i;j++){
//       printf("1");
//     }
//     printf("\n");
//   }
//   return 0;
// }
// 1
// 11
// 111
// 1111
// 11111




// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   //for printing space upside down triangle
//   int n=5,i,j,p;
//   for(i=1,p=1; i<=n;i++,p++){
//     for(j=1;j<=i;j++){
//       printf("%d",p);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// 1
// 22
// 333
// 4444
// 55555

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   //for printing space upside down triangle
//   int n=5,i,j,p;
//   for(i=1,p=5; i<=n;i++,p--){
//     for(j=1;j<=i;j++){
//       printf("%d",p);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// 5
// 44
// 333
// 2222
// 11111


// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   //for printing space upside down triangle
//   int n=5,i,j,p;
//   for(i=1,p=0; i<=n;i++,p+=2){
//     for(j=1;j<=i;j++){
//       printf("%d",p);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   //for printing space upside down triangle
//   int n=5,i,j,p;
//   for(i=1,p=0; i<=n;i++,p+=2){
//     for(j=1;j<=i;j++){
//       printf("%d",p);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// 0
// 22
// 444
// 6666
// 88888


// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// int main(){
//   //for printing space upside down triangle
//   int n=5,i,j,p;
//   for(i=1,p=0; i<=n;i++,p+=2){
//     for(j=1;j<=i;j++){
//       printf("%d",p);
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <time.h>
// #include <ctype.h>
// void swap(int *a, int *b){
//   //int a , b;
//    int *temp;
//   temp=a;
//   a=b;
//   b=temp;

//  printf("%d %d",*a,*b);
// }
// int main(){
//   int a =6 , b=5;
//   swap(&a,&b);
//   return 0;
// }


#include <stdio.h>
#include <coniko.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
int main() {
	printf("afadfadsjkfhdsafjds");
	return 0;
}