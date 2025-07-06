//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    map<string, int> m;
    while(n--){
        string s;
        cin>>s;
        m[s]++;
    }
    int max =  0;
    string p ;
  for(auto t:m){
    if(max<t.second){
     max = t.second;
     p = t.first;
    }
  }
//   for(auto  x : m){
//     cout<<x.first<<" "<<x.second<<endl;
//   }
  cout<<p<<endl;
   

    return 0;
}