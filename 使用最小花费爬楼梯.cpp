//#include<iostream>
//using namespace std;
////dp[i]:��ʾ����i�����ͻ���
////dp[i]= min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2])
//int f(int n) {
//	int cost[1001] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)cin >> cost[i];
//	int dp[1001] = { 0 };
//	dp[0] = 0;
//	dp[1] = 0;
//	dp[2] = min(cost[0], cost[1]);
//	for (i = 3; i <= n; i++) {
//		dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//	}
//	return dp[n];
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << f(n);
//	return 0;
//}