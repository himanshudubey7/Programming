//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
multimap<int , int  > m;
//multimap<int ,int, greater<int> > mp;
int main(){
    int s,n;
    cin>>s>>n;
    int max =-1;
    for(int i = 0;i<n;i++){
        int x, y;
        cin>>x>>y;
        m.insert({x,y});
        if(max<x){
            max = x;
        }
    }
    int flag = 1;
  map<int, int>::iterator it = m.begin();
   while(it !=m.end()){
  // cout<<"value of s is"<<s<<endl;
  // cout<<it->first<<endl;
    
    if(s>it->first){
        s+=it->second;
        ++it;
   }
   else{
    flag = 0;
    break;
   }
   }

    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}