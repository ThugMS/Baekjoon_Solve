////
////  2293.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/12.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main(){
//    
//    int n, k;
//    int price[120];
//    int dp[10001];
//    
//    cin >> n >> k;
//    
//    for(int i=1; i<=n; i++){
//        cin >> price[i];
//    }
//    
//    dp[0] = 1;
//    
//    for(int i=1; i<=n; i++){
//        for(int j=price[i]; j<=k; j++){
//            dp[j] = dp[j] + dp[j - price[i]];
//        }
//    }
//    cout << dp[k] << endl;
//    
//    return 0;
//}
