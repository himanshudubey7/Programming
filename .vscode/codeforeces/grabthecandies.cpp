#include<bits/stdc++.h>

using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m =0;
        int b =0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                m+= x;

            }
            else
            {
                b +=x;
            }
        }
        if(m>b)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}