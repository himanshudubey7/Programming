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
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == 'A'){
                cnt1++;
                }else if(s[i]=='B'){
                cnt2++;
            }
        
        }
        if(cnt1>cnt2){
            cout<<"A"<<endl;
        }
        else if(cnt1<cnt2){
            cout<<"B"<<endl;
        }
        else{
            cout<<"?"<<endl;
        }

    }
    return 0;
}