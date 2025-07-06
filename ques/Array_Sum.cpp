//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int eve = 0;
        int odd = 0;
        int sum = 0;
        long long n,k;
        cin>>n>>k;
        long long ar[n];
        if(n<2 || n>=k|| k==2)
        {
            cout<<"-1"<<endl;
            continue;
        }

        else 
        {
            for(int i = 0;i<n;i++){

                if(i == n-1){
                    ar[i] = k;
                    if(k%2==0)
                    eve++;
                    else
                    odd++;
                }
                else{
                     ar[i] = (i+1);
                     if((i+1)%2 ==0)
                     eve++;
                    else
                 odd++;
                 k-=(i+1);
                
                                 
                }
            }
        }
        if(eve == odd){
            for(int i = 0;i<n;i++){
                cout<<ar[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    
    return 0;
}