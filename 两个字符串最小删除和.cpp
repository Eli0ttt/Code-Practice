#include<iostream>
#include<string>
using namespace std;
//�ӷ�����ת��ΪѰ����󹫹�������
//dp[i][j]:��ʾs1ǰi���s2ǰj����󹫹�������
//if(s1[i]==s2[j]) dp[i][j]=dp[i-1][j-1]+(int)s1[i]
//else dp[i][j]=max(dp[i-1][j], dp[i][j-1])
int f(string s1, string s2) {
	int l1 = s1.size(), l2 = s2.size();
	int i, j;
	int dp[1001][1001] = { 0 };
	int sum = 0;
	for (i = 0; i < l1; i++)sum += (int)s1[i];
	for (i = 0; i < l2; i++)sum += (int)s2[i];
	for (i = 1; i <= l1; i++) {
		for (j = 1; j <= l2; j++) {
			if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + (int)s1[i - 1];
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	return sum - 2 * dp[l1][l2];
}