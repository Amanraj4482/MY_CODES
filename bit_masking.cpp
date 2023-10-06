// 5 << 2 means 5*2^2
// 5 >> 2 means 5/2^2
// ~ negation operator flips the bit
// | single one to make the one
// & both should be 1 to make one
// ^ same number will cancel out and give the zero otherwise 1


// the basic properties of the ⊕ operation: A^0=A, A^A=0, A^B=B^A
/*-----------------------------------------------------------*/
/* find the single number apparing twice in the array expect one */
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	vector<int>v (9) ;
// 	for (int i = 0; i < 9; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int xor_1 = 0;
// 	for (int i = 0; i < 9; ++i)
// 	{
// 		xor_1 ^= v[i];
// 	}
// 	cout << xor_1;
// 	return 0;
// }

/*------------------------------------------------*/

// swap the two nubmers

// #include<bits/stdc++.h>
// using namespace std;
// void swaping(int&a , int&b) {
// 	a ^= b;
// 	b ^= a;
// 	a ^= b;
// }
// int main() {
// 	int a , b;
// 	cin >> a >> b;
// 	swaping(a, b);
// 	cout << a << " " << b << endl;
// 	return 0;
// }

/*--------------------------------------------------*/
// Given n print the XOR of all no's between (1-N)

/*#include<bits/stdc++.h>
using namespace std;
int solve(int n ) {
	if (n % 4 == 0) return n ;
	if (n % 4 == 1) return 1 ;
	if (n % 4 == 2) return n + 1;
	if (n % 4 == 3) return 0 ;
	return -1;
}
int main() {
	int n ; cin >> n;
	cout<<solve(n)<<endl;
	return 0;
}
*/
/*------------------------------------------------------*/
// Given a range (L-R) print the XOR (L^L+1^L+2....R-1^R)

/*#include<bits/stdc++.h>
using namespace std;
int solve(int n ) {
	if (n % 4 == 0) return n ;
	if (n % 4 == 1) return 1 ;
	if (n % 4 == 2) return n + 1;
	if (n % 4 == 3) return 0 ;
	return -1;
}
int main() {
	int l, r; cin >> l >> r;
	cout << (solve(r)^solve(l - 1) ) << endl;
	return 0;
}
*/

/*----------------------------------------------------*/
// check N is even or odd
// The last bit of any odd number will always be set bit and when we & with 1 then it gives the 1 and reset will be 0
// and in case of even numbers it will give 0 in for all bits

/*#include<bits/stdc++.h>
using namespace std;
bool solve(int n ) {
	if ((n & 1) == 0) return 1;
	return 0;
}
int main() {
	int n ; cin >> n;
	if (solve(n)) cout << "Even" << endl;
	else cout << "Odd" << endl;
	return 0;
}
*/
/*--------------------------------------------------------*/

// Given N check if the ith bit is set or not
// N = 13 ( 1 1 0 1) we find the index from right to left
// i =2 "yes"  i =1 "no"

//  if the ith bit is set then there will be a non-zero number if we (mask & n)

// Oth based indexing -------->


/*#include<bits/stdc++.h>
using namespace std;
bool solve(int n , int i) {
	int mask = 1 << i;   // Create a mask with the i-th bit set to 1.
	return (mask & n ) != 0; // Check if the i-th bit is 1 and return the result.
}
bool solve2(int n, int i) {
	int mask = 1 << i;
	return (n | mask) != n + mask;
	// uses or operator ('|') to set the 'i' th bit of n to '1'
	// if was originally 0 it turns 1 but leaves it unchanged if it was already 1
	// where as (n + mask ) add the mask value to the original value of 'n'
	// it effectiverly sets the 'i'th bit to 1 regardless of its original value
	//  it checks if setting the i-th bit to 1 does not change the overall value of n. If they are equal, the function returns true; otherwise, it returns false.
}
int main() {
	int n , i; cin >> n >> i;
	if (solve(n, i)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}*/


/*------------------------------------------------------------*/

// Set the ith bit of a N

/*#include<bits/stdc++.h>
using namespace std;
void solve(int&n ) {
	int mask = (1 << n);
	n = n | mask;   // this sets the nth bit of  n = 1 if only it was not 1
}
int main() {
	int n ; cin >> n;
	solve(n);
	return 0;
}
*/

/*------------------------------------------------------------*/

// clear the set bit
// just do the & with the 0
// or opposite of masking means ~(mask)

/*#include<bits/stdc++.h>
using namespace std;
void solve(int & n ) {
	int mask = (1 << n);
	n = n & (~mask);
}
int main() {
	int n ; cin >> n;
	solve(n);
	return 0;
}
*/
/*------------------------------------------------------------*/

// Remove the last set bit
// the last is count from the right to the left

// for the odd number if we -1 then the last bit will be
// the last bit turns off when we reduce 1

/*#include<bits/stdc++.h>
using namespace std;
void solve(int & n ) {
	n = n & (n - 1);
}
int main() {
	int n ; cin >> n;
	solve(n);
	return 0;
}
*/
/*-------------------------------------------------------------*/
// check if the N is power of 2

/*#include<bits/stdc++.h>
using namespace std;
bool solve(int n ) {
	return ((n & (n - 1)) == 0) ? 1 : 0;
}

int main() {
	int n ; cin >> n;
	cout << solve(n);
	return 0;
}
*/

/*-------------------------------------------------------*/

// Count the no of set bits ----->
// 14 -> 3 set bits

/*#include<bits/stdc++.h>
using namespace std;
void solve(int n ) {
	// turn off the right most bit in the while until all  ==0
	int cnt = 0;
	while (n != 0) {
		n = n & (n - 1);
		cnt++;
	}
	cout << cnt << endl;
	// O(set_bits)
}
int main() {
	int n; cin >> n;
	solve(n);
	return 0;
}
*/
/*----------------------------------------------------------*/

// Every interger appears twice only two integers appear once
// 1 1 2 5 3 2 3 4 7 4

// #include<bits/stdc++.h>
// using namespace std;
// void brute_force() {
// 	int n ; cin >> n;
// 	vector<int>v(n);
// 	int cnt ;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cnt = 0;
// 		for (int j = 0; j < n; ++j)
// 		{
// 			if (v[j] == v[i]) cnt++;
// 		}
// 		if (cnt == 1) cout << v[i] << " ";
// 	}
// }
// int main() {
// 	brute_force();
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define print(x) for(int i =0 ;i<(int)x.size();i++) cout<<x[i]<<" ";

int main() {
	cout << (3 ^ 5) << endl;
	return 0;
}





