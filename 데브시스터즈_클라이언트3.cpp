#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

constexpr double BallDiameter = 2;

double GetDistance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int solution(vector<vector<double>> objectBallPosList, vector<double> hitVector) {
    int answer = -1;
    
    double gradient = 0;
    double perGradient = 0;

    gradient = hitVector[1] / hitVector[0];
    perGradient = -1.0 / gradient;

    double ballX = 0;
    double ballY = 0;
    double change = 0.1;

    if (hitVector[0] < 0)
        change *= -1;

    ballX += change;

    vector<vector <double>> copy(objectBallPosList.size());

    for (int i = 0; i < objectBallPosList.size(); i++) {
        copy[i].push_back(objectBallPosList[i][0]);
        copy[i].push_back(objectBallPosList[i][1]);
    }

    vector<int> cross;
    bool isAnswer = false;

    if (hitVector[0] < 0) {
        sort(objectBallPosList.begin(), objectBallPosList.end(), greater<>());
    }
    else {
        sort(objectBallPosList.begin(), objectBallPosList.end());
    }

    double indexX = 0;
    double indexY = 0;

    for (int i = 0; i < objectBallPosList.size(); i++) {
        double x = objectBallPosList[i][0];
        double y = objectBallPosList[i][1];

        double k = y - (perGradient * x);

        double cX = k / (gradient - perGradient);
        double cY = gradient * cX;

        double dis = GetDistance(cX, cY, x, y);

        if (dis < BallDiameter / 2) {
            indexX = x;
            indexY = y;
            break;
        }
            

        /*if (dis < BallDiameter / 2)
            cross.push_back(i);*/

        /*cout << cX << " " << cY << endl;
        cout << dis << endl;*/
    }

    if (indexX == 0 && indexY == 0)
        return -1;

    for (int i = 0; i < copy.size(); i++) {
        if (indexX == copy[i][0] && indexY == copy[i][1]) {
            return i;
        }
    }

   /* if (cross.empty())
        return -1;

    if (hitVector[0] < 0) {
        for (int i = 0; i < cross.size(); i++) {
            int p = cross[i];

            if (indexX == 0) {
                indexX = objectBallPosList[p][0];
                answer = 0;
                continue;
            }

            if (indexX < objectBallPosList[p][0]) {
                answer = p;
                indexX = objectBallPosList[p][0];
            }
        }
    }

    else {
        for (int i = 0; i < cross.size(); i++) {
            int p = cross[i];

            if (indexX == 0) {
                indexX = objectBallPosList[p][0];
                answer = 0;
                continue;
            }

            if (indexX > objectBallPosList[p][0]) {
                answer = p;
                indexX = objectBallPosList[p][0];
            }
        }
    }*/
    

    //for (int i = 0; i < objectBallPosList.size(); i++) {
    //    double dis = GetDistance(objectBallPosList[i][0], objectBallPosList[i][1], 0, 0);

    //    disArray.push_back(dis);
    //}


    //while (1) {
    //    ballY = ballX * gradient;
    //    
    //    for (int i = 0; i < objectBallPosList.size(); i++) {
    //        double dis = GetDistance(objectBallPosList[i][0], objectBallPosList[i][1], ballX, ballY);

    //        //cout << i << "¹ø  " << dis << endl;

    //        if (dis < BallDiameter)
    //            return i;

    //        if (dis < disArray[i]) {
    //            isAnswer = true;
    //        }

    //        disArray[i] = dis;
    //    }

    //    if (isAnswer == false)
    //        return -1;

    //    isAnswer = false;

    //    ballX += change;
    //}

    return answer;
}


//#include <string>
//#include <vector>
//#include <cmath>
//#include <iostream>
//
//using namespace std;
//
//constexpr double BallDiameter = 2;
//
//double GetDistance(double x1, double y1, double x2, double y2) {
//    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//
//int solution(vector<vector<double>> objectBallPosList, vector<double> hitVector) {
//    int answer = -2;
//
//    double gradient = 0;
//    double perGradient = 0;
//
//    gradient = hitVector[1] / hitVector[0];
//    perGradient = -1.0 / gradient;
//
//    double ballX = 0;
//    double ballY = 0;
//    double change = 0.76;
//
//    if (hitVector[0] < 0)
//        change *= -1;
//
//    ballX += change;
//
//    vector<double> disArray;
//    bool isAnswer = false;
//
//    /*for (int i = 0; i < objectBallPosList.size(); i++) {
//        double x = objectBallPosList[i][0];
//        double y = objectBallPosList[i][1];
//
//        double k = y - (perGradient * x);
//
//        double cX = k / (gradient - perGradient);
//        double cY = gradient * cX;
//
//        double dis = GetDistance(cX, cY, x, y);
//
//        cout << cX << " " << cY << endl;
//        cout << dis << endl;
//    }*/
//
//    for (int i = 0; i < objectBallPosList.size(); i++) {
//        double dis = GetDistance(objectBallPosList[i][0], objectBallPosList[i][1], 0, 0);
//
//        disArray.push_back(dis);
//    }
//
//
//    while (1) {
//        ballY = ballX * gradient;
//
//        for (int i = 0; i < objectBallPosList.size(); i++) {
//            double dis = GetDistance(objectBallPosList[i][0], objectBallPosList[i][1], ballX, ballY);
//
//            //cout << i << "¹ø  " << dis << endl;
//
//            if (dis < BallDiameter)
//                return i;
//
//            if (dis < disArray[i]) {
//                isAnswer = true;
//            }
//
//            disArray[i] = dis;
//        }
//
//        if (isAnswer == false)
//            return -1;
//
//        isAnswer = false;
//
//        ballX += change;
//    }
//
//    return answer;
//}