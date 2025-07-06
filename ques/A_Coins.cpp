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
        long long n, k;
        cin>>n>>k;
        // long long temp = n%k;
        // if(k == 1 || k ==n|| n%2  ==0){
        //     cout<<"YES"<<endl;
        // }
        // else if(temp %2 == 0){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        long long i  = 1;
        while((i*k)<n){
            i*= k;
            i++;
        }
        if((i*k) == n){
            cout<<"YES"<<endl;
        }
        else if((n-((i*k)- k))%2 == 0)
        cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}