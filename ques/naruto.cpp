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
        int flag = 0;
        int l = s.length();
    for(int i = 0;i<l;i++){
        for(int j = i+1;j<l;j++){
            if(s[i] == s[j]){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }


    }
    return 0;
}