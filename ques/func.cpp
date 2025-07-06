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
        long long n,k;
        cin>>n>>k;
        vector<long long> v;
        long long ar[n];
        for(int i= 0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar, ar+n);
        long long maxx= ar[n-1];
        for(int i= 0;i<n;i++){
            if((maxx-ar[i])>=k){
                long long diff= ceil((maxx-ar[i])/(double)k);
                long long f1 = ((maxx-ar[i])/k);
                // cout<<diff<<endl;
                long long p1 =(k*diff)+ar[i];
            long long p2 = (k*f1)+ar[i];
            if(abs(p1-maxx)<abs(p2-maxx)){
                v.push_back((k*diff)+ar[i]);
                // if(p1>maxx)
                // maxx= p1;
            }
                else{
                v.push_back(p2);
                // if(p2>maxx)
                // maxx= p2;
                }


                

            }
            else{
                long long m = ar[i]+k;
                if(abs(maxx-m)<abs(maxx-ar[i])){
                    v.push_back(m);
                    if(m>maxx)
                    maxx = m;
                }
                else{
                    v.push_back(ar[i]);
                    if(ar[i]>maxx)
                    maxx = ar[i];
                }
            }
            
        }
        // for(auto it: v){cout<<it<<endl;}
        v.push_back(ar[n-1]);
        sort(v.begin(), v.end());
        cout<<v[v.size()-1]-v[0]<<endl;
       
    }
    return 0;
}