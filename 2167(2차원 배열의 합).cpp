////
////  2167(2차원 배열의 합).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/05/03.
////
//
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//
//#define endl "\n"
//
//using namespace std;
//
//int dp[301][301];
//int arr[301][301];
//
//
//void make_dp(int N, int M){
//        for(int i=0;i<N;i++){
//            for(int j=0;j<M;j++){
//                int sub = 0;
//                if(i>0)
//                    sub += dp[i-1][j];
//                if(j>0)
//                    sub += dp[i][j-1];
//                
//                if(i>0 && j>0)
//                    sub -= dp[i-1][j-1];
//                
//                dp[i][j] = sub + arr[i][j];
//            }
//        }
//}
//
//int main(){
//    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//    
//    int N,M,K;
//    cin >> N >> M;
//    
//    for(int i=0;i<N;i++){
//        for(int j=0;j<M;j++){
//            cin >> arr[i][j];
//        }
//    }
//
//    make_dp(N, M);
//    cin >> K;
//    
//    for(int i=0;i<K;i++){
//        int a, b, c, d;
//        cin >> a >> b >> c >>d;
//        
//        int ans = dp[c-1][d-1];
//       
//        if(b!=1){
//            ans -= dp[c-1][b-2];
//        }
//        if(a!=1){
//            ans -= dp[a-2][d-1];
//        }
//        if(a != 1 && b != 1){
//            ans += dp[a-2][b-2];
//        }
//        cout << ans << endl;
//    }
//    
//    return 0;
//}
