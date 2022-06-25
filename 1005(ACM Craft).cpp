//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//
//#pragma warning(disable:4996)
//
//using namespace std;
//
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N;i++) {
//		int a, b;
//		scanf("%d %d", &a, &b);
//
//		vector<int> adj[1010];
//		vector<int> inDegree(1010, 0);
//		vector<int> cost(1010, 0);
//		vector<int> answer(1010, 0);
//		queue<int> q;
//
//		for (int j = 1; j <= a; j++) {
//			scanf("%d", &cost[j]);
//		}
//
//		for (int j = 1; j <= b; j++) {
//			int st, ed;
//			scanf("%d %d", &st, &ed);
//			adj[st].push_back(ed);
//			inDegree[ed]++;
//		}
//		int destination;
//		scanf("%d", &destination);
//		
//
//		for (int j = 1; j <= a; j++) {
//			if (inDegree[j] == 0) {
//				q.push(j);
//			}
//			answer[j] = cost[j];
//		}
//
//		while (!q.empty()) {
//			int cur = q.front();
//
//			q.pop();
//			for (int j = 0; j < adj[cur].size(); j++) {
//				int next = adj[cur][j];
//				inDegree[next]--;
//				answer[next] = max(answer[next], answer[cur] + cost[next]);
//
//				if (inDegree[next] == 0) {
//					q.push(next);
//				}
//			}
//		}
//
//	/*	for (int i = 1; i <= a; i++) {
//			cout << answer[i] << endl;
//		}*/
//
//		printf("%d\n", answer[destination]);
//		
//	}
//
//	return 0;
//}