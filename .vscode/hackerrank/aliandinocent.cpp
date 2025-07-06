#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string s;
	cin>>s;
	n = s.length();
	{
		for(int i =0;i<n;i++)
		{
			if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'
			||s[i]=='U'||s[i]=='Y')
			{
				cout<<"invalid"<<endl;
				return 0;
			}
		}
	}//11B242-73
	int t = (int)s[0];//13X357-22
	int sum ;
	int flag =0;


	for(int i=1;i<n;i++)
	{
		if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'
				 ||s[i]=='8'||s[i]=='9')
				 {
					int num = (int)s[i];
					sum = t+num;
					t= num;
					if(sum %2!=0)
					{
						cout<<"invalid"<<endl;
						flag =1;
						return 0;
					}
				 }
				 
	
	}
	if(flag == 0)
	{
		cout<<"valid"<<endl;
	}
	return 0;
}