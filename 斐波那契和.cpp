//#include<iostream>
//using namespace std;
//int f(int a, int b, int l, int r) {
//	int dp[1001] = { 0 };
//	dp[0] = a % 1000;
//	dp[1] = b % 1000;
//	int i; int sum = 0;
//	for (i = 2; i < 1001; i++)dp[i] = (dp[i - 1] % 1000 + dp[i - 2] % 1000) % 1000;
//	for (i = l; i <= r; i++) {
//		sum += dp[i];
//		sum %= 1000;
//	}
//	return sum;
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int a, b, l, r;
//		cin >> a >> b >> l >> r;
//		cout << f(a, b, l, r) << endl;
//	}
//	return 0;
//}