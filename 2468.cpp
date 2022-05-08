////
////  2468.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/20.
////
//
//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <vector>
//#include <memory.h>
//
//#define endl "\n"
//
//using namespace std;
//
//int arr[101][101];
//int check[101][101] = {0};
//int height = 0;
//int safe = 0;
//int max_ = -1;
//int N;
//
//int checking(int a, int b){
//    if(a < 0 || a>=N || b < 0 || b >= N)
//        return 0;
//    
//    else if(arr[a][b] <= height)
//        return 0;
//    
//    else if(check[a][b] == 1)
//        return 0;
//    
//    check[a][b] = 1;
//    
//    checking(a - 1, b);
//    checking(a + 1, b);
//    checking(a, b - 1);
//    checking(a, b + 1);
//    
//    return 0;
//}
//
//int main(){
//    
//    int max_height = 0;
//    
//    cin >> N;
//    
//    
//    for(int i=0;i<N;i++){
//        for(int j=0;j<N;j++){
//            cin >> arr[i][j];
//            if(arr[i][j] > max_height)
//                max_height = arr[i][j];
//            
//            check[i][j] = 0;
//        }
//    }
//        
//    for(height = 0; height <= max_height; height++){
//        for(int i=0;i<N;i++){
//            for(int j=0;j<N;j++){
//                if(arr[i][j] > height && check[i][j] == 0){
//                    checking(i, j);
//                    safe++;
//                }
//                   
//            }
//        }
//        if(safe > max_)
//            max_ = safe;
//        
//        safe = 0;
//        
//        memset(check, 0, sizeof(check));
//    }
//       
//    cout << max_ << endl;;
//    
//    return 0;
//}
