#include<iostream>
using namespace std;
#include<string>
//dp[i][j]:表示从i到j之间是不是回文子串
//if str[i]!=str[j]，dp[i][j]=false
//if str[i]==str[j]情况复杂，具体看代码
string  f(int n, string s) {
	if (n < 2)return s;
	int maxlen = 1, begin = 0;
	int dp[100][100] = { 0 };
	int i, j;
	int L;
	for (i = 0; i < n; i++)dp[i][i] = true;
	for (L = 2; L <= n; L++) {//长度一定要放在外层！！！！！不然长度太大是子问题还未求得解，先满足相等时L<=3
		for (i = 0; i < n; i++) {
			//常用L来遍历字符串长度
			//j-i+1=L;
			j = L + i - 1;
			if (j >= n)break;
			if (s[j] != s[i])dp[i][j] = false;
			else {
				//s[j]==s[i]
				if (L <= 3)dp[i][j] = true;
				else dp[i][j] = dp[i + 1][j - 1];
			}
			if (dp[i][j] && L > maxlen) {
				maxlen = L;
				begin = i;
			}
		}
	}
	return s.substr(begin, maxlen);
}