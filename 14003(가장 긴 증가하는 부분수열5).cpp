#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N;

	int* num = new int[N];
	int* dp = new int[N];

	int a;
	int index, dpPivot = 0;

	vector<int> L;
	stack<int> st;
	vector<int>::iterator p;

	for (int i = 0; i < N; i++) {
		cin >> a;
		num[i] = a;

		if (L.size() == 0) {
			L.push_back(a);
			dp[i] = 1;
		}
		else {
			if (L[L.size() - 1] < num[i]) {
				L.push_back(a);
				dp[i] = L.size();
			}
			else {
				p = lower_bound(L.begin(), L.end(), num[i]);
				*(p) = num[i];
				dp[i] = p - L.begin() + 1;
			}
		}

		if (dp[i] > dpPivot) {
			index = i;
			dpPivot = dp[i];
		}
	}

	cout << L.size() << endl;

	st.push(num[index]);

	for (int i = index - 1; i >= 0; i--) {
		if (num[i] < num[index] && dp[i] + 1 == dp[index]) {
			index = i;
			st.push(num[i]);
		}
	}

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

	return 0;
}