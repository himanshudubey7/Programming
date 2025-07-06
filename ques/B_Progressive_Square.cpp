#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a , b;
	    cin>>a>>b;
	    if(a>b){
	        cout<<"yes"<<endl;
	    }
	    else{
	   int c= (a % 10) * 10 + (a / 10);
       if(c>b){
        cout<<"YES"<<endl;
        continue;
       }
	   int d= (b % 10) * 10 + (b / 10);

       cout<<c<<" "<<d<<endl; 

	    if(c>d){
	       cout<<"yes"<<endl;
	   }
	   else{
	       cout<<"no"<<endl;
	   }
	   
	 
	}
}
}