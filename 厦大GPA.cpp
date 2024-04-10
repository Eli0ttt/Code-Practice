//#include<iostream>
//#include<iomanip>
//using namespace std;
////dp[i][j]:表示考虑前i个物品装入容量为j的背包中获得的最大价值
////dp[i][j]=max(dp[i-1][j],dp[i][j-w[i]]);
//int main() {
//	int capacity;
//	int    w[] = {0,   90 , 85 , 81 , 78 , 75 , 72 , 68 , 64 , 60 , 0 };
//	double v[] = {0.0, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.0, 0.0 };
//	while (!(cin >> capacity).eof()) {
//		double dp[12][401] = { 0.0 };
//		int i, j;
//		for (i = 1; i <= 10; i++) {
//			for (j = 0; j <= capacity; j++) {
//				if (j > w[i])dp[i][j] = max(dp[i - 1][j], dp[i][j - w[i]] + v[i]);
//				else dp[i][j] = dp[i - 1][j];
//			}
//		}
//		cout << setprecision(1) << fixed << dp[10][capacity] << endl;
//	}
//	return 0;
//}