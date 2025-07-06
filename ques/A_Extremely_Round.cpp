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
vector<ll> calc;

for(ll i= 1;i<=100000;i++){
  string s = to_string(i);
  int cnt = 0;
  for(int j = 0;j<s.size();j++){
    if(s[j]!='0'){
        cnt++;
    } 
  }
  if(cnt == 1){
    calc.push_back(i);
  }
}
for(ll i= 100001;i<900001;i++){
     string s = to_string(i);
  int cnt = 0;
  for(int j = 0;j<s.size();j++){
    if(s[j]!='0'){
        cnt++;
    } 
  }
  if(cnt == 1){
    calc.push_back(i);
  }

}
// cout<<calc.size()<<endl;
// for(int i= 0;i<calc.size();i++){
//     cout<<calc[i]<<endl;
// }

// cout<<cnt<<endl;

while(t--){
    ll n;
    cin>>n;
    ll cc = 0;
   int i = 0;
  for(ll i = 0;i<calc.size();i++){
    if(calc[i]<=n){
        cc++;
    }
    else{
        break;
    }
  }
    cout<<cc<<endl;
    
}
    return 0;
}