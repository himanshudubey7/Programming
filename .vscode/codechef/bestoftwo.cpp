#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	
	while(q--)
	{
	   int n;
	   cin>>n;
	   string s;
	   cin>>s;
	   string t;
	   cin>>t;
	   string u;
	   cin>>u;
       int ch;
       int l = u.length();
	  if(t[0]>s[0])
      {
    int m = t[0]- 26;
    ch = m - s[0];
      }
      else
      {
      ch = s[0] - t[0];
      }
    //    cout<<ch<<endl;
       if(ch <0)
       {
        ch = (-1)*ch;
       }
       
	   for(int i =0;i<l;i++){
        if(u[i]- ch< int('a'))
        {
            u[i] = (int('z')-( int('a')-(u[i]- ch)))+1;
        }
        else
        {
            u[i]=u[i]- ch;

        }
       }
	    cout<<u<<endl;
	}
	return 0;
}
