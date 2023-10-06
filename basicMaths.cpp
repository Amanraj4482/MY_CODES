// PRIME NUMBER-> only two number divisible by itself and n number(1,n)
// but 1 is not prime number because its factor is only 1 itself

// 1. Native Approach
// 2. Sqrt Approach
// 3. Sieve of Eractosthenes
// 4. Segmented Sieve

// count primes
// given an integer n , return number of prime number that are strictly less than n
// how many primes are there between from o to n-1

// 0,1 are not prime and 2 is the smallest prime
// n=5*10^6

// #include<bits/stdc++.h>
// using namespace std;
//     bool isPrime(int n){
//         if(n<=1) return false;
//         for(int i=2 ;i<n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
//     int countPrime(int n){
//         int c=0;
//         for(int i=0;i<n;i++){
//             if(isPrime(i)){
//                 ++c;
//             }
//         }
//         return c;
//     }
// int main(){
//     int n=10;
//    cout<< countPrime(n);

//     return 0;
// }
// 0(n^2)
// method 1 ->sol gets tle

// to better prime function
// let n is non-prime
// n=a*b where a and b is factor of the n
// if a > root n and b > root n
// ab>n not possible so at least one of the factor must be smaller than root n
// if we cannot find ant factor less than root n then n is prime

// #include<bits/stdc++.h>
// using namespace std;
//     bool isPrime(int n){
//         if(n<=1) return false;
//         // int sqrtN=sqrt(n);
//         for(int i=2 ;i<n;i++){//putting sqrtN in place of n is getting wrong answer 8 for n=10
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
//     int countPrime(int n){
//         int c=0;
//         for(int i=0;i<n;i++){
//             if(isPrime(i)){
//                 ++c;
//             }
//         }
//         return c;
//     }
// int main(){
//     int n=10;
//    cout<< countPrime(n);

//     return 0;
// }

// Seive of Eratosthenes
// arr of prime number
// marking it all prime -except 1 ,21
// prime 2 -> 2 4 6 8 10 14 these all will not be a prime number becuase of their multiple
// same as 3 4 5 6 and so no except for their base number

// #include <bits/stdc++.h>
// using namespace std;
// int countPrime(int n)
// {
//     if (n == 0)
    
//         return 0;
//         vector<bool> prime(n, true);
//         // all are prime marked already .
//             prime[0] = prime[1] = false;
//             int ans = 0;
//             for(int i=2;i<n;i++){
//             if (prime[i])
//             {
//                 ans++;
//                 int j = 2 * i;
//                 while (j < n)
//                 {
//                     prime[j] = false;
//                     j += i;
//                 }
//             }
//         }
    
//     return ans;
// }
// int main()
// {
//     int n = 10;
//     cout << countPrime(n);
//     return 0;
// }
// O(n*log(log(n)))


//segmented sieve
//by two pointer approch for same as seive of eratostherom



// GCD/HCF
//1.Eucli'd Algorithm to find GCD
//   gcd(a,b)=gcd(a-b,b)(in case a>b) OR gcd(a%b,b)-> since modulbe operation is heavy operation 
// we use the first formule
//apply this formula till one of the parameter become zero

//2.LCM (a,b)*gcd(a,b)=a*b

//Eucli'd Algorithm to find GCD
// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b){
//     if(a==0) return b;
//     if(b==0) return a;
//     while(a>0&&b>0){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//     }
//     return a==0?b:a; //if a is zero then return b else a
// }
// int main(){
//     int a =24 , b=72;
//     cout<<gcd(a,b);
//     return 0;
// }


//LCM by eulid's theorem
// lcm=(a*b/gcd)


//MODULO ARTHEMETIC
// 1.(a%n)->[0,......n-1]
// 2.Generally , to avoid overflow while storing interger we do modulo with a large number.
// 1.(a+b)%M=a%M+b%M
// 2.a%M-b%M=(a-b)%M
// 3.{(a%M)%M}%M=a%M
// 4.a%M*b%M=(a*b)%M

//FAST EXPONENTITAION
// 1.normal solution to find a^b->O(b)
// 2.better solution a^b -> O(log b)



#include<bits/stdc++.h>
using namespace std;
int fastExpo(int a, int b){
    int ans =1;
    while(b>0){
        if(b&1){
            //odd
            ans=ans*a;
        }
        a=a*a;
        b>>=1; //b/2
    }return ans;

}//O(log(b))
int slowExpo(int a, int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }return ans;
}//O(b)

int main(){
    cout<<slowExpo(5,4)<<"______"<<fastExpo(5,4)<<endl;
    return 0;
}