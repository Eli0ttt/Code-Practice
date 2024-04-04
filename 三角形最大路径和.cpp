#include<iostream>
using namespace std;
//dp[i][j]:��ʾ����ײ㵽[i][j]�����·����
//dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j]
//Ϊ�δ������ϣ���Ϊ��ʱ����ֻ��һ�������������»�Ҫ�����ҳ����һ������С��dp
int f(int m, int n, int triangle[][201]) {
	int dp[201][201] = { 0 };
	int i, j;
	for (i = 0; i < n; i++)dp[m - 1][i] = triangle[m - 1][i];

	for (i = m - 2; i >= 0; i--) {
		for (j = 0; j < i + 1; j++) {
			dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];
		}
	}
	return dp[0][0];
}
