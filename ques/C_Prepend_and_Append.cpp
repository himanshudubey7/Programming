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
        int j = n-1;
        int ans = 0;
        int i = 0;
        while(i<=j){
            if(s[i]!=s[j]){
                i++;
                j--;

            }
            else{
                ans = j-i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}