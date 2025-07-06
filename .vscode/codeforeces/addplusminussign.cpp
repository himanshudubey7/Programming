#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t!=0)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        string c;
        int sum =0;
        for(int i =0 ;i<n-1;i++)
        {
           sum = sum +((int)a[i]-48);
           cout<<"the sum is---> "<<sum<<endl;
           if(sum==0&&a[i+1]=='1')
           {
            //sum= sum-1;
            
            c=c+'+';

           }
            else if(sum==0&&a[i+1]=='0')
           {
            c=c+'+';
           }
           else if(sum==1&&a[i+1]=='1')
           {
            c=c+'-';
            sum = sum-1;
            
           }
            else if(sum==1&&a[i+1]=='0')
           {
            c=c+'+';
           }
          
           
        }
        cout<<c<<endl;


        t--;
    }
    return 0;
}