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
   
    ll n;
    cin>>n;
  ll a[n];
  ll b[n+1];
    for(int i= 0;i<n;i++){
        cin>>a[i];
    }

    // cout<<"H"<<endl;
    for(int j = 0;j<(n+1);j++){
        cin>>b[j];
    }
    vector<ll> diff;
    ll d = b[n];
    ll sum = 0;
 ll   m = INT_MAX;
 ll ele;
    for(int i = 0;i<n;i++){
        diff.push_back((a[i]-b[i]));
       ll p = abs(d - a[i]);
       if(p<m){
        m= p;
        ele = a[i];
       }
    }
       for(int i=  0;i<n;i++){
        cout<<diff[i]<<" ";
    }
    cout<<endl;
    int flag= 0;
    for(int i = 0;i<n;i++){
        if(diff[i]<0){
            a[i] += abs(diff[i]);
        }
        else if(diff[i]>0){
            a[i] = a[i]-diff[i];
        }

        if(a[i] == d){
            flag = 1;
        }
      else if(flag==0){
        m = min(m , abs(a[i]-d));


      }
    }
    for(int i=  0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // cout<<ele<<endl;
    cout<<m<<endl;
    
}
    return 0;
}