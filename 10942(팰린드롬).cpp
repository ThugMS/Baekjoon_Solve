////
////  10942(팰린드롬).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/31.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//
//#define endl "\n"
//
//using namespace std;
//
//int N, M, S, E;
//int arr[2010];
//int pel[2010][2010] = {0, };
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> N;
//
//    for(int i=1; i<=N; i++){
//        cin >> arr[i];
//    }
//
//    for(int i=1;i<N;i++){
//        pel[i][i] = 1;
//        if(arr[i] == arr[i+1])
//            pel[i][i+1] = 1;
//    }
//    pel[N][N] = 1;
//
//    for(int i=N-2; i>=1; i--){
//        for(int j=i+2; j<=N; j++){
//            if(arr[i] == arr[j] && pel[i+1][j-1] == 1){
//                pel[i][j] = 1;
//            }
//        }
//    }
//
//    cin >> M;
//
//    for(int i=0;i<M;i++){
//        cin >> S >> E;
//        cout << pel[S][E] << endl;
//    }
//
////    for(int i=1;i<=N;i++){
////        for(int j=1;j<=N;j++){
////            cout << pel[i][j] << " ";
////        }
////        cout << endl;
////    }
//
//    return 0;
//}
