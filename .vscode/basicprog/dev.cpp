#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int flag=0;
	int count=0;
	int a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];
	int s=a[i]%2==0;
  if(s == 1)
	flag++;
  //cout<<"the valueof s is = "<<s<<endl;
	int h=a[i]%2 !=0;
  if(h ==1)
	count++;
  //cout<<"the value of h is  = "<<h<<endl;
  }
	if (flag>count)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;
	
	
	
	return 0;
}