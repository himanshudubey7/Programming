//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        } 


        long long max_sum = INT_MIN;
        long long sum = max( 0 , ar[0]);
      //cout<<"sum = "<<sum<<endl;
        long long temp =ar[0];

      for(int i = 1;i<n;i++){
        if(abs(ar[i]%2) != abs(ar[i-1]%2)){
            sum += ar[i];
            // cout<<"the element is = "<<ar[i]<<endl;
            // cout<<"the sum is = "<<sum<<endl;
        }
        else{
            sum = ar[i];
        }
        max_sum = max(max_sum , sum);
       // cout<<" the max sum is = "<<max_sum<<endl;
      }
    
          
        cout<<max_sum<<endl;
    }
    return 0;
}
// 315011260991	
// 18004190001