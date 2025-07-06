#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long sum=0;
        long long  n;
        cin>>n;
        long long  a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if (sum>0){
            long long sr= sqrt(sum);
            if (sr*sr==sum){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }


    }
}