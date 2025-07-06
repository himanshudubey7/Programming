//DONE!!!
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    
  while(t--)
  {
    for(int i=0;i<n;++i)
    {
    char ch;
    if((i+1)<n)
    {
    if( s[i]=='B' && s[i+1]=='G')
    {
      ch = s[i];
      s[i]= s[i+1];
      s[i+1]= ch;
      ++i;
    }
    }
    }
  }
    cout<<s<<endl;
    
    return 0;
}