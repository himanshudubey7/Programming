#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        if(n<1500)
        {
            double a=(n*90/100);
            double b= (n/10);
        
            double GS=n+b+a;
            cout<<GS<<endl;
        }
        else
        {
            double c= (n*0.98);
            double GS=n + 500 + c;
            cout<<GS<<endl;
        }
    }
	return 0;
}