#include<bits/stdc++.h>
using namespace std;
// shortcuts
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define pb push_back

// type aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
int isPalindrom(string s) {
    int left = 0;
    int right = s.size() - 1;
    
    while(left < right) {
        if(s[left] != s[right]) return 0; // 
        left++;
        right--;
    }
    return 1; // palindrome
}
string solver(string s){
    int i=1; int maxlen=1;
    int len=1;
    int left,right; string s1="";
    while(i<s.size()-1){ //bacabd
      left=i-1,right=i+1;
       while( left>=0  && right<s.size() &&s[left]==s[right]){
          if(maxlen < right-left+1){
            maxlen=right-left+1;
            s1=s.substr(left,right+1);
          }
        left--;
        right++;
       }
       i++;
    }
   // cout<<s1<<endl;
    //for even size
    int l=1,r=l+1;
    i=0;
    int maxlen2=1,time=0;
    string s2="";
    while(i<s.size()-1){ //abba
      l=i,r=i+1; 
        while(s[l]==s[r] && l>=0 && r<s.size()){
          if(maxlen2 < r-l+1){
            maxlen2=r-l+1;
            s2=s.substr(l,r+1);
          }
          l--;
          r++;
          //cout<<time++<<endl;
        }
        i++;
    }
    //cout<<s2<<endl;
    if(maxlen > maxlen2){
     return s1;
    }
    else {
      return s2;
    }
   // cout<<"maxlen 1-"<<maxlen<<"\n"<<"maxlen 2 -"<<maxlen2<<endl;
  
}
int main(){
   string s="acaacas";
   cout<<solver(s);
}