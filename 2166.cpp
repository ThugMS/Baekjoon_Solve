//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//
//#define endl "\n"
//
//using namespace std;
//
//double CCW(double x1, double y1, double x2, double y2, double x3, double y3);
//
//int main() {
//
//	int N;
//	double area = 0;
//
//	cin >> N;
//
//	vector <pair<double, double>> v(N);
//
//	for (int i = 0; i < N; i++) {
//		cin >> v[i].first >> v[i].second;
//	}
//
//	for (int i = 1; i < N - 1; i++) {
//		area += CCW(v[0].first, v[0].second, v[i].first, v[i].second, v[i + 1].first, v[i + 1].second);
//	}
//
//	printf("%.1lf", abs(area));
//
//	return 0;
//}
//
//double CCW(double x1, double y1, double x2, double y2, double x3, double y3) {
//	double a = ((x1 * y2) + (x2 * y3) + (x3 * y1)) - ((x2 * y1) + (x3 * y2) + (x1 * y3));
//
//	return a/2.0;
//}