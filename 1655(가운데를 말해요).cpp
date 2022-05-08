////
////  1655.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/24.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#pragma warning(disable:4996)
//
//#define endl "\n"
//
//using namespace std;
//
//
//int main(){
//    
//    int N;
//    
//    scanf("%d", &N);
//    
//    vector<int> v(N);
//    priority_queue<int> Max_H, Min_H;
//    
//    for(int i=0;i<N;i++){
//        int K;
//        scanf("%d", &K);
//        
//        if(Max_H.size() > Min_H.size())Min_H.push(-K);
//        else Max_H.push(K);
//        
//        if(i!=0){
//            if(Max_H.top() > -Min_H.top()){
//                int a = Max_H.top();
//                int b = -Min_H.top();
//                
//                Max_H.pop();
//                Min_H.pop();
//                
//                Max_H.push(b);
//                Min_H.push(-a);
//            }
//        }
//        printf("%d\n", Max_H.top());
//    }
//    
//    return 0;
//}
