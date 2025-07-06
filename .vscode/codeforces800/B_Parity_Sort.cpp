//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
long long ar[N];
long long b[N];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt= 0;
        for(int i = 0;i<n;i++){
            cin>>ar[i];
            b[i] = ar[i];

        }
        sort(b,b+n);
int flag =0;
        for(int i = 0;i<n;i++){

if((ar[i]%2) != (b[i]%2)){
 cout<<"NO"<<endl;
 flag = 1;
 break;

}

}
if(flag == 1)
continue;
cout<<"YES"<<endl;

    }
    return 0;
}