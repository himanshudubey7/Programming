#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<bool> check(n,false);
	    vector<int> ans;
            int d = n/2;
            if(n == 3){

            }
	        for(int j=1;j<n;j++){

            if((j+d)<=n){
            ans.push_back(j+d);
            check[(j+d)-1] =  true;
            }
            else{
                ans.push_back(j-d);
                  check[(j-d)-1] =  true;
            }
            }
	   
       for(int i= 1;i<=n;i++){
        cout<<i<<" ";
       }
       cout<<endl;
       for(auto it:ans)
       {
        cout<<it<<" ";
       }
       for(int i= 0;i<=n;i++){
        if(check[i]== false){
            cout<<i+1<<" ";
            break;
        }
       }
       cout<<endl;
	}

}