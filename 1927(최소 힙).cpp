////
////  1927(최소 힙).cpp
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
//typedef pair<int, bool> p;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int N;
//    cin >> N;
//    
//    priority_queue<p, vector<p>, greater<p>> q;
//    
//    for(int i=0;i<N;i++){
//        p a;
//        cin >> a.first;
//        
//        if(a.first < 0){
//            a.second = false;
//            a.first = abs(a.first);
//        }
//        else
//            a.second = true;
//        
//        if(a.first == 0){
//            if(q.size() == 0)
//                cout<< "0" << endl;
//            else{
//                int c;
//                
//                if(q.top().second == false){
//                    c = q.top().first;
//                    c = c * -1;
//                }
//                else
//                    c = q.top().first;
//                
//                cout << c << endl;
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
//
