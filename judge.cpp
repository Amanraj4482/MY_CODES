// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n , d; cin >> n >> d; //n is the row
// 	// d is the col
// 	int c = 0;
// 	int ans = 0;

// 	vector<string> s(n);
// 	for (int i = 0; i < n; i++) {
// 		cin >> s[i];
// 	}
// 	//iterate the loop with the col inside row
// 	for (int i = 0; i < d; i++)//row
// 	{
// 		bool flag = 1;

// 		for (int j = 0; j < n; ++j)//col
// 		{
// 			if (s[j][i] == 'x') {
// 				flag = 0;
// 				break;
// 			}
// 		}
// 		if (flag) {
// 			c++;
// 			ans = max(c, ans);
// 		}
// 		else {
// 			c = 0;
// 		}
// 	}
// 	cout << ans << endl;
// 	return 0;
// }





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
// #define loop(i,a,b) for(int i=(a);i<(b);i++)
// #define looparr(arr,a,b) for(int i=(a);i<(b);i++){ cout<<(arr[i])<<" ";} cout<<endl;
// #define check cout<<"Print"<<endl;
// #define endl "\n"
// #define en cout<<endl;
// #define dl cerr<<endl;
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

// void solve() {

// }

// int main()
// {
// 	fastio()
// #ifndef ONLINE_JUDGE
// 	freopen("error.txt", "w", stderr);
// #endif

// 	//n passengers
// 	// m steps with indexing from 1
// 	//every step has height = i* k

// 	//a b => different steps  a-b== i*k
// 	int t; cin >> t;
// 	while (t--) {
// 		int n, m, k, H ; cin >> n >> m >> k >> H;
// 		int highE = -10, c = 0;
// 		int diff = 0;
// 		vector<int> h(n);
// 		for (auto &q : h) cin >> q;
// 		for (int i = 1; i <= n; ++i)
// 		{
// 			if (n > 3 && i + m < n) {
// 				diff = abs(h[i * k] - h[i * k + m]);
// 				debug(diff)
// 				if (m == diff) {
// 					c++;
// 				}
// 			}
// 			else {
// 				//print the highest element of the array
// 				if (h[i] > highE) {
// 					highE = h[i]; c++;
// 				}
// 				cerr << "highE=>" << c << endl;
// 			}
// 		}
// 	}





// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n ; cin >> n;
// 	vector<int> v(n);
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		cin >> v[i];
// 	}
// 	int t; cin >> t;
// 	while (t--) {
// 		int a , b;
// 		cin >> a >> b;
// 		int sum = 0;
// 		for (int i = a ; i <= b; ++i)
// 		{
// 			sum += v[i];
// 		}
// 		cout << sum << endl;
// 	}

// 	return 0;
// }

//precomputing the sum

// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n ; cin >> n;
// 	vector<int> v(n);
// 	long long sum[n] = {};
// 	for (int i = 1; i <= n; i++)
// 	{
// 		cin >> v[i];
// 		sum[i] = sum[i - 1] + v[i];
// 	}
// 	int t; cin >> t;
// 	while (t--) {
// 		int a , b;
// 		cin >> a >> b;
// 		int sum = 0;
// 		cout << sum[b] - sum[a - 1] << endl;
// 	}

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e7 + 10;
// long long int arr[N];
// int main() {
// 	int n, m ; cin >> n >> m;
// 	while (m--) {
// 		int a, b, c; cin >> a >> b >> c;
// 		arr[a] += c;
// 		arr[b + 1] -= c;
// 	}
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		//prefix sum
// 		arr[i] += arr[i - 1];
// 	}
// 	long long mx = -1;
// 	for (int i = 1; i < n; ++i)
// 	{
// 		if (mx < arr[i]) {
// 			mx = arr[i];
// 		}
// 	}

// 	cout << mx << endl;

// 	return 0;
// }
// #include <stdio.h>

// void PrintArray(int arr[], int n);
// void swap(int *x, int *y);
// void BubbleSort(int arr[], int n);

// // Main Function
// int main()
// {
// 	int arr[10], n, i;
// 	printf("Enter number of elements : ");
// 	scanf("%d", &n);
// 	printf("Enter %d Numbers:", n);
// 	for (i = 0; i < n; i++)
// 		scanf("%d", &arr[i]);
// 	BubbleSort(arr, n);
// 	PrintArray(arr, n);
// 	return 0;
// }

// // Function to print the elements of an array
// void PrintArray(int arr[], int n)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		printf("%d \t", arr[i]);
// }

// void swap(int *x, int *y)
// {
// 	int temp;
// 	temp = *x;
// 	*x = *y;
// 	*y = temp;
// }
// // Bubble Sort Function
// void BubbleSort(int arr[], int n)
// {
// 	int i, j;
// 	for (i = 0 ; i < n - 1; i++)
// 	{
// 		for (j = 0 ; j < n - 1 - i; j++)
// 		{
// 			if (arr[j] > arr[j + 1])
// 				swap(&arr[j], &arr[j + 1]);
// 		}
// 	}
// }

#include <stdio.h>

void PrintArray(int arr[], int n);
void InsertionSort(int arr[], int n);

// Main Function
int main()
{
	int arr[10], n, i;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	printf("Enter %d Numbers:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	InsertionSort(arr, n);
	PrintArray(arr, n);
	return 0;
}

// Function to print the elements of an array
void PrintArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d \t", arr[i]);
}

// Insertion Sort Function
void InsertionSort(int arr[], int n)
{
	int i, j, element;
	for (i = 1; i < n; i++)
	{
		element = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > element)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = element;
	} //End of for loop
}


