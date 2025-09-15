#include<bits/stdc++.h>
using namespace std;
bool solver(string t, string s){
    if(t.size()!=s.size()) return false;
   multiset<char> sett,sets;
   for(int i=0;i<t.size();i++){
    sett.insert(t[i]);
    sets.insert(s[i]);
   }
   if(sett==sets){
    return true;
   }else return false;
   
}
int main(){
   string t="anagram";
   string s="nagaram";
   cout<<solver(t,s);
}