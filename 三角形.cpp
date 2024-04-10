//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	while (!(cin >> n).eof()) {
//		int* arr = new int[n];
//		int i;
//		for (i = 0; i < n; i++)cin >> arr[i];
//		int m = -1;
//		int j, k, c;
//		for (i = 0; i < n; i++) {
//			for (j = i + 1; j < n; j++) {
//				for (k = j + 1; k < n; k++) {
//					c = arr[i] + arr[j] + arr[k];
//					int M = max(max(arr[i], arr[j]), arr[k]);
//					if (c - M > M && c > m)m = c;
//				}
//			}
//		}
//		cout << m << endl;
//	}
//	return 0;
//}