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


// the nodes which are at the equivalent distance then they will be next level to it
// the equivalent 2 unit distance nodes are the 2nd level nodes

// so we need the queue data structure to perfrom the level order traversal
// first in first out

// Initally which queue contains the starting nodes
// and the visited array
// keep taking out from the queue until my queue becomes empty

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define printarr(x) {cerr<<#x;cerr << " [ "; for (auto i : x) {cerr << i << " ";} cerr << "]"; cerr << "\n";}
#define bl_ cerr<<endl;
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


vector<int> bfsOfGraph(int n, vector<int>adj[]) {
// create a queue with the 0 pushed
	vector<int> bfs; // for storing the nodes
	vector<int> vs(n, 0);
	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		bfs.pb(node);
		debug(node)
		vs[node] = 1;
		for (auto it : adj[node]) {
			if (!vs[it]) {
				q.push(it);
			}
		}
	}
	bfs.pop_back();
	return bfs;
}
void solve() {
	int n, m; cin >> n >> m;
	vi v[n + 1];
	for (int i = 0; i < m; i++)
	{
		int a , b; cin >> a >> b;
		v[a].pb(b);
		v[b].pb(a);
	}
	// for (int i = 1; i <= n; i++) {
	// 	cout << i << " - ";
	// 	for (int j = 0; j < (int) v[i].size(); ++j)
	// 		cout << v[i][j] << " ";
	// 	cout << endl;
	// }
	vi bfs = bfsOfGraph(n, v);
	printarr(bfs);
	{cout << "bfs"; cout << " [ "; for (auto i : bfs) {cout << i << " ";} cout << "]"; cout << "\n";}

}
int main() {
	solve();
	return 0;
}




