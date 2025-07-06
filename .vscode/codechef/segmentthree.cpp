#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	   int n;
	   cin>>n;
	   long long ar[n];
	   for(int i =0;i<n;i++)
	   {
	       cin>>ar[i];
	   }
	   
	   int ans = 0;
	   for(int i =0;i<n-2;i++){
          // cout<<"elements = "<<ar[i]<<" "<<ar[i+1]<<" "<<ar[i+2]<<endl;
	       long long sum =ar[i]+ar[i+1]+ar[i+2];
           int incre = 0;
	      incre = incre+sum%3;
	      // cout<<"incre = "<<incre<<endl;
           if(incre>0)
           {
           ar[i+2] = ar[i+2]+(3-incre);
           ans = ans + (3-incre);
           }
	   }
	    cout<<ans<<endl;
	}
	return 0;
}
