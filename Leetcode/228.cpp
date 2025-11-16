#include<bits/stdc++.h>
using namespace std;
vector<string> solver(vector<int>& nums){
    vector<set<int>> vset;
   for(int i=0;i<nums.size();i++){
     set<int> temp;
     temp.insert(nums[i]);
     while(i+1 <nums.size() && nums[i]+1 == nums[i+1]){
         temp.insert(nums[i+1]);
         i++;
     }
     vset.push_back(temp);
   }
   vector<string> ans;
   for(auto it:vset){
    if (*it.begin() == *it.rbegin()) {
    ans.push_back(to_string(*it.begin()));
      } else {
    ans.push_back(to_string(*it.begin()) + "->" + to_string(*it.rbegin()));
     }
   }
   return ans;
}
int main(){
 vector<int> v={-1};
  vector<string> ans = solver(v);
  for(auto it:ans){
    cout<<it<<endl;
  }
}