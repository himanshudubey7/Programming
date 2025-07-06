#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        int i=0;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        if(s[i]=='m')
        {
            i++;
            while(i<n && s[i]=='e')
            {
                i++;
            }
        }

        t--;
    }
    return 0;
}