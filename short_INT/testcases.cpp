#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("in00.txt", "r", stdin);
    freopen("in06.txt", "w", stdout);

    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    long long t=rng();
    t=2;
    cout<<t<<endl;
    long long sum = 0;

    while(t--)
    {
        long long n=rng();
        n=100000-1;
      
        
        
       sum = sum +n;
        cout<<n<<endl;
      while(n--){
        long long x = rng();
        x%=100000000;
        x+=1;
        cout<<x<<" ";
      }
      cout<<endl;
    }
     cout<<" the sum is = "<<sum<<endl;

    // fclose(stdin);
    fclose(stdout);
    return 0;
}