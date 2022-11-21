//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<vector<int>> quest) {
//    int answer = 0;
//    int exp = 0;
//
//    sort(quest.begin(), quest.end());
//
//    for (int i = 0; i < quest.size(); i++) {
//        if (quest[i][0] <= exp) {
//            exp += quest[i][1];
//            answer++;
//        }
//    }
//
//    return answer;
//}