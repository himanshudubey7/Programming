#include<bits/stdc++.h>

using namespace std;
int main(){
    unordered_map<int,string> m;//better time complexity o(1)
    m[1]= "abc";
    m[5]= "cdc";
    m[3]= "acd";
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}