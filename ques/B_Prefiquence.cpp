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
        int n, k;
        cin>>n>>k;
        string s1;
        string s2;
        cin>>s1>>s2;
      
        
            int ans = 0;
            int i = 0;
            int j = 0;
            while(true){
                 if(i==n || j==k)
            break;

                if(s1[i] == s2[j]){
                    ans ++;
                    i++;
                    j++;
                    
                }
                else{
                    j++;

                }

            }
            cout<<ans<<endl;
        
            
            
        }
    return 0;
    }
