#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int diff = 0;
	    int fterm =0;
	    int sterm =0;
        int tterm=0;
	    int a[n];
	    
	    for(int i =0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int diff1 =0;
	    int diff2 =0;
	    int flag =0;
        for(int i =0;i<n;i++)
        {
            fterm =a[i];
            for(int j =i+1;j<n-1;j++)
            {
                sterm = a[j];
                tterm = a[j+1];
                diff1 = sterm - fterm ;
                diff2 = tterm - sterm;
                if(diff1 == diff2)
                {

                    flag =1;
                    break;
                }

            }
            if(flag == 1)
            break;
        }	    
        if(flag == 1)
        {
            cout<<"No"<<endl;
        }
        else
        cout<<"Yes"<<endl;
	    
	}
	return 0;
}
