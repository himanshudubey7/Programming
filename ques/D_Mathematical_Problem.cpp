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
    int n;
    cin>>n;
    string str="";
    string s;
    cin>>s;
    if(n <=2){
        cout<<s<<endl;
        continue;
    }
  
  int f= 0;
  int ans = 0;
  cout<<s<<endl;

   for(int i= 1;i<n;i++){
    string st;
    char p = s[i-1];
    char q= s[i];

    int sum  = 0;
    for(int j= 0;j<n;i++){
        if(s[j] == s[i] || s[j] == s[i+1]){
            continue;
        }
        if(s[j] == '0'){
            f =1 ;
            break;            
        }
        if(s[j] =='1'){
            sum*=(int)s[j];
        }
       sum+= int(s[j]);

    }

    if(f){
        break;
    }
    ans = min(ans, (sum+k));

   }
   if(f){
    cout<<0<<endl;
    continue;
   }
cout<<ans<<endl;
}
    return 0;
}