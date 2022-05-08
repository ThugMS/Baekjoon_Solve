////
////  1766(문제집).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/05/06.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#include <functional>
//
//#define endl "\n"
//
//using namespace std;
//
//const int MAX = 32010;
//
//int N,M;
//int inDegree[MAX];
//vector <int> graph[MAX];
//priority_queue<int, vector<int>, greater<int>> pq;
//
//int main(){
//    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//    
//    scanf("%d %d", &N, &M);
//    for(int i=0;i<M;i++){
//        int a,b;
//        scanf("%d %d", &a, &b);
//        
//        inDegree[b]++;
//        graph[a].push_back(b);
//    }
//    
//    for(int i=1;i<=N;i++){
//        if(inDegree[i] == 0)
//            pq.push(i);
//    }
//    
//    while(!pq.empty()){
//        int node = pq.top();
//        pq.pop();
//        
//        printf("%d ", node);
//        
//        for(int i=0;i<graph[node].size();i++){
//            int next = graph[node][i];
//            
//            if(--inDegree[next] == 0)
//                pq.push(next);
//        }
//    }
//    
//    printf("\n");
//    return 0;
//}
