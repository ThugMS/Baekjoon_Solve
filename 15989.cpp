//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int dp[10010];
//
//int main() {
//
//	int T, max = -1;
//	dp[0] = 1;
//	cin >> T;
//	int* arr = new int[T];
//
//	for (int i = 0; i < T; i++) {
//		cin >> arr[i];
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	for (int i = 1; i <= 3; i++) {
//		for (int j = i; j <= max; j++) {
//			dp[j] = dp[j] + dp[j - i];
//		}
//	}
//
//	for (int i = 0; i < T; i++) {
//		cout << dp[arr[i]] << "\n";
//	}
//
//	return 0;
//}