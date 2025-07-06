#include<bits/stdc++.h>

using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i =0;i<n;i++)
   {
    cin>>a[i];
   }
   int m;
   cin>>m;
int sum1,sum2 =0;
   while(m--)
   {
    int b;
    cin>>b;
    int p=0,v=0;
    //vasya's approch
    for(int i =0;i<n;i++)
    {
        if(a[i]== b)
        {

            ++v;
            break;
        }
        else 
        {
            ++v;
        }
    }
    sum1 = sum1 + v;

// petya 's approch
     for(int i =n-1;i>=0;i--)
    {
        if(a[i]== b)
        {

            ++p;
            break;
        }
        else 
        {
            ++p;
        }
    }
    sum2 = sum2 + p;

   }
   cout<<endl;
   cout<<sum1<<" "<<sum2<<endl;
 
    
    return 0;
}