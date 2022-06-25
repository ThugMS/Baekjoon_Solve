//#include <iostream>
//#include <algorithm>
//#include <map>
//
//#pragma warning(disable:4996)
//
//using namespace std;
//
//int N, S;
//int arr[100];
//long long ans = 0;
//map<int, int> sum;
//
//void right(int start, int add) {
//	if (start == N) {
//		sum[add]++;
//		return;
//	}
//
//	right(start + 1, add + arr[start]);
//	right(start + 1, add);
//}
//
//void left(int start, int add) {
//	if (start == N / 2) {
//		ans += sum[S - add];
//		return;
//	}
//
//	left(start + 1, add + arr[start]);
//	left(start + 1, add);
//}
//
//int main() {
//	cin >> N >> S;
//
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//
//	right(N / 2, 0);
//	left(0, 0);
//
//	if (S == 0) {
//		if (ans != 0) {
//			cout << ans - 1 << endl;
//		}
//		else {
//			cout << ans << endl;
//		}
//	}
//	else {
//		cout << ans << endl;
//	}
//
//
//	return 0;
//}