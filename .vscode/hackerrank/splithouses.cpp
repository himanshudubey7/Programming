#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int b=0;
	int h1 = 0;
int h2 =0;
	int temp=0;
	int fence =0;
	int p =0;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]== 'H' && s[i+1]!='.')
		{
			cout<<"NO"<<endl;
			temp =1;
			break;
		}
		if(s[i]=='.')
		{
			s[i]='B';
		}
	}
	if(temp == 0)
	{
		cout<<"YES"<<endl;
		cout<<s<<endl;
	}

		
	
	return 0;
}