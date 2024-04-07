#include<iostream>
#include<string>
using namespace std;
//dp[i][j]:word1前i个字母转化为word2前j个字母所需要的最小步骤数
//if(word1[i]==word2[j])dp[i][j]=dp[i-1][j-1]
//else min{dp[i-1][j],dp[i-1][j-1],dp[i][j-1]}+1
int f(string word1, string word2) {
	int dp[501][501] = { 0 };
	int i, j;
	int l1 = word1.size();
	int l2 = word2.size();
	for (i = 1; i <= l1; i++)dp[i][0] = i;
	for (i = 1; i <= l2; i++)dp[0][i] = i;
	for (i = 1; i <= l1; i++) {
		for (j = 1; j <= l2; j++) {
			if (word1[i - 1] == word2[j - 1])dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j] = min(min(dp[i - 1][j], dp[i - 1][j - 1]), dp[i][j - 1]) + 1;
		}
	}
	return dp[l1][l2];
}