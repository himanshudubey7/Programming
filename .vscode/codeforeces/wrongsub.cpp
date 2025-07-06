#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int n ; 
    int k ;
    cin>>n;
    int t = n;
    int p ;
    cin>>k;
    while(k!=0)
    { 
        p=t;

        if(p%10!=0)
        {
            t--;
        }
        else if (p%10 == 0)
        {
            t=t/10;
        }

        k--;
    }
    cout<<t;
    return 0;
}