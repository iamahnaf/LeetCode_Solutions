#include<bits/stdc++.h>
using namespace std;
void solver(vector<int> v){
      map<int,int> maps;
      for(int it: v){
        maps[it]++;
      }
      for(auto it: maps){
        cout<<it.first<<" "<<it.second<<endl;
      }
}
int main(){
   vector<int> v={1,1,1,2,2,3};
   solver(v);
}