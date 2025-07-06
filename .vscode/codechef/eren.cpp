#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    int evesum=0;
	    int oddsum =0;
	    for(int i=1;i<=n;i++)
	    {
	        if(i%2==0)
	        {
	            evesum+=a;
	        }
	        else
	        {
	            oddsum +=b;
	        }
	        
	    }
	   int total = evesum+oddsum;
	   cout<<total<<endl;
	    
	}
	return 0;
}
