#include<bits/stdc++.h>
using namespace std;
string solver(string s){
   vector<string> str;
   string temp;
   for (char it: s){
      if(it=='/'){
         str.push_back(temp);
         //cout<<"string added :"<<temp<<endl;
         temp.clear();
      }
      else{
        temp+=it;
      }
   }
   str.push_back(temp);
   //adding in stack
   vector<string> stk;
   for(string it: str){
      if(it == ".."){
         if(!stk.empty()){
            stk.pop_back();
         }
      }
      else if(it == "." || it == ""){
         continue;
      }
      else {stk.push_back(it);}
   }
   string ans="/";
   for(string it: stk){
      ans+=it;
      ans+="/";
   }
   if(ans.size()>1){
    ans.pop_back();
   }
   //cout<<ans;
   return ans;
}
int main(){
   string s="/../";
   cout<<solver(s);
}