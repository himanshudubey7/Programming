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
        long long n, k , pb , ps;
        cin>>n>>k>>pb>>ps;
        long long sb= 0;
        long long ss = 0;
        long long p[n];
        long long ar[n];
        for(int i= 0;i<n;i++){
            cin>>p[i];
        }
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        if(pb == ps|| ar[pb-1] == ar[ps-1]){
            cout<<"Draw"<<endl;
            continue;
        }
        // long long temp  = k;
      while(true){
            sb += ar[pb-1];
        if(p[pb-1]>pb){
            pb = p[pb-1];
        }
        else{
            break;
        }
      }
       while(true){
            ss += ar[ps-1];
        if(p[ps-1]>ps){
            ps = p[ps-1];
        }
        else{
            break;
        }
      }

cout<<sb<<" "<<ss<<endl;
      if(sb>ss){
        cout<<"Bodya"<<endl;
      }
      else{
        cout<<"Sasha"<<endl;
      }
    }
    return 0;
}