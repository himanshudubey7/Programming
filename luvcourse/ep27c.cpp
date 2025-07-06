#include<bits/stdc++.h>

using namespace std;
void print (multiset<string> &s)
{
    for(string value: s)
    {
        cout<<value<<endl;
    }
}
int main(){
    multiset<string>s ;
    s.insert("abc");
    s.insert("ghk");
    s.insert("dil");
    s.insert("avc");
    s.insert("abc");
    auto it = s.find("abc");
    if(it== s.end())
    {
        cout<<"NOt found"<<endl;
    }
    else
    {
        cout<<"found"<<endl;
        //s.erase(it);
        s.erase("abc");
     
    }
    print(s);


    return 0;
}