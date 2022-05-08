////
////  17143(낚시왕).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/05/04.
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
//int dir[5][2] = { {0, 0}, {-1, 0}, {1, 0}, {0, 1}, {0, -1} };
////이동방향에 따른 상,하,좌,우 설정
//
//struct Shark{
//    int r,c,s,d,z;
//};
////상어 구조체
//
//int R,C,M;
//int ans = 0;
//
////각 좌표에 있는 상어들 저장
//vector<Shark> arr[102][102];
//
////상어가 이동을 할때 경계선 밖으러 나가면 방향을 바꾸기위해 있는 것
//bool range(int r, int c){
//    return (0<r && r<= R && 0<c && c<=C);
//}
//
////상어의 이동방향을 반대로 바꿔줌
//int change_dir(int d){
//    if(d==1)return 2;
//    if(d==2)return 1;
//    if(d==3)return 4;
//    if(d==4)return 3;
//    
//    return 0;
//}
//
//int main(){
//    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//    
//    cin >> R >> C >> M;
//    
//    for(int i=0;i<M;i++){
//        int r,c,s,d,z;
//        
//        cin >> r >> c >> s >> d >> z;
//        
//        //s의 이동칸수 인데 (R,C)-1 * 2 을 주기로 한바퀴 돌기에 불필요한 부분을 남김
//        if(d==1 || d==2) s %= ((R-1)*2);
//        if(d==3 || d==4) s %= ((C-1)*2);
//        
//        //각 좌표에 추가
//        arr[r][c].push_back({r,c,s,d,z});
//    }
//    
//    int K=0;
//    
//    //낚시꾼이 이동하기 시작 0부터 마지막 열까지
//    while(++K <= C){
//        //낚시꾼이 이동한 열에서 가장 가까운 상어를 잡음
//        for(int i=1;i<=R;i++){
//            if(!arr[i][K].empty()){
//                ans += arr[i][K][0].z; //상어의 크기만큼 답에 플러스
//                arr[i][K].pop_back(); //상어를 잡았으니 pop
//                break;
//            }
//        }
//        
//        //이동을 해야되는데 이동을 끝마치고 난후 겹치는거를 판단해야되기에 이동을 할 좌표배열
//        vector<Shark> sub[110][110];
//        
//        //상어 이동 시작
//        for(int i=1;i<=R;i++){
//            for(int j=1;j<=C;j++){
//                //상어가 없으면 건너뛰기
//                if(arr[i][j].empty())continue;
//                
//                //이동할 상어 저장
//                Shark move = arr[i][j][0];
//                //그곳의 상어는 이동을 하니 pop해줌
//                arr[i][j].pop_back();
//                
//                int& cr = move.r;
//                int& cc = move.c;
//                int cs = move.s;
//                int& cd = move.d;
//                //상어가 이동횟수만큼 반복문
//                while(cs--){
//                    int nr = cr + dir[cd][0]; //행 의 방향으로 이동하는 변수
//                    int nc = cc + dir[cd][1]; //열 의 방향으로 이동하는 변수
//                    if(!range(nr,nc)) //만약 경계선 밖으로 가면 방향을 바꿔줌
//                        cd = change_dir(cd);
//                    
//                    cr += dir[cd][0]; //이동
//                    cc += dir[cd][1];
//                }
//                //이동을 한 곳에 상어가 있다면 크기를 비교
//                if(!sub[cr][cc].empty()){
//                    if(sub[cr][cc][0].z < move.z){
//                        sub[cr][cc].pop_back();
//                        sub[cr][cc].push_back(move);
//                    }
//                }
//                
//                else
//                    sub[cr][cc].push_back(move);
//            }
//        }
//        //이동을 마친 상어들을 원래의 배열에 추가해줌
//        for(int i=1;i<=R;i++){
//            for(int j=1;j<=C;j++){
//                arr[i][j] = sub[i][j];
//            }
//        }
//    }
//    
//    cout << ans << endl;
//    
//    return 0;
//}
