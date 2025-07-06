//DONE!!!


#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m,a,b;
    /*
   n--> no. of rides she had to make 
   m--> no. of rides she will get in b rupees
   a--> price for 1 ride 
   b --> price for m rides.

   n -- 5
   m -- 2
   a -- 2
   b -- 3

   original = 10;
   offer = 15/2;
   cost = 6;
   rem  =4;
    
    */
    cin>>n>>m>>a>>b;
   int rides=0;
   int cost =0;
   if(a>(b/m))
   {
   while(n>(rides+m)){
    cost = cost+b;
    rides = rides+m;
   }
  // cout<<"the no. of rides="<<rides<<endl;
   //cout<<"the cost = "<<cost<<endl;
   int rem = n - rides;
   if(rem*a<= b)
   cost  = cost+(rem*a);
   else
   {
    cost= cost+b;
   }
   cout<<cost<<endl;
   }
   else
   {
    cout<<(a*n)<<endl;
   }


    return 0;
}