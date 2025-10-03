#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
  return a.second>b.second;
}
vector<int> solver(vector<int> v,int k){
     unordered_map<int,int> maps;
     for(int it: v){
      maps[it]++;
     }
     vector<pair<int,int>> vec;
     for(auto it:maps){
      vec.push_back(it);
     }
     sort(vec.begin(),vec.end(),comp);
    vector<int> ans;
    for(int i=0;i<k;i++){
      ans.push_back(vec[i].first);
    }
    return ans;
}
int main(){
   vector<int> v={4,1,1,1,2,2,3};
   solver(v,2);
}