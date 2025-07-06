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
  ll n= s.size();
  string str;
reverse(s.begin(), s.end());
int small = 0;
int big = 0;
for(int i = 0;i<n;i++){
  if(s[i] == 'b'){
    small++;
  }
  else if(s[i] == 'B'){
    big++;
  }
if(s[i]>='a' && s[i]<='z' && s[i]!='b' && small==0){
  str+=s[i];

}
if(s[i]>='a' && s[i]<='z' && s[i]!='b' && small!=0){
  small--;
  continue;
}
if(s[i]>='A' && s[i]<='Z' && s[i]!='B' && big==0){
  str+=s[i];
}
if(s[i]>='A' && s[i]<='Z' && s[i]!='B' && big!=0){
  big--;
  continue;
}
}
//  cout<<str<<endl;
reverse(str.begin(), str.end());
cout<<str<<endl;

  }
  return 0;
}