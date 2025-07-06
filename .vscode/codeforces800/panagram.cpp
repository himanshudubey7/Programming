//DONE!!!


#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char> str;
    for(int i =0;i<n;i++)
    {
        str.insert(s[i]);
    }
    string st = "abcdefghijklmnopqrstuvwxyz";
    int j=0;
    auto flag =0;
    int cnt =0;
    set<char> ::iterator it = str.begin();
    //while(it!=str.end())
    //{
    //    cout<<(*it)<<endl;
    //    it++;
    //}
    while(it!=str.end())
    {
        if((*it)!=st[j])
        {
            flag =1;
            break;
        }
        else
        {
            it++;
            j++;
            ++cnt;
        }
    }
   if(flag ==1||cnt !=26 )
   {
    cout<<"No"<<endl;
   }
   else if(flag ==0 && cnt == 26)
   {
    cout<<"Yes"<<endl;
   }
    return 0;
}