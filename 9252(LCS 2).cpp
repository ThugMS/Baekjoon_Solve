//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int dp[1001][1001] = {0, };
//
//string lcs[1001][1001];
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	string a, b;
//	string str1, str2;
//	string ans;
//	
//	cin >> a >> b;
//
//	str1 = ' ' + a;
//	str2 = ' ' + b;
//
//	int size1 = str1.length();
//	int size2 = str2.length();
//
//	for (int i = 1; i < size2; i++) {
//		for (int j = 1; j < size1; j++) {
//			if (str1[j] == str2[i]) {
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			}
//			else {
//				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//			}
//		}
//	}
//
//	int col = size1 - 1;
//	int row = size2 - 1;
//
//	while (dp[row][col] > 0) {
//		if (dp[row][col] == dp[row - 1][col]) {
//			row--;
//		}
//		else if (dp[row][col] == dp[row][col - 1]) {
//			col--;
//		}
//		else {
//			ans += str1[col];
//			row--, col--;
//		}
//	}
//
//	cout << dp[size2 - 1][size1 - 1] << endl;
//
//	if (ans.length() > 0) {
//		reverse(ans.begin(), ans.end());
//		cout << ans << endl;
//	}
//	
//
//
//
//	return 0;
//}