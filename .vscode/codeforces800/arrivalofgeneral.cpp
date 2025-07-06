#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int max_val = 0;
    int min_val = 110;
    int maxi =0;
    int mini =0;
    int arr[n];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a>=max_val){
            maxi =i;
            max_val = a;

        }
        if(a<=min_val){
            mini = i;
            min_val = a;

        }
    }
    if(maxi > mini){
        cout<<(maxi-1)+(n-mini)-1<<endl;
    }
    else
    {
        cout<<(maxi-1)+(n-mini)<<endl;
    }
    return 0;
}