// Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
    {
		return n;
    }
	return fib(n - 1) + fib(n - 2);
}

 
int main()
{
	int n = 5;
	for(int i =0;i<n;i++)
	{
	cout << fib(i)<<" ";
	}
	
	return 0;
}

// This code is contributed
// by Akanksha Rai
