//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
string ar[N];
unordered_map<string , int> m;
int main(){
    int n;
    cin>>n;
    string b[n];
    for(int i = 0;i<n;i++){
      string s;
      cin>>s;
      ++m[s];
        if(m[s] == 1){
            b[i] = "OK";
            
        }
        else if(m[s]>1){
            b[i] = s+to_string(m[s]-1);
            ++m[b[i]];
        }
    }

    for(int i = 0;i<n;i++){
        cout<<b[i]<<endl;
    }
    return 0;
}