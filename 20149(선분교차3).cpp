////
////  20149.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/22.
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
//ll x, y;
//vector<pt> v;
//
//ll CCW(pt A, pt B, pt C){
//    ll res = A.x*B.y + B.x*C.y + C.x*A.y;
//    res -= A.y*B.x + B.y*C.x + C.y*A.x;
//    
//    if(res>0)return 1;
//    else if(res==0)return 0;
//    else return -1;
//}
//
//void intersection(pt A, pt B, pt C, pt D){
//    double px = (A.x*B.y - A.y*B.x)*(C.x - D.x) - (A.x - B.x)*(C.x*D.y - C.y*D.x);
//    double py = (A.x*B.y - A.y*B.x)*(C.y - D.y) - (A.y - B.y)*(C.x*D.y - C.y*D.x);
//    double p = (A.x - B.x)*(C.y - D.y) - (A.y - B.y)*(C.x - D.x);
//    
//    if(p==0){
//        if(B==C && A<=C)
//            cout << B.x << " " << B.y << endl;
//        else if(A==D && C<=A)
//            cout << A.x << " " << A.y << endl;
//    }
//    else{
//        double x = px/p;
//        double y = py/p;
//        
//        cout << fixed;
//        cout.precision(9);
//        cout << x << " " << y << endl;
//    }
//}
//
//void solve(pt A, pt B, pt C, pt D){
//    ll check1 = CCW(A,B,C) * CCW(A,B,D);
//    ll check2 = CCW(C,D,A) * CCW(C,D,B);
//    
//    if(check1==0 && check2==0){
//        if(A>B) swap(A,B);
//        if(C>D) swap(C,D);
//        
//        if(A<=D && B>=C){
//            cout << 1 << endl;
//            intersection(A,B,C,D);
//        }
//        else
//            cout << 0 << endl;
//    }
//    else{
//        if(check1 <= 0 && check2 <= 0){
//            cout << 1 << endl;
//            intersection(A,B,C,D);
//        }
//        else
//            cout << 0 << endl;
//    }
//}
//
//int main(){
//    
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    
//    for(int i=0;i<4;i++){
//        cin >> x >> y;
//        v.push_back({x,y});
//    }
//    
//    solve(v[0], v[1], v[2], v[3]);
//    
//    return 0;
//}
