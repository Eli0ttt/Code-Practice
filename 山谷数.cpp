//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string s;
//	while (!(cin >> s).eof()) {
//		int len = s.length();
//		int i, j;
//		int flag = 0;
//		for (i = 0; i < len; i++) {
//			if (i + 1 < len && s[i + 1] > s[i]) {
//				for (j = i + 2; j < len; j++) {
//					if (s[j] < s[i + 1]) {
//						flag = 1;
//						goto FLAGS;
//					}
//				}
//			}
//		}
//	FLAGS:
//		if (flag == 1) cout << "No" << endl;
//		else cout << "Yes" << endl;
//	}
//	return 0;
//}