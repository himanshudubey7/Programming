#include <bits/stdc++.h>
using namespace std;



int main() {
	long long t;
	cin>>t;
	
	while(t--)
	{
	   int n ;
	   cin>>n;
	 long long  ar[n];
	 long long sum = 0;
	   for(int i =0 ;i<n;i++){
	       cin>>ar[i];
	       sum = sum + ar[i];
	   }
	   sort(ar, ar+n);
        
        long long ans[n];
        ans[0] = sum;
	for(int i = 1;i<n;i++){
ans[i] = sum - ar[i-1];
sum = sum -ar[i-1];
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    }
	return 0;
}
