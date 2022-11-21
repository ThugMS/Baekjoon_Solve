#include <string>
#include <vector>

using namespace std;

#define INT_MAX 21400000

int checking(vector<vector<int>> field, int farmSize, int _x, int _y) {
    int rockCnt = 0;
    bool isPoisonMushroom = false;

    for (int i = _y; i < _y + farmSize; i++) {
        for (int j = _x; j < _x + farmSize; j++) {
            if (field[i][j] == 1)
                rockCnt++;

            if (field[i][j] == 2) {
                isPoisonMushroom = true;
                break;
            }
        }
        if (isPoisonMushroom)
            break;
    }

    if (isPoisonMushroom)
        return INT_MAX;

    return rockCnt;
}

int solution(vector<vector<int>> field, int farmSize) {
    int answer = INT_MAX;

    int ySearchSize = 0;
    int xSearchSize = 0;

    ySearchSize = field.size() - farmSize;
    xSearchSize = field[0].size() - farmSize;



    for (int i = 0; i <= ySearchSize; i++) {
        for (int j = 0; j <= xSearchSize; j++) {
            answer = min(answer, checking(field, farmSize, j, i));
        }
    }

    if (answer == INT_MAX)
        answer = -1;

    return answer;
}