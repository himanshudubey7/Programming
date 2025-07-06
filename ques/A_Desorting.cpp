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
        int ar[n];
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        int flag = 0;
        int min_diff = INT_MAX;
        for(int i = 1;i<n;i++){
            if(ar[i]>=ar[i-1])
            min_diff = min(min_diff , (ar[i]-ar[i-1]));
            else{
            //   min_diff = 0;
            //     break;
            flag = 1;
            break;
            }
        }
        // cout<<min_diff<<endl;
        if(flag){
            cout<<0<<endl;
            continue;
        }
        if(min_diff%2 !=0)
        cout<<(min_diff/2)+(min_diff%2)<<endl;
        else 
        cout<<(min_diff/2)+(min_diff%2)+1<<endl;
    }
    return 0;
}