//DONE
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[5][5];
    int x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    int row_cnt = 0;
    if(x>2)
    {
        while(x>2)
        {
            x--;
            row_cnt++;
        }
    }
    else if(x<2)
    {
        while(x<2)
        {
            x++;
            row_cnt++;
        }
    }
    auto col_cnt =0;
    if(y>2)
    {
        while(y>2)
        {
            y--;
            col_cnt++;
        }
    }
    else if(y<2)
    {
        while(y<2)
        {
            y++;
            col_cnt++;
        }
    }
    int count =row_cnt+col_cnt;
    cout<<count<<endl;

    return 0;
}