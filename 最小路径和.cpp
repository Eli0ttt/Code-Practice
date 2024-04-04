//#include<iostream>
//using namespace std;
////dp[i][j]:表示从[0][0]到[i][j]的最小路径和
////dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j]
//int f(int m, int n,int grid[][201]) {
//	int dp[201][201] = { 0 };
//	dp[0][0] = grid[0][0];
//	int i, j;
//	for (i = 1; i < m; i++) {
//		dp[i][0] = dp[i - 1][0] + grid[i][0];
//	}
//	for (i = 1; i < n; i++) {
//		dp[0][i] = dp[0][i - 1] + grid[0][i];
//	}
//	for (i = 1; i < m; i++) {
//		for (j = 1; j < n; j++) {
//			dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
//		}
//	}
//	return dp[m - 1][n - 1];
//}