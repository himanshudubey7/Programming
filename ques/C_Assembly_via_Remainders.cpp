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
        long long x[n-1];
        for(int i= 0;i<n-1;i++){
            cin>>x[i];

        }
        long long ans[n];
        ans [0] = x[0]+1;
        long long j = 0;
        for(int i = 1;i<n;i++){
            
            long long p = ((x[j]+ans[i-1]));
            if(j!= (n-2)){
          
                while(p<= x[j+1]){
                    p+= ans[i-1];
                }
            
            }
            ans[i] = p;
            j++;
        }
      
        
       for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}