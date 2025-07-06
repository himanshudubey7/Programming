#include <bits/stdc++.h>
using namespace std;

	 
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	   vector<int> ar(3,0);
	   int n;
	   cin>>n;
	   int i = 0;
	   ar[0] = 1;
	   ar[1] = 1;
	   ar[2] = n- 2;
	   
	    for(int i = 0;i<3;i++){
	        cout<<ar[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
