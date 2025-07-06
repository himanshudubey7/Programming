#include<bits/stdc++.h>

using namespace std;
int main(){
   long long n;
    cin>>n;
   long long a[n];
   string s;
   long long temp;

    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        temp = a[i]%10;
        s = s+to_string(temp);
    }
    temp = stoi(s);
    if(temp%10==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;
    
    return 0;
}