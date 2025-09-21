#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
                                                                  //Input: strs = ["eat","tea","tan","ate","nat","bat"]
                                                                 //Output: [["bat"],["nat","tan"],["ate","eat","tea"]]    
  
    for(string &s: strs){
         sort(s.begin(),s.end());
    } 
     for(string s: strs){
        cout<<s<<endl;
    }
    cout<<"done"<<endl;
    unordered_map<string, vector<int> > umap;
   for(int i=0;i<strs.size();i++){
    umap[strs[i]].push_back(i);
   }
   for(auto it: umap){
    cout<<it.first;
    for(int idx: it.second){
        cout<<idx<<" ";
    }
    cout<<endl;
   }
   vector<vector<string>> ans;
   
                                                                   
}
int main(){
   vector<string> str={"eat","tea","tan","ate","nat","bat"};
   groupAnagrams(str);
}