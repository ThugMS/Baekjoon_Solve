////
////  16724(피리 부는 사나이).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/29.
////
//
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//
//
//using namespace std;
//
//#define endl "\n"
//
//int dy[4] = {1,-1,0,0};
//int dx[4] = {0,0,1,-1};
//int visit[1001][1001] = {0,};
//int arr[1001][1001];
//int N,M;
//int ans = 0;
//
//void dfs(int y,int x){
//    visit[y][x]=1;
//    int ny=y+dy[arr[y][x]],nx=x+dx[arr[y][x]];
//
//    if(visit[ny][nx]==1) ans++;
//    if(visit[ny][nx]==0) dfs(ny,nx);
//    visit[y][x]=2;
//}
//int main(){
//    scanf("%d%d",&N,&M);
//    for(int i=0;i<N;i++){
//        for(int j=0;j<M;j++){
//            char c;
//            scanf(" %c",&c);
//            if(c=='U') arr[i][j]=1;
//            else if(c=='R') arr[i][j]=2;
//            else if(c=='L') arr[i][j]=3;
//        }
//    }
//    for(int i=0;i<N;i++)
//        for(int j=0;j<M;j++)
//            if(visit[i][j]==0) dfs(i,j);
//    printf("%d",ans);
//}
