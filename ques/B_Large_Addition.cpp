//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
 
    string s;
    cin>>s;
   if(s[0]!='1'){
    cout<<"NO"<<endl;
    continue;
   }
   int f = 0;
   for(int i= 1;i<s.size()-1;i++){
    if(s[i] =='0' )
    {
        f = 1;
        break;
    }
   }
   if(f){
    cout<<"NO"<<endl;
    continue;

   }
   if(s[s.size()-1] == '9'){
    cout<<"NO"<<endl;
    continue;
   }
    
    cout<<"YES"<<endl;
}
    return 0;
}