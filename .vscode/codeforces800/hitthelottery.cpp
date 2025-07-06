#include<bits/stdc++.h>

using namespace std;
int main(){
    /*
   Rupees---> 1,5,10,20,100
    
    
    */
    int n;
    cin>>n;
    int withdraw;
    int count =0;

    if(n>=100)
    {
        while(n>=100)
        {
          
            n = n -100;
            count++;
        }
    }
    if(n>=20)
    {
        while(n>=20)
        {
           
            n = n -20;
            count++;
        }
    }
    if(n>=10)
    {
        while(n>=10)
        {
           
            n = n -10;
            count++;
        }
    }
    if(n>=5)
    {
        while (n>=5){
            withdraw = withdraw+5;
            n = n -5;
            count++;
        }
    }
    if(n>=1)
    {
        while(n>=1)
        {
            withdraw = withdraw+1;
            n = n-1;
            count++;
        }
    }

    cout<<count<<endl;


    return 0;
}