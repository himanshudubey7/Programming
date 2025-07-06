#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0;
        int second =1;
    
    
        int third ;
       

        for(int i=0;i<n;i++)
        {
            if(i<2)
            {
                third =i;
            }
            else{
        third = first+second;//third element
        first = second;
        second = third;
            }
        cout<<third<<" ";
        
            
        }
        

    
     
    return 0;
}