#include<iostream>
#include<math.h>

using namespace std;
int main(){
    long long int  m, n, a, x ,y , sum;
     x =0;
     y = 0;
    cin>>m>>n>>a;
    x = m/a;
    y = n/a;
   if(m%a!=0)
   {
    x = x+1;
   }
   if(n %a!=0)
   {
    y = y+1;
   }
   sum = x*y;
   cout<<sum<<endl;
    return 0;
}