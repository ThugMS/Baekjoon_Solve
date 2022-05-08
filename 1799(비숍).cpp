////
////  1799(비숍).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/20.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//
//#define endl "\n"
//#define max(a,b) a>b ? a:b
//
//using namespace std;
//
//int n;
//int ans[2];
//int arr[11][11];
//int l[21], r[21];
//
//void DFS(int row, int col, int cnt, int color){
//    if(col >= n){
//        row++;
//        if(col % 2 == 0)col = 1;
//        else col = 0;
//    }
//    
//    if(row >= n){
//        ans[color] = max(ans[color], cnt);
//        return;
//    }
//    
//    if(arr[row][col] && !l[col - row + n - 1] && !r[col + row]){
//        l[col - row + n - 1] = r[col + row] = 1;
//        DFS(row, col+2, cnt+1, color);
//        l[col - row + n - 1] = r[col + row] = 0;
//    }
//    
//    DFS(row, col + 2, cnt, color);
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    cin >> n;
//    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cin >> arr[i][j];
//        }
//    }
//    
//    DFS(0,0,0,0);
//    DFS(0,1,0,1);
//    
//    cout << ans[0] + ans[1] << endl;
//    
//    return 0;
//}
