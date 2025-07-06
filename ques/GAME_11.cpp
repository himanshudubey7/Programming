#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
       
 long long int ar[n];
	    long long int br[m];
         if (n < 4 || m < 4)
        {
            cout << -1 << endl;
            continue;
        }
           if((m+n)<11)
	    {
	        cout << -1 << endl;
	        continue;
	    }
	 
       
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
          
        }
        for (int i = 0; i < m; i++)
        {

            cin>>br[i];
            // br.push_back(y);
        }
        sort(ar, ar+n, greater<long long int>());
        sort(br,br+m,  greater<long long int>());
        long long int sum = 0;

        for (int i = 0; i < 4; i++)
        {
            sum += (ar[i] + br[i]);
        }
  long long int i=4,j=4;
	    long long int k=3;
	    
	    long long int f1=0,f2=0;
	    while(k--)
	    {
	        if(i>=n)
	        {
	            f1=1;
	            break;
	        }
	        if(j>=m)
	        {
	            f2=1;
	            break;
	        }
	        if(ar[i]>=br[j])
	        {
	            sum+=ar[i];
	            i++;
	        }
	        else if(ar[i]<br[j])
	        {
	            sum+=br[j];
	            j++;
	        }
	    }
	    
	    k++;
	    while(k--)
	    {
	    
	        if(f1==1)
	        {
	            sum+=br[j];
	            j++;
	        }
	        else if(f2==1)
	        {
	            sum+=ar[i];
	            i++;
	        }
	        
	    }
	    
	  
        cout << sum << endl;
    }
}
