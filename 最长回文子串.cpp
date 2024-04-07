#include<iostream>
using namespace std;
#include<string>
//dp[i][j]:��ʾ��i��j֮���ǲ��ǻ����Ӵ�
//if str[i]!=str[j]��dp[i][j]=false
//if str[i]==str[j]������ӣ����忴����
string  f(int n, string s) {
	if (n < 2)return s;
	int maxlen = 1, begin = 0;
	int dp[100][100] = { 0 };
	int i, j;
	int L;
	for (i = 0; i < n; i++)dp[i][i] = true;
	for (L = 2; L <= n; L++) {//����һ��Ҫ������㣡����������Ȼ����̫���������⻹δ��ý⣬���������ʱL<=3
		for (i = 0; i < n; i++) {
			//����L�������ַ�������
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