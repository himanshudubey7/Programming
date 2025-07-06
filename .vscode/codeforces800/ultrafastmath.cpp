
#include<bits/stdc++.h>
using namespace std;

string xoroperation(string a, string b, int n){
string ans = "";
	
	
	for (int i = 0; i < n; i++)
	{
		
		if (a[i] == b[i])
			ans += "0";
		else
			ans += "1";
	}
	return ans;
}


int main()
{
	string a ;
	string b;
    cin>>a;
    cin>>b;
	int n = a.length();
	string c = xoroperation(a, b, n);
	cout << c << endl;
    return 0;
}


