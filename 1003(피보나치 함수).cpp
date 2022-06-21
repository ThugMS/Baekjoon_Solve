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
//int dp_0[41] = { 1,0, };
//int dp_1[41] = { 0,1 };
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(nullptr);
//
//
//    int T, n;
//    cin >> T;
//    for (int i = 2; i <=40; i++) {
//        dp_0[i] = dp_0[i - 2] + dp_0[i - 1];
//        dp_1[i] = dp_1[i - 2] + dp_1[i - 1];
//    }
//
//    for (int i = 0; i < T; i++) {
//        cin >> n;
//        cout << dp_0[n] << " " << dp_1[n] << endl;
//    }
//
//    return 0;
//}