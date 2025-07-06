#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
        cin>>n;
	    int a[n];
	   int c[n];
	    for(int i =0;i<n;i++)
	   {
	       cin>>a[i];
           if(a[i]==1)
           {
            c[i] =0;
           }
           else if(a[i] == 0)
           {
            c[i] = 1;
           }
	   }
       for(int i =0;i<n;i++)
       {
        cout<<c[i];
       }
       cout<<endl;
	   
	 
	}
	return 0;
}