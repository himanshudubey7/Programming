#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	   cin>>n;
	   string s;
	   cin>>s;
	   int cnt = 0;
	  for(int i = 0;i<n;i++){
	      if(s[i] == '1'){
	          cnt++;
	      }
	  }
	  if(cnt ==n ){
	      for(int i =0;i<n-1;i++){
	          cout<<"IDK"<<endl;
	          
	      }
	      cout<<"YES"<<endl;
	  }
	  else{
	      for(int i = 0;i<n;i++)
	      if(s[i] == '0'){
            cout<<"NO"<<endl;
          }
          else{
            cout<<"IDK"<<endl;
          }
	  }
	   
	    
	}
	return 0;
}
