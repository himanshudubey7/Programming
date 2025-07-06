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
        vector<long long> even;
vector<long long> odd;
      
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x%2==0){
                even.push_back(x);
                
            }
            else{
                odd.push_back(x);
              
            }
        }
        long long ways = 0;
        if(even.size()>=2){
           long long q = even.size();

ways = ways + ((q*(q-1))/2)*odd.size();
            
        }
        if(odd.size()>=3){
            long long p = odd.size();
           ways+= (p * (p - 1) * (p - 2)) / 6;
        }
        cout<<ways<<endl;
    }    return 0;
}