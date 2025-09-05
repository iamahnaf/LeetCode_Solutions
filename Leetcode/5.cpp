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

string solver(string s){
  if(s.size()==1){
    return s.substr(0,1);
  }else if(s.size()==2 && s[0]!=s[1]){
    return s.substr(0,1);
  }
    int i=0; int maxlen=1;
    int len=1;
    int left,right; string s1="";
    while(i<s.size()-1){ //bacabd
      left=i-1,right=i+1;
       while( left>=0  && right<s.size() &&s[left]==s[right]){
          if(maxlen < right-left+1){
            maxlen=right-left+1;
            s1 = s.substr(left, right - left + 1);
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
        while(l>=0 && r<s.size() && s[l]==s[r]){
          if(maxlen2 < r-l+1){
            maxlen2=r-l+1;
            s2 = s.substr(l, r - l + 1);
          }
          l--;
          r++;
          //cout<<time++<<endl;
        }
        i++;
    }
    //cout<<s2<<endl;
    //cout<<"maxlen 1 "<<maxlen<<"\n"<<"maxlen 2 "<<maxlen2<<endl;
    if(maxlen==1 & maxlen2==1){
      return s.substr(0,1);
    }
    if(maxlen > maxlen2){
     return s1;
    }
    else {
      return s2;
    }
    
}
int main(){
   string s="aassssdbawbdwbdasjdsdsdsdsdsdsdsbaasdaw";
   cout<<solver(s);
}