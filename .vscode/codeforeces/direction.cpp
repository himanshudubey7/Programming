#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t != 0)
    {
      int x = 0;
      int y = 0;
      int n;
      cin >> n;
      string s;
      cin >> s;
      char ch;
      int count=0;
      for (int i = 0; i < n; i++)
	{
	  ch = s.at (i);
	  if (ch == 'U')
	    {
	      y++;
	    }
	  else if (ch == 'D')
	    {
	      y--;
	    }
	  else if (ch == 'R')
	    {
	      x++;
	    }
	  else if (ch == 'L')
	    {
	      x--;
	    }

	  if (x == 1 && y == 1)
	    {
          count++;
	      break;
	    }
	  

	}
    if(count!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

     t--;
    }

  return 0;

}
