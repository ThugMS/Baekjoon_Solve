//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//
//#pragma warning(disable:4996)
//
//using namespace std;
//
//
//int main() {
//
//	int N;
//
//	scanf("%d", &N);
//
//	vector<int> v;
//	
//	for (int i = 0; i < N; i++) {
//		int a;
//		scanf("%d", &a);
//		v.push_back(a);
//	}
//
//	int start = 0;
//	int end = N - 1;
//	int sum = abs(v[start] + v[end]);
//
//	int ans1 = v[start];
//	int ans2 = v[end];
//
//	while (start < end) {
//		if (sum >= abs(v[start] + v[end])) {
//			sum = abs(v[start] + v[end]);
//			ans1 = v[start];
//			ans2 = v[end];
//		}
//		if (v[start] + v[end] > 0) {
//			end--;
//		}
//		else if(v[start] + v[end] < 0) {
//			start++;
//		}
//		else {
//			ans1 = v[start];
//			ans2 = v[end];
//			break;
//		}
//	}
//
//	cout << ans1 << " " << ans2 << endl;
//
//	return 0;
//}