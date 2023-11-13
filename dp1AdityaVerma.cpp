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
// Approach 2: using the dp table
// the idea of calling the recursion function we want to emit this







*/