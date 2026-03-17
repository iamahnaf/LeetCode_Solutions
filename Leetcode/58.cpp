#include<bits/stdc++.h>
using namespace std;
int solver(string s){
    stringstream ss(s);
   vector<string> arr;
   string word;
   while (ss >> word)
   {
    arr.push_back(word);
   }
   return arr.at(arr.size()-1).size();
}
int main(){
   string s = "   fly me   to   the moon  ";
   cout<<solver(s);
}