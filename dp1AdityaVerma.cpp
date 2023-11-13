// Dp -> recursion + storage /(top -down approach)
// To find the base cond of the recursion : think of the smallest valid input
// Dp knapsack sample code

/*
//Approach 1:  keeping the memoization of the recursion code
int static dp[102][1002];
memset(dp,-1,sizeof(dp));
int knapSack(int wt[],int val[],int w,int n){
	if(n==0 || w==0) return 0;
	if(dp[n][w]!=-1) return dp[n][w];
	if(wt[n-1]<=w){
	return dp[n][w]=max(val[n-1]+knapSack(wt,val,w-wt,n-1),knapSack(wt,val,w,n-1));
	}
	else if (wt[n-1]>w)return t[n][w] knapSack(wt,val,w,n-1);
}
*/
/*
// Approach 2: using the dp table-->(Top-Down Version)
// the idea of calling the recursion function we want to emit this
// Step 1 : TopDown -->initilization
// Step 2 : change the Recursion calls to the iterative version
// the base condition of the recursive fun changes to the initilisation


for(int i=0;i<n+1;i++)
for(int j=0;j<w+1;j++){
	if(i==0||j==0) dp[i][j]=0;
}

*/