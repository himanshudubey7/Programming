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
        char ch = 'a';
        string ans;
         map<char , int> mp;
 
        int cnt = 0;
        for(int i = 0;i<n;i++){
             int x;
            cin>>x;
            if(x==0){
                ans.push_back(ch);
                mp[ch] =0;
                ch++;
            }
            else{
                for(auto it:mp){
                    if(x == it.second+1){
                        ans.push_back(it.first);
                      mp[it.first] = x;
                        break;
                    }
                }
 
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}