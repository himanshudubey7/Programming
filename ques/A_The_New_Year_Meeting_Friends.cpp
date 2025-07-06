//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int ar[3];
    for(int i = 0;i<3;i++){
        cin>>ar[i];
    }
    sort(ar, ar+3);
    int d1= ar[1]- ar[0];
    int d2 = ar[2] - ar[1];
    cout<<(d1+d2)<<endl;
    return 0;
}