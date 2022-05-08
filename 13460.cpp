////
////  13460.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/21.
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
//typedef struct info{
//    int rx, ry, bx, by, cnt;
//}info;
//
//info start;
//char arr[11][11];
//
//int bfs(){
//    const int dy[] = {-1, 1, 0, 0};
//    const int dx[] = {0, 0, -1, 1};
//    
//    int visited[10][10][10][10] = {0,};
//    
//    queue<info> q;
//    
//    q.push(start);
//    visited[start.ry][start.rx][start.by][start.bx] = 1;
//    
//    int ans = -1;
//    
//    while(!q.empty()){
//        info cur = q.front();
//        q.pop();
//        
//        if(cur.cnt > 10) break;
//        if(arr[cur.ry][cur.rx] == 'O' && arr[cur.by][cur.bx] != 'O'){
//            ans = cur.cnt;
//            break;
//        }
//        
//        for(int i=0;i<4;i++){
//            int next_ry = cur.ry;
//            int next_rx = cur.rx;
//            int next_by = cur.by;
//            int next_bx = cur.bx;
//            
//            while(1){
//                if(arr[next_ry][next_rx] != '#' && arr[next_ry][next_rx] != 'O'){
//                    next_ry += dy[i];
//                    next_rx += dx[i];
//                }
//                else{
//                    if(arr[next_ry][next_rx] == '#'){
//                        next_ry -= dy[i];
//                        next_rx -= dx[i];
//                    }
//                    break;
//                }
//            }
//            
//            while(1){
//                if(arr[next_by][next_bx] != '#' && arr[next_by][next_bx] != 'O'){
//                    next_by += dy[i];
//                    next_bx += dx[i];
//                }
//                else{
//                    if(arr[next_by][next_bx] == '#'){
//                        next_by -= dy[i];
//                        next_bx -= dx[i];
//                    }
//                    break;
//                }
//            }
//            
//            if(next_ry == next_by && next_rx == next_bx){
//                
//                if(arr[next_ry][next_rx] != 'O'){
//                    int red_move = abs(next_ry - cur.ry) + abs(next_rx - cur.rx);
//                    int blue_move = abs(next_by - cur.by) + abs(next_bx - cur.bx);
//                    
//                    if(red_move > blue_move){
//                        next_ry -= dy[i];
//                        next_rx -= dx[i];
//                    }
//                    else{
//                        next_by -= dy[i];
//                        next_bx -= dx[i];
//                    }
//                }
//            }
//            
//            if(visited[next_ry][next_rx][next_by][next_bx] == 0){
//                visited[next_ry][next_rx][next_by][next_bx] = 1;
//                info next;
//                next.ry = next_ry;
//                next.rx = next_rx;
//                next.by = next_by;
//                next.bx = next_bx;
//                next.cnt = cur.cnt + 1;
//                q.push(next);
//            }
//        }
//    }
//    
//    return ans;
//}
//
//int main(){
//    
//    int N,M;
//    
//    cin >> N >> M;
//    
//    getchar();
//    for(int i=0;i<N;i++){
//        for(int j=0;j<M;j++){
//            cin >> arr[i][j];
//            
//            if(arr[i][j] == 'R'){
//                start.rx = j;
//                start.ry = i;
//            }
//            if(arr[i][j] == 'B'){
//                start.bx = j;
//                start.by = i;
//            }
//        }
//        getchar();
//    }
//    
//    start.cnt = 0;
//    
//    
//    int ans = bfs();
//    
//    if(ans < 0)
//        printf("0\n");
//    else
//        printf("1\n");
//    
//    
//    return 0;
//}
