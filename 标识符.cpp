//#include<iostream>
//#include<string>
//using namespace std;
//int shuzi(char a) {
//	if (a >= '0' && a <= '9')return 1;
//	return 0;
//}
//int zimu(char a) {
//	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))return 1;
//	return 0;
//}
//int judge(char a) {
//	if (zimu(a) || shuzi(a) || a == '_')return 1;
//	return 0;
//}
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		string s;
//		cin >> s;
//		if (shuzi(s[0] == 1)) {
//			cout<<"Bad"<<endl;
//		}
//		else {
//			int i;
//			int flag = 1;
//			for (i = 0; i < s.length(); i++) {
//				if (!judge(s[i])) {
//					cout << "Bad" << endl;
//					flag = 0;
//					break;
//				}
//			}
//			if(flag) cout << "Great" << endl;
//		}
//	}
//	return 0;
//}