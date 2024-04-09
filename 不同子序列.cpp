#include<iostream>
#include<string>
using namespace std;
//dp[i][j] 就是s[i] 和t[j] 索引的元素子序列数量
//if(s[i]==t[j]) dp[i][j]=dp[i-1][j-1]+dp[i-1][j]
// else dp[i][j]=dp[i-1][j]
//很多2个串的题，大部分都是dp[i][j] 分别表示s串[0...i] 和t串[0...j]怎么怎么样 
//然后都是观察s[i]和t[j]分等或者不等的情况
//而且方程通常就是 dp[i-1][j-1] 要么+ 要么 || dp[i-1][j]类似的
int f(string s, string t) {
	int dp[1001][1001] = { 0 };
	int i, j;
	dp[0][0] = 1;
	for (i = 1; i < s.size(); i++)dp[i][0] = 1;
	for (i = 1; i < t.size(); i++)dp[0][i] = 0;

	for (i = 1; i <= s.size(); i++) {
		for (j = 1; j <= t.size(); j++) {
			if (j > i)continue;
			if (s[i - 1] == t[j - 1])dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % (int)(pow(10, 9) + 7);
			else dp[i][j] = dp[i - 1][j] % (int)(pow(10, 9) + 7);
		}
	}
	return dp[s.size()][t.size()] % (int)(pow(10, 9) + 7);
}