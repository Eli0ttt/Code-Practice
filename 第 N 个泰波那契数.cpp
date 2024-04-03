//#include<iostream>
//using namespace std;
////dp[i]:表示数列的第i项
////dp[i]=dp[i-1]+dp[i-2]+dp[i-3]
//int f(int n) {
//	int dp[38] = { 0 };
//	dp[0] = 0, dp[1] = 1, dp[2] = 1;
//	int i;
//	for (i = 3; i <= n; i++) {
//		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
//	}
//	return dp[n];
//}
