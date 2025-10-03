#include<bits/stdc++.h>
using namespace std;
void solver(vector<int> v,int k){
      for(auto it: maps){
        cout<<it.first<<" "<<it.second<<endl;
      }
}
int main(){
   vector<int> v={4,1,1,1,2,2,3};
   solver(v,2);
}