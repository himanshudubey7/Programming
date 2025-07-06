//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string str;
        string st = "meow";
int flag = 0;
char chr ;
        transform(s.begin() , s.end() , s.begin(),:: tolower);
        for(int i = 0;i<n;i++){
            char ch= s[i];
            if(chr != ch){
                flag =0;
            }
            if(flag == 0){
                chr = ch;
                str = str + ch;
                flag = 1;
            }
            
        }
if(str == st){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    }
    return 0;
}