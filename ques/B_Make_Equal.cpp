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
        long long n;
        cin>>n;
        long long ar[n];
        long long sum  = 0;
        for(int i =0;i<n;i++){
            cin>>ar[i];
            sum+= ar[i];
        }
       
        long long add =0;
        long long req = 0;
        int flag = 0;
        // vector<int> add;
        // vector<int> req;
       
      

        long long div = sum/n;

       for(int i = 0;i<n;i++){
        if(ar[i]>=div){
            add += (ar[i]-div);
        }
        else{
            req += div - ar[i];
           if(req>add){
            flag = 1;
            break;
           }
        }
       }
if(flag == 1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
        }
    
    return 0;
}