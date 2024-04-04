#include<iostream>
using namespace std;
//dp[i][j]:表示从最后一行任意一个元素到[i][j]的最小路径和
//dp[i][j]=min(dp[i+1][j],dp[i+1][j+1],dp[i+1][j-1])+matrix[i][j]
int f(int m, int n, int matrix[101][101]) {
	int dp[101][101] = { 0 };
	int i, j;
	for (i = 0; i < n; i++)dp[m - 1][i] = matrix[m - 1][i];
	for (i = m - 2; i >= 0; i--) {
		for (j = 0; j < n; j++) {
			if (j == 0)dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]) + matrix[i][j];
			else if (j == n - 1)dp[i][j] = min(dp[i + 1][j - 1], dp[i + 1][j]) + matrix[i][j];
			else dp[i][j] = min(min(dp[i + 1][j], dp[i + 1][j + 1]), dp[i + 1][j - 1]) + matrix[i][j];
		}
	}
	int minest = dp[0][0];
	for (i = 0; i < n; i++) {
		if (dp[0][i] < minest)minest = dp[0][i];
	}
	return minest;
}