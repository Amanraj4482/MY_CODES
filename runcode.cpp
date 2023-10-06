// #include <stdio.h>
// int main()
// {
// 	int n;
// 	int count = 0;
// 	scanf("%d", &n);
// 	// n =3;
// 	while (n--)
// 	{
// 		int size;
// 		scanf("%d", &size);
// 		int arr[size];
// 		for (int i = 0; i < size; i++)
// 		{
// 			scanf("%d", &arr[i]);
// 		}
// 		//int count =0;
// 		for (int i = 0; i < size; i++)
// 		{
// 			if (arr[i] == i + 1)
// 			{
// 				count++;
// 			}
// 		}
// 		//printf("%d",count);
// 		if (count % 2 == 0)
// 		{
// 			printf("%d\n", count / 2);
// 		}
// 		else {
// 			printf("%d\n", (count / 2) + 1);
// 		}
// 	}
// }

#include<bits/stdc++.h>
using namespace std;
void solve() {
	long long n;
	scanf("%lld", &n);

	int v[n];
	long long count = 0;

	for (long long i = 0; i < n; ++i) {
		scanf("%d", &v[i]);

		if (v[i] == (i + 1)) {
			count++;
		}
	}

	if (count % 2 == 0) {
		printf("%lld\n", count / 2);
	} else {
		printf("%lld\n", (count / 2) + 1);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}



