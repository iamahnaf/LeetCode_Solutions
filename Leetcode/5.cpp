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
    i=1,j=2;
    int k=1; 
    len=0;
    int maxlen2=2;
    while(i<s.size()-2){ //abba

       while(s[i-k]==s[j+k] && i>=0 && j< s.size()-1 &&s[i]==s[j]){
        cout<<s[i-k]<<" "<<s[j+k]<<endl;
             len=len+2;
             k++;
       }
       k=1;
       maxlen2=max(maxlen2,len);
       i++;
       j++;
    }
    cout<<"maxlen-1 "<<maxlen<<endl;
    cout<<"maxlen-2 "<<maxlen2<<endl;
    return 0;
}
int main(){
   string s="asdbbdsasdsac";
   cout<<solver(s);
}