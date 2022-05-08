////
////  2217.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/10.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(){
//    
//    int N;
//    int a;
//    int sum = 0;
//    int max = -1;
//    int cnt = 0;
//    
//    cin >> N;
//    
//    vector<int> rope;
//    
//    for(int i=0;i<N;i++){
//        cin >> a;
//        rope.push_back(a);
//        sum += a;
//    }
//    
//    sort(rope.begin(), rope.end());
//    
//    vector<int>::iterator iter;
//    
//    for(iter = rope.begin(); iter != rope.end(); iter++){
//        
//        int end;
//        
//        end = *iter * (N - cnt);
//        
//        if(end > max)
//            max = end;
//        
//        cnt++;
//        
//    }
//    
//    cout << max << endl;
//    
//    return 0;
//}
