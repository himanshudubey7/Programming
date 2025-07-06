#include<iostream>

#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t!=0)
    {
    ll sum = 0;
        ll n,k;
        ll v;
        cin>>n>>k>>v;
        
        for(int i=0;i<n;i++)
        {
            ll temp ;
            cin>>temp;
             sum = sum+temp;
        }
        ll avg = ((n+k)*v)-sum;
        
        if(avg>0 && avg%k==0)
        {
            cout<<avg/k<<endl;
        }
        else{
            
            cout<<"-1"<<endl;
        }
        
        
        

        t--;
    }
    return 0;
}