// #include<bits/stdc++.h>
// using namespace std;
// typedef vector<int> vi;
// #define debug_(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
// #define bl_ cerr<<endl;
// #define debug(x) cerr<<#x<<" "<<x<<endl;
// #define sz(x) ((int)(x).size())
// #define pb push_back
// #define all(x) (x).begin(),(x).end()
// #define mine(vec) *min_element(all(vec))
// #define maxe(vec) *max_element(all(vec))
// #define tr(container, it) \
//     for (auto it = container.begin(); it != container.end(); ++it)
// #define present__(container, element)(container.find(element) != container.end())
// #define vpresent__(container, element)(find(all(container), element) != container.end())
// void solve() {
// 	int n, m; cin >> n >> m;
// 	vector<int> v[n + 1];
// 	for (int i = 0; i < m; ++i)
// 	{
// 		int a, b; cin >> a >> b;
// 		// this is undirected graph
// 		// a ------> b
// 		// b ------> a
// 		v[a].pb(b);
// 		v[b].pb(a);
// 	}
// 	for (int i = 1; i <= n; i++) {
// 		cout << i << " -> ";
// 		for (int j = 0; j < (int)v[i].size(); j++) cout << v[i][j] << " ";
// 		cout << endl;
// 	}
// }
// int main() {
// 	solve();
// 	return 0;
// }
// 5 6
// 1 2
// 1 3
// 3 4
// 2 4
// 2 5
// 4 5
// output:
// 1 -> 2 3
// 2 -> 1 4 5
// 3 -> 1 4
// 4 -> 3 2 5
// 5 -> 2 4

/*------------------------------------------------------------------------------------------------------------------*/
// pattern for the traversal of the graph.--> connected components
// vi vs(n+1) {0->10}
// for(i=1->10)
// if(!vs[i]) traversal(i);


// BREATH FIRST SEARCH ------> TRAVERSAL TECHNIQUE
// also called as the level wise traversalco

i am editing this once again