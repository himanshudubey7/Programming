//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int ar[N];
int main(){
    int n;
    cin>>n;
    int p = 0;
    int taxi_cnt = 0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;

        if(x == 4)
        taxi_cnt++;
        else
        {
            ar[x]++;
        }
    }
    if(ar[1]>ar[3]){
        taxi_cnt+= ar[3];
        ar[1]= ar[1] - ar[3];
        ar[3] = 0;
//cout<<taxi_cnt<<endl;
    }
    else if(ar[1]<=ar[3]){
        taxi_cnt += ar[1];
        ar[3] = ar[3] - ar[1];
        ar[1]  = 0;
        if(ar[3]>0){
            taxi_cnt += ar[3];
            ar[3] = 0;
        }
    }
    //cout<<taxi_cnt<<endl;

if(ar[2]>0){
  taxi_cnt += ar[2]/2;
ar[2] = ar[2]%2;
}

int left = ar[1] +ar[2]*2;// make group of 2 similar to count of 1
if(left<=4 && left >0){
    taxi_cnt+=1;
}
else if(left%4!=0){
    taxi_cnt += (left/4)+1;
}
else
{
    taxi_cnt+= left/4;
}

cout<<taxi_cnt;

   
    return 0;
}