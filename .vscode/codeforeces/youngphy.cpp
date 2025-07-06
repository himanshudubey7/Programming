#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int n ;
    cin>>n;
        int x =0;
        int y =0;
        int z =0;
    while(n!=0)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        x = x+arr[0];
        y = y+arr[1];
        z = z+arr[2];
        n--;
    }
    if(x==0&&y==0&&z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}