#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int g, p;
        cin>>g>>p;
        int less = min(g,p);
        int more = max(g,p);
        int n;
        cin>>n;
        int cnt1 =0;int cnt2 =0;

        for(int i=0;i<n;++i)
        {
            int x,y;
            cin>>x;
            if(x>0)
            ++cnt1;
            cin>>y;
            if(y>0)
            ++cnt2;
        }
        int temp1 = min(cnt1 , cnt2);
        int temp2 = max(cnt1 , cnt2);
        cout<<((temp1*more)+(temp2*less))<<endl;

    }
    return 0;
}