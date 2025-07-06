#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n, q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        while(q--)
        {
            long long sum =0;
            long long l,r,k;
            cin>>l>>r>>k;
            for(int i=l-1;i<=r;i++)
            {
                a[i]=k;
            }
            for(int i=0;i<n;i++)
            {
                sum = sum + a[i];
            }
            if(sum %2!= 0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

        
    }
    return 0;
}