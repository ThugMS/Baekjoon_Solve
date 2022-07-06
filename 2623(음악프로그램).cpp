//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//#include <queue>
//#include <cstring>
//
//#pragma warning(disable:4996)
//
//using namespace std;
//
//int main() {
//
//	int n, m;
//
//	scanf("%d %d", &n, &m);
//
//	vector<int> v[1010];
//	
//	vector<int> inDegree(n+1);
//
//	vector<int> ans;
//
//	for (int i = 0; i < m; i++) {
//		int s;
//		scanf("%d", &s);
//		vector<int> sub;
//		for (int j = 0; j < s; j++) {
//			int s;
//			scanf("%d", &s);
//			sub.push_back(s);
//		}
//
//		for (int j = 0; j < sub.size(); j++) {
//			for (int k = j + 1; k < sub.size(); k++) {
//				v[sub[j]].push_back(sub[k]);
//				inDegree[sub[k]]++;
//			}
//		}
//	}
//
//	//cout << "yes" << endl;
//
//	queue<int> q;
//
//	for (int i = 1; i <= n; i++) {
//		if (inDegree[i] == 0) {
//			q.push(i);
//		}
//	}
//
//	while (!q.empty()) {
//		int cur = q.front();
//		q.pop();
//		ans.push_back(cur);
//
//		for (int i = 0; i < v[cur].size(); i++) {
//			inDegree[v[cur][i]]--;
//
//			if (inDegree[v[cur][i]] == 0) {
//				q.push(v[cur][i]);
//			}
//		}
//
//	}
//	
//	if (ans.size() != n) {
//		cout << 0 << endl;
//	}
//	else {
//		for (int i = 0; i < ans.size(); i++) {
//			cout << ans[i] << endl;
//		}
//	}
//	
//
//
//	return 0;
//}
