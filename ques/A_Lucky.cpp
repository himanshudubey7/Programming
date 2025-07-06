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
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0 ;i<6;i++){
        if(i<3){
            sum1 += int(s[i]);
        }
        else{
            sum2 += int(s[i]);
        }
    }
    if(sum1 == sum2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}