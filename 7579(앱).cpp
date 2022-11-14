//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int N, M;
//int sum = 0;
//vector<pair<int, int>> v;
//int dp[101][10000];
//
//int main() {
//
//	cin >> N >> M;
//
//	pair<int, int> sub;
//	v.push_back(sub);
//
//	for (int i = 1; i <= N; i++) {
//		pair<int, int> pa;
//		
//		cin >> pa.first;
//		v.push_back(pa);
//	}
//	for (int i = 1; i <= N; i++) {
//		cin >> v[i].second;
//		sum += v[i].second;
//	}
//
//
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 0; j <= sum; j++) {
//			if (j - v[i].second >= 0) {
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i].second] + v[i].first);
//			}
//			
//			dp[i][j] = max(dp[i][j], dp[i - 1][j]);
//
//			if (i == N && dp[i][j] >= M){
//				cout << j << endl;
//				exit(0);
//			}
//		}
//	}
//
//
//
//	return 0;
//}