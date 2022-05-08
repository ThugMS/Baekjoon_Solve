////
////  (Google_Codejam)Append Sort.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/06.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define endl "\n"
//
//using namespace std;
//typedef long long ll;
//
//typedef pair<ll, ll> p;
//p arr[101];
//
//int count(ll n){
//    int cnt = -1;
//    while(n != 0){
//        n /= 10;
//        cnt++;
//    }
//    return cnt;
//}
//
//int num(ll n){
//    int cnt = 1;
//    while(n >= 10){
//        n /= 10;
//        cnt *= 10;
//    }
//    return cnt;
//}
//
//void solve(int n){
//    int ans = 0;
//    arr[0].second = arr[0].first;
//
//    for(int i=1;i<n;i++){
//        if(arr[i].first > arr[i-1].second){
//            arr[i].second = arr[i].first;
//        }
//        else if(arr[i].first == arr[i-1].second){
//            arr[i].second = arr[i].first*10;
//            ans++;
//        }
//        else{
//            int num_1 = num(arr[i-1].second);
//            int num_2 = num(arr[i].first);
//
//            if(arr[i-1].second/num_1 < arr[i].first/num_2){
//                num_1 /= num_2;
//                arr[i].second = arr[i].first * num_1;
//            }
//            else if(arr[i-1].second/num_1 == arr[i].first/num_2){
//                num_1 /= num_2;
//                arr[i].second = arr[i-1].second + 1;
//
//            }
//            else{
//                num_1 /= num_2;
//                num_1 *= 10;
//                arr[i].second = arr[i].first * num_1;
//            }
//            ans += count(num_1);
//        }
//        cout << ans << endl;
//    }
////    cout << ans << endl;
//}
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int T, N;
//
//    cin>>T;
//
//    for(int i=1;i<=T;i++){
//        cin >> N;
//        for(int j=0;j<N;j++){
//            cin >> arr[j].first;
//        }
//        cout << "Case #" << i << ": ";
//        solve(N);
//    }
//
//    return 0;
//}
