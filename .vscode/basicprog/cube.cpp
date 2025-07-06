#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;//123
    int sum =0;
    int x;
    for(int i=n;i!=0;i=i/10){//i=1
        x = i%10;//x=1
        

        sum = sum +x;//sum=6

   // cout<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}