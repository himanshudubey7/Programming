#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
   int n; 
   cin>>n;
   string s;
   cin>>s;
   int count = 0 ;
   for (int i = 0; i < n; i++)
   {
    if(s[i]==s[i+1])
    {
        count++;
    }
   }
   cout<<count<<endl;
   

    return 0;
}