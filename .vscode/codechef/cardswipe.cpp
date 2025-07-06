#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int main() {
	int t;
	cin>>t;

	while(t--)
	{
int hsh[N,0];
        
	    int n;
	    cin>>n;
	    int ar[n];
	    
	    int max  = 0;
	    int curr = 0;
	    for(int i = 0;i<n;i++){
	       cin>>ar[i];

	     hsh[ar[i]]++;

	     if(hsh[ar[i]]%2!=0)
	     {
	         curr++;
	     }
	     else
	     {
	         curr--;
	     }
        // cout<<curr<<endl;
	     if(max < curr){
	         max = curr;
	     }
	    }
	   cout<<max<<endl;
	   
	    
	}
	
	return 0;
}
