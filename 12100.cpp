////
////  12100.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/21.
////
////
///*
//3
//2 0 0
//2 2 0
//2 0 0
//
// 4
// 2 4 16 8
// 8 4 0 0
// 16 8 2 0
// 2 8 2 0
//
// 4
// 2 4 8 2
// 2 4 0 0
// 2 0 0 0
// 2 0 2 0
//*/
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//
//#define endl "\n"
//
//using namespace std;
//
//int arr[21][21];
//int sub_[21][21];
//int arr_a[21][21];
//int arr_b[21][21];
//int arr_c[21][21];
//int arr_d[21][21];
//int arr_e[21][21];
//
//int N;
//int max_ = -1;
//int cnt=0;
//
//void up(){
//    int front = 0;
//    int pivot = front+1;
//
//    for(int i=0;i<N;i++){
//        if(arr[front][i] == 0){
//            int sub = front;
//            while(1){
//                front++;
//                if(arr[front][i] != 0 || front >= N)
//                    break;
//            }
//            if(front>=N){
//                front = 0;
//                pivot = front + 1;
//                continue;
//            }
//            else{
//                arr[sub][i] = arr[front][i];
//                arr[front][i] = 0;
//                front = sub;
//                i--;
//                continue;
//            }
//        }
//
//        while(1){
//            if(arr[pivot][i] != 0 || pivot >= N)
//                break;
//            pivot++;
//        }
//        if(pivot >= N){
//            front = 0;
//            pivot = front + 1;
//            continue;
//        }
//        else{
//            if(arr[front][i] == arr[pivot][i]){
//                arr[pivot][i] = 0;
//                arr[front][i] *= 2;
//                if(arr[front][i] > max_)
//                    max_ = arr[front][i];
//                front++;
//                pivot = front+1;
//                i--;
//                continue;
//            }
//            else{
//                if(front+1 != pivot){
//                    arr[front+1][i] = arr[pivot][i];
//                    arr[pivot][i] = 0;
//                }
//                front++;
//                pivot = front+1;
//                i--;
//                continue;
//            }
//        }
//
//    }
//}
//
//void down(){
//    int front = N-1;
//    int pivot = front-1;
//
//    for(int i=0;i<N;i++){
//        if(arr[front][i] == 0){
//            int sub = front;
//            while(1){
//                front--;
//                if(arr[front][i] != 0 || front < 0)
//                    break;
//            }
//            if(front<0){
//                front = N-1;
//                pivot = front - 1;
//                continue;
//            }
//            else{
//                arr[sub][i] = arr[front][i];
//                arr[front][i] = 0;
//                front = sub;
//                i--;
//                continue;
//            }
//        }
//
//        while(1){
//            if(arr[pivot][i] != 0 || pivot < 0)
//                break;
//            pivot--;
//        }
//        if(pivot < 0){
//            front = N-1;
//            pivot = front - 1;
//            continue;
//        }
//        else{
//            if(arr[front][i] == arr[pivot][i]){
//                arr[pivot][i] = 0;
//                arr[front][i] *= 2;
//                if(arr[front][i] > max_)
//                    max_ = arr[front][i];
//                front--;
//                pivot = front-1;
//                i--;
//                continue;
//            }
//            else{
//                if(front-1 != pivot){
//                    arr[front-1][i] = arr[pivot][i];
//                    arr[pivot][i] = 0;
//                }
//                front--;
//                pivot = front-1;
//                i--;
//                continue;
//            }
//        }
//
//    }
//}
//
//void left(){
//    int front = 0;
//    int pivot = front+1;
//
//    for(int i=0;i<N;i++){
//        if(arr[i][front] == 0){
//            int sub = front;
//            while(1){
//                front++;
//                if(arr[i][front] != 0 || front >= N)
//                    break;
//            }
//            if(front>=N){
//                front = 0;
//                pivot = front + 1;
//                continue;
//            }
//            else{
//                arr[i][sub] = arr[i][front];
//                arr[i][front] = 0;
//
//                front = sub;
//                i--;
//                continue;
//            }
//        }
//
//        while(1){
//            if(arr[i][pivot] != 0 || pivot >= N)
//                break;
//            pivot++;
//        }
//        if(pivot >= N){
//            front = 0;
//            pivot = front + 1;
//            continue;
//        }
//        else{
//            if(arr[i][front] == arr[i][pivot]){
//                arr[i][pivot] = 0;
//                arr[i][front] *= 2;
//                if(arr[i][front] > max_){
//                    max_ = arr[i][front];
//                }
//
//                front++;
//                pivot = front+1;
//                i--;
//                continue;
//            }
//            else{
//                if(front+1 != pivot){
//                    arr[i][front+1] = arr[i][pivot];
//                    arr[i][pivot] = 0;
//                }
//                front++;
//                pivot = front+1;
//                i--;
//                continue;
//            }
//        }
//
//    }
//}
//
//void right(){
//    int front = N-1;
//    int pivot = front-1;
//
//    for(int i=0;i<N;i++){
//        if(arr[i][front] == 0){
//            int sub = front;
//            while(1){
//                front--;
//                if(arr[i][front] != 0 || front < 0)
//                    break;
//            }
//            if(front<0){
//                front = N-1;
//                pivot = front - 1;
//                continue;
//            }
//            else{
//                arr[i][sub] = arr[i][front];
//                arr[i][front] = 0;
//                front = sub;
//                i--;
//                continue;
//            }
//        }
//
//        while(1){
//            if(arr[i][pivot] != 0 || pivot < 0)
//                break;
//            pivot--;
//        }
//        if(pivot < 0){
//            front = N-1;
//            pivot = front - 1;
//            continue;
//        }
//        else{
//            if(arr[i][front] == arr[i][pivot]){
//                arr[i][pivot] = 0;
//                arr[i][front] *= 2;
//                if(arr[i][front] > max_)
//                    max_ = arr[i][front];
//                front--;
//                pivot = front-1;
//                i--;
//                continue;
//            }
//            else{
//                if(front-1 != pivot){
//                    arr[i][front-1] = arr[i][pivot];
//                    arr[i][pivot] = 0;
//                }
//                front--;
//                pivot = front-1;
//                i--;
//                continue;
//            }
//        }
//
//    }
//}
//
//void checking(){
//
//    copy(&sub_[0][0], &sub_[N][N], &arr_a[0][0]);
//    copy(&sub_[0][0], &sub_[N][N], &arr_b[0][0]);
//    copy(&sub_[0][0], &sub_[N][N], &arr_c[0][0]);
//    copy(&sub_[0][0], &sub_[N][N], &arr_d[0][0]);
//    copy(&sub_[0][0], &sub_[N][N], &arr_e[0][0]);
//
//    for(int a = 0;a<4;a++){
//        copy(&arr_a[0][0], &arr_a[N][N], &arr[0][0]);
//        switch(a){
//            case 0:
//                up();
//                break;
//            case 1:
//                down();
//                break;
//            case 2:
//                left();
//                break;
//            case 3:
//                right();
//                break;
//        }
//        copy(&arr[0][0], &arr[N][N], &arr_b[0][0]);
//        for(int b = 0;b<4;b++){
//            copy(&arr_b[0][0], &arr_b[N][N], &arr[0][0]);
//            switch(b){
//                case 0:
//                    up();
//                    break;
//                case 1:
//                    down();
//                    break;
//                case 2:
//                    left();
//                    break;
//                case 3:
//                    right();
//                    break;
//            }
//            copy(&arr[0][0], &arr[N][N], &arr_c[0][0]);
//            for(int c = 0;c<4;c++){
//                copy(&arr_c[0][0], &arr_c[N][N], &arr[0][0]);
//                switch(c){
//                    case 0:
//                        up();
//                        break;
//                    case 1:
//                        down();
//                        break;
//                    case 2:
//                        left();
//                        break;
//                    case 3:
//                        right();
//                        break;
//                }
//                copy(&arr[0][0], &arr[N][N], &arr_d[0][0]);
//                for(int d =0;d<4;d++){
//                    copy(&arr_d[0][0], &arr_d[N][N], &arr[0][0]);
//                    switch(d){
//                        case 0:
//                            up();
//                            break;
//                        case 1:
//                            down();
//                            break;
//                        case 2:
//                            left();
//                            break;
//                        case 3:
//                            right();
//                            break;
//                    }
//                    copy(&arr[0][0], &arr[N][N], &arr_e[0][0]);
//                    for(int e=0;e<4;e++){
//                        copy(&arr_e[0][0], &arr_e[N][N], &arr[0][0]);
//                        switch(e){
//                            case 0:
//                                up();
//                                break;
//                            case 1:
//                                down();
//                                break;
//                            case 2:
//                                left();
//                                break;
//                            case 3:
//                                right();
//                                break;
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//
//int main(){
//
//    cin >> N;
//
//    for(int i=0;i<N;i++){
//        for(int j=0;j<N;j++){
//            cin >> arr[i][j];
//            sub_[i][j] = arr[i][j];
//            if(max_ < sub_[i][j])
//                max_ = sub_[i][j];
//        }
//    }
//
////    down();
////    for(int i=0;i<N;i++){
////        for(int j=0;j<N;j++){
////            cout << arr[i][j] << " ";
////        }
////        cout << endl;
////    }
////    cout<<endl;
////
////    left();
////    for(int i=0;i<N;i++){
////        for(int j=0;j<N;j++){
////            cout << arr[i][j] << " ";
////        }
////        cout << endl;
////    }
////    cout<<endl;
////
////    left();
////    for(int i=0;i<N;i++){
////        for(int j=0;j<N;j++){
////            cout << arr[i][j] << " ";
////        }
////        cout << endl;
////    }
////    cout<<endl;
////
////    right();
////    down();
////    for(int i=0;i<N;i++){
////        for(int j=0;j<N;j++){
////            cout << arr[i][j] << " ";
////        }
////        cout << endl;
////    }
////    cout<<endl;
//
////    copy(&sub_[0][0], &sub_[N][N], &arr[0][0]);
//
//
//   checking();
//    cout << max_ << endl;
//
//    return 0;
//}
