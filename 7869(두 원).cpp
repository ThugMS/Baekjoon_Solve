////
////  7869(두 원).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/22.
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
//typedef pair<double, double> pt;
//
//double x,y,a;
//vector<pt> v;
//vector<double> r;
//double dis;
//
//int position(pt pt1, pt pt2, double r1, double r2){
//    dis = sqrt((pt1.x - pt2.x)*(pt1.x - pt2.x) + (pt1.y - pt2.y)*(pt1.y - pt2.y));
//    if(dis >= r1 + r2)return -1;
//    else if(abs(r2-r1)>=dis)return 0;
//    else return 1;
//}
//
//void check(pt pt1, pt pt2, double r1, double r2){
//    int check = position(pt1,pt2,r1,r2);
//
//    if(check == 1){
//
//        double ang1 = 2*acos((dis*dis + r1*r1 - r2*r2)/(2*dis*r1));
//        double ang2 = 2*acos((dis*dis + r2*r2 - r1*r1)/(2*dis*r2));
//        double res = (r1*r1*(ang1-sin(ang1))) + (r2*r2*(ang2-sin(ang2)));
//        res /= 2;
//        cout << fixed;
//        cout.precision(3);
//        cout<< res<<endl;
//    }
//    else if(check==0){
//        if(r1>r2){
//            cout << fixed;
//            cout.precision(3);
//            cout<< r2*r2*M_PI<<endl;
//        }
//        else{
//            cout << fixed;
//            cout.precision(3);
//            cout<< r1*r1*M_PI<<endl;
//        }
//
//    }
//    else{
//
//        cout << "0.000" << endl;
//    }
//}
//
//int main(){
//
//    for(int i=0;i<2;i++){
//        cin >> x >> y >> a;
//        v.push_back({x,y});
//        r.push_back(a);
//    }
//
//    check(v[0],v[1], r[0],r[1]);
//
//    return 0;
//}
