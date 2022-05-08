////
////  2568(전깃줄-2).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/26.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//#define endl "\n"
//
//typedef pair<int,int> p;
//
//int n;
//vector <p> v;
//vector <int> num, idx;
//
//int main(){
//    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//    
//    cin >> n;
//    
//    for(int i=0;i<n;i++){
//        int a,b;
//        cin >> a >> b;
//        v.push_back(make_pair(a,b));
//    }
//    
//    sort(v.begin(),v.end());
//    
//    num.push_back(v[0].second);
//    idx.push_back(0);
//    
//    for(int i=1;i<v.size();i++){
//        int now = v[i].second;
//        
//        if(num.back() < now){
//            num.push_back(now);
//            idx.push_back(num.size()-1);
//        }
//        else{
//            int left=0;
//            int right = num.size() - 1;
//            while(left<right){
//                int mid = (left+right)/2;
//                if(num[mid] < now)
//                    left = mid + 1;
//                else
//                    right = mid;
//            }
//            
//            num[left] = now;
//            idx.push_back(left);
//        }
//    }
//    
//    cout << v.size() - num.size() << endl;
//    
//    int pivot = num.size()-1;
//    
//    vector<int> ans;
//    
//    for(int i=idx.size()-1;i>=0; i--){
//        if(pivot == idx[i])
//            pivot--;
//        
//        else{
//            ans.push_back(v[i].first);
//        }
//    }
//    
//    sort(ans.begin(), ans.end());
//    
//    for(int i : ans)
//        cout << i << endl;
//    
//    return 0;
//}
