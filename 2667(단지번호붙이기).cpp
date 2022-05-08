////
////  2667(단지번호붙이기).cpp
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
//int arr[26][26];
//int ans[100000] = {0, };
//int cnt = 0;
//int num = 0;
//int n;
//
//void bfs(int i, int j){
//    
//    if(arr[i][j] == 1){
//        arr[i][j] = 0;
//        num++;
//        
//        if(i != 0)bfs(i-1, j);
//        if(j != 0)bfs(i, j-1);
//        if(i != n-1)bfs(i+1, j);
//        if(j != n-1)bfs(i, j+1);
//        
//    }
//    else
//        return;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    
//    cin >> n;
//   
//    for(int i=0;i<n;i++){
//        char str[n];
//        cin >> str;
//        for(int j=0;j<n;j++){
//            arr[i][j] = str[j] - '0';
//        }
//    }
//    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(arr[i][j] == 1){
//                bfs(i, j);
//                ans[cnt] = num;
//                num = 0;
//                cnt++;
//            }
//        }
//    }
//
//    cout << cnt << endl;
//    
//    sort(ans, ans+cnt);
//    
//    for(int i=0;i<cnt; i++){
//        cout << ans[i] << endl;
//    }
//    return 0;
//}
