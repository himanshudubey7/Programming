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
        int n = s.size();
        int f = 0;
        long long op = 0;
    int ind = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1' && f == 0 ){
                f = 1;
                 ind = i;
            }
          else if(s[i] == '0' && f ==1){
                op += i-ind+1;
                ind++;
            }

        }
        cout<<op<<endl;
    }
    return 0;
}