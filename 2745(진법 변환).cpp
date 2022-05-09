//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//
//#define endl "\n"
//
//
//using namespace std;
//
//int main() {
//
//	string n;
//	int b, check = 1;
//	long long sum = 0;
//
//	cin >> n >> b;
//
//	for (int i = n.size()-1; i >= 0; i--) {
//		int sub;
//		if (n[i] >= 'A' && n[i] <= 'Z') {
//			sub = n[i] - 'A' + 10;
//		}
//		else {
//			sub = n[i] - '0';
//		}
//		sub = sub * check;
//		sum += sub;
//		check *= b;
//	}
//
//	cout << sum;
//
//	return 0;
//}