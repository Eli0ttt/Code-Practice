//#include<iostream>
//#include<string>
//using namespace std;
////dp[i] : �ַ�������Ϊi�Ļ���dp[i]Ϊtrue����ʾ���Բ��Ϊһ���������ֵ��г��ֵĵ��ʡ�
////���ƹ�ʽ�����ȷ��dp[j] ��true���� [j, i] ���������Ӵ��������ֵ����ôdp[i]һ����true����j < i ����
////ѭ���������˳��Ҫ���ؿ��ǣ���
//int f(string s, string wordDict[][1001]) {
//	int dp[301] = { 0 };
//	dp[0] = 1;
//	int i, j, k;
//	for (i = 1; i < s.size(); i++) {
//		for (j = 0; j < i; j++) {
//			string word = s.substr(j, i - j);//[j,i]
//			if (��wordDict�����ҵ�word && dp[j] == 1) {
//				dp[i] = 1;
//			}
//		}
//	}
//	return dp[s.size()];
//}