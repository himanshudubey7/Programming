#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
   set<int>s;
    int max =0;
   int ans ;
   
   s.insert(  a+b+c);
   s.insert((a+b)*c);
   s.insert(a*(b+c));
   s.insert(a*b*c);
   cout<<*(--s.end())<<endl;


    return 0;
}
//DONE!!