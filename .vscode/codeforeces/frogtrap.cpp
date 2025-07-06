#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        long long n;
        cin>>n;
        vector<int> v(n,0);
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
           // cout<<"element = "<<x<<endl;
            for(int j = x;j<=n;j+=x)
            {
                v[j]++;
           // cout<<"the value of "<< j <<"has become = "<<ar[j]<<endl;
            }
            
        }


        long long max = 0;


        for(int i = 0;i<n+1;i++){
            //cout<<ar[i]<<" ";
            if(max <v[i])
            {
                max = v[i];
            }

        }
        cout<<max<<endl;
    }
    return 0;
}