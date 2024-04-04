#include<iostream>
using namespace std;
//dp[i][j]:表示从最底层到[i][j]的最短路径和
//dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j]
//为何从下往上？因为此时出口只有一个，若从上往下还要遍历找出最后一层中最小的dp
int f(int m, int n, int triangle[][201]) {
	int dp[201][201] = { 0 };
	int i, j;
	for (i = 0; i < n; i++)dp[m - 1][i] = triangle[m - 1][i];

	for (i = m - 2; i >= 0; i--) {
		for (j = 0; j < i + 1; j++) {
			dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];
		}
	}
	return dp[0][0];
}
