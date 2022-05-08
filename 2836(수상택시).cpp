////
////  2836(수상택시).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/25.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//struct turn{
//    ll start;
//    ll end;
//    ll dis;
//};
//
//ll N, M;
//vector<pair<ll,ll>> v;
//turn arr[300001];
//
//bool Min_Start(turn a, turn b){
//    if(a.start < b.start)return true;
//    return false;
//}
//    
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    cin >> N >> M;
//    
//    ll ans = 0;
//    int size =0 ;
//    
//    for(int i=0;i<N;i++){
//        ll s,e;
//        cin >> s >> e;
//        v.push_back({s,e});
//        
//        if(e < s){
//            arr[size].start = e;
//            arr[size].end = s;
//            arr[size].dis = s-e;
//            size++;
//        }
//    }
//    
//    sort(arr, arr + size, Min_Start);
//    ll A = -1;
//    ll B = -1;
//    
//    for(int i=0;i<size;i++){
//
//        if(arr[i].start <= B){
//            B = max(B, arr[i].end);
//        }
//        else{
//            ans += B - A;
//            B = arr[i].end;
//            A = arr[i].start;
//        }
//    }
//    ans += B-A;
//    ans *= 2;
//    
//    ans += M;
//    
//    cout << ans << endl;
//}
//
