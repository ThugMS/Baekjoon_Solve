//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int dy[4] = { -1,1,0,0 };
//int dx[4] = { 0,0,-1,1 };
//
//char arr[21][21];
//
//
//int T, R, C;
//
//int ans = 0;
//
//void find(int r, int c, int cnt, bool isPur[26], bool isArr[21][21]) {
//	
//	if (r < 0 || r >= R || c < 0 || c >= C) {
//		return;
//	}
//
//	if (isArr[r][c])
//		return;
//
//
//
//	if ((isPur[(int)arr[r][c] - 'A'])) {
//
//		/*cout << r << " " << c << endl;*/
//		return;
//	}
//			
//	cnt++;
//	if (ans < cnt)
//		ans = cnt;
//	isArr[r][c] = true;
//	isPur[(int)arr[r][c] - 'A'] = true;
//
//	for (int i = 0; i < 4; i++) {
//		find(r + dy[i], c + dx[i], cnt, isPur, isArr);
//		
//	}
//	isArr[r][c] = false;
//	isPur[(int)arr[r][c] - 'A'] = false;
//}
//
//int main() {
//
//	cin >> T;
//
//	for (int i = 1; i <= T; i++) {
//
//		cin >> R >> C;
//
//		getchar();
//		for (int j = 0; j < R; j++) {
//			for (int k = 0; k < C; k++) {
//				cin >> arr[j][k];
//			}
//			if(j != R-1)
//				getchar();
//		}
//		bool isPur[27] = { false, };
//		bool isArr[21][21] = { false, };
//
//		for (int j = 0; j < R; j++) {
//			for (int k = 0; k < C; k++) {
//				isArr[j][k] = false;
//			}
//		}
//
//		find(0, 0, 0, isPur, isArr);
//
//
//	/*	for (int j = 0; j < R; j++) {
//			for (int k = 0; k < C; k++) {
//				cout << isArr[j][k];
//			}
//			cout << endl;
//		}*/
//
//		cout << "#" << i << " " << ans << endl;
//
//		ans = 0;
//
//	}
//
//	return 0;
//}