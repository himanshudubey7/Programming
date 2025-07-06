#include <bits/stdc++.h>
using namespace std;
int main() {

int t;
cin>>t;
while(t!=0)
{
	int n;
	int k;
	cin>>n>>k;
	int arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxsum=0;
	int cursum=0;
	for(int i =0;i<n;i++)
	{
		cursum=cursum+arr[i];
		if(cursum>maxsum)
		{
			maxsum=cursum;
		}
		if(cursum<0)
		{
			cursum=0;
		}
	}
	cout<<maxsum<<endl;
	t--;
}


	return 0;
}
