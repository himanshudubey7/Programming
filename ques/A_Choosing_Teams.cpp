//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

    int n, k;
    cin>>n>>k;
    int cnt = 0;
    for(int i=  0;i<n;i++){
        int x;
        cin>>x;
        if((5-x)>=k ){
            cnt++;

        }
    }
    cout<<(cnt/3)<<endl;

    return 0;
}