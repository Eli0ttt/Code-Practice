//#include<iostream>
//using namespace std;
////dp[i][j]:��ʾ��[0][0]��[i][j]���м��ֲ�ͬ��·��
////dp[i][j]=dp[i-1][j]+dp[i][j-1]
//int f(int m, int n) {
//	int dp[101][101] = { 0 };
//	int i, j;
//	dp[0][0] = 0, dp[0][1] = 1, dp[1][0] = 1;
//	for (i = 0; i < m; i++)dp[i][0] = 1;
//	for (i = 0; i < n; i++)dp[0][i] = 1;
//	for (i = 1; i < m; i++) {
//		for (j = 1; j < n; j++) {
//			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//		}
//	}
//	return dp[m - 1][n - 1];
//}