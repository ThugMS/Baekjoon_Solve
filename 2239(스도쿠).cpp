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
//int arr[10][10];
//
//int cnt = 0;
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
////void reset_num() {
////	for (int i = 1; i <= 9; i++) {
////		num[i] = false;
////	}
////}
//
//void solve(int i, int j) {
//	
//	bool num[10] = { false, };
//	
//	if (arr[i][j] == 0) {
//	/*	reset_num();*/
//		solveLine(i, j, num);
//		solveBox(i, j, num);
//
//		for (int k = 1; k <= 9; k++) {
//			if (num[k] == false) {
//				arr[i][j] = k;
//
//				if (j + 1 >= 9 && i + 1 >= 9) {
//					for (int i = 0; i < 9; i++) {
//						for (int j = 0; j < 9; j++) {
//							cout << arr[i][j];
//						}
//						cout << endl;
//					}
//					exit(0);
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
//	}
//	else {
//		if (j + 1 >= 9 && i + 1 >= 9) {
//			for (int i = 0; i < 9; i++) {
//				for (int j = 0; j < 9; j++) {
//					cout << arr[i][j];
//				}
//				cout << endl;
//			}
//			exit(0);
//		}
//		else if (j + 1 >= 9) {
//			solve(i + 1, 0);
//		}
//		else {
//			solve(i, j + 1);
//		}
//	}
//
//	//cout << i << " " << j << endl;
//}
//
//int main() {
//
//	vector<string> arr_sub;
//
//	for (int i = 0; i < 9; i++) {
//		string s;
//		cin >> s;
//		arr_sub.push_back(s);
//	}
//
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			arr[i][j] = arr_sub[i][j] - '0';
//		}
//	}
//
//	solve(0, 0);
//
//	return 0;
//}