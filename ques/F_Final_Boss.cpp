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
    ll h, n;
    cin>>h>>n;
    ll att[n];
    ll cool[n];
    long long sum = 0;
    for(int i = 0;i<n;i++){
        cin>>att[i];
        sum+= att[i];
    }
    for(int i= 0;i<n;i++){
        cin>>cool[i];
    }
    if(sum>= h){
        cout<<1<<endl;
        continue;
    }
    h-=sum;
ll s = 0;
ll e = 1e12;
ll ans = 1;
while(s<=e){
    ll mid = (s+e)/2;
    ll temp = 0;
    for(int i= 0;i<n;i++){
        temp+= (mid/cool[i])* att[i];
    }
    if(temp>=h){
        ans = mid;
        e = mid-1;
    }
    else{
        s = mid+1;
    }
}
cout<<ans+1<<endl;


}
    return 0;
}