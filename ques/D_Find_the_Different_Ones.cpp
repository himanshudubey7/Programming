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
        vector<int> ar;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            ar.push_back(x);
        }
        int q;
        cin>>q;
        while(q--){

        int l , r;
        cin>>l>>r;
        int start = 0;
        int end = -1;
        int flag = -1;
        for(int i = l;i<=r;i++){
            if(ar[i] != ar[i-1]){
                flag=1;
                start = i-1;
                end = i;
                break;
            }
        }
        cout<<start<<" "<<end<<endl;
        }
        cout<<endl;
    
    }
    return 0;
}