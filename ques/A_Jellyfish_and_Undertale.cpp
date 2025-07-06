//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b , n;
        cin>>a>>b>>n;
     long long   time = b;
        for(int i = 0;i<n;i++){
          long long x;
          cin>>x;
          time += min(a-1 , x);

        }
        cout<<time<<endl;
        
    }
    return 0;
}