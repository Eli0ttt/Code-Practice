//#include<iostream>
//using namespace std;
////dp[i]:表示偷窃前i个房子时最大金额
////dp[i]=max(dp[i-2]+money[i],dp[i-1])
//int f(int n) {
//	int money[101] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)cin >> money[i];
//	int dp[101] = { 0 };
//	dp[0] = 0;
//	dp[1] = money[0];
//	for (i = 2; i <= n; i++) {
//		dp[i] = max(dp[i - 2] + money[i - 1], dp[i - 1]);
//	}
//	return dp[n];
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << f(n);
//}