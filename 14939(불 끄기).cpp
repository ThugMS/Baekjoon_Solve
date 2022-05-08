////
////  14939(불 끄기).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/22.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <map>
//
//#define MAX 10
//#define INF 1e9
//#define endl "\n"
//
//bool arr[11][11], sub[11][11];
//int dx[] = {0,0,1,-1};
//int dy[] = {1,-1,0,0};
//int ans = INF;
//
//using namespace std;
//
//bool outofrange(int a, int b){
//    if(a<0 || a>=MAX || b<0 || b>=MAX)
//        return 1;
//    
//    return 0;
//}
//
//void click(int x, int y){
//    sub[x][y] = !sub[x][y];
//    
//    for(int i=0;i<4;i++){
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        
//        if(!outofrange(nx, ny)){
//            sub[nx][ny] = !sub[nx][ny];
//        }
//    }
//}
//
//void reset(){
//    for(int i=0;i<MAX;i++){
//        for(int j=0;j<MAX;j++){
//            sub[i][j] = arr[i][j];
//        }
//    }
//}
//
//bool complete(){
//    for(int i=0;i<MAX;i++){
//        for(int j=0;j<MAX;j++){
//            if(sub[i][j])return 0;
//        }
//    }
//    return 1;
//}
//
//int main(){
//    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//    
//    for(int i=0;i<MAX;i++){
//        for(int j=0;j<MAX;j++){
//            char c;
//            cin >> c;
//            if(c == 'O')arr[i][j] = true;
//        }
//    }
//    
//    for(int step=0;step<(1<<10);step++){
//        int cnt=0;
//        reset();
//        
//        for(int i=0;i<MAX;i++){
//            if(step & (1<<i)){
//                cnt++;
//                click(0, i);
//            }
//        }
//        
//        for(int i=1;i<MAX;i++){
//            for(int j=0;j<MAX;j++){
//                if(sub[i-1][j]){
//                    cnt++;
//                    click(i,j);
//                }
//            }
//        }
//        
//        if(complete())ans = min(cnt,ans);
//    }
//    
//    if(ans == INF)cout << "-1" << endl;
//    else cout << ans << endl;
//    
//    return 0;
//}
