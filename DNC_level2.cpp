//  QUICK SORT->1.partion logic and 2. recursion calls
// 1 no ko shi jagah pahucha de baki recursion smbhall lega
// 1st number ko shi jagah pahucha k
// uske baad jo bhi no chote h wo left side m aa jayenge
// aur right side ma aaenge 8 s bde number
// i.e -> partition logic
// 1.choosse element which names as pivot element ->starting element
// 2.place that pivot element at its place
// 3.place small no's before the pivot and big no's after the pivot

// -/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/
// arr={8,1,3,4,20,50,30}
// chosse pivot
// place pivot at its right position -> count no less than arr[i++ from i=o]
// so 8 should be at 4th index
// swap(arr[mainPivotElementIndex], arr[s+count])-> this denotes the 4th block which its index is 3
// recursion call for left and right arr for sorting

#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
	// step1: choose pivot element
	int pivotIndex = s;
	int pivotElement = arr[s];

	// step2: find right position for pivot element and place it there
	int count = 0;
	for (int i = s + 1; i <= e; i++)
	{
		if (arr[i] <= pivotElement)
		{	// if my iterative elment is smaller than pivot element then increase count
			count++;
		}
	}
	// jab mai loop s bahar aaya,  tb meri pivot ki right position ka index ready h
	int rightIndex = s + count; // right index of after pivot index
	swap(arr[pivotIndex], arr[rightIndex]);
	// update of pivot index
	pivotIndex = rightIndex;

	// step3: left chote element and right m bade element
	int i = s;
	int j = e;
	// jbtk dono pivot elment tak na pahuche tktk loop chlega
	while (i < pivotIndex && j > pivotIndex)
	{
		// jbtk left side ka element pivot s chota ya baarabar  h tbtk loop chalate rho
		while (arr[i] <= pivotElement)
		{
			i++;
		}
		while (arr[j] > pivotElement)
		{
			j--;
		}

		//  2 cases ho skte h
		// A->you found the element to swap
		// B-> no need to swap all element is smaller in  left
		if (i < pivotIndex && j > pivotIndex)
			swap(arr[i], arr[j]);
	}
	return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
	// base case -> QUICK sort kbtk chlega and s>e hai to invalid mana jayega
	// single element already sorted
	if (s >= e)
	{
		return;
	}
	// partion logic
	int p = partition(arr, s, e); // returns pivot index
	// recursion calls
	// pivot element ->left call
	quickSort(arr, s, p - 1); // s se lekr pivot element k phle tk where p is the index of pibot element

	// pivot element ->right call
	quickSort(arr, p + 1, e);
}

int main()
{
	// int arr[] = {8, 1, 3, 4, 20, 50, 30};
	int arr[] = {2, 4, 2, 6, 1, 7, 9, 5, 4, 6, 3, 5, 8, 3, 1, 5, 9};
	int n = 17;
	//these both the stl can find the size of the array without counting it
	// int n =end(arr)-begin(arr);
	//int n=sizeof(arr)/sizeof(arr[0]);

	// int arr[] = {1, 2, 1, 4, 20, 50, 30};
	// int n = 7;
	int s = 0;
	int e = n - 1;
	quickSort(arr, s, e);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

// time complexity of quck sort is n(log n)
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double lld;
// typedef unsigned long long ull;


// const ll mod  = 1e9 + 7;
// const ll maxn = 1e5 + 1;
// const ll inf  = 5e18 ;
// const ll minf = -inf ;

// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define pb push_back
// #define mid(s,e) (s+(e-s)/2)
// #define loop(i,a,b) for(int i=(a);i<=(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cout<<"Print"<<endl;
// #define nl "\n"
// #define en cout<<endl;
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// int partition(vector<int>&arr, int s , int e) {
// 	//step1-> choose pivot index and pivot element
// 	int pi = s;
// 	int pe = arr[s]; //i choose the first element of arr as my pivot element
// 	//step2->find right position to place my pivot element
// 	int count = 0;
// 	for (int i = s + 1; i <= e; i++) {
// 		if (arr[i] <= pe) { //if my iterative element is smaller than pivot element than count ++
// 			count++;
// 		}
// 	}
// //now my correct index of my pivot element is ready when i came out of the loop
// 	int ci = s + count; //correct index
// 	//mow i swap the my previous element of pivot to the new
// 	swap(arr[pi], arr[ci]); //pivot element  and correct element
// 	//now updating the index
// 	pi = ci;
// 	//step->seprate the element on the order of pivot element in the left place dec and in the right place inc
// 	int i = s, j = e; //i as first element and j as the last
// 	//the loop till both i and j reaches the pivot index
// 	while (i < pi && pi < j) {
// 		//loop runs untill the left element is small in comparison to pe
// 		while (arr[i] <= pe) {
// 			i++;
// 		}
// 		while (arr[j] > pe) {
// 			j--;
// 		}
// 		if (i < pi && pi < j) {
// 			swap(arr[i], arr[j]);
// 		}
// 	}
// 	//you found the wrong element that is need to swap
// 	//or no need to swap all element are sorted in order

// 	return pi;//return the pindex
// }
// void quickSort(vector<int>&arr, int s, int e) {
// 	//base case
// 	if (s >= e) {
// 		return ;
// 	}
// 	// debug(arr)
// 	int p = partition(arr, s, e);
// 	quickSort(arr, s, p - 1);
// 	quickSort(arr, p + 1, e);

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	vector<int>arr{1, 5, 2, 3, 7, 3, 1};
// 	int s = 0, e = sz(arr) - 1;
// 	quickSort(arr, s, e);
//     looparr(arr,0,sz(arr));

// 	return 0;
// }


// ----------BACKTRACING------------
// a specific of recursion explores all possible solutions
// the solution which discarded will not be rechecked
// rat in a maze problem



// permutation in a string
// print all the permutation of abc-abc,bac,bca,cab,cba,acb
// by the help of include exclude we get the subsequence which is a , b ,c ab,ca,bc,abc
// every character wants to come on every position
// traverse on the string
// i will be constant for the j to travers till the loop from i=0 j=0,1,2
// for every position of i and j combination there will swap between i and j
// j should be start with the j=i and should stop till n


// #include<bits/stdc++.h>
// using namespace std;
// void printPermutation(string &str,int i){//this string has been sended by reference
//     //base case
//     //when i will get out the base case
//     if(i>=str.length()){
//         cout<<str<<" "<<endl;
//         return;
//     }
//     //swapping
//     for(int j=i;j<str.length();j++){
//         //swap
//         cout<<i<<" "<<j<<endl;
//         swap(str[i],str[j]);
//         //recursive call
//         printPermutation(str,i+1);//abc acb bac bca cab cba
//         //backtracing-to recreate a original input
//         swap(str[i],str[j]);
//     }
// }
// int main(){
//     string str="abc";
//     int i=0;
//     printPermutation(str,i);

//     return 0;
// }

// // time complexity ->O(n!)



