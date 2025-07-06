#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
        int med = 0;
    cin>>t;
    while(t!=0)
    {
        med = 0;
        int a  , b, c;
        cin>>a>>b>>c;
        if(a>b && a<c ||c<a && b>a)
        {
            med = a;
        }
        else if(b>a && b<c ||c<b && b<a)
        {
            med = b;
        }
        else if(c>a && c<b ||c<a && c>b)
        {
            med = c;
        }
    cout<<med<<endl;
        t--;
    }
    return 0;
}