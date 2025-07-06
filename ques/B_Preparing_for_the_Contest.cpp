//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int i = 1;
        if(k == 0){
            while(n--){
                cout<<n+1<<" ";
            }
            cout<<endl;
            continue;
        }
        // k = k+1;

        while(k-- && i<n){
            cout<<i<<" ";
            i++;
        }
        while(n>=i){
            cout<<n<<" ";
            n--;
        }
        cout<<endl;
        

    }
    return 0;
}