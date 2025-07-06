#include<bits/stdc++.h>

using namespace std;
int main(){
    long y;
    cin>>y;
    while(y++)
    {
    string s = to_string(y);
    int n = s.length();
    set<int> ny(s.begin() , s.end());
    if(ny.size() == n)
    break;
    }
  cout<<y<<endl;
    return 0;
}