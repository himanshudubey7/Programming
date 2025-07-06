//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    long long n;
    cin>>n;
    long long ar[n];
    //long long diff[n];
    
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    // long long sum = 0;
long long ans = 0;
   for(int i = 1;i<n;i++){
    if(ar[i]< ar[i-1]){
        ans = ans+ (ar[i-1]-ar[i]);
        ar[i] = ar[i] + (ar[i-1]- ar[i]);
    }

   
   }
   cout<<ans<<endl;
   
    

    return 0;
}