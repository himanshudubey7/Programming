#include<iostream>

using namespace std;
int main(){
    int t ;
    
    cin>>t;
    while(t!= 0)
    {
        int n;
        int sum = 0;
        int sum1 = 0;
        //int sum2 = 0;
        cin>>n;
        //int s1[n];
        //int s2[n];
        int max;
        int arr[n];
        for(int i = 0 ; i<n; i++)
        {
            cin>>arr[i];
            sum = sum +arr[i];
        }
        max = abs(sum);
        //cout<<sum;
        for(int i = 0 ; i<n ;i++)
        {
            sum1 = sum1+arr[i];
            if(abs(sum)-abs(sum1)>max)
            {
                max = sum1;
                break;

            }

        }
        cout<<max<<endl;
       
        t--;
    }
    return 0;
}