#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  int t;
  cin>>t;
  while (t--)
    {
      int a, b, c;
      cin >> a >> b >> c;
      int rem_helt = b - c;
      if (rem_helt < 0)
	rem_helt = rem_helt * (-1);
      if (a - rem_helt > 0)
	{
	  cout << "YES" << endl;
	}
      else
	cout << "NO" << endl;
    }
  return 0;
}
//DONE!!!
