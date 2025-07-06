#include<bits/stdc++.h>

using namespace std;
int main(){
  string s;
  cin>>s;
  int l = s.length();
  int count;
  unordered_set<char> str;

  for(int i=0;i<l;i++){
    if(s[i]!='{'&& s[i]!=',' &&s[i]!='}'&&s[i]!=' ')
    {
        str.insert(s[i]);
    }
  }
  cout<<str.size()<<endl;

  
    return 0;
}