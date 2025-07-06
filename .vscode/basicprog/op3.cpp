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
           if(ar[i]<min){}
	   }
       int valid = 0;
       int flag = 0;
	   for(int i = 0;i<n;i++){
       int count = 0;
        for(int j = 0;j<m;j++){
                ar[j]--;
            if(ar[j]<=0){
                flag = 1;
                break;
            }
            else{
                count++;
            }

            if(count == m){
            valid++;
            break;
            }

        
        }
        if(flag == 1)
        break;
        
        
       }
       cout<<valid<<endl;
	    
	}
	return 0;
}
