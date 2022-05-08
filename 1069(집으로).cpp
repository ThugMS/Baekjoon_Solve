////
////  1069(집으로).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/23.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//
//#define endl "\n"
//#define x first
//#define y second
//
//using namespace std;
//
//typedef long long ll;
//
//typedef pair<ll,ll> pt;
//
//pt a;
//double D, T;
//
//double dist;
//double remain;
//double cnt = 0.0, cnt2 = 0.0;
//
//double get_distance(pt A){
//    double dis = sqrt(A.x*A.x + A.y*A.y);
//    return dis;
//}
//
//void solve(){
//    dist = get_distance(a);
//    remain = dist;
//    
//    cnt = dist;
//    
//    if(dist < D){
//        cnt = min(cnt, T + (D - dist));
//        cnt = min(cnt, 2*T);
//    }
//    else{
//        cnt = min(cnt, ((int)(dist/D) + 1)*T);
//        cnt = min(cnt ,(int)(dist/D)*T + (dist-((int)(dist/D)*D)));
//    }
//    
//    cout << fixed;
//    cout.precision(10);
//    cout << cnt << endl;
//   
//}
//
//int main(){
//    
//    cin >> a.x >> a.y >> D >> T;
//    
//    solve();
//    
//    return 0;
//}
