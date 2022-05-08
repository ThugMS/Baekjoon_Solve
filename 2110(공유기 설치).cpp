////
////  2110(공유기 설치).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/30.
//
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
//int N, C;
//int ans = 2000000;
//int house[200001];
//bool check[200001];
//int wifi[200001];
//
//void find(){
//    int start, end, dis;
//    start = house[0];
//    end = house[N-1];
//    dis = end - start;
//    wifi[0] = house[0];
//    check[0] = true;
//    
//    for(int i=1;i<C;i++){
//        int n = wifi[i-1] + ((end - wifi[i-1])/(C-i));
//        long index = lower_bound(house, house+N, n) - house;
//        
//        if(index != 0 && check[index-1] == true){
//            wifi[i] = house[index];
//            check[index] = true;
//            continue;
//        }
//        if(check[index] == true){
//            wifi[i] = house[index-1];
//            check[index-1] = true;
//            continue;
//        }
//        
//        if(index != 0 && abs(house[index]-n) > abs(house[index-1] - n)){
//            wifi[i] = house[index-1];
//            check[index-1] = true;
//        }
//        else{
//            wifi[i] = house[index];
//            check[index] = true;
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//  
//    
//    cin >> N >> C;
//    
//    for(int i=0;i<N;i++){
//        cin >> house[i];
//        check[i] = false;
//    }
//        
//    
//    sort(house, house+N);
//    find();
//    
////    for(int i=0;i<C;i++){
////        cout << wifi[i] << " ";
////    }
////    cout << endl;
//    
//    for(int i=0;i<C-1;i++){
//        int dis = abs(wifi[i+1] - wifi[i]);
//        if(dis<ans)ans = dis;
//    }
//    
//    cout << ans << endl;
//    
//    return 0;
//}
