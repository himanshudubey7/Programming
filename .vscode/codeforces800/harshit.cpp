#include<bits/stdc++.h>

using namespace std;
int glo;
int numerator=1;int denominator=1;
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            int nume = check(i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
     int nume  = check(n);
     cout<<"numerator is as follows = "<<nume<<endl;
}
  int check(int f)
  {
    if(glo%f !=0)
    {
        numerator = numerator*f;

    }

  }

  
int main(){
    cout<<"enter your decimal number "<<endl;
    float n;
    cin>>n;//1.5
    int count =0;
    string s= to_string(n);
    for(int i =0;i<n;i++)
    {
        if(s[i]== '.')
        {
            ++count;
        }
    }
    int t = pow(10,count);//15
    int decimal = n*t;
    cout<<decimal<<endl;
    int f = pow(10,count);//10
    glo = f;
    primeFactors(decimal);
    
 

  
    return 0;
}
