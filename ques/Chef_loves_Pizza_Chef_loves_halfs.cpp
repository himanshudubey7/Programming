#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	long long t ;
	cin>>t;
	while(t--){
	    long long x;
	    cin>>x;
	    int ind = 0;
ll n = __builtin_popcount(x);
// cout<<n<<endl;
ll a= pow(2,n+1);
ll b= pow(2,n-1);
ll diff = a-b;
cout<<(2*diff)<<endl;
	   
	    
	    
	}

}
