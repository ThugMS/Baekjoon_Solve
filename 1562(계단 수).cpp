//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define endl '\n'
//
//using namespace std;
//#define mod 1000000000
//
//int n, i, j, k, ans;
//int dp[101][10][1 << 10];
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//    cin >> n;
//
//    int full = (1 << 10) - 1;
//
//    //dp[a][b][c] a=�ڸ���, b=�ٷ� ���ڸ��� ���� c = 0~9���� ������ Ȯ��
//    for (j = 1; j <= 9; ++j)
//        dp[1][j][1 << j] = 1;
//
//    //0�� 9�� ������ ���� ���� ���ڰ� ���������� �ȵǰ� �ٸ� ���� ���� ����� 2����
//    for (i = 2; i <= n; ++i) {
//        for (j = 0; j <= 9; ++j) {
//            for (k = 0; k <= full; k++) {
//                if (j == 0)
//                    dp[i][0][k | (1 << 0)] = (dp[i][0][k | (1 << 0)] + dp[i - 1][1][k]) % mod;
//                else if (j == 9)
//                    dp[i][9][k | (1 << 9)] = (dp[i][9][k | (1 << 9)] + dp[i - 1][8][k]) % mod;
//                else {
//                    dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j - 1][k]) % mod;
//                    dp[i][j][k | (1 << j)] = (dp[i][j][k | (1 << j)] + dp[i - 1][j + 1][k]) % mod;
//                }
//            }
//        }
//    }
//
//    for (j = 0; j <= 9; ++j)
//        ans = (ans + dp[n][j][full]) % mod;
//
//    cout << ans << endl;
//
//	return 0;
//}