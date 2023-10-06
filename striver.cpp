// 1.find the 2nd largest and 2nd smallest number in an array

/*#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int>&v, int n ) {

	int largest = v[0], slargest = -1;
	for (int i = 1 ; i < n; ++i)
	{
		if (v[i] > largest ) {
			slargest = largest ;
			largest = v[i];
		}
		else if (v[i] < largest && v[i] > slargest) {
			slargest = v[i];
		}
	}
	return slargest;
}
int secondSmallest(vector<int>&v, int n ) {

	int smallest = v[0] , ssmallest = INT_MIN;
	for (int i = 1; i < n; ++i)
	{
		if (v[i] < smallest) {
			ssmallest = smallest;
			smallest = v[i];
		}
		else if (v[i] != smallest  && ssmallest > v[i]) {
			ssmallest = v[i];
		}

	}
	return ssmallest;
}
int main() {
	int n ;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int slargest = secondLargest(v, n);
	int ssmallest = secondSmallest(v, n);
	cout << "Second largest " << slargest << endl;
	cout << "Second smallest " << ssmallest << endl;
	return 0;
}*/
// Second largest 8
// Second smallest 4
//O(n)


/*---------------------------------------------------------------------------------------------*/
//2.check if the array is sorted

/*#include<bits/stdc++.h>
using namespace std;
bool check_sorted(vector<int> v, int n ) {
	for (int i = 1; i < n; ++i)
	{
		// non decending
		if (v[i - 1] <= v[i]) {

		}
		else {
			return false;
		}
	}
	return true;
}
int main() {
	int n ;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	if (check_sorted(v, n)) cout << "Sorted" << endl;
	else cout << "Not sorted" << endl;
	return 0;
}
*/

/*-----------------------------------------------------------------------------------------*/
// 3.Remove duplicates from the soted array and return the count of the no modified
// 3.1brute force : SET DATA STRUCTURE

/*#include<bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	set<int> st;
	for (int i = 0; i < n; ++i) {
		st.insert(v[i]);
	}
	// interating into the set
	int index = 0;
	for ( auto it : st) {

		v[index] = it;
		index++;
	}
	cout << index << endl;
	// Print the elements of the vector
	for (int i = 0; i < index; ++i) {
		cout << v[i] << " ";
	}
	return 0;
}*/

// n(log n)+N
// O(n)  sc
/*--------------------------------------------------------------------------------------------------*/
// 3.2TWo pointer appraoch

/*#include<bits/stdc++.h>
using namespace std;
int remove_duplicates ( vector<int> v, int n) {

	int j = 0;
	for (int i = 1; i < n; ++i)
	{
		if (v[i] != v[j]) {
			v[j + 1] = v[i]; //move unique element to front
			j++;
		}
	}
	return j + 1;
}
int main() {
	int n ;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	cout << remove_duplicates(v, n);

	return 0;
}*/
//returning the size after the removal of the unique elements

/*--------------------------------------------------------------------------------------------*/
// 4.LEFT ROTATE THE ARRAY BY ONE PLACE


/*#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n ; cin >> n;
	vector<int> v(n);
	int temp = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	temp = v[0];
	for (int i = 0; i < n; ++i)
	{
		v[i - 1] = v[i];
	}
	v[n - 1] = temp;
	for (int i = 0 ; i < n; i++) {
		cout << v[i] << " ";
	}
}
int main() {
	solve();
	return 0;
}

*/

/*------------------------------------------------------------------------*/
// 5. LEFT ROTATE ARRAY BY THE D PLACES
// d rotation means = d % n


/*#include<bits/stdc++.h>
using namespace std;
void left_rotate(vector<int>&v, int n, int d) {
	d = d % n;
	vector<int>temp(d);
	for (int i = 0; i < d; ++i)
	{
		temp [i] = v[i];
	}
	for (int i = d; i < n; ++i)
	{
		v[i - d] = v[i];
	}
	for (int i = n - d; i < n; ++i)
	{
		v[i] = temp[i - (n - d)];
	}
}
int main() {
	int n, d; cin >> n >> d;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	left_rotate(v, n, d);
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	return 0;
}*/
// sc => (d)  temp (array)
// Tc => O(n-d)



//Optimal solution =>
// reverse the d , and n-d reverse
// reverse the final array


/*#include<bits/stdc++.h>
using namespace std;
void left_rotate(vector<int>&v, int n, int d) {
	reverse(v.begin(), v.begin() + d); // O(d)
	reverse(v.begin() + d, v.end()); // O(n-d)
	reverse(v.begin(), v.end()); //O(n)

	// int start = n , end = d;
	// while (start <= end) {
	// 	int temp = v[start];
	// 	v[start] = v[end];
	// 	v[end] = temp;
	// 	start++, end--;
	// }
}

int main() {
	int n, d; cin >> n >> d;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	left_rotate(v, n, d);
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	return 0;
}
*/


/*------------------------------------------------------------------------------*/
// MOVE ALL ZEROES TO THE END OF THE ARRAY

/*#include<bits/stdc++.h>
using namespace std;

void move_zero_end_brute_force(vector<int>&v , int n) {
	vector<int> temp;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] != 0) {
			temp.push_back(v[i]);
		}
	}
	for (int i = 0; i < temp.size()	; ++i)
	{
		v[i] = temp[i]; //all nonzers are at the front
	}
	for (int i = temp.size(); i < n; ++i)
	{
		v[i] = 0;
	}
	for (auto i : v) {
		cout << i << " ";
	}
	//tc -> O(2n)   sc O(n)
}

void move_zero_end_optimal_sol(vector<int>&v , int n ) {
	// 2 pointer approach
	int j = -1;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] != 0) {
			swap(v[j++], v[i]);
		}
	}
	for (auto i : v ) {
		cout << i << " ";
	}

}
int main() {
	int n; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	move_zero_end_brute_force(v, n);
	return 0;
}


*/
/*-------------------------------------------------------------------------*/


// UNION OF TWO SORTED ARRAYS


/*#include<bits/stdc++.h>
using namespace std;

void union_of_two_array_brute() {
	int n ; cin >> n;
	vector<int> a(n);
	for (auto &i : a) {
		cin >> i;
	}
	int m ; cin >> m;
	vector<int> b(m);
	for (auto &i : b) {
		cin >> i;
	}

	// inputing into the set
	set<int> st;
	for (int i = 0 ; i < n; i++) {
		st.insert(a[i]);
	}
	for (int i = 0 ; i < m; i++) {
		st.insert(b[i]);
	}


	vector<int> uni;
	for (auto it : st) {
		uni.push_back(it);
	}
	for (auto i : uni) {
		cout << i << " ";
	}

	// tc O(nlog(n)+ O(mlog(n))
	// sc O(n+m)
}
void union_of_two_array_optimal() {

	// ----------------------- wrong ------------------------------
	int n ; cin >> n;
	vector<int> a(n);
	for (auto &i : a) {
		cin >> i;
	}
	int m ; cin >> m;
	vector<int> b(m);
	for (auto &i : b) {
		cin >> i;
	}
	// two pointer approach
	vector<int> uniarr;
	int i = 0 , j = 0;
	while (i < n && j < m) {
		if (a[i] <= b[j]) { // if the element in the other array is smaller
			if (uniarr.size() == 0 || uniarr.back() != a[i]) { // searching for the duplicate in the back(just the last element) of this array
				uniarr.push_back(a[i]);
			}
			i++; // i will move if i am taking or not
		}
		else {
			if (uniarr.size() == 0 || uniarr.back() != b[j]) {
				uniarr.push_back(b[j]);
			}
			j++;
		}
	}

	while (i < n) {
		if (uniarr.size() == 0 || uniarr.back() != a[i]) {
			uniarr.push_back(a[i]);
		}
		i++;
	}
	while (j < m) {
		if (uniarr.size() == 0 || uniarr.back() != b[j]) {
			uniarr.push_back(b[j]);
		}
		j++;
	}
	cout << "size of the uniarr " << uniarr.size() << endl;
	for (auto i : uniarr) {
		cout << i << " ";
	}
	// tc = O(n + m )
	// sc = O(n + m )
}
int main() {
	// union_of_two_array_brute();
	union_of_two_array_optimal(); // both the arrays must be sorted
	return 0;
}*/


// 6
// 1 2 3 5 5 6
// 7
// 0 1 2 3 3 8 9

//output : size of the uniarr 8
// 0 1 2 3 5 6 8 9


//INTERSECTION OF THE TWO ARRAYS

// for every element there has to be the corresponing element in the other array
// pick up the element and check in the other array
// keep track of the used element or not

// #include<bits/stdc++.h>
// using namespace std;
// void intersection_of_the_array_brute() {

// 	/*--------------- wrong ---------------------------*/
// 	int n ; cin >> n;
// 	vector<int> a(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> a[i];
// 	}
// 	int m ; cin >> m;
// 	vector<int>b(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> b[i];
// 	}

// 	vector<bool> visited_arr(m, 0);
// 	vector<int> inter_arr;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < m; ++j)  //for every i we loop through the entire array b
// 		{
// 			if (a[i] == b[j] && visited_arr[j] == 0) { // i find the corresponding in the b array also check for the is it visited or not
// 				inter_arr.push_back(a[j]);  //if not marked then store it in the inter_arr
// 				visited_arr[j] = 1;   //also mark the visited current element
// 				break;
// 			}
// 			if (b[j] > a[i]) break; // exceded never find ahead
// 		}
// 	}
// 	for (auto i : inter_arr) {
// 		cout << i << " ";
// 	}
// 	// tc O(n * m )
// }
// void intersection_of_the_array_optimal() {
// 	int n ; cin >> n;
// 	vector<int> a(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> a[i];
// 	}
// 	int m ; cin >> m;
// 	vector<int>b(m);
// 	for (int i = 0; i < m; ++i)
// 	{
// 		cin >> b[i];
// 	}
// 	int i = 0 , j = 0;
// 	vector<int> inter_arr ;
// 	while (i < n && j < m) {

// 		if (a[i] < b[j]) i++;

// 		else if (b[j] < a[i]) j++;

// 		else {
// 			inter_arr.push_back(a[i]);
// 			j++;
// 			i++;
// 		}
// 	}
// 	for (auto i : inter_arr) {
// 		cout << i << " ";
// 	}

// }
// int main() {
// 	intersection_of_the_array_brute();
// 	// intersection_of_the_array_optimal();
// 	return 0;
// }
// input :
// 7
// 1 2 3 3 5 5 6
// 8
// 0 1 2 3 3 8 9 9

// output : 1 2 3 3

// tc : O(n + m )
// sc : O(1)    O(n + m ) in worst case to stroe inter_arr and return

/*----------------------------------------------------------------------------*/
// FIND THE MISSING NUMBER

/*#include<bits/stdc++.h>
using namespace std;
void find_missing_brute() {
	int n ; cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		bool flag = 0;
		for (int j = 0; j < n ; ++j)
		{
			if (v[j] == i) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout << i << endl;
			break;
		}
	}
	// O(n * n)
}

void find_missing_better_hashing() {
	int n ; cin >> n;

	vector<int> v(n);
	unordered_set<int> hash;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		if (v[i] > 0) {
			hash.insert(v[i]);
		}
	}
	sort(v.begin(), v.end());
	for (int i = 1; i <= n + 1; ++i) {
		// if the element i is not found in the set the code inside this block will run
		if (hash.find(i) == hash.end()) {
			// it reaches till the end but doesn't find the element
			// if this condition goes true then it means that i is not present in the set
			cout << i << endl;
			break;
		}
	}
	// tc : O(n)
	// sc : O(n)
}
void find_missing_optimal_1() {

	// 1. sum

	int n ; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int sum = n * (n + 1) / 2;
	int s = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		s += v[i];
	}
	cout << sum - s ;
	// O(n) tc
	// O(1) sc
}
void find_missing_optimal_2() {

	// 2. xor

	int n ; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int xor_1 = 0 , xor_2 = 0;
	int N = n - 1;
	for (int i = 0; i < N; ++i)
	{
		xor_2 ^= v[i];
		xor_1 ^= (i + 1);
	}
	xor_1 ^= n;

	cout << (xor_1 ^ xor_2) << endl;
}
int main() {
	// find_missing_brute();
	// find_missing_better_hashing();
	// find_missing_optimal_1();
	// find_missing_optimal_2();
	return 0;
}*/
// input :
// 8
// 2 1 4 8 5 8 6 3
// output :  10

/*this is the also way to determine the */
// 	sort (v.begin(),v.end());
//
// for (int i = 1; i < v.size(); i++) {
// 		if (v[i] != v[i - 1] + 1) {
// 			cout << v[i - 1] + 1;
// 		}
// 	}



/*------------------------------------------------------------------------------------------------*/

// MAXIMUM CONSECUTIVE ONES

/*#include<bits/stdc++.h>
using namespace std;

void maxi_conse_ones() {
	int n ; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	int count = 0 , max_count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (v[i] == 1) {
			count++;
			if (max_count < count) max_count = count;
		}
		else {
			count = 0;
		}
	}
	cout << max_count << endl;
}
int main() {
	maxi_conse_ones();
	return 0;
}
*/
// intput
// 10
// 1 1 1 0 0 1 1 0 1 0
// output : 3


/*---------------------------------------------------------------------*/

// FIND THE NO WHICH IS APPEARING SINGLE TIME AND OTHER NO APPEARING TWICE

/*#include<bits/stdc++.h>
using namespace std;

void no_appear_single_ls_brute() {
	// keeping the count of every no linear search
	int n ; cin >> n;
	vector<int>v (n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n; ++i)
	{
		int count = 0;
		int num = v[i];
		for (int j = 0; j < n; ++j)
		{
			if (v[j] == num)count++;
		}
		if (count == 1) cout << num;
	}
	// O(n^2)  tC
	// o(1) SC
}
void no_appear_single_hash_better() {
	int n ; cin >> n;
	vector<int>v (n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	// first find the max element
	int maxi = 0;
	for (int i = 0; i < n; ++i)
	{
		maxi = max (maxi, v[i]);
	}
	vector<int>hash(maxi);
	for (int i = 0; i < n; ++i)
	{
		hash[v[i]]++;
	}
	for (int i = 0; i < n; ++i)
	{
		if (hash[v[i]] == 1) cout << v[i] << endl;
	}
	// O(3n) tc
	// O(input) sc
}
void no_appear_single_map_better() {
	// keeping the count of every no
	int n ; cin >> n;
	vector<int>v (n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	// O(n)

	//unordered_map can also be used
	map<long long, int> freq;
	for (long long element : v) {
		freq[element]++;
	}
	// O(log n )
	for (auto it = freq.begin(); it != freq.end(); ++it) {
		long long key = it->first;
		int freq = it->second;
		// cout << "key : " << key << ", Freq : " << freq << endl;
		if (freq == 1)  cout << key << endl;
	}
}

void no_appear_single_xor_optimal() {
	int n ; cin >> n;
	vector<int>v (n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int xor_1 = 0;
	for (int i = 0; i < n; ++i)
	{
		xor_1 ^= v[i];
	}
	cout << xor_1 << endl;
	// O(n)  tc
	// O(1)  sc
}
int main() {

	// no_appear_single_ls_brute();
	// no_appear_single_hash_better();
	// no_appear_single_map_better();
	// no_appear_single_xor_optimal();

	return 0;
}
*/
// 9
// 1 1 2 3 3 4 4 6 6

// output : 2


/*--------------------------------------------------------------------------------------*/

// LONGEST SUBARAY WITH GIVEN SUM/POSITIVES

/*#include <bits/stdc++.h>
using namespace std;

// contiguous part of the array

void longest_subarray_brute() {
// generate the all subarray and find the sum of all the subarrays
	int n ; cin >> n;
	int k ; cin >> k;
	vector<int> v(n);
	int sum = 0 , length = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n; ++i)
	{
		sum = 0 ;
		for (int j = i; j < n; ++j)
		{
			sum += v[j];
			if (sum == k) length = max(length, j - i + 1);
		}
	}
	cout << length << endl;
	// O(n^2)
	// sc O(n)
}
void longest_subarray_hashing() {
// prefix sum
// if there exists a subarray with sum k as (.) as the last element
	int n ; cin >> n;
	long long k ; cin >> k;
	vector<int> v(n);
	long long sum = 0 , maxLength = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	map<long long , int > preSumMap;
	for (int i = 0; i < n; ++i)
	{
		sum += v[i];
		if (sum == k ) {
			maxLength = max(maxLength, (long long)i + 1);
		}
		long long remaining = sum - k ;
		if (preSumMap.find(remaining) != preSumMap.end()) {
			long long length = i - preSumMap[remaining];
			maxLength = max(maxLength , (long long )length);
		}
// if sum previously exits then we should not reupdate
		if (preSumMap.find(sum)  ==  preSumMap.end()) {
			preSumMap [sum] = i;
		}
	}
	cout << maxLength << endl;
}
void longest_subarray_optimal() {
	// two pointer approach
	int n ; cin >> n;
	long long k ; cin >> k;
	vector<int> v(n);
	long long sum = v[0] , maxLength = 0;
	long long left =  0, right = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	while (right < n) { // up to the boundary
		while (left <= right && sum > k) {
			sum -= v[left];
			left++;
		}
		if (sum == k ) {
			maxLength  = max(maxLength, right - left + 1);
		}
		right++;
		if (right < n) sum += v[right] ;
	}
	cout << maxLength << endl;
	// O(2n) Tc
}

int main() {
	// longest_subarray_brute();
	// longest_subarray_hashing(); // for both the array has the negatives positives and zeros
	// longest_subarray_optimal();
	return 0;
}*/
// 10
// 3
// 1 2 3 1 1 1 1 4 2 3
// output = 3

/*-------------------------------------------------------------*/
// 2 SUM PROBLEM

/*#include <bits/stdc++.h>
using namespace std;
template<typename T> void debug(T t) { cerr << t; }
template<typename T> void debug(vector<T>& v) { cerr << "[ "; for (auto x : v) { debug(x); cerr << " "; } cerr << "]"; }

void two_sum_brute() {
	int n , target; cin >> n >> target;
	vector<int>v(n);
	vector<int> c(2);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int sum = 0, k = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (v[i] + v[j] == target) {
				c[k++] = i;
				c[k++] = j;
			}
		}
	}
	for (auto i : c) {
		cout << i << " ";
	}

	// O(n^2)
}
void two_sum_hashing_better() {
	int n , target; cin >> n >> target;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	// key -> element  , index = i (array)
	map<int, int> mp;
	for (int i = 0; i < n; ++i)
	{
		int a = v[i];
		int more = target - a;
		if (mp.find(more) != mp.end()) { //if more is there in the map then it should not be pointing at the last
			cout << mp[more] << " " << i << endl;
			break;
		}
		mp[a] = i; //marking the index
	}
	// O(n log n )
	// sc : O(n)
}
void two_sum_2pointer_optimal() {
	// greedy approach
	int n , target; cin >> n >> target;
	vector<int>v(n);
	vector<int>c(2);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int left = 0 , right = n - 1, k = 0;
	while (left < right) {
		if (v[right] + v[left] == target) {
			c[k++] = left;
			c[k++] = right;
		}
		else if (v[left] + v[right] < target) {
			left++;
		}
		else {
			right--;
		}
	}
	for (auto i : c) {
		cout << i << " ";
	}
}
int main() {
	two_sum_brute();
	// two_sum_hashing_better();
	// two_sum_2pointer_optimal();
	return 0;
}*/

// 5
// 14
// 2 6 5 8 11
// output : 1 3 (indexes)

/*---------------------------------------------------------------*/

// SORT THE 0'S , 1'S AND 2'S

// #include<bits/stdc++.h>
// using namespace std;
// template<class T> void debug(T t) {cerr << t;}
// template<class T> void debug(vector<T>& v) { cerr << "[ "; for (auto x : v) { debug(x); cerr << " "; } cerr << "]\n"; }

// void sort_0_1_2_better() {
// 	int n ; cin >> n;
// 	vector<int>v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int count_1 =  0, count_2 = 0, count_0 = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (v[i] == 0) count_0++;
// 		else if (v[i] == 1) count_1++;
// 		else count_2++;
// 	}
// 	for (int i = 0; i < count_0; ++i)
// 	{
// 		v[i] = 0;
// 	}
// 	for (int i = count_0; i < count_0 + count_1; ++i)
// 	{
// 		v[i] = 1;
// 	}
// 	for (int i = count_0 + count_1; i < n; ++i)
// 	{
// 		v[i] = 2;
// 	}
// 	for (auto i : v) {
// 		cout << i << " " ;
// 	}
// 	// O(n^2)
// }

// void sort_0_1_2_optimal() {
// 	/*~~~~~****** DUTCH NATIONAL FLAG ALGORITHM *****~~~~~~*/
// 	// [0....low - 1 ] -> 0
// 	// [low....mid - 1 ] -> 1
// 	// [mid ... high ]-> random(0 1 2)
// 	// [high + 1....n - 1 ] -> 2
// 	/*--------------------------------*/
// 	// till => mid <= high
// 	// low = 0 , mid = 0 , high = n -1
// 	// a[mid]== 0 => swap(a[low++],a[mid++]);
// 	// a[mid]== 1 => mid ++;
// 	// a[mid]== 2 => swap(a[mid],a[high--]);

// 	int n ; cin >> n;
// 	vector<int>v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int mid = 0 , low = 0, high = n - 1;
// 	while (mid <= high) {
// 		if (v[mid] == 0) swap(v[low++], v[mid++]);
// 		else if (v[mid] == 1) mid++;
// 		else swap(v[mid], v[high--]);
// 	}
// 	for (auto i : v)cout << i << " ";
// 	cout << endl;
// 	// O(n) tc
// 	// O(1) sc
// }
// int main() {
// 	// sort_0_1_2_better();
// 	// sort_0_1_2_optimal();
// 	return 0;
// }

// 12
// 0 1 2 0 1 2 1 2 0 0 1 0
// output : 0 0 0 0 0 1 1 1 1 2 2 2

/*-----------------------------------------------------------------------------------*/

// FIND THE ELEMENT WHICH APPERS MORE THAN N/2

// #include<bits/stdc++.h>
// using namespace std;

// void majority_element_brute() {
// 	// it should appear for the n/2
// 	// output : [2] appears for the 4 times which is greater than (7/2)
// 	int n ; cin >> n;
// 	vector<int>v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int count = 0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		count = 0;
// 		for (int j = 0; j < n; ++j)
// 		{
// 			if (v[j] == v[i])count++;
// 		}
// 		if (count > n / 2) {
// 			cout << v[i]; break;
// 		}
// 	}
// 	// O(n^2)
// }
// void majority_element_better() {
// 	// HASHING : keeping a track of elements
// 	int n ; cin >> n;
// 	vector<int>v(n);
// 	vector<int>hash(n); /* not in order */
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		hash[v[i]]++;
// 	}
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (hash[i] > n / 2) {
// 			cout << hash[v[i]] << endl;
// 			break;
// 		}
// 	}
// }
// void majority_element_better_map() {
// 	int n ; cin >> n;
// 	vector<int>v(n);
// 	map<int, int> mp;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 		mp[v[i]]++;
// 	}
// 	for (auto it : mp) {
// 		if (it.second > (n / 2)) {
// 			cout << it.first;
// 			break;
// 		}
// 	}
// 	// O(n(logn))
// 	// O(n) space
// }
// void majority_element_optimal() {
// 	/*~~~~~****** MOOVE'S VOTING ALGORITHM *****~~~~~~*/
// 	int n ; cin >> n;
// 	vector<int>v(n);
// 	map<int, int> mp;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int count = 0, el;

// 	for (int i = 0; i < n; ++i) {
// 		if (!count) { /* if the count = 0 */
// 			count = 1;
// 			el = v[i];  // set 'el' to the current element
// 		} else if (v[i] == el) {
// 			count++; /* if the current element is the same as 'el', increase the count */
// 		} else {
// 			count--; /* if the current element is different, decrease the count */
// 		}
// 	}

// 	// Initialize 'count_1' to 0 to count occurrences of 'el'
// 	int count_1 = 0;

// 	// Iterate through the elements of the vector 'v'
// 	for (int i = 0; i < n; ++i) {
// 		if (v[i] == el) {
// 			count_1++; /* if the current element is the same as 'el', increase 'count_1' */
// 		}
// 	}

// 	// If 'count_1' is greater than half the size of the array, 'el' is the majority element
// 	if (count_1 > n / 2) {
// 		cout << el << endl;
// 	}
// 	// O(n) time complexity	cout << el << endl;
// }
// int main() {
// 	// majority_element_brute();
// 	// majority_element_better_hashing();
// 	// majority_element_better_map();
// 	// majority_element_optimal();
// 	return 0;
// }
// 7
// 2 2 3 3 1 2 2
// output : 2

/*------------------------------------------------------------------------*/

// MAXIMUM SUBARRAY SUM

// #include<bits/stdc++.h>
// using namespace std;

// void maximum_subarray_sum_better() {
// 	// contiguous part of the array
// 	// if not contiguous then this wil be called the sub-squence
// 	int n; cin >> n;
// 	vector<int>v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int sum = 0, count = 0, maxi_sum = INT_MIN;
// 	vector<int>c;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		sum = 0;
// 		for (int j = i; j < n; ++j)
// 		{
// 			sum += v[j];
// 			if (sum > maxi_sum) {
// 				maxi_sum = sum;
// 				c.clear();
// 				debug(maxi_sum)
// 				for (int k = i; k <= j; k++) {
// 					c.push_back(v[k]);
// 				}
// 			}
// 		}
// 	}

// 	cout << "maxi_sum  " << max(maxi_sum, sum) << endl;
// 	for (auto i : c) {
// 		cout << i << " ";
// 	}
// 	cout << endl;
// 	// O(n^2)
// }
// void maximum_subarray_sum_optimal() {
// 	/* ~~~~~~~***** KADANE'S ALGORITHM *****~~~~~~~ */
// 	int n; cin >> n;
// 	vector<int>v(n);
// 	vector<int>c;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int sum = 0, start = 0 , ans_start = -1, ans_end = -1, maxi_sum = INT_MIN;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (!sum) start = i;  /* sum == 0*/
// 		sum += v[i];
// 		if (sum > maxi_sum) {
// 			maxi_sum = sum;
// 			ans_start = start; ans_end = i; // this will keep a tract of the subarray
// 		}
// 		if (sum < 0) { // if non of them is giving the positive sum then make sum =0
// 			sum = 0;
// 		}
// 	}
// 	// Push the subarray with maximum sum into vector c
// 	for (int i = ans_start; i <= ans_end; ++i) {
// 		c.push_back(v[i]);
// 	}
// 	cout << "maxi_sum " << maxi_sum << endl;
// 	for (auto i : c) {
// 		cout << i << " ";
// 	}
// 	// O(n)  tc
// 	// O(1)  sc
// }
// int main() {
// 	// maximum_subarray_sum_better();
// 	// maximum_subarray_sum_optimal();
// 	return 0;
// }
// 8
// - 2 - 3 4 - 1 - 2 1 5 - 3
// output : 4 -1 -2 1 5

/*-----------------------------------------------------------------------------*/

// REARRANGE THE ARRAY ELEMENTS BY THE SIGN----------->

#include<bits/stdc++.h>
using namespace std;

int main() {

	return 0;
}



