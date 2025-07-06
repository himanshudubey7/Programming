//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
       string s = "abc";
       string str;
       cin>>str;
       int count =0;
    for(int i =0;i<s.length();i++){
        if(s[i] != str[i]){
            count ++;

        }
        if(count>2){
            break;
        }
    }
    if(count <3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
        
    }
    return 0;
}