//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//struct sum {
//	char ascii;
//	int cnt;
//};
//
//int cmp(const void* a, const void* b) {
//	sum* p1 = (sum*)a;
//	sum* p2 = (sum*)b;
//	if (p1->cnt != p2->cnt)return p2->cnt - p1->cnt;
//	else return p2->ascii - p1->ascii;
//}
//
//int main() {
//	string s;
//	while (!(cin >> s).eof()) {
//		sum S[130] = { 0 };
//		int len = s.length();
//		int i;
//		for (i = 0; i < len; i++) {
//			S[s[i]].ascii = s[i];
//			S[s[i]].cnt++;
//		}
//		qsort(S, 130, sizeof(S[0]), cmp);
//		for (i = 0; i < 130; i++) {
//			if (S[i].cnt != 0)cout << S[i].ascii << ":" << S[i].cnt << " ";
//		}cout << endl;
//
//;	}
//	return 0;
//}