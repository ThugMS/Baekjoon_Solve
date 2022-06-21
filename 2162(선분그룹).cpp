////
////  20149.cpp
////  Baekjoon
////
////  Created by ¿ÃπŒºÆ on 2022/03/22.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define endl "\n"
//#define x first
//#define y second
//
//using namespace std;
//
//typedef long long ll;
//typedef pair<ll, ll> pt;
//
//ll x1, y3, x2, y2;
//
//typedef struct point {
//    pt o1;
//    pt o2;
//    int name;
//    int cnt;
//}point;
//
//vector<point> v;
//int N, name_cnt = 1, max_ = 1, combine = 0;
//int j;
//
//ll CCW(pt A, pt B, pt C) {
//    ll res = A.x * B.y + B.x * C.y + C.x * A.y;
//    res -= A.y * B.x + B.y * C.x + C.y * A.x;
//
//    if (res > 0)return 1;
//    else if (res == 0)return 0;
//    else return -1;
//}
//
////void intersection(pt A, pt B, pt C, pt D) {
////    double px = (A.x * B.y - A.y * B.x) * (C.x - D.x) - (A.x - B.x) * (C.x * D.y - C.y * D.x);
////    double py = (A.x * B.y - A.y * B.x) * (C.y - D.y) - (A.y - B.y) * (C.x * D.y - C.y * D.x);
////    double p = (A.x - B.x) * (C.y - D.y) - (A.y - B.y) * (C.x - D.x);
////
////    if (p == 0) {
////        if (B == C && A <= C)
////            cout << B.x << " " << B.y << endl;
////        else if (A == D && C <= A)
////            cout << A.x << " " << A.y << endl;
////    }
////    else {
////        double x = px / p;
////        double y = py / p;
////
////        cout << fixed;
////        cout.precision(9);
////        cout << x << " " << y << endl;
////    }
////}
//
//void solve(point a, point b, int fr, int ba) {
//
//    pt A = a.o1;
//    pt B = a.o2;
//    pt C = b.o1;
//    pt D = b.o2;
//
//    ll check1 = CCW(A, B, C) * CCW(A, B, D);
//    ll check2 = CCW(C, D, A) * CCW(C, D, B);
//
//    if (check1 == 0 && check2 == 0) {
//        if (A > B) swap(A, B);
//        if (C > D) swap(C, D);
//
//        if (A <= D && B >= C) {
//            //cout << 1 << endl;
//          /*  if (a.name = 0 && b.name == 0) {
//                a.name = name_cnt;
//                b.name = name_cnt;
//                a.cnt = 2;
//                b.cnt = 2;
//            }*/
//            if (v[fr].cnt == 1 && v[ba].cnt == 1) {
//                v[ba].name = v[fr].name;
//                v[fr].cnt++;
//                if (v[fr].cnt > max_)max_ = v[fr].cnt;
//
//                v[ba].cnt = v[fr].cnt;
//                combine++;
//            }
//            else if(v[fr].name != v[ba].name){
//                v[ba].cnt += v[fr].cnt;
//                v[fr].cnt = v[ba].cnt;
//
//                if (v[fr].cnt > max_)max_ = v[fr].cnt;
//
//                for (int i = 0; i <= j; i++) {
//                    if (v[i].name == v[fr].name) {
//                        v[i].cnt = v[fr].cnt;
//                    }
//                    else if (v[i].name == v[ba].name) {
//                        v[i].name = v[fr].name;
//                        v[i].cnt = v[fr].cnt;
//                    }
//                }
//                v[ba].name = v[fr].name;
//                combine++;
//            }
//            //intersection(A, B, C, D);
//        }
//        else;
//           // cout << 0 << endl;
//    }
//    else {
//        if (check1 <= 0 && check2 <= 0) {
//            //cout << 1 << endl;
//            //intersection(A, B, C, D);
//
//            if (v[fr].cnt == 1 && v[ba].cnt == 1) {
//                v[ba].name = v[fr].name;
//                v[fr].cnt++;
//                if (v[fr].cnt > max_)max_ = v[fr].cnt;
//
//                v[ba].cnt = v[fr].cnt;
//                combine++;
//            }
//            else if (v[fr].name != v[ba].name) {
//                v[ba].cnt += v[fr].cnt;
//                v[fr].cnt = v[ba].cnt;
//
//                if (v[fr].cnt > max_)max_ = v[fr].cnt;
//
//                for (int i = 0; i <= j; i++) {
//                    if (v[i].name == v[fr].name) {
//                        v[i].cnt = v[fr].cnt;
//                    }
//                    else if (v[i].name == v[ba].name) {
//                        v[i].name = v[fr].name;
//                        v[i].cnt = v[fr].cnt;
//                    }
//                }
//                v[ba].name = v[fr].name;
//                combine++;
//            }
//        }
//        else;
//            //cout << 0 << endl;
//    }
//}
//
//int main() {
//
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N;
//
//    for( j = 0; j < N; j++) {
//
// 
//        cin >> x1 >> y3 >> x2 >> y2;
//        point a;
//        a.o1.x = x1;
//        a.o1.y = y3;
//        a.o2.x = x2;
//        a.o2.y = y2;
//
//        a.name = 0;
//        a.cnt = 1;
//        v.push_back(a);
//   
//        for (int k = 0; k < j; k++) {
//            solve(v[k], v[j], k, j);
//        }
//        if (v[j].name == 0) {
//            v[j].name = name_cnt;
//            name_cnt++;
//        }
//    }
//
//    cout << N - combine << endl << max_ << endl;
//   
//
//    return 0;
//}
