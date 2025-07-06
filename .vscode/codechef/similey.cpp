
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
	    int count = 0 ;
	    int f1 = 0;
	    int f2 = 0;
	    for(int i = 0 ;i<n;i++){
	        if(s[i] == ':'){
	            f1 = 1;
	        }
	        if(s[i] == ')' && f1 == 1){
	            f2 =1;
	        }
	        if(s[i] == '(')
	        {
	            f1 = 0;
	            f2 = 0;
	           continue;
	            
	        }
	        if(s[i] == ':' && f1 == 1 && f2 == 1){
	            count++;
	            f1 = 0;
	            f2 = 0;
                i = i- 1;
	        }
	        
	        
	    }
	    cout<<count<<endl;
	   
	    
	}
	return 0;
}
 