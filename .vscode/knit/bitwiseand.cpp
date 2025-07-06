
#include <iostream>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t!=0)
	{
		int n;
		//cout<<"enter size of array"<<endl;
		cin>>n;
		int a[n];
		int b[n];
		
		//cout<<"enter elements of a"<<endl;
		for(int i =0;i<n;i++)
		{
			cin>>a[i];
		}
	//	cout<<"enter elements of b"<<endl;
		for(int i =0;i<n;i++)
		{
			cin>>b[i];
		}
		int maxlen=0;
	//	cout<<"doing operations"<<endl;
		for(int i =0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
		int aans=0;
		int bans=2047;
				
				for(int k=i;k<=j;k++)
				{
					//cout<<"a elements"<<" "<<a[k]<<endl;
					aans=(aans|a[k]);
					//cout<<"aans="<<aans<<endl;
					//cout<<"b elemensts"<<" "<<b[k]<<endl;
					bans=(bans&b[k]);
					//cout<<"bans="<<bans<<endl;
					
				}
				if(aans==bans)
				{
					maxlen=j+1;
				}
			}
		}
		cout<<maxlen<<endl;
		t--;
	}
	return 0;
}
