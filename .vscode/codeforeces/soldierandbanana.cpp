#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int k; //cost of first banana
    cin>>k;
    int n; // initial amount of money the soldier has 
    cin>>n;
    int w ; //the no. of bananas the soldier wants to buy
    cin>>w;
    int cost =0;
   int factor = 0;
   while(factor<=w)
   {
    cost = cost+ (k*factor);
    
    factor++;
   }
   if(cost<n ||cost == n)
   {
    cout<<"0"<<endl;
   }
   else
   {
    cout<<cost-n<<endl;
   }
    return 0;
}