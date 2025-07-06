#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    //spiral order print

    int row_start =0;
    int row_end = n-1;
    int coloumn_start = 0;
    int coloumn_end = m-1;
    while(row_start<=row_end && coloumn_start<=coloumn_end)
    {
        //for row start

        for(int col =coloumn_start;col<=coloumn_end;col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        // for coloumn end 
        for(int row = row_start;row<=row_end;row++)
        {
            cout<<arr[row][coloumn_end]<<" ";
          
        }
        coloumn_end--;

        //for row end

        for(int coll = coloumn_end;coll>=coloumn_start;coll--)
        {
            cout<<arr[row_end][coll]<<" ";
        }
        row_end--;

        //for coloumn start

        for(int roww = row_end;roww>=row_start;roww--)
        {
            cout<<arr[roww][coloumn_start]<<" ";
       
        }
        coloumn_start++;
    }

    return 0;
}