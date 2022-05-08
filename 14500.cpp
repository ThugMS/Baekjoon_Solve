////
////  14500.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/21.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//#define endl "\n"
//
//using namespace std;
//
//int N,M;
//int max_ = -1;
//int arr[501][501];
//
////■ ■ ■ ■
//void m1(int a, int b){
//    if(b+3 >= M)return;
//
//    int sum=0;
//
//    for(int i=0;i<4;i++){
//        sum += arr[a][b+i];
//    }
//    if(max_ < sum)
//        max_ = sum;
//}
//
////■
////■
////■
////■
//void m2(int a, int b){
//    if(a+3 >= N)return;
//
//    int sum=0;
//
//    for(int i=0;i<4;i++){
//        sum += arr[a+i][b];
//    }
//    if(max_ < sum)
//        max_ = sum;
//}
//
////■ ■
////■ ■
//void m3(int a, int b){
//    if(a+1 >= N || b+1 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a][b+1];
//    sum += arr[a+1][b+1];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
////     ■
//// ■ ■ ■
//void m4(int a, int b){
//    if(a-1 < 0 || b+2 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a][b+1];
//    sum += arr[a][b+2];
//    sum += arr[a-1][b+2];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■ ■ ■
////     ■
//void m5(int a, int b){
//    if(a+1 >= N || b+2 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a][b+1];
//    sum += arr[a][b+2];
//    sum += arr[a+1][b+2];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■
//// ■
//// ■ ■
//void m6(int a, int b){
//    if(a+2 >= N || b+1 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a+2][b];
//    sum += arr[a+2][b+1];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
////   ■
////   ■
//// ■ ■
//void m7(int a, int b){
//    if(a+2 >= N || b-1 < 0)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a+2][b];
//    sum += arr[a+2][b-1];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■
//// ■ ■
////   ■
//void m8(int a, int b){
//    if(a+2 >= N|| b+1 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a+1][b+1];
//    sum += arr[a+2][b+1];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
////   ■
//// ■ ■
//// ■
//void m9(int a, int b){
//    if(a+2 >= N|| b-1 < 0)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a+1][b-1];
//    sum += arr[a+2][b-1];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
////   ■ ■
//// ■ ■
//void m10(int a, int b){
//    if(a-1 < 0 || b+2 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a][b+1];
//    sum += arr[a-1][b+1];
//    sum += arr[a-1][b+2];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■ ■
////   ■ ■
//void m11(int a, int b){
//    if(a+1 >= N || b+2 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a][b+1];
//    sum += arr[a+1][b+1];
//    sum += arr[a+1][b+2];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■ ■ ■
////   ■
//void m12(int a, int b){
//    if(a+1 >= M || b+2 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a][b+1];
//    sum += arr[a+1][b+1];
//    sum += arr[a][b+2];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
////   ■
//// ■ ■ ■
//void m13(int a, int b){
//    if(a-1 < 0 || b+2 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a][b+1];
//    sum += arr[a-1][b+1];
//    sum += arr[a][b+2];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
////  ■
////■ ■
////  ■
//void m14(int a, int b){
//    if(a+2 >= N || b-1 < 0)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a+1][b-1];
//    sum += arr[a+2][b];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
////■
////■ ■
////■
//void m15(int a, int b){
//    if(a+2 >= N || b+1 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a+1][b+1];
//    sum += arr[a+2][b];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■ ■
////   ■
////   ■
//void m16(int a, int b){
//    if(a+2 >= N || b+1 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a][b+1];
//    sum += arr[a+1][b+1];
//    sum += arr[a+2][b+1];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■ ■
//// ■
//// ■
//void m17(int a, int b){
//    if(a+2 >= N || b+1 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a][b+1];
//    sum += arr[a+1][b];
//    sum += arr[a+2][b];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■ ■ ■
//// ■
//void m18(int a, int b){
//    if(a+1 >= N || b+2 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a][b+1];
//    sum += arr[a][b+2];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//
//// ■
//// ■ ■ ■
//void m19(int a, int b){
//    if(a+1 >= N || b+2 >= M)return;
//
//    int sum = 0;
//
//    sum += arr[a][b];
//    sum += arr[a+1][b];
//    sum += arr[a+1][b+1];
//    sum += arr[a+1][b+2];
//
//    if(max_ < sum)
//        max_ = sum;
//}
//void checking(int a, int b){
//    m1(a,b);
//    m2(a,b);
//    m3(a,b);
//    m4(a,b);
//    m5(a,b);
//    m6(a,b);
//    m7(a,b);
//    m8(a,b);
//    m9(a,b);
//    m10(a,b);
//    m11(a,b);
//    m12(a,b);
//    m13(a,b);
//    m14(a,b);
//    m15(a,b);
//    m16(a,b);
//    m17(a,b);
//    m18(a,b);
//    m19(a,b);
//}
//
//int main(){
//
//    cin >> N >> M;
//
//
//
//    for(int i=0;i<N;i++){
//        for(int j=0;j<M;j++){
//            cin >> arr[i][j];
//        }
//    }
//
//    for(int i=0;i<N;i++){
//        for(int j=0;j<M;j++){
//            checking(i,j);
//        }
//    }
//
//    cout << max_ <<endl;
//
//    return 0;
//}
