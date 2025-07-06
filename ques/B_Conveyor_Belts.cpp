#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;


        //2nd quad

        if(n ==2){
            cout<<0<<endl;
            continue;
        }
        if(1<=x1 && x1<=n/2 && n/2<y1 && y1<=n)
        {
            y1=n-y1+1;
        }
        if(1<=x2 && x2<=n/2 && n/2<y2 && y2<=n)
        {
            y2=n-y2+1;
        }
        //3rd quad
         if(n/2<x1 && x1<=n && 1<=y1 && y1<=n/2)
        {
            x1=n-x1+1;
        }
         if(n/2<x2 && x2<=n && 1<=y2 && y2<=n/2)
        {
            x2=n-x2+1;
        }
        //4th quad
         if(n/2<x1 && x1<=n && n/2<y1 && y1<=n)
        {
            x1=n-x1+1;
            y1=n-y1+1;
        }
         if(n/2<x2 && x2<=n && n/2<y2 && y2<=n)
        {
            x2=n-x2+1;
            y2=n-y2+1;
        }

        // upper triangle
        if(y1>x1)
        {
            
          y1 = x1;
        }
        if(y2>x2)
        {
          y2 = x2;
        }
        //lower triangle
        if(x1>=y1)
        {
          x1= y1;
        }
        if(x2>=y2)
        {
            x2 = y2;
        }


        long long int ans=abs(x1-x2);
        cout << ans << endl;








        // long long int x=abs(x1-x2);
        // long long int y=abs(y1-y2);
        // long long int ans=min(x,y);
        // cout << x1 << " " << y1 << " " << x2  << " " << y2 << endl;
        // cout << x << " " << y << endl;
        // cout << ans << endl;

        // cout << x1 << " " << y1 << endl;







        // long long k=n-2*(min((abs(0-y1)),abs(n-y1)));

        // long long int d1=abs(y1-y2);
        // long long int d4=abs(x1-x2);
        // long long int d2=k-d1+1;
        // long long int d3=k-d1+1;

        // long long int ans=min(min(d1,d2),min(d3,d4));

        // cout << " k " << k ;
        // cout << " d1 " << d1;
        // cout << " d2 " << d2;
        // cout << " d3 " << d3;
        // cout << " d4 " << d4;
        // cout << endl;

        // cout << ans << endl;
        


    }
}