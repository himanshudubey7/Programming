#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	   int n;
	   cin>>n;
	  int ar[n];
	  int br[n];
	  for(int i = 0;i<n;i++){
	      cin>>ar[i];
	  }
	  for(int i = 0;i<n;i++){
	      cin>>br[i];
	  }
	  multimap<int , int, greater<>> mt;
	  for(int i = 0;i<n;i++){
	      mt.insert({br[i], ar[i]});

	  }
      int total = 0;
      map<int , int> mp;
	  for(auto it : mt){

//cout<<it.first<<" "<<it.second<<endl;
	  mp.insert({it.second, it.first});

	  }  
//cout<<"second"<<endl;
      for(auto s: mp){
     // cout<<s.first<<" "<<s.second<<endl;
     if(s.second>=0){
        total+=s.second;
     }
      }
      cout<<total<<endl;
	}
	return 0;
}