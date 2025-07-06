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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        int open = 0;
        int close = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '('){
                open++;
            }
            if(s[i] == ')' && open != 0){
                open--;
            }
           else  if(s[i] ==')' && open == 0){
                cnt++;
                
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}