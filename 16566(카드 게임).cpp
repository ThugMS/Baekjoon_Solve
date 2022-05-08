////
////  16566(카드 게임).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/23.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//#define endl "\n"
//
//
//int N,M,K;
//vector<int> v;
//int arr[4000001];
//
//int findParent(int a){
//    if(arr[a] == a)return a;
//    
//    else
//        return findParent(arr[a]);
//}
//
//void unionParents(int a, int b){
//    int parent_a = findParent(a);
//    int parent_b = findParent(b);
//    
//    if(parent_a < parent_b)
//        arr[parent_a] = parent_b;
//    else
//        arr[parent_b] = parent_a;
//}
//
//int main(){
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    
//    cin >> N >> M >> K;
//    
//    for(int i=0;i<M;i++){
//        int n;
//        cin >> n;
//        v.push_back(n);
//    }
//    
//    sort(v.begin(), v.end());
//    
//    for(int i=0;i<M;i++)arr[i] = i;
//    
//    for(int i=0;i<K;i++){
//        int n;
//        cin >> n;
//        
//        int index = lower_bound(v.begin(), v.end(), n+1) - v.begin();
//
//        cout << v[findParent(index)] << endl;
//        
//        if(index <= M-1)
//            unionParents(findParent(index), findParent(index)+1);
//    }
//    
//    return 0;
//}
