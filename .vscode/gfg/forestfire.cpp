#include<bits/stdc++.h>

using namespace std;




int findmax(vector<long long> vt, long long p){
long long cnt=0;
   for(long long i = 0;i<vt.size();i++){
       if(vt[i]>= p){
           ++cnt;
       }
   }
   return cnt;

}
int main()
{
  long long n ,x;
  cin>>n>>x;
  long long p =5;
  vector<long long> v(n);
  for(long long i = 0;i<n;i++){
      long long f;
      cin>>f;
      v.push_back(f);
  }
  long long max =0;
  long long ele;
  for(long long k=0;k<n;k++){
    long long temp = v[k];
      long long l = findmax(v,temp);
      cout<<"the value of l = "<<endl;
      if(l <=x){
        
          if(l>max){

            max = l;
            ele = v[k];
          }

      }
      
      
  }
  if(max == x)
  cout<<ele<<endl;
  else
  cout<<"-1"<<endl;

return 0;
}