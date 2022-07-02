//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int parent[10010];
//
//
//int findParent(int x) {
//	if (parent[x] == x)return x;
//	else {
//		return findParent(parent[x]);
//	}
//}
//
//void merge(int x, int y) {
//	int a = findParent(x);
//	int b = findParent(y);
//	parent[b] = a;
//}
//
//
//
//int main() {
//
//	int v, e;
//	int ans = 0;
//
//	cin >> v >> e;
//
//	vector<pair<int, pair<int, int>>> node;
//
//	for (int i = 0; i < e; i++) {
//		int from, to, cost;
//		cin >> from >> to >> cost;
//
//		node.push_back({ cost,{from,to} });
//	}
//
//	sort(node.begin(), node.end());
//
//	for (int i = 1; i <= v; i++) {
//		parent[i] = i;
//	}
//
//	for (int i = 0; i < node.size(); i++) {
//		if (!(findParent(node[i].second.first) == findParent(node[i].second.second))) {
//			merge(node[i].second.first, node[i].second.second);
//			ans += node[i].first;
//		}
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}