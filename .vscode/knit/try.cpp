		
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
	
		int aans=0;
		int bans=32767;
				int count=0;
				int p=0;
				int q=0;
				for(int i=0;i<n;i++)
				{

				aans =aans|a[p];
				p++;
				bans=bans&b[q];
				q++;
				if(aans==bans)
				{
					maxlen++;
				}
				else if(aans!=bans)
				{
					maxlen=0;
				}

				}
		
				cout<<maxlen<<endl;
		t--;
	}
	return 0;
}
