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
int solver(string s){
    int i=1,j; int maxlen=1;
    int len=1;
    
    while(i<s.size()-1){
         j=1;
      while(s[i-j]==s[i+j]){
        len=len+2;
        j++;
        //cout<<"palin checking"<<endl;
      }
      maxlen=max(maxlen,len);
      len=1;
      i++;
      //   cout<<i<<endl;
    }
    //for even size
    int l=1,r=l+1;
    i=0;
    int maxlen2=1,time=0;
    while(i<s.size()-1){ //abba
      l=i,r=i+1;
        while(s[l]==s[r] && l>=0 && r<s.size()){
          maxlen2=max(maxlen2,r-l+1);
          l--;
          r++;
          //cout<<time++<<endl;
        }
        i++;
    }
    cout<<"maxlen-1 "<<maxlen<<endl;
    cout<<"maxlen-2 "<<maxlen2<<endl;
    return 0;
}
int main(){
   string s="asdbbdsasdsac";
   cout<<solver(s);
}