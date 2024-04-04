//#include<iostream>
//using namespace std;
////有障碍物版
////dp[i][j]:表示从[0][0]到[i][j]不同路径的条数
////dp[i][j]=dp[i-1][j]+dp[i][j-1]
////当grid[i-1][j]和grid[i][j-1]都是通路时
//int f(int m, int n, int obstacleGrid[101][101]) {
//	int i, j;
//	int dp[101][101] = { 0 };
//	if (obstacleGrid[m - 1][n - 1] == 1 || obstacleGrid[0][0] == 1) //如果在起点或终点出现了障碍，直接返回0
//		return 0;
//
//	dp[0][0] = 1;
//	for (i = 1; i < m && obstacleGrid[i][0] == 0; i++) {
//		dp[i][0] = 1;
//	}
//	for (i = 1; i < n && obstacleGrid[0][i] == 0; i++) {
//		dp[0][i] = 1;
//	}
//
//	for (i = 1; i < m; i++) {
//		for (j = 1; j < n; j++) {
//			if (obstacleGrid[i][j] == 0) {
//				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//		    }
//		else {
//				dp[i][j] = 0;
//			}
//		}
//	}
//	return dp[m - 1][n - 1];
//}