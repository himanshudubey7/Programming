#include<bits/stdc++.h>

using namespace std;
void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
for(auto &pr: m)
   {
    cout<<pr.first<<" "<<pr.second<<endl;
    
   }
}
int main(){
    map<int , string> m;
    m[1]="abc";
    m[5]=" cde";
    m[3]="acd";
    m.insert({4,"afg"});
   auto it = m.find(3);//o(log (n))
    m.erase(3);
   // if(it == m.end())
   // {
   //     cout<<"no value"<<endl;
   // }
   // else
   // {
   //     cout<<(*it).first<<" "<<(*it).second<<endl;
   // }
    print(m);
   
    return 0;
}