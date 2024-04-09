//#include<iostream>
//#include<cmath>
//using namespace std;
//struct circle {
//	double x, y, r;
//};
//int main() {
//	int n;
//	cin >> n;
//	circle* c = new circle[n];
//	int i;
//	for (i = 0; i < n; i++) {
//		cin >> c[i].x >> c[i].y >> c[i].r;
//	}
//	int p;
//	cin >> p;
//	int flag = 1;
//	for (i = 0; i < n; i++) {
//		if (i == p)continue;
//		double d = sqrt((c[p].x - c[i].x) * (c[p].x - c[i].x) + (c[p].y - c[i].y) * (c[p].y - c[i].y));
//		if (d < c[p].r + c[i].r) {
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)cout << "Alive" << endl;
//	else cout << "Biu" << endl;
//	return 0;
//}