#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	   float cmm,rem;
       int cnt;
	
	while(t--)
	{
	   int x;
	  cin>>x;
      //cout<<x<<endl;
       cmm = 0.2*x;
     // cout<<cmm<<endl;
      cnt = 100/cmm;
      if(cnt*cmm == 100){
        cout<<cnt<<endl;
      }
      else{
        cout<<cnt+1<<endl;
      }
	}
	return 0;
}
