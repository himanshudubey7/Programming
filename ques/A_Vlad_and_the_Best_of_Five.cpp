//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cntA =0;
        int cntB  = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == 'A' )
            cntA++;
            else
            cntB++;
        }
        if(cntA>cntB){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
                    }

    }
    return 0;
}