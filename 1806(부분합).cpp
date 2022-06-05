//#include <iostream>
//#include <algorithm>
//
//#pragma warning(disable:4996)
//
//using namespace std;
//
//
//int main() {
//
//	int N, S;
//	int arr[100001];
//
//	scanf("%d %d", &N, &S);
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int start = 0;
//	int end = 0;
//	int ans = 10000000;
//	int sum = 0;
//
//	while (start <= end) {
//		if (sum < S) {
//			end++;
//			sum += arr[end - 1];
//		}
//		else if (sum >= S) {
//			if (end - start < ans)
//				ans = end - start;
//			sum -= arr[start];
//			start++;
//		}
//		if (end > N)break;
//	}
//
//	if (ans == 10000000) {
//		printf("0\n");
//	}
//	else
//		printf("%d\n", ans);
//
//	return 0;
//}