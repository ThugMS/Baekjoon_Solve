////
////  5419.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/26.
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
//typedef pair<int,int> pt;
//
//int N;
//pt arr[75001];
//pt arr_y[75001];
//
//bool compare(pt a, pt b){
//    if(a.x == b.x){
//        if(a.y > b.y)return true;
//        else return false;
//    }
//    else if(a.x < b.x)return true;
//    else return false;
//}
//
//void solve(){
//    int M, ans = 0;
//    cin >> M;
//
//    for(int i=0;i<M;i++){
//        scanf("%d %d", &arr[i].x, &arr[i].y);
//    }
//
//    sort(arr, arr+M, compare);
//
//    for(int i=0;i<M-1;i++){
//        for(int j=i+1;j<M;j++){
//            if(arr[i].y >= arr[j].y)
//                ans++;
//        }
//    }
//
//    cout << ans << endl;
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> N;
//
//    for(int i=0;i<N;i++){
//        solve();
//    }
//}
//
//
