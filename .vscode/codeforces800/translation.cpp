//DONE!!
#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    string str;
    for(int i=0;i<s.length();i++)
    {
        str = s[i]+str;
    }
    if(t==str)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}