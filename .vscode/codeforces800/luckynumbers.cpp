#include<bits/stdc++.h>

using namespace std;
    int diff =0;
int maxdiff(int n){
        set<int> s;
    //cout<<"number recieved = "<<n<<endl;
    while(n>0)
    {
        int digit = n%10;
        s.insert(digit);
        n=n/10;
    }
auto it1 = s.begin();
//cout<<"min digit = "<<(*it1)<<endl;
auto it2 = (--s.end());
//cout<<"max digit = "<<(*it2)<<endl;
diff = ((*it2) - (*it1));
//cout<<"the calc diff = "<<diff<<endl;
s.empty();
return diff;



}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a =0;
        long long l,r;
        cin>>l>>r;
        long long p;
        for(int i=l;i<=r;i++)
        {
          int  ans = maxdiff(i);
          if(a<ans){
            a= ans ;
            p = i;
          }


        }
        cout<<p<<endl;


    }
    return 0;
}