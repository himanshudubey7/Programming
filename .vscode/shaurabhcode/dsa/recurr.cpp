#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int fun(int n)
{
    int s;
    if(n==1)
        return n;
        s = n+fun(n-1);
        return s;
}
int main(){
    int k ;
    k = fun(3);
    cout<<k<<endl;
    
    return 0;
}