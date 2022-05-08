////
////  14725(개미굴).cpp
////  Baekjoon
////
////  Created by 이민석 on 2022/03/23.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//
//#define endl "\n"
//
//using namespace std;
//
//class Trie{
//private:
//    map<string, Trie*> child; //key:식별문자 value : 자식 주소
//    
//public:
//    
//    void Insert(vector<string>& foods, int index){
//        if(index == foods.size())
//            return;
//        
//        if(child.find(foods[index]) == child.end()){
//            child[foods[index]] = new Trie();
//        }
//        
//        child[foods[index]]->Insert(foods, index+1);
//    }
//    
//    void Print(int depth){
//        for(auto& ch : child){
//            for(int i=0;i<depth;i++)
//                cout << "--";
//            
//            cout << ch.first << endl;
//            ch.second->Print(depth + 1);
//        }
//    }
//};
//
//
//int main(){
//    
//    int N;
//    
//    cin >> N;
//    
//    Trie* root = new Trie();
//    
//    for(int i=0;i<N;i++){
//        int M;
//        cin >> M;
//        vector<string> foods(M);
//        
//        for(int j=0;j<M;j++){
//            cin >> foods[j];
//        }
//        
//        root->Insert(foods, 0);
//    }
//    
//    root->Print(0);
//    
//    return 0;
//}
