#include<bits/stdc++.h>
using namespace std; //prefix are start from zero index
void solver(vector<string> arr){
    string check= arr[0];
    
    for(int i=1;i<arr.size();i++){
      string temp=arr[i]; 
      int j=0;
      while( j < temp.size() && j < check.size() && check[j]==temp[j]){
        j++;
      }
     check=check.substr(0,j);
    }
    cout<<check;
}
int main(){
   vector<string> arr={"flower","flow","flight"};
   solver(arr);
}