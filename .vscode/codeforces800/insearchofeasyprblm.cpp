//DONE!!!
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            ++cnt;
        cout<<"Hard"<<endl;
        break;
        }
    }
    if(cnt==0)
    {
        cout<<"Easy"<<endl;
    }
    
      
    return 0;
}