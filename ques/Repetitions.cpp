//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    string s ;
    cin>>s;
    int n = s.length();
    int maxm = INT_MIN;
    int cnt = 0;

for(int  i = 0;i<n-1;i++){
    if(s[i] == s[i+1]){
        cnt++;
    }
    
    else{
       // cout<<"the value of cnt = "<<cnt<<endl;
        if(cnt+1 >maxm){
            maxm = cnt+1;
        }
            cnt = 0;
    }
}
  if(cnt+1 >maxm){
            maxm = cnt+1;
        }
 cout<<maxm<<endl;
    return 0;
}