#include<bits/stdc++.h>
using namespace std; //prefix are start from zero index
void solver(vector<string> arr){
    string check= arr[0];
    int final_len=0;
    for(int i=1;i<arr.size();i++){
      string temp=arr[i]; 
      int len=0;
      int j=0,k=0;
      while( j < temp.size() && k < check.size()){
        if(check[k]==temp[j]){
         len++;
         j++;
         k++;
        }else {
          final_len=min(final_len,len);
        }
      }
    }
    cout<<final_len;
}
int main(){
   vector<string> arr={"flower","flow","flight"};
   solver(arr);
}