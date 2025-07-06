#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t!=0)
    {
        int k,n;
        cin>>n>>k;
        int count1=0;
        int count2=0;
        int a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(k>=a && k<=b)
            {
                count1++;
            }
            else {
                count2++;
            }
            
        }
        if(count1>count2 )
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        t--;
    }
    return 0;
}