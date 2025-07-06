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
    int n;
    cin>>n;
    int ar[n];
    int large= INT_MIN;
    int small = INT_MAX;
    int ind_large = 0;
    int ind_small = 0;
    for(int i= 0;i<n;i++){
        cin>>ar[i];
        if(large<ar[i]){
            large = ar[i];
            ind_large = i;
        }
        if(small >ar[i]){
            small = ar[i];
            ind_small = i;
        }
        
    }
    if(ind_large == 0|| ind_small !=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}
    return 0;
}