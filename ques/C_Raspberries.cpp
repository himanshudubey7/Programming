//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int ar[n];
    int even = 0;
    for(int i= 0;i<n;i++){
        cin>>ar[i];
        if(ar[i]%2 == 0){
            even++;
        }
    }
    int f  = 0;

    for(int i= 0;i<n;i++){
     if(ar[i]%k == 0){
        f = 1 ;
        break;
     }

        }
    if(f == 1){
        cout<<0<<endl;
        continue;
    }
    else if(f == 0){
        if(k ==2){
            cout<<1<<endl;
            continue;
        }
       else if(k == 3){
            int ans = 0;
            int rem = 0;
            for(int i= 0;i<n;i++){
             ans = max(ans , ar[i]%3);
            }
            cout<<(3-ans)<<endl;
        }
       else  if(k == 5){
            int abs= 0;
            for(int i= 0;i<n;i++){
                abs = max(abs, ar[i]%5);
            }
            cout<<(5-abs)<<endl;
        }
       else  if(k == 4 && n >=2){
        int aks = 0;
        for(int i= 0;i<n;i++){
            aks = max(aks, ar[i]%4);
        }
        int t = 4-aks;
        int p = max(0, 2-even);
        cout<<min(t,p)<<endl;
        
        }
        else if(k == 4 && n==1){
            cout<<4-(ar[0]%4)<<endl;
        }
        
    }
}
    return 0;
}