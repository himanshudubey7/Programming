#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> p[n];
    int flag =0;
    for(int i =0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }

        return 0;
}