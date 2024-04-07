//#include<iostream>
//#include<string>
//using namespace std;
////dp[i] : 字符串长度为i的话，dp[i]为true，表示可以拆分为一个或多个在字典中出现的单词。
////递推公式：如果确定dp[j] 是true，且 [j, i] 这个区间的子串出现在字典里，那么dp[i]一定是true。（j < i ）。
////循环的内外层顺序要着重考虑！！
//int f(string s, string wordDict[][1001]) {
//	int dp[301] = { 0 };
//	dp[0] = 1;
//	int i, j, k;
//	for (i = 1; i < s.size(); i++) {
//		for (j = 0; j < i; j++) {
//			string word = s.substr(j, i - j);//[j,i]
//			if (在wordDict中能找到word && dp[j] == 1) {
//				dp[i] = 1;
//			}
//		}
//	}
//	return dp[s.size()];
//}