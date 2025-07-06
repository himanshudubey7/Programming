//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    int cnt = 0;
    int sum = 0;
    for(int i =  1;i<=sqrt(n);i++){
        if(n%i ==0){
            cnt++;
            sum+= i;
            cout<<i<<" "<<n/i<<endl;
            if( i != n/i){
                cnt++;
                sum+=n/i;
            }
        }
    }
    cout<<"no. of factors is = "<<cnt<<endl;
    cout<<"the sum of factors = "<<sum<<endl;
    return 0;
}