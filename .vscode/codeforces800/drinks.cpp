#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    double  sum = 0;
    for(int i=0;i<n;++i)
    {
        int p;
        cin>>p;
        sum +=p;
    }
    cout<<setprecision(12)<<(double)sum/n<<endl;

    return 0;
}