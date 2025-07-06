#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	   int n,m;
	   cin>>n>>m;
	   int ar[m];
       int min = INT_MAX;
	   for(int i = 0;i<m;i++){
	       cin>>ar[i];
           if(ar[i]<min){
            min = ar[i];
           }
	   }


      
       int flag = 0;
       int count = 0;
	   for(int i = 0;i<n;i++){
       
                min--;
            if(min<=0){
                flag = 1;
                break;
            }
            else{
                count++;
            }
        }
       
        
        
       
       cout<<count<<endl;
	    
	}
	return 0;
}
