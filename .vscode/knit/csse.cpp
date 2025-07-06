#include <bits/stdc++.h>
using namespace std;
int maximum (long long a[],long long size)
{
		int p;
	
	int  max = a[0];
for(int i=0;i<size;i++)
{
		if(a[i]>max)
		{
			max = a[i];
			p=i;
		}
}
return p;

}
int main() {

int t;
cin>>t;
while(t!=0)
{
	long long n;
	int k;
	cin>>n>>k;
	long long sum=0;
	long long arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	long long  maxsum=0;
	long long cursum=0;

	for(int i=maximum(arr,n);i<n;i++)
	{
		cursum=cursum+arr[i];
		if(cursum>maxsum)
		{
			maxsum=cursum;
			sum = sum+maxsum;
			arr[i]=0;
		}
		if(cursum<maxsum)
		{
			cursum=0;
			maxsum=0;
			arr[i]=0;
		}
	}
	
	cout<<sum<<endl;
	t--;
}


	return 0;
}