//#include<iostream>
//using namespace std;
//#include<string>
////dp[i][j]:��ʾ��i��j����������еĳ���
////if s[i]==s[j], dp[i][j]=dp[i+1][j-1]+2
////if s[i]!=s[j], dp[i][j]=max{dp[i+1][j],dp[i][j-1]}
////!!!!!
////ȷ������˳��
////�ӵ��ƹ�ʽ]���Կ���dp[i][j]��������dp[i + 1][j - 1] �� dp[i + 1][j]��
////Ҳ���ǴӾ���ĽǶ���˵��dp[i][j]��һ�е����ݡ�
////���Ա���i��ʱ��һ��Ҫ���µ��ϱ������������ܱ�֤����һ�е������Ǿ�������ġ�
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