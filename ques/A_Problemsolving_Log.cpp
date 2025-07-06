//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;


int main(){
  
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
map<char , int> mp;
    for(int i = 0;i<n;i++){
        char c = s[i];
        mp[c]++;
    }
    int temp = 1;
    int cnt = 0;
   for(auto it: mp){
   if(it.second>= int(it.first-'A')+1){
   // cout<<"the map is "<<it.first<<endl;
  //  cout<<"the value is = "<<int(it.first-'A')+1<<endl;
    cnt++;

   }
   }

   cout<<cnt<<endl;
}
    
    return 0;
}