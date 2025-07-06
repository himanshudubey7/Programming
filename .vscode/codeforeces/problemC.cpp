#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t!=0)
    {
        int b1 =0;
        int b2 =0;
        int b3 = 0;
        int n;
        cout<<" enter the no. of bricks"<<endl;
        cin>>n;
        int temp = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        //sorting
        for(int j= 0; j<n;j++)
        {
            for(int k = 1; k<n; k++)
            {
                if(arr[j]> arr[k])
                {
                    temp = arr[j];
                    arr[j]= arr[k];
                    arr[k] = temp;   
                }
            }
        }
        cout<<" sorted array "<<endl;
        for(int i = 0; i<n; i++)
        {
            cout<<arr[i];

        }

        

    }
    return 0;
}