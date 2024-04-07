//#include<iostream>
//using namespace std;
//#include<string>
////dp[i][j]:表示从i到j最长回文子序列的长度
////if s[i]==s[j], dp[i][j]=dp[i+1][j-1]+2
////if s[i]!=s[j], dp[i][j]=max{dp[i+1][j],dp[i][j-1]}
////!!!!!
////确定遍历顺序
////从递推公式]可以看出dp[i][j]是依赖于dp[i + 1][j - 1] 和 dp[i + 1][j]，
////也就是从矩阵的角度来说，dp[i][j]下一行的数据。
////所以遍历i的时候一定要从下到上遍历，这样才能保证，下一行的数据是经过计算的。
//int f(string s) {
//	int dp[1001][1001] = { 0 };
//	int i, j;
//	int len = s.size();
//	for (i = 0; i < len; i++) dp[i][i] = 1;
//	for (i = len; i >= 0; i--) {
//		for (j = i + 1; j < len; j++) {
//			if (s[i] == s[j])dp[i][j] = dp[i + 1][j - 1] + 2;
//			else dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
//		}
//	}
//	return dp[0][len - 1];
//}