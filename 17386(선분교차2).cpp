////
////  17386.cpp
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
//
//using namespace std;
//
//typedef long long ll;
//
//ll ccw(ll x1,ll x2,ll x3,ll y1,ll y2,ll y3){
//    ll a = (x1*y2 + x2*y3 + x3*y1) - (y1*x2 + y2*x3 + y3*x1);
//
//    if(a<0)
//        return -1;
//    else if(a==0)
//        return 0;
//    else
//        return 1;
//}
//
//int main(){
//    
//    ll x1,x2,x3,x4;
//    ll y1,y2,y3,y4;
//   
//    cin >> x1 >> y1 >> x2 >> y2;
//    cin >> x3 >> y3 >> x4 >> y4;
//    
//    ll ck1 = 0, ck2 = 0;
//    
//    if(ccw(x1,x2,x3,y1,y2,y3) * ccw(x1,x2,x4,y1,y2,y4) < 0)
//        ck1 = 1;
//    else if(ccw(x1,x2,x3,y1,y2,y3) * ccw(x1,x2,x4,y1,y2,y4) == 0){
//        ck1 = 2;
//    }
//    
//    if(ccw(x3,x4,x1,y3,y4,y1) * ccw(x3,x4,x2,y3,y4,y2) < 0)
//        ck2 = 1;
//    else if(ccw(x3,x4,x1,y3,y4,y1) * ccw(x3,x4,x2,y3,y4,y2) == 0)
//        ck2 = 2;
//    
//    if(ck1 == 2 && ck2 == 2){
//        if(x1>x2){
//            swap(x1,x2);
//            swap(y1,y2);
//        }
//        if(x3>x4){
//            swap(x3,x4);
//            swap(y3,y4);
//        }
//        if(x1 == x4)
//            cout<<"1"<<endl;
//        else if(x2 < x3 || x1 > x4)
//            cout<< "0"<<endl;
//        else
//            cout<<"1"<<endl;
//    }
//    
//    else if(ck1 >= 1 && ck2 >= 1)
//        cout << "1" << endl;
// 
//    else
//        cout << "0" << endl;
//    
//    return 0;
//}
