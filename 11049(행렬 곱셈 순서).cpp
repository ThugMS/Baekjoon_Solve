//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define _MAX 1000000000
//
//using namespace std;
//
//int N;
//
//int sum[501];
//int arr[501][2];
//
//int dp[501][501];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> N;
//
//	int r, c;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> r >> c;
//		arr[i][0] = r;
//		arr[i][1] = c;
//	}
//
//	for (int i = 1; i < N; i++) {
//		for (int j = 1; i + j <= N; j++) {
//
//			dp[j][j + i] = _MAX;
//			for (int k = j; k <= i + j; k++) {
//				dp[j][j + i] = min(dp[j][j + i], dp[j][k] + dp[k + 1][j + i] + arr[j][0] * arr[k][1] * arr[j + i][1]);
//			}
//		}
//	}
//
//	cout << dp[1][N] << endl;
//
//}