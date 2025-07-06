#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    if(n <= 2){
	    for(int i = 0;i<n;i++){
	        if(a[i] == 'R')
	        cout<<"P";
	        else if(a[i] == 'P')
	        cout<<"S";
	        else
	        cout<<"R";
	    }
	    cout<<endl;
	    }
	    else if(n==3 ){
	        for(int i = 0;i<n;i++){
	          if(a[i] == 'R')
              cout<<"P";
              if(a[i] == 'S' || a[i] == 'P' && i<n/2)
              {
                cout<<"P";
              }
              else if(i>=n/2){
                if(a[i] == 'S')
                cout<<"R";
                else
                cout<<"S";
              }
	           
	        }
	        cout<<endl;
	    }
	     else if(n>3 && n%2 !=0){
	        for(int i = 0;i<n;i++){
	            if(a[i] == 'R')
	            cout<<"P";
	            else if((a[i] == 'P'|| a[i] == 'S') && (i)<n/2)
	            cout<<"P";
	            else if(a[i] == 'P')
	            cout<<"S";
	            else 
	            cout<<"R";
	           
	        }
	        cout<<endl;
	    }
         else if(n>3 && n%2 ==0){
	        for(int i = 0;i<n;i++){
	            if(a[i] == 'R')
	            cout<<"P";
	            else if((a[i] == 'P'|| a[i] == 'S') && (i+1)<n/2)
	            cout<<"P";
	            else if(a[i] == 'P')
	            cout<<"S";
	            else 
	            cout<<"R";
	           
	        }
	        cout<<endl;
	    }
	   
	    
	}
	return 0;
}
