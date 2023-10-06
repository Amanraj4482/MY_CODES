#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define printarr(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
#define debug(x) cerr<<#x<<" "<<x<<endl;
#define sz(x) ((int)(x).size())
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define mine(vec) *min_element(all(vec))
#define maxe(vec) *max_element(all(vec))
#define tr(container, it) \
    for (auto it = container.begin(); it != container.end(); ++it)
#define present__(container, element)(container.find(element) != container.end())
#define vpresent__(container, element)(find(all(container), element) != container.end())
int main() {
	// vector<int> v(10, 0);
	// printarr(v); //[ 0 0 0 0 0 0 0 0 0 0 ]
	// int c = (int) v.size();
	// debug(c)
	// bool is_empty = !v.empty();  // return 1 if the size is not empty
	// debug(is_empty)

	/*----------------------vector resize-------------------------*/
	// vi v(5);
	// for (int i = 0; i < 5; ++i)
	// {
	// 	v[i] = i + 1;
	// }
	// printarr(v) //v [ 1 2 3 4 5 ]
	// // v.resize(7);
	// // if using the push_back then dont resize
	// for (int i = 5; i < 7; ++i)
	// {
	// 	// v[i] = i * 2;
	// 	v.push_back(i * 2);
	// }
	// printarr(v) // v [ 1 2 3 4 5 10 12 ]

	/*-------------------vector inilization--------------*/
	// vi v {1, 3, 4, 5};
	// vi b(v);
	// vi a = v;
	// printarr(b) //b [ 1 3 4 5 ]
	// printarr(a) //a [ 1 3 4 5 ]

	// vector<string> v (4, "t");
	// printarr(v) // v [ t t t t ]

	/*----------------------2d vector----------------------*/
	// int N = 4, M = 5;
	// vector< vector< int > > v(N, vector< int >(M, -1));
	// for (auto i : v) printarr(i)
	// i [ -1 -1 -1 -1 -1 ]
	// i [ -1 -1 -1 -1 -1 ]
	// i [ -1 -1 -1 -1 -1 ]
	// i [ -1 -1 -1 -1 -1 ]

	/*-------------------passing argument in func -----------------*/
	// void solve(vector<int> v)
	// void solve(const vector<int> &v) // content will not change
	// void solve(vector<int>v) // if content is changable

	/*------------pairs------------------*/
	// pair<string,pair<int,int>>p;
	// string s = p.first; // extract string
	// int x= p.second.first; // extract first int
	// int y= p.first.second; // extract second int


	/*	void reverse_array(int *a, int n ){
			int f= a,l=n-1;
			while(f<l){ // compare the pointers
				swap(*f,*l); // swapping values of the poiters
				f++;l--; // incremenet and decrement the pointers
			}
		}*/

	// int x =*it;
	// it1++,it2--;

	// int data[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
	// vector< int > primes(data, data + (sizeof(data) / sizeof(data[0])));
	// printarr(primes)

	// vi v{1, 2, 3, 4, 5};
	// vi v2(v.begin(), v.begin() + (v.size() / 2)); // creates the half size of the v
	// vi v3(v.rbegin(), v.begin() + (v.size() / 2), v.rend()); // creates the half size of the v, order back to front
	// debug(sz(v2))

	// vi v;
	// for (int i = 0; i < 100; ++i)
	// 	v.pb(i * i);
	// cerr << ((find(v.begin(), v.end(), 49) != v.end()) ? 1 : 0) << endl;
	// int i = (find(v.begin(), v.end(), 49) - v.begin()); // this give the index
	// debug(i)


	// int data[5] = {1, 2, 3, 4, 5};
	// vi v(data, data + 5);
	// int v1 = maxe(v);
	// int v2 = mine(v);

	// debug(v1)
	// debug(v2)
	// debug(index_v1)
	// printarr(v)

	// vi v (5);
	// v.insert(v.begin() + 3, 42); // ++ size
	// printarr(v)

	// vector < int > v{1, 2, 3, 4, 5};
	// vector < int > v2{6, 7, 8, 9};
	// v.insert(v.begin() + 1, all(v2));
	// printarr(v)//v [ 1 6 7 8 9 2 3 4 5 ]

	// string  s = "hello";
	// string s1 = s.substr(0, s.length() - 1); //hell
	// string s2 = s.substr(1, 3); // ell
	// string s3 = s.substr(1); // ello
	// debug(s1)
	// debug(s2)
	// debug(s3)

	// set<int>s;
	// for (int i = 0; i <= 100; ++i)
	// 	s.insert(i); // add all the numbers
	// s.insert(42); // does not add because it already inserteddd
	// for (int i = 0; i <= 100; i+=2)
	// 	s.erase(i); // erase the even values
	// int n=sz(s);


	// vector<int> v = {1, 2, 3, 4, 5};
	// tr(v, it) {
	// 	cerr << *it << " ";
	// }
	// cerr << endl;
	// if (vpresent__(v, 6))cout << "1" << endl;

	// set<int> v1 = {1, 2, 3, 4, 5};
	// tr(v1, it) {
	// 	cerr << *it << " ";
	// }
	// if (present__(v1, 6))cout << "1" << endl;

	/*------------------------------------------------------------------------------------------------------------------*/

	// remove the duplicated in the vector
	/*	vector < int > v{1, 2, 3, 3, 4, 5};
		set < int > s(all(v));
		vector < int > v2(all(s));
		printarr(v2)//v2 [ 1 2 3 4 5 ]
	*/
	/*------------------------------------------------------------------------------------------------------------------*/
// maps---------->>>>>>>.
	/*	map<string, int>M;
		int r = 0;
		M["a"] = 1;
		M["b"] = 2;
		M["c"] = 3;

		tr(M, it) r += it->second;
		debug(r)*/

	/*------------------------------------------------------------------------------------------------------------------*/
	/*set < int > S;
	set < int > ::iterator it = S.find(42);
	set < int > ::iterator it1 = it, it2 = it;
	it1–;
	it2++;
	int a = * it1, b = * it2;*/
	// Here ‘a’ will contain the first neighbor of 42 to the left and ‘b’ the first one to the right.

	// creating a vector from the map
	// map <string, int>M;
	// vector<pair<string, int>>v(all(M));
	/*------------------------------------------------------------------------------------------------------------------*/
	vi v{1, 2, 3, 4, 5};
	ll sum = accumulate()

	         return 0;
}
