////
////  9328(열쇠).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/21.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//#include <map>
//
//#define trans 'a'-'A'
//#define endl "\n"
//
//using namespace std;
//
//map<char, int> door;
//map<char, bool> key;
//char have[30];
//char arr[103][103];
//bool visit[103][103];
//int cnt=0;
//
//void reset(int h, int w){
//    for(int i=0;i<26;i++){
//        door['A'+i] = 0;
//        key['a'+i] = false;
//    }
//    for(int i=0;i<h;i++){
//        for(int j=0;j<w;j++)
//            visit[i][j] = false;
//    }
//    cnt = 0;
//}
//
//void door_reset(int h, int w){
//    for(int i=0;i<26;i++){
//        door['A'+i] = 0;
//    }
//    for(int i=0;i<h;i++){
//        for(int j=0;j<w;j++)
//            visit[i][j] = false;
//    }
//}
//
//void DFS(int a, int b, int h, int w, int point){
//
//    if(a<0 || a>=h || b<0 || b>=w || visit[a][b] == true)return;
//    
//    if(arr[a][b] == '*')return;
//    
//    else if(arr[a][b] >= 'A' && arr[a][b] <= 'Z'){
//        door[arr[a][b]] = door[arr[a][b]] + 1;
//        
//        if(key[arr[a][b] + trans] == true){
//            door[arr[a][b]] = door[arr[a][b]] - 1;
//            arr[a][b] = '.';
//        }
//        else{
//            return;
//        }
//    }
//    else if(arr[a][b] >= 'a' && arr[a][b] <= 'z'){
//        key[arr[a][b]] = true;
//        arr[a][b] = '.';
//    }
//    else if(arr[a][b] == '$'){
//        cnt++;
//        arr[a][b] = '.';
//    }
//    
//    visit[a][b] = true;
//    
//    if(point != 2){
//        DFS(a,b+1,h,w,1);
//    }
//    if(point != 1){
//        DFS(a,b-1,h,w,2);
//    }
//    if(point != 4){
//        DFS(a-1,b,h,w,3);
//    }
//    if(point != 3){
//        DFS(a+1,b,h,w,4);
//    }
//}
//
//void go(int h, int w){
//    
//    door_reset(h, w);
//    
//    for(int i=0;i<w;i++){
//        if(arr[0][i] != '*'){
//            DFS(0, i, h, w, 0);
//        }
//        if(arr[h-1][i] != '*'){
//            DFS(h-1, i, h, w, 0);
//        }
//    }
//    for(int i=1;i<h-1;i++){
//        if(arr[i][0] != '*'){
//            DFS(i, 0, h, w, 0);
//        }
//        if(arr[i][w-1] != '*'){
//            DFS(i, w-1, h, w, 0);
//        }
//    }
//    
//    int more = 0;
//    for(int i=0;i<26;i++){
//        if(door['A'+i] > 0 && key['a'+i] == true){
//            more = 1;
//        }
//    }
//    if(more){
//        go(h,w);
//    }
//    
//}
//
//void solve(int h, int w){
//    go(h,w);
//    
////    for(int j=0;j<h;j++){
////        cout << arr[j];
////        cout << endl;
////    }
////
////    for(auto iter = key.begin(); iter != key.end(); iter++){
////        if(iter->second == true)
////            cout << iter->first << " ";
////    }
////    cout << endl;
//     cout << cnt << endl;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int T;
//  
//    int h, w;
//    
//    cin >> T;
//    
//    for(int i=0;i<T;i++){
//        
//        
//        cin >> h >> w;
//        reset(h, w);
//        for(int j=0;j<h;j++){
//            cin >> arr[j];
//        }
//        
//        cin >> have;
//        for(int i=0;have[i]!=NULL; i++){
//            if(have[i] == '0')
//                break;
//            key[have[i]] = true;
//        }
//        
//        solve(h, w);
//        
//    }
//    
//    
//    
//    return 0;
//}
