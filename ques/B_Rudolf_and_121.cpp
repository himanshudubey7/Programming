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
        int n;
        cin>>n;
        long long ar[n];
        int ind = 0;

        long long num = INT_MIN;
        for(int i = 0;i<n;i++){

cin>>ar[i];
if(ar[i]>num){
    ind = i;
    num = ar[i];
}

        }
        for(int i = 1;i<n-1;i++){
            if(ar[i-1]<=ar[i+1] && ar[i]>= 2*ar[i-1]){
                ar[i+1]-= ar[i-1];
                ar[i]-= 2*ar[i-1];
                ar[i-1] = 0;
            }
        }
        int  cnt = 0;

        for(int i = 0;i<n;i++){
            if(ar[i] == 0){
                cnt++;
            }
        }
        if(cnt ==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // if(ind == 0 || ind == n-1){
        //     cout<<"NO"<<endl;
        //     // continue;
        // }
        // // else if(ar[ind]-ar[ind-1]>2|| ar[ind]-ar[ind+1]>2){
        // //     cout<<"NO"<<endl;
        // // }
        // else if(ar[ind] == ar[ind-1]|| ar[ind]== ar[ind+1]){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

        // // if(ind == n/2 && n%2 !=0){
        // //     cout<<"YES"<<endl;
        // // }
        // // else{
        // //     cout<<"NO"<<endl;
        // // }
     
}
    return 0;

}