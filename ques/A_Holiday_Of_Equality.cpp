#include<bits/stdc++.h>

using namespace std;

#define int long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> vt(4,0);
        for(int i=0;i<n;i+=2)
        {
            if(s[i]=='0' && s[i+1]=='0')
            {
                vt[0]++;
            }
            else if(s[i]=='0' && s[i+1]=='1')
            {
                vt[1]++;
            }
            else if(s[i]=='1' && s[i+1]=='1')
            {
                vt[2]++;
            }
            else
            {
                vt[3]++;
            }
        }
        int ans=0;
        if(vt[3])
        {
            ans=1;
            vt[3]--;
        }
        ans+=2*vt[0];
        if(vt[1])
        {
            ans+=2;
        }
        ans+=2*(vt[2]);
        if(vt[3])
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}