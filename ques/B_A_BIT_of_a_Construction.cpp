//author Ghosty
#include <bits/stdc++.h>
using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() 
{
    int t;
    cin>>t;

    vector<long long> v;
    for(int i= 0;i<=31;i++){
        v.push_back((1<<i));
    }
    // for(int i= 0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    while(t--)
    {
        long long n,k;
        cin>>n>>k;

        if(n==1)
        {
            cout<<k<< endl;
            continue;
        }
        // int p = k;
        // int cnt= 0;
        // while(p!=1){
        //     p/=2;
        //     cnt++;
        // }

        // int mxbit=0,value=0;
        // for(int i=0;i<=k;i++)
        // {
        //     int j=countSetBits(i);
            
        //     if(j>=mxbit)
        //     {
        //         mxbit=j;
        //         value=i;
        //     }
        //     if(j == cnt){
        //         break;
        //     }
        // }
        long long vl;
        // cout<<k<<endl;
        for(int i= 0;i<v.size();i++){
            if(v[i]>k){
                vl = v[i-1];
                break;
            }
            // cout<<v[i]<<endl;
        }
        cout << vl-1 << " " << k-(vl-1) << " ";
        for(int i=3;i<=n;i++)
        cout << 0 << " ";
        cout << endl;

    }
}