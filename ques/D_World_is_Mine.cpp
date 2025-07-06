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
    ll n ;
    cin>>n;
    vector<ll> v;
    for(int i= 0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
  int i= 0;
  int j= n-1;
  int alice = 0;

  int f = 0;
  while(i<=j){
    if(v[i]<v[i+1] && f == 0){
        alice++;
        f =1 ;
        i++;
    }
    else if(f==0 && v[i] == v[i+1]){
        i++;
    }
    if(f == 1){
        j--;
        f =0;
    }
   
  }


//   for(int k= 0;k<=(n+1)/2;k++){
//     if(k>=j){
//         break;
//     }
//     if(v[k]<v[k+1] && f ==0){
//         ++alice;
//          f= 1;
//     }
//    else if(v[k] == v[k+1] && f==0){
//         for(int l = k;l<=j;l++){
//             if(v[l] != v[l+1]){
//                 k = l;
//                 ++alice;
//                 f ==1;
//             }
//         }
//         if(f == 0){
//             break;
//         }
//     }
//     if(f == 1){
//         f = 0;
//         j--;
//     }
    

//   }
  cout<<alice<<endl;
}
    return 0;
}
