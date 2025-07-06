#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    string  n ;
    cin>>n;
    int count =0;
    int l = n.length();
    for (int i = 0; i < l; i++)
    {
        if(n[i]=='4'||n[i]=='7')
        {
            count++;
        }

    }
    if(count==4||count == 7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}