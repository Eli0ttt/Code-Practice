#include<iostream>
#include<string>
using namespace std;
//dp[i][j]:表示text1前i个字符和text2前j个字符的最长公共子序列
//if(text1[i]==text2[j])dp[i][j]=dp[i-1][j-1]+1
//else dp[i][j]=max(dp[i-1][j],dp[i][j-1])
int f(string text1, string text2) {
	int l1 = text1.size(), l2 = text2.size();
	int i, j;
	int dp[1001][1001] = { 0 };
	for (i = 1; i <= l1; i++) {
		for (j = 1; j <= l2; j++) {
			if (text1[i - 1] == text2[j - 1])dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	return dp[l1][l2];
}