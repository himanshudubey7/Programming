#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int calcgcd(int p , int q)
{
    if (q == 0)
    return p;
  return calcgcd(q, p % q);
}


int calclcm(int x , int y)
{
    return (x / calcgcd(x, y)) * y;

}
int main(){
    int t;
    cin>>t;
    while(t!=0)
    {
        int a = 1;

        //enter your number
        int n;
        cin>>n;
        int lcm;
        
         int b = n-1;
         int i = 0 ;

        lcm=calclcm(a,b);
        i = lcm;
        
        i++;



        t--;
    }
    return 0;
}