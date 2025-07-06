#include <iostream>
using namespace std;

int sumofdigits(int n)
{
while(a>0)
		{
			n = a%10;
			sum = sum +n;
			a = a/10;
		}
}

int main() {
	int t;
	cin >> t;   //for test cases 
	int a;
	while(t!=0)
	{
		int n = 0 ;
		int c =0;
		int sum = 0;
		cin>>a;
		int num = a;
        
		
		while(sum%4!=0)
		{
			sum = sum +1;
			c++;
		}
		cout<<num+c<<endl;


		t--;
	}
	return 0;
}