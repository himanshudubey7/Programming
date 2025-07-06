#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
long long ar[N];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        long long max = 0;
        for(int i = 1;i<n;i++){
            if(ar[i-1] +ar[i+1]>max){
                max = ar[i-1]+ar[i+1];
                ar[i] = max;
                ar[i-1] = 0;
                ar[i+1] = 0;
            }
        }
      


    }
    return 0;
}