#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
#include <cstring>

#pragma warning(disable:4996)

using namespace std;

int ans;

void go(int cur, int start, int cnt, bool done[],int v[100010][1]) {
	if (cur == start && done[cur] == true) {
		return;
	}
	else if ((cur == start && cnt != 0) || done[cur] == true) {
		ans += cnt;
		/*cout << cnt << endl;*/
	}
	else {
		done[cur] = true;
		go(v[cur][0], start, cnt+1, done, v);
	}
	
}

int main() {

	

	int T;

	int n;

	scanf("%d", &T);
	
	for (int K = 0; K < T; K++) {
		int v[100010][1];

		bool done[100010] = {false, };

		ans = 0;

		scanf("%d", &n); 
		for (int i = 1; i <= n; i++) {
			
			scanf("%d", &v[i][0]);
			
		}

		for (int i = 1; i <= n; i++) {
			go(i, i, 0, done, v);
		}

		cout << ans << endl;
	}

	


	return 0;
}


