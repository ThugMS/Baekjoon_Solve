////
////  2170(선 긋기).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/24.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#pragma warning(disable:4996)
//
//#define endl "\n"
//#define MIN -1000000001
//
//using namespace std;
//
//struct Line{
//    int start;
//    int end;
//};
//
//int N;
//int A = MIN;
//int B = MIN;
//Line arr[1000001];
//
//bool Min_Start(Line a, Line b){
//    if(a.start < b.start)return true;
//    return false;
//}
//
//int max_(int a, int b){
//    return a>b ? a:b;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> N;
//    int ans = 0;
//
//    for(int i=0;i<N;i++){
//        cin >> arr[i].start >> arr[i].end;
//    }
//
//    sort(arr, arr + N, Min_Start);
//
//    for(int i=0;i<N;i++){
//
//        if(arr[i].start <= B){
//            B = max_(B, arr[i].end);
//        }
//        else{
//            ans += B - A;
//            B = arr[i].end;
//            A = arr[i].start;
//        }
//    }
//
//    ans += B - A;
//    cout << ans << endl;
//
//
//    return 0;
//}
