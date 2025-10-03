#include<bits/stdc++.h>
using namespace std;
void solver(vector<int> v,int k){
     unordered_map<int,int> maps;
     for(int it: v){
      maps[it]++;
     }
     vector<pair<int,int>> vec;
     for(auto it:maps){
      vec.push_back(it);
     }
     for(auto it: vec){
      cout<<it.first<<" "<<it.second<<endl;
     }
}
int main(){
   vector<int> v={4,1,1,1,2,2,3};
   solver(v,2);
}