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
        int n = s.length();
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1' )
            cnt1++;
            else
            cnt2++;
        }
        int m = 0;
        for(int i = 0;i<n;i++){
             if(s[i]=='1'){
                if(cnt2== 0)
                break;
                else{
                cnt2--;
                m++;
                }
            }
            else if(s[i] == '0'){
                if(cnt1 == 0)
                break;
                else{
                cnt1--;
                m++;
                }

            }
           
        }

        cout<<n-m<<endl;

    }
    return 0;
}