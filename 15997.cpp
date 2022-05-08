//
//
//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//vector <int> v;
//map <int, string> m;
//map <string, double> sub;
//double win_rate[4] = {0};
//int counting = 0;
//
//int main(){
//
//    string str;
//    string name[6][2];
//    double arr[6][4];
//    double win[4];
//
//
//    for(int i=0;i<4;i++){
//        cin >> str;
//        m[i] = str;
//        sub[str] = 0;
//    }
//
//    for(int i=0;i<6;i++){
//
//        for(int j=0;j<2;j++){
//            cin >> name[i][j];
//        }
//
//        for(int j=0;j<3;j++){
//            cin >> arr[i][j];
//        }
//    }
//
//
//    for(int i=0;i<4;i++){
//        win[i] = sub[m[i]];
//    }
//
//
//
//
//    for(int a = 0;a<3;a++){
//        if(arr[0][a] == 0.0)continue;
//        if(a == 0){
//            sub[name[0][0]] += 3;
//        }
//        else if(a == 1){
//            sub[name[0][0]]++;
//            sub[name[0][1]]++;
//        }
//        else{
//            sub[name[0][1]] += 3;
//        }
//
//
//        for(int b=0;b<3;b++){
//            if(arr[1][b] == 0.0)continue;
//
//            if(b == 0){
//                sub[name[1][0]] += 3;
//            }
//            else if(b == 1){
//                sub[name[1][0]]++;
//                sub[name[1][1]]++;
//            }
//            else{
//                sub[name[1][1]] += 3;
//            }
//            for(int c=0;c<3;c++){
//                if(arr[2][c] == 0.0)continue;
//
//                if(c == 0){
//                    sub[name[2][0]] += 3;
//                }
//                else if(c == 1){
//                    sub[name[2][0]]++;
//                    sub[name[2][1]]++;
//                }
//                else{
//                    sub[name[2][1]] += 3;
//                }
//                for(int d=0;d<3;d++){
//                    if(arr[3][d] == 0.0)continue;
//
//                    if(d == 0){
//                        sub[name[3][0]] += 3;
//                    }
//                    else if(d == 1){
//                        sub[name[3][0]]++;
//                        sub[name[3][1]]++;
//                    }
//                    else{
//                        sub[name[3][1]] += 3;
//                    }
//                    for(int e=0;e<3;e++){
//                        if(arr[4][e] == 0.0)continue;
//
//                        if(e == 0){
//                            sub[name[4][0]] += 3;
//                        }
//                        else if(e == 1){
//                            sub[name[4][0]]++;
//                            sub[name[4][1]]++;
//                        }
//                        else{
//                            sub[name[4][1]] += 3;
//                        }
//                        for(int f=0;f<3;f++){
//                            if(arr[5][f] == 0.0)continue;
//
//                            if(f == 0){
//                                sub[name[5][0]] += 3;
//                            }
//                            else if(f == 1){
//                                sub[name[5][0]]++;
//                                sub[name[5][1]]++;
//                            }
//                            else{
//                                sub[name[5][1]] += 3;
//                            }
//
//                            for(int i=0;i<4;i++){
//                                win[i] = sub[m[i]];
//                            }
//
//                            for(int i=0;i<4;i++){
//                                int cnt=0;
//                                int big=0;
//                                for(int j=0;j<4;j++){
//                                    if(win[i] == win[j])
//                                        cnt++;
//                                    else if(win[i] < win[j])
//                                        big++;
//                                }
//                                if(big==0 && cnt <= 2){
//                                    win_rate[i] += 1.0;
//                                }
//
//                                else if(big == 0 && cnt > 2){
//                                    win_rate[i] += 2.0/cnt;
//                                }
//
//                                else if(big == 1){
//                                    win_rate[i] += 1.0/cnt;
//                                }
//
//                            }
//                            counting++;
//                            for(int i=0;i<4;i++){
//                                cout << win[i] << endl;
//                            }
//                            cout<<endl;
//
//
//                            if(f == 0){
//                                sub[name[5][0]] -= 3;
//                            }
//                            else if(f == 1){
//                                sub[name[5][0]]--;
//                                sub[name[5][1]]--;
//                            }
//                            else{
//                                sub[name[5][1]] -= 3;
//                            }
//
//                        }
//                        if(e == 0){
//                            sub[name[4][0]] -= 3;
//                        }
//                        else if(e == 1){
//                            sub[name[4][0]]--;
//                            sub[name[4][1]]--;
//                        }
//                        else{
//                            sub[name[4][1]] -= 3;
//                        }
//                    }
//                    if(d == 0){
//                        sub[name[3][0]] -= 3;
//                    }
//                    else if(d == 1){
//                        sub[name[3][0]]--;
//                        sub[name[3][1]]--;
//                    }
//                    else{
//                        sub[name[3][1]] -= 3;
//                    }
//                }
//                if(c == 0){
//                    sub[name[2][0]] -= 3;
//                }
//                else if(c == 1){
//                    sub[name[2][0]]--;
//                    sub[name[2][1]]--;
//                }
//                else{
//                    sub[name[2][1]] -= 3;
//                }
//            }
//            if(b == 0){
//                sub[name[1][0]] -= 3;
//            }
//            else if(b == 1){
//                sub[name[1][0]]--;
//                sub[name[1][1]]--;
//            }
//            else{
//                sub[name[1][1]] -= 3;
//            }
//        }
//        if(a == 0){
//            sub[name[0][0]] -= 3;
//        }
//        else if(a == 1){
//            sub[name[0][0]]--;
//            sub[name[0][1]]--;
//        }
//        else{
//            sub[name[0][1]] -= 3;
//        }
//    }
//
//
//
//
//    for(int i=0;i<4;i++){
//        win_rate[i] /= counting;
//    }
//
//    cout << fixed;
//    cout.precision(10);
//    for(int i=0;i<4;i++){
//        cout << win_rate[i] << endl;
//    }
//
//    return 0;
//}
