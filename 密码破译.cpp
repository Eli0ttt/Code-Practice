//#include<iostream>
//#include<string>
//
//using namespace std;
//int search(string a, char b) {
//	int i;
//	for (i = 0; i < 26; i++) {
//		if (a[i] == b)break;
//	}
//	return i;
//}
//int main() {
//	string a;
//	cin >> a;
//	getchar();//缓冲区清空！！！
//	string b;
//	getline(cin, b);//读带空格的字符串！！
//	int i;
//	for (i = 0; i < b.length(); i++) {
//		if (b[i] == ' ') {
//			cout << " ";
//			while (b[i] == ' ')i++;
//		}
//		b[i] = search(a, b[i]) + 'A';
//		cout <<b[i];
//	}
//	return 0;
//}