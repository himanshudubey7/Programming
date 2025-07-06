#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int time=0;
        int x=0,y=0;
                int d = 0;
                int u =0;
        int r=0;
        int l=0;
        while(x!=a || y!=b)
        {
            if(x>a && d==0)
            {
                x--;
                d=1;
                l=0;
                u=0;
                r=0;
                ++time;
            }
            else if(x>a && y==b)
            {
                x--;
                d=1;
                l=0;
                u=0;
                r=0;
                ++time;
            }
            else if(x<a && u==0)
            {
                x++;
                u=1;
                d=0;
                l=0;
                r=0;
                ++time;
            }
             else if(x<a && y==b)
            {
                x++;
                u=1;
                d=0;
                l=0;
                r=0;
                ++time;
            }
           

       
            else if(y<b && r==0)
            {
                y++;
                r=1;
                ++time;
                d=0;
                u=0;
                l=0;
            }
             else if(y<b &&  x==a)
            {
                y++;
                r=1;
                ++time;
                d=0;
                u=0;
                l=0;
            }
            else if(y>b && l==0)
            {
                y--;
                l=1;
                u=0;
                d=0;
                r=0;
                ++time;
            }
             else if(y>b && x==a)
            {
                y--;
                l=1;
                u=0;
                d=0;
                r=0;
                ++time;
            }
             else if((u ==1 || d==1) )//skip
            {
                u=0;
                d=0;
                ++time;
            }
            else if((l==1 || r==1))
            {
                l=0;
                r=0;
                ++time;
            }
         
        }
        
     
        
        cout<<time<<endl;


    }
    return 0;
}