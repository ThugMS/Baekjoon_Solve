//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//#include <cstring>
//
//#pragma warning(disable:4996)
//
//using namespace std;
//
//int map[10][10] = { 0, };
//int arr[10][10] = { 0, };
//
//int cnt = 0;
//int check = 0;
//void solveLine(int a, int b, bool num[]) {
//	for (int i = 0; i < 9; i++) {
//		if (arr[a][i] != 0) {
//			num[arr[a][i]] = true;
//		}
//	}
//
//	for (int i = 0; i < 9; i++) {
//		if (arr[i][b] != 0) {
//			num[arr[i][b]] = true;
//		}
//	}
//}
//
//void solveBox(int a, int b, bool num[]) {
//	int x = (a / 3) * 3;
//	int y = (b / 3) * 3;
//
//	
//
//	for (int i = x; i < x + 3; i++) {
//		for (int j = y; j < y + 3; j++) {
//			if (arr[i][j] != 0) {
//				num[arr[i][j]] = true;
//			}
//		}
//	}
//}
//
//void solve(int i, int j) {
//	if (check == 1)return;
//	bool num[10] = { false, };
//
//	if (cnt >= 30000)return;
//
//	cnt++;
//	if (arr[i][j] == 0) {
//		solveLine(i, j, num);
//		solveBox(i, j, num);
//		int k;
//		for (k = 1; k <= 9; k++) {
//			if (num[k] == false) {
//				arr[i][j] = k;
//
//				if (j + 1 >= 9 && i + 1 >= 9) {
//					/*for (int i = 0; i < 9; i++) {
//						for (int j = 0; j < 9; j++) {
//							cout << arr[i][j];
//						}
//						cout << endl;
//					}*/
//
//					check = 1;
//					return;
//				}
//				
//				else if (j + 1 >= 9) {
//					solve(i + 1, 0);
//				}
//				else {
//					solve(i, j + 1);
//				}
//				arr[i][j] = 0;
//			}
//		}
//		if (k >= 10) {
//			return;
//		}
//	}
//	else {
//		if (j + 1 >= 9 && i + 1 >= 9) {
//			/*for (int i = 0; i < 9; i++) {
//				for (int j = 0; j < 9; j++) {
//					cout << arr[i][j];
//				}
//				cout << endl;
//			}*/
//
//			check = 1;
//			return;
//		}
//		else if (j + 1 >= 9) {
//			 solve(i + 1, 0);
//		}
//		else {
//			solve(i, j + 1);
//		}
//	}
//
//
//}
//
//int main() {
//
//
//	for (int i = 0; i < 81; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//
//		if (map[a - 1][b - 1] != 0) {
//			cout << i + 1 << endl;
//			break;
//		}
//
//		map[a - 1][b - 1] = c;
//		
//		copy(&map[0][0], &map[0][0] + 100, &arr[0][0]);
//
//		//for (int i = 0; i < 9; i++) {
//		//		for (int j = 0; j < 9; j++) {
//		//			cout << arr[i][j];
//		//		}
//		//		cout << endl;
//		//	}
//
//		cnt = 0;
//		solve(0, 0);
//		if (check == 0) {
//			cout << i+1 << endl;
//			break;
//		}
//
//		check = 0;
//
//		if (i == 80) {
//			cout << -1 << endl;
//		}
//	}
//
//	
//
//	return 0;
//}