#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
int ar[N];
int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k;
        cin>>n>>k;
        for(int i = 0;i<n;i++){
            cin>>ar[i];

        }
        long long cnt = 0;
        sort(ar, ar+n);
        long long max = 0;
        for(int i  = 0;i<n-1;i++){
            if(abs(ar[i+1] - ar[i])<=k){
                cnt++;
                if(max<cnt)
                {max = cnt;
                }

            }
            else{
            cnt = 0;
            }

            //cout<<"the value of cnt is = "<<cnt<<endl;

        }
        cout<<n-(max+1)<<endl;
    }
    return 0;
}