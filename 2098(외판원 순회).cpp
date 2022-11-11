//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//#define SIZE 16
//#define TRASH 99999999
//
//int g_arr[SIZE][SIZE];
//int g_N = 0;
//int g_dp[SIZE][1 << SIZE];
//int g_answerBit = 0;
//
//int Min(int _a, int _b) {
//	if (_a < _b)
//		return _a;
//
//	return _b;
//}
//
//int DFS(int _curCity, int _curBit) {
//	
//	if (_curBit == g_answerBit) {
//		if (g_arr[_curCity][0] == 0)
//			return TRASH;
//
//		return g_arr[_curCity][0];
//	}
//
//	if (g_dp[_curCity][_curBit] != -1)
//		return g_dp[_curCity][_curBit];
//
//	g_dp[_curCity][_curBit] = TRASH;
//
//	for (int i = 0; i < SIZE; i++) {
//		if (g_arr[_curCity][i] == 0)continue;
//
//		if ((_curBit & (1 << i)) == (1 << i))continue;
//
//		g_dp[_curCity][_curBit] = Min(g_dp[_curCity][_curBit], g_arr[_curCity][i] + DFS(i, _curBit | (1 << i)));
//	}
//
//	return g_dp[_curCity][_curBit];
//}
//
//int main() {
//
//	cin >> g_N;
//	
//	g_answerBit = (1 << g_N) - 1;
//
//	for (int i = 0; i < g_N; i++) {
//		for (int j = 0; j < g_N; j++) {
//			cin >> g_arr[i][j];
//		}
//	}
//
//	memset(g_dp, -1, sizeof(g_dp));
//
//	cout << DFS(0, 1) << endl;
//
//	return 0;
//}