#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        ll p = 1;
        for (int i = 0; i < n;i++){
            cin >> a[i];
            p *= a[i];
        }
        int f = 0;
        int ans = 0;
        ll temp = 1;
        for (int i = 0; i < n-1;i++){
            temp *= a[i];
            if((temp*temp) ==(p)){
                f = 1;
                ans = i+1;
              
                break;
            }
        }
        if(f==0)
            cout << -1 << endl;
        else
        cout<<ans<<endl;
        }
        
        return 0;
    }