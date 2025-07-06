#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int cnt1=0;
        int cnt2=0;
        int maxm1=0;
        int maxm2=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            if(a[i]!=0){
                cnt1++;
            }
            else{
                maxm1=max(maxm1,cnt1);
                cnt1=0;
            }
        }
        if(cnt1>maxm1){
            maxm1 = cnt1;
        }
        
        
         int o[n];
        for(int i=0;i<n;i++){
            cin>>o[i];
        }
        for(int i=0;i<n;i++){
            if(o[i]!=0){
                cnt2++;
            }
            else{
                maxm2=max(maxm2,cnt2);
                cnt2=0;
            }
        }
            if(cnt2>maxm2){
            maxm2 = cnt2;
        }
        if (maxm1>maxm2){
            cout<<"Om"<<endl;
        }
        else if (maxm1<maxm2){
            cout<<"Addy"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }

	return 0;
}