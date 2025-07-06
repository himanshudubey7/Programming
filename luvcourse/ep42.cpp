/*
HOW TO FIND SQUARE ROOT OF A NUMBER USING BINARY SEARCH OR WE CAN SAY THAT HOW YOU CAN 
FIND Nth ROOT OF A NUMBER USING BINARY SEARCH 
*/



#include<bits/stdc++.h>
using namespace std;
double eps = 1e-6;// to decide accuracy of the square root(accuracy of 5 decimal places)
double multiply(double mid, int n)
{
    double ans = 1;
    for(int i =0;i<n;++i)
    {
        ans *=mid;/*multiply  mid n times  */
    }
    return ans;
}
int main(){
    double x;// number to be entered
    int n;
    cin>>x>>n;
    double lo =1;
    double hi = x;
    double mid;
    while(hi-lo >eps)
    {
        mid = (hi+lo)/2;
        if(multiply(mid,n) <x){
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    cout<<lo<<endl;
    
    return 0;
}