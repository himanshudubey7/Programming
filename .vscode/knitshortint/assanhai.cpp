#include <bits/stdc++.h>
#include<algorithm>
#include<numeric>
using namespace std;



int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i =0;i<n;i++)
		{
			cin>>a[i];
		}
		int max =0;
		int sum;
		int flag =0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(__gcd(a[i],a[j] == 1))
				{
					flag = 1;
					sum = a[i]+a[j];
					if(max<sum){
						max =sum ;
					}
				}

			}
		}
		if(flag == 1)
		{
			cout<<"YES"<<endl;
		cout<<max<<endl;
		}
		else if(flag == 0)
		{
			cout<<"NO"<<endl;
		}
	}
}