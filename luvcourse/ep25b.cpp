/*
suppose you are given n strings as input 
print the strings in lexigraphical order and 
determine the freq of unique string 


the above problem can be easily handled using maps

*/


#include<bits/stdc++.h>

using namespace std;
int main(){
    map<string, int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}