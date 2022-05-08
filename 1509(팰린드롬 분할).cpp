////
////  1509(팰린드롬 분할).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/19.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//
//#define endl "\n"
//#define MAX 2510
//using namespace std;
//
//char c[MAX];
//bool pal[MAX][MAX];
//int N;
//int ans[MAX];
//
//int Compare_Min(int a, int b){
//    return a<b ? a : b;
//}
//void make_pal(){
//    for(int i=1;i<N;i++){
//        pal[i][i] = true;
//        if(c[i] == c[i+1])
//            pal[i][i+1] = true;
//    }
//    pal[N][N] = true;
//    
//    for(int i=3;i<=N;i++){
//        for(int start = 1;start + i - 1 <= N;start++){
//            int end = start + i - 1;
//            
//            if(c[start] == c[end] && pal[start+1][end-1] == true)
//                pal[start][end] = true;
//        }
//    }
//}
//
//void solve(){
//    make_pal();
//    
//    for(int end=1;end<=N;end++){
//        ans[end] = 2e9;
//        
//        for(int start = 1; start <= end; start++){
//            if(pal[start][end] == true){
//                ans[end] = Compare_Min(ans[end], ans[start-1]+1);
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    cin >> (c+1);
//    
//    for(N=1;c[N]!='\0'; N++);
//    
//    N--;
//    
//    solve();
//    
//    cout << ans[N] << endl;
//    
//    return 0;
//}
