//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
     transform(s.begin(), s.end(), s.begin(), ::tolower);
     if(s == "yes"){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }

    }
    return 0;
}