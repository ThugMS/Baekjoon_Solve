////
////  11279(최대 힙).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/29.
////
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
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int N;
//    cin >> N;
//    
//    priority_queue<int, vector<int>, less<int>> q;
//    
//    for(int i=0;i<N;i++){
//        int a;
//        cin >> a;
//        if(a==0){
//            if(q.size() == 0)
//                cout<<"0" << endl;
//            else{
//                cout << q.top() << endl;
//                q.pop();
//            }
//        }
//        else{
//            q.push(a);
//        }
//    }
//    
//    
//    return 0;
//}
