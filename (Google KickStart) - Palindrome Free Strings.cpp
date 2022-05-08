//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//
//#define endl "\n"
//
//using namespace std;
//
//int T, N;
//int cnt;
//int arr[50000];
//int cha[50000];
//int dp[50000][50000] = {0, };
//int ans = 0;
//
//int pal() {
//
//    for(int i=0;i<N - 1;i++){
//        dp[i][i] = 1;
//        if(arr[i] == arr[i+1])
//            dp[i][i+1] = 1;
//    }
//    dp[N-1][N-1] = 1;
//
//    for(int i = N-3; i>=0; i--){
//        for(int j=i+2; j<=N-1; j++){
//            if(arr[i] == arr[j] && dp[i+1][j-1] == 1)
//                dp[i][j] = 1;
//        }
//    }
//
//
//
//    int dis = 5;
//    int start, end;
//    while (dis <= N) {
//        for (int i = 0; i <= N - dis; i++) {
//            start = i;
//            end = i + dis - 1;
//            if(dp[start][end] == 1){
//            }
//            else{
//                return 1;
//            }
//        }
//        dis++;
//    }
//    return 0;
//}
//
//void test(int tmp) {
//    if (tmp >= cnt) {
//        int a = pal();
//    /*    for (int i = 0; i < N; i++)
//            cout << arr[i];
//        cout << endl;*/
//        if (a == 0)ans = 1;
//        return;
//    }
//
//    else {
//        arr[cha[tmp]] = 0;
//        test(tmp + 1);
//
//
//
//        arr[cha[tmp]] = 1;
//        test(tmp + 1);
//
//    }
//}
//
//int solve(string c) {
//    cnt = 0;
//    for (int i = 0; i < N; i++) {
//        if (c[i] == '?') {
//            arr[i] = -1;
//            cha[cnt] = i;
//            cnt++;
//        }
//        else
//            arr[i] = c[i] - '0';
//    }
//    //for (int i = 0; i < cnt; i++)
//    //    cout << cha[i];
//    //cout << endl;
//
//    test(0);
//
//    if (ans != 1) {
//        return 1;
//    }
//    else
//        return 0;
//
//}
//
//int main() {
//
//
//
//    cin >> T;
//
//    for (int i = 1; i <= T; i++) {
//
//        cin >> N;
//
//        string c;
//        cin >> c;
//
//        int k = solve(c);
//
//        if (k == 1)
//            cout << "CASE #" << i << ": IMPOSSIBLE" << endl;
//        else
//            cout << "CASE #" << i << ": POSSIBLE"<< endl;
//
//        ans = 0;
//    }
//
//    return 0;
//}
