#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>

#pragma warning(disable:4996)

using namespace std;


int main() {

	int N;
	
		scanf("%d", &N);
	
		vector<long long> v;
		
		for (int i = 0; i < N; i++) {
			long long a;
			cin >> a;
			v.push_back(a);
		}
	
		sort(v.begin(), v.end());
	
		long long ans1;
		long long ans2;
		long long ans3;
		long long sum = 30000000001;
	
		for (int i = 0; i < N - 2; i++) {
			long long start = i+1;
			long long end = N - 1;
	
			while (start < end) {
				if (sum >= (long long)abs(v[start] + v[end] + v[i])) {
					sum = (long long)abs(v[start] + v[end] + v[i]);
					ans1 = v[i];
					ans2 = v[start];
					ans3 = v[end];
				}
				if (v[start] + v[end] + v[i] > 0) {
					end--;
				}
				else if (v[start] + v[end] + v[i] < 0) {
					start++;
				}
				else {
					ans1 = v[i];
					ans2 = v[start];
					ans3 = v[end];
					break;
				}
			}
			if (sum == 0)break;
		}

	return 0;
}