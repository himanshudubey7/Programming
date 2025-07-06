#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(){
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }
        int max=0;
        int g =0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            g=gcd(arr[i],arr[j]);
            if(g>max)
            {
                max=g;
            }

            }

        }
        cout<<max<<endl;

      t--;

    }
    return 0;
}