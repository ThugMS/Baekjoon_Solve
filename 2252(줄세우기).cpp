////
////  2252(줄세우기).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/04/19.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//
//#define endl "\n"
//
//using namespace std;
//
//int n,m;
//int visit[32001] = {0,};
//stack<int> ans;
//
//void dfs(vector<vector<int>> &v, int index){
//    visit[index] = 1;
//    
//    for(int i=0;i<v[index].size();i++){
//        if(visit[v[index][i]] == 0)
//            dfs(v, v[index][i]);
//    }
//    
//    ans.push(index);
//}
//
//void solve(vector<vector<int>> &v){
//    for(int i=1;i<=n;i++){
//        if(visit[i] == 0)
//            dfs(v, i);
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    cin >> n >> m;
//    
//    vector<vector<int>> v(n+1);
//    
//    for(int i=0;i<m;i++){
//        int a,b;
//        cin >> a >> b;
//        v[a].push_back(b);
//    }
//    
//    solve(v);
//    
//    while(!ans.empty()){
//        cout << ans.top() << " ";
//        ans.pop();
//    }
//    
//    cout << endl;
//    
//    return 0;
//}
