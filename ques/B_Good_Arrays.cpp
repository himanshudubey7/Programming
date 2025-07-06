//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
const int INF = 1e4+10;
long long hsh[N];
void reset(){
for(long long i = 0;i<N;i++){
    hsh[i]= 0;
}
}
int main(){
    int t;
    cin>>t;

    while(t--){
         reset();
        int n;
        cin>>n;
        int flag = 1;
        
        for(int i = 0;i<n;i++){
            long long x;
            cin>>x;
            long long div  = x%INF;
          // cout<<div<<endl;
            hsh[div]++;
             if(hsh[div] > n/2){
                flag =0;
            
        }

      
    }
    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}