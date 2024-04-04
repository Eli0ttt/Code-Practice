#include<iostream>
using namespace std;
//dp[i][j]:��ʾ��[i][j]Ϊ���������½�ʱ����������ʱ
//dp[i][j]=min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1(����)
//���������dp[1][j]=='1'���ǳ�����ӦΪ������[i][j]���������ε���ɲ���
int f(int m, int n, int matrix[301][301]) {
	int dp[301][301] = { 0 };
	int i, j;
	dp[0][0] = matrix[0][0] - '0';
	int res = dp[0][0];
	for (i = 1; i < m; i++) {
		dp[i][0] = matrix[i][0] - '0';
		res = dp[i][0] > res ? dp[i][0] : res;
	}
	for (i = 0; i < n; i++) {
		dp[0][i] = matrix[0][i] - '0';
		res = dp[0][i] > res ? dp[0][i] : res;
	}
	
	for (i = 1; i < m; i++) {
		for (j = 1; j < n; j++) {
			if (matrix[i][j] == '1') {
				dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
				res = dp[i][j] > res ? dp[i][j] : res;
			}
		}
	}
	return res * res;
}