#include<bits/stdc++.h>

using namespace std;
int main(){
    long long n;
    long long first;
    long long second;
    cin>>n;
    if(n>0)
    {
        cout<<n<<endl;
    }
    else
    {
        
        first = n/10;
        second= (n%10)+(n/100)*10;

       cout<<max(first,second);
        
    }
    return 0;
}