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
	   // first operation
       char temp;
	  
	      for(int i=  0;i<n-1;i+=2){
	          temp = s[i];
	          s[i] = s[i+1];
	          s[i+1] = temp;
	      }
//second operation
int p;
for(int i= 0;i<n;i++){
    if(s[i]<= 'm'){
      p = s[i] - 'a';
      s[i] = 'z'-p;  
    }
    else{
        p = 'z'- s[i];
        s[i] = 'a'+p;
    }
}
cout<<s<<endl;
      
	   
	    
	}
	return 0;
}
