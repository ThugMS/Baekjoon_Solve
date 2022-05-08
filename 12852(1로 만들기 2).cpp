//
//  12852(1로 만들기 2).cpp
//  Baekjoon
//
//  Created by 이민석 on 2022/05/06.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional>

#define endl "\n"

using namespace std;

int dp[1000001];
int before[1000001];

int main(){
    
    int N;
    
    scanf("%d", &N);
    
    dp[1] = 0;
    before[1] = -1;
    
    for(int i=2;i<= N;i++){
        dp[i] = dp[i-1] + 1;
        before[i] = i-1;
        
        if(i % 2 ==0 && dp[i] > dp[i/2] + 1){
            dp[i] = dp[i/2] +1;
            before[i] = i/2;
        }
        if(i % 3 ==0 && dp[i] > dp[i/3] + 1){
            dp[i] = dp[i/3] +1;
            before[i] = i/3;
        }
    }
    
    printf("%d\n", dp[N]);
    
    while(N > -1){
        printf("%d ", N);
        N = before[N];
    }
    cout << endl;
    
    return 0;
}
