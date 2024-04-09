#include<iostream>
#include<string>
using namespace std;
//dp[i][j] ����s[i] ��t[j] ������Ԫ������������
//if(s[i]==t[j]) dp[i][j]=dp[i-1][j-1]+dp[i-1][j]
// else dp[i][j]=dp[i-1][j]
//�ܶ�2�������⣬�󲿷ֶ���dp[i][j] �ֱ��ʾs��[0...i] ��t��[0...j]��ô��ô�� 
//Ȼ���ǹ۲�s[i]��t[j]�ֵȻ��߲��ȵ����
//���ҷ���ͨ������ dp[i-1][j-1] Ҫô+ Ҫô || dp[i-1][j]���Ƶ�
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