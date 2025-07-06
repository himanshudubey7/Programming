#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        int x =0,y=0;
        int total =0;
        int total1 =0;
        int total2=0;
        int total3 =0;
        cin>>n;
        string s;
        cin>>s;
        n=s.length();
       
        string str;
        str =s;
         for(int i=0;i<n;i++)
        {
            char ch =str.at(i);
            if(ch=='1')
            x++;
            else if(ch =='0')
            {
                y++;
        }
        }
        
        if(x>0&&y>0)
        {
        total =x*y;
        }
        else if(x>0&&y==0)
        {
        total = x*x;
        }
        else if (x==0 && y==0)
        {
        total = y*y;
        }
        cout<<total<<endl;
        t--;

    }
    return 0;
}