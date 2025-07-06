//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long ar[n];
        long long eve = 0;
        long long odd = 0;
        for(int i = 0;i<n;i++){
            cin>>ar[i];
            if(i%2 == 0){
                odd +=ar[i];
            }
            else{
                eve +=ar[i];
            }
        }
        cout<<eve<<" "<<odd<<endl;
        int flag = 0;
       for(int i = 0;i<n;i++){
        if(eve == odd){
        flag =1;
        break;
        }
        if(i%2 ==0){
            odd= odd-ar[i];
        }
        else if(i%2!=0){
            eve = eve-ar[i];
        }
       }
       if(flag == 1){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    
    }
    
    return 0;
}