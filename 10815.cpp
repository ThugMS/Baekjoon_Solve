////
////  10815.cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/18.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//#define endl "\n"
//
//using namespace std;
//
//int main(){
//    
//    int N, M;
//    
//    cin >> N;
//    
//    int *arr = new int[N];
//    
//    for(int i=0;i<N;i++)
//        cin >> arr[i];
//    
//    cin >> M;
//    
//    int *cmp = new int[M];
//    
//    for(int i=0;i<M;i++)
//        cin >> cmp[i];
//    
//    sort(arr, arr+N);
//
//    for(int i=0;i<M;i++){
//        int start=0, end = N - 1;
//        int check = 0;
//       
//        while(1){
//            
//            if (end-start == 1) {
//                if(cmp[i] == arr[end] || cmp[i] == arr[start])
//                    check = 1;
//                break;
//            }
//            
//           else if(arr[(end-start)/2 + start] == cmp[i]){
//                check = 1;
//                break;
//            }
//            else if(arr[(end-start)/2 + start] > cmp[i]){
//                if(end == (end-start)/2 + start)break;
//                end = (end-start)/2 + start;
//            }
//            else{
//                if(start == (end-start)/2 + start)break;
//                start = (end-start)/2 + start;
//            }
//        }
//        if(check == 1)
//            cout<<"1 ";
//        else
//            cout <<"0 ";
//    }
//    
////     0  1 2 3 4
////    -10 2 3 6 10
//    
//    
//    return 0;
//}
