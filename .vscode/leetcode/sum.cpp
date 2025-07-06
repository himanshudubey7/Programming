/*Given an array of integers nums and an integer target, return indices of the two numbers 
                                               such that they add up to target.
You may assume that each input would have exactly one solution, and you may  
                                                           not use the same element twice.*/

/* Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].   */





#include<iostream>

using namespace std;
int main(){
    int n,i,j,k;

        int target;
        
        cout<<" enter the size of array "<<endl;
        cin>>n;
        int nums[n];
        int product[n];
        cout<<" enter elements "<<endl;
        for ( i = 0; i < n; i++)
        {
          cin>>nums[i];
        }
        cout<<" enter target "<<endl;
        cin>>target;

        for ( j = 0; j < n; j++)
        {
            for( k = 1 ; k<n; k++)
            {
                if( nums[j]+nums[k] == target)
                {
               product[0] = j;
               product[1] = k;


                break;
                }


            }

            
        }
        

        cout<<" the indices are "<<endl;
        for ( i = 0; i < 2; i++)
        {
            cout<<product[i]<<" ";
        }
        
        
    return 0;
}                                                           