// C++ code to print all possible subarrays for given array
// using recursion
 
#include <bits/stdc++.h>
using namespace std;
 
// Recursive function to print all possible subarrays for
// given array
void printSubArrays(vector<int> arr, int start, int end)
{
    int maxlen=0;
    // Stop if we have reached the end of the array
    if (end == arr.size())
    {
    cout<<maxlen<<endl;
        return;
    }
    // Increment the end point and start from 0
    else if (start > end)
        printSubArrays(arr, 0, end + 1);
    // Print the subarray and increment the starting point
    else {
       int ans=0;
			int bans=2047;
			int l=0;
        for (int i = start; i < end; i++)
        {
            ans = (ans|arr[i]);
			bans=(bans&arr[i]);
			l=i;
        }
        if(ans==bans)
			{
				maxlen=l;
			}
				
          
        printSubArrays(arr, start + 1, end);
    }
    return;
}
 
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {

    int n;
    cin>>n;
    int a;
    vector<int> arr ;
      for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    printSubArrays(arr, 0, 0);
    t--;
    }
    return 0;
}