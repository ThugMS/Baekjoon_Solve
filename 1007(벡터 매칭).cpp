////
////  1007(벡터 매칭).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/31.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#include <cmath>
//
//#define endl "\n"
//
//using namespace std;
//
//int c[10];
//double max_ = 9223372036854775807;
//double ans, sub;
//
//int x[20],y[20];
//int sum_x = 0, sum_y = 0;
//int T,n,r;
//
//void combi(int n, int r, int q){
//    if(r == 0){
//        int sub_x = sum_x;
//        int sub_y = sum_y;
//
//        for(int i=0;i<q;i++){
//            sub_x -= 2*x[c[i]];
//            sub_y -= 2*y[c[i]];
//        }
//
//        sub = sqrt(pow(sub_x, 2) + pow(sub_y, 2));
//
//        ans = min(ans, sub);
//    }
//    else if(n < r)return;
//    else{
//        c[r-1] = n-1;
//        combi(n-1, r-1, q);
//        combi(n-1, r, q);
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> T;
//    for(int i=0;i<T;i++){
//        sum_x = 0;
//        sum_y = 0;
//        ans = max_;
//        cin >> n;
//        for(int j=0;j<n;j++){
//            cin >> x[j] >> y[j];
//            sum_x += x[j];
//            sum_y += y[j];
//        }
//
//        combi(n, n/2, n/2);
//
//        cout << fixed;
//        cout.precision(7);
//        cout << ans << endl;
//    }
//
//    return 0;
//}
