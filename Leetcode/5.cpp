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
        if(s[left] != s[right]) return 0; // mismatch
        left++;
        right--;
    }
    return 1; // palindrome
}

string solver(string s){
    if(isPalindrom(s)){
        return s;
    }
    string left= solver(s.substr(0,s.size()-1));
    string right= solver(s.substr(1));
    return left.size() > right.size() ? left : right;
}
int main(){
   string s="babaddtattarrattatddetartrateedredividerb";
   cout<<solver(s);
}