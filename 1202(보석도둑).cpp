////
////  1202(보석도둑).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/27.
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
//typedef pair <int, int> p;
//
//vector <p> v;
//vector <p> c;
//long long ans = 0;
//
//bool compare_m(p a, p b){
//    if(a.second > b.second)return true;
//    else return false;
//}
//
//bool compare_v(p a, p b){
//    if(a.first < b.first)return true;
//    else return false;
//}
//
//bool compare(const p& a, const p& b){
//    if(a.second == 0 || b.second == 0)return true;
//    
//    return a.first < b.first;
//}
//bool search_back(p a){
//
//    auto j = lower_bound(c.begin(), c.end(), a, compare);
//    if (j == c.end()){
//        return false;
//
//    }
//
//    j->second = 0;
//
//    return true;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int N, K = 0, cnt = 0;
//
//    cin >> N >> K;
//
//    for(int i=0;i<N;i++){
//        int m, v_;
//        cin >> m >> v_;
//        v.push_back({m,v_});
//    }
//
//    for(int i=0;i<K;i++){
//        int a;
//        cin >> a;
//        c.push_back({a, 1});
//    }
//
//    sort(v.begin(), v.end(), compare_m);
//    sort(c.begin(), c.end(), compare_v);
//
//    for(int i=0;i<N;i++){
//        if(search_back(v[i])){
//            ans += v[i].second;
//            cnt++;
//            if(cnt == K)
//                break;
//        }
//    }
//
//    cout << ans << endl;
//    return 0;
//}
//
///*
// 1 5
// 100 100
// 99
// 98
// 55
// 22
// 11
// */
