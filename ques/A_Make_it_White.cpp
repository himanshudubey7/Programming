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
        int start = 0;
        int end = 0;
        int flag = 0;
        for(int i = 0;i<n;i++){
            if(s[i]== 'B' && flag==0){
                start = i+1;
                flag = 1;
            }
            else if(s[i]== 'B'){
                end = i+1;
            }
        }
        if(end !=0)
        cout<<abs(start-end)+1<<endl;
        else
        cout<<1<<endl;

        
    }
    return 0;
}