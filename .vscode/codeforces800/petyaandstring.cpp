//DONE
#include<bits/stdc++.h>

using namespace std;
int main(){
    string s,st;
    cin>>s;
    cin>>st;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(st.begin(),st.end(),st.begin(),::tolower);
    int n = s.length();
    if(s<st)
    {
        cout<<"-1";
    }
    else if(s>st)
    {
        cout<<"1";
    }
    else if(s==st)
    {
        cout<<"0";
    }
    return 0;
}