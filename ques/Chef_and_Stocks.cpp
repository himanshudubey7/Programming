#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	int minn = INT_MAX;
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        ar[i] = x;
	        if(x<minn){
	            minn = x;
	        }
	    }
        //cout<<minn<<endl;
	    int sum = 0;
	    int flag = 0;
	    for(int i =0; i<n;i++){
	        if(ar[i]!= minn)
	        sum+=ar[i];
	        else if(ar[i] == minn && flag == 1)
	        {
	            sum+=ar[i];
	        }
            else{
                flag = 1;
            }
	    }
	    cout<<sum<<endl;
	   
	    
	}
	return 0;
}
