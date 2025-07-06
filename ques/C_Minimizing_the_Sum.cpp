#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m;
	    cin>>n>>m;
	    long long int a[n];
	    long long int b[m];
	    for(long long int i=0;i<n;i++)
	    cin>>a[i];
	    for(long long int i=0;i<m;i++)
	    cin>>b[i];
	    
	    if(n<4 || m<4)
	    {
	        cout << -1 << endl;
	        continue;
	    }
	    if((m+n)<11)
	    {
	        cout << -1 << endl;
	        continue;
	    }
	    
	    sort(a, a+n, greater<long long int>()); 
	    sort(b, b+m, greater<long long int>()); 
	    
	    long long int sum=0;
	   // for(int i=0;i<n;i++)
	   // cout << a[i] << " ";
	    
	    for(long long int i=0;i<4;i++)
	    sum+=a[i];
	    for(long long int i=0;i<4;i++)
	    sum+=b[i];
	    
	    
	   // cout << "sum1       " << sum << endl;
	    long long int i=4,j=4;
	    long long int k=3;
	    
	    long long int f1=0,f2=0;
	    while(k--)
	    {
	       // cout << "sum2       " << endl;
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
	        if(a[i]>=b[j])
	        {
	            sum+=a[i];
	            i++;
	        }
	        else if(a[i]<b[j])
	        {
	            sum+=b[j];
	            j++;
	        }
	    }
	    
	    k++;
	    while(k--)
	    {
	       // cout << "sum3       " << sum << endl;
	        if(f1==1)
	        {
	            sum+=b[j];
	            j++;
	        }
	        else if(f2==1)
	        {
	            sum+=a[i];
	            i++;
	        }
	        
	    }
	    
	    cout << sum << endl;
	    
	}

}