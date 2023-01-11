

#include <iostream>
#include <cstring>
#include <vector>



using namespace std;

int main() {

	int T;

	cin >> T;

	getchar();

	for (int i = 1; i <= T; i++) {
		string s;
		int x;
		int y;
		
		cin >> s;
		cin >> x;
		cin >> y;
		
		int cnt = 0;
		int len = s.length();
		bool isLess = false;
		

		

		bool over = false;
		bool mid = false;
		bool down = false;

		int ysame = -1;
		int xsame = -1;

		string ans = "";

		bool check = false;
		
		while (cnt < len) {
			
			int n = s[cnt] - '0';
			//cout << n << endl;

			cnt++;
			if (over || mid || down) {
				ans += y + '0';
				continue;
			}

			if (n > y) {
				over = true;
				ans += y + '0';
			}

			else if (n == y) {
				ysame = cnt;
				ans += y + '0';
			}
				
			else if (n > x) {
				mid = true;
				ans += x + '0';
			}
			
			else if (n == x) {
				xsame = cnt;
				ans += x + '0';
			}

			else {
				down = true;
				int index = -1;
				for (int i = ans.length() - 1; i >= 0; i--) {
					if (ans[i] == y + '0') {
						index = i;
						break;
					}
				}

				if (index == -1) {
					check = true;
					break;
				}
					
				else {
					for (int i = ans.length() - 1; i > index; i--) {
						ans[i] = y + '0';
					}
					ans[index] = x + '0';
				}
				ans += y + '0';
			}	
			
		}

		printf("#%d ", i);

		if (check) {

			if (s.length() <= 1)
				cout << "-1" << endl;

			else{
				for (int i = 0; i < len - 1; i++) {
					printf("%c", y + '0');
				}
				printf("\n");
			}
			
		}
		else {
			if (ans.length() == 0 || (ans[ans.length() - 1] == '0' && ans.length() == 1))
				cout << "-1" << endl;
			else {
				int z = false;
				for (int i = 0; i < ans.length(); i++) {
					if (ans[i] - '0' != 0)
						z = true;

					if (z == false && ans[i] - '0' == 0)continue;

					cout << ans[i];
				}
				cout << endl;
			}
				
		}
	}

	

	return 0;
}