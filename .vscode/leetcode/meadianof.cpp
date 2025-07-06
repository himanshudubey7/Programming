/*  Given two sorted arrays nums1 and nums2 of size m and n respectively,
                         return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2. */



#include<bits/stdc++.h>

using namespace std;
int main(){
int m, n, i,j,k;

cout<<" enter the size of array - 1"<<endl;
cin>>n;
cout<<" enter the size of array - 2"<<endl;
cin>>m;
int nums1[n];
int nums2[m];
int nums3[n+m];
    cout<<" enter sorted arrays"<<endl;
    cout<<" array -1"<<endl;

    for ( i = 0; i < n; i++)//filling of array -1 
    {
        cin>>nums1[i];
    }
   cout<<" array - 2"<<endl;
  
    for ( j = 0; j < m; j++)//filling of array -2
    {
        cin>>nums2[j];
    }

    for(i = 0 ; i<n; i++)//filling of merged array 
    {
        nums3[i] = nums1[i];
    }


    for(j = 0; j<m ; j++)
    {
        nums3[i+j] = nums2[j];

    }

    cout<<" merged array "<<endl;
    for(k=0 ; k<(n+m); k++)
    {

        cout<<nums3[k]<<" ";
    }


    //meadian operation starts here

    int med;
    double median;
    int p = m+n;

   // cout<<"the value of p "<<p<<endl;

    if(p%2 == 0)
    {
        cout<<" the median is "<<endl;
        med = p/2;
        median = nums3[med-1]+0.5;
    }
    if(p%2 != 0)
    {
        cout<<" the median is "<<endl;
     med = p/2;
     median = nums3[med];
    }
    
    cout<<median;


    
    

    return 0;
}