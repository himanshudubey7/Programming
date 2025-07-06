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
        char ch1 = s[0];
        char p = s[1];
       // cout<<p<<endl;
        for(char i = '1';i<='8';i++){
            if(i == p){
                continue;
            }
            else{
                cout<<ch1<<i<<endl;
            }
        }
        for(char chr = 'a' ; chr<='h';chr++){
            if(chr == ch1){
                continue;
            }
            else{
                cout<<chr<<p<<endl;
            }
        }
    }
    return 0;
}