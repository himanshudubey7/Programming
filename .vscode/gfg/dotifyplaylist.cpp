
#include<bits/stdc++.h>

using namespace std;
int main(){
    	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k,ll;
	    cin>>n>>k>>ll;
	
	int max =0;
	int arr[n];
	int element=0;
    set<int> s;
	for(int i =0;i<n;i++)
	{
	    
	    int m,l;
	    cin>>m>>l;
	    
	    if(ll == l ){
	       
            s.insert(m);
        
	    }
        else
        {
           
        
            s.insert(-1);
        }
	}
  
 set<int>::reverse_iterator rev_it;
  
   for (rev_it = s.rbegin(); rev_it != s.rend(); rev_it++)
      {

    if(*rev_it !=-1 && k>0)
    {
        max = max +(*rev_it) ;
        k--;
    }
      }
   // cout<<value<<endl;

    
if(max>0)
cout<<(max)<<endl;
else
cout<<"-1"<<endl;
	}
    return 0;
}