//
//  코드잼.cpp
//  Baekjoon
//
//  Created by 이민석 on 2022/04/25.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define endl "\n"

int T, N;
int a, b;
int arr[1001][101];

void solve(){
    long long ans = 0;
    int pos = 0;
    
    for(int i=0;i<a-1;i++){
        if(i==0){
            ans += arr[i][b-1];
            pos = arr[i][b-1];
        }
        else{
            
            int dis1, dis2;
            
            dis1 = abs(arr[i][0]-arr[i+1][0]) < abs(arr[i][0]-arr[i+1][b-1]) ? abs(arr[i][0]-arr[i+1][0]) : abs(arr[i][0]-arr[i+1][b-1]);
            
            dis2 = abs(arr[i][b-1]-arr[i+1][0]) < abs(arr[i][b-1]-arr[i+1][b-1]) ? abs(arr[i][b-1]-arr[i+1][0]) : abs(arr[i][b-1]-arr[i+1][b-1]);
            
            if(dis1 > dis2){
                ans += abs(pos - arr[i][0]);
                ans += abs(arr[i][0] - arr[i][b-1]);
                pos = arr[i][b-1];
            }
            else{
                ans += abs(pos - arr[i][b-1]);
                ans += abs(arr[i][0] - arr[i][b-1]);
                pos = arr[i][0];
            }
        }
    }
    
    if(abs(pos - arr[a-1][0]) < abs(pos - arr[a-1][b-1])){
        ans += abs(pos - arr[a-1][0]);
        ans += abs(arr[a-1][0] - arr[a-1][b-1]);
    }
    else{
        ans += abs(pos - arr[a-1][b-1]);
        ans += abs(arr[a-1][0] - arr[a-1][b-1]);
    }
    
    cout << ans << endl;
}

//void solve(){
//    int start = 0;
//    int end = N-1;
//    int max_;
//    int ans = 0;
//
//    if(arr[start] > arr[end]){
//        max_=arr[end];
//        end--;
//    }
//    else{
//        max_=arr[start];
//        start++;
//    }
//    ans++;
//    while(start <= end){
//        if(max_ > arr[start] && max_ > arr[end]){
//            start++;
//            end--;
//        }
//        else if(max_ <= arr[start] && max_ <= arr[end]){
//            if(arr[start] > arr[end]){
//                max_=arr[end];
//                end--;
//            }
//            else{
//                max_=arr[start];
//                start++;
//            }
//            ans++;
//        }
//        else{
//            if(arr[start] < arr[end]){
//                start++;
//            }
//            else{
//                end--;
//            }
//        }
//    }
//
//    cout << ans << endl;
//}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> T;
    
    for(int i=1;i<=T;i++){
        cin >> a >> b;
        for(int k=0;k<a;k++){
            for(int j=0;j<b;j++){
                cin >> arr[k][j];
            }
            sort(&arr[k][0], &arr[k][b-1]);
        }
        
        cout << "Case #" << i << ": ";
        solve();
    }
    
    
    return 0;
}
