#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int ct = 0;
    int sum  =0;
    for(int i =1;i*i<=n;i++){
        if(n%i == 0){
            cout<<i<<" "<<n/i<<endl;
            ct++;
            sum += i;
            if(i !=n/i ){
                sum += n/i;
                ct = ct+1;
            }
        }
    }
    cout<<ct<<" "<<sum<<endl;
    return 0;
}