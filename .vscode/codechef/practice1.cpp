#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    int arr[4];
    int i, j;

    cout<<" enter elements"<<endl;

    for( i = 0;i< 4 ; i++)
    {
        cin>>arr[i];
    }


	for( j = 0; j<4 ; j++)
	{
	    if (arr[j]>=10)
	    {
	        counter++;
	    }
	}


	cout<<counter;
	return 0;
}
