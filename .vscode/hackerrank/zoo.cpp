#include <iostream>
using namespace std;
int main() {
	string s;
	cin>>s;//enter your string
	int x = 0 ;
	int y =0 ;
	char ch;
	for(int i = 0 ;i<s.length();i++)
	{
		ch = s.at(i);
		if(ch=='z')
		{
			x++;
		}
		if(ch =='o')
		{
			y++;
		}	
	}
	if(2*x==y)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}

	return 0;
}