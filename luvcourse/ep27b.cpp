#include<bits/stdc++.h>

using namespace std;
int main(){
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
 unordered_set<string> s;

    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string st;
        cin>>st;
      auto it=  s.find(st);
      if(it== s.end())
      {
        cout<<"value not found"<<endl;
      }
      else
      cout<<"found"<<endl;

    }


    return 0;
}