#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    int my_amt=0;
 
    int twin_amt = 0;

    cin>>n;
    int sum =0;
    int coins_cnt =0;
    int arr[n];    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum = sum+x;//5;
        arr[i]=x;   
    }
    sort(arr,arr+n,greater<int>());//sort array in desending order
    int mysum =0;
    int hissum =0;
    for(int i=0;i<n;i++)
    {
        mysum= mysum +arr[i];
       
        if(mysum <= (sum-mysum))
        {
            ++coins_cnt;
            
        }
        else if(mysum>(sum-mysum))
        {
            ++coins_cnt;
            break;
        }
      
        

    }
    cout<<coins_cnt<<endl;



    return 0;
}