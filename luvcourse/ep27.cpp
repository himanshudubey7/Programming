#include<bits/stdc++.h>

using namespace std;
void print(set<string> &s)
{
    for(string value: s)
    {
        cout<<value<<endl;
    }
}
int main(){
    set<string> s;
    s.insert("abc");
    s.insert("dgf");
    s.insert("ayi");
    cout<<"no. of strings you want"<<endl;
    int n;
    cin>>n;
    cout<<"input your strings"<<endl;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    print(s);

    return 0;
}