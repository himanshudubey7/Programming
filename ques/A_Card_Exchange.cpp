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
        vector<int> v(120 ,0);
        int n , k;
        cin>>n>>k;
        int flag =0;
        for(int i= 0;i<n;i++){
            int x;
            cin>>x;
            v[x]++;
            if(v[x] >= k){
               flag  = 1;

            }
           
        }
         if(flag){
                cout<<k-1<<endl;
            }
            else{
                cout<<n<<endl;
            }
    }
    return 0;
}