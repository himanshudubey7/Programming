#include<bits/stdc++.h>

using namespace std;
int lower_bound(vector<int> &v,int element)
{
    int low =0;int high = v.size()-1;
    int mid;
    while(high-low>1)
    {
        int mid = (high+low)/2;
        if(v[mid]<element){
            low = mid+1;
        }
        else
        {
            high  = mid;
        }
    }


    if(v[low]>= element)
    {
        return low;
    }
    else if(v[high] >= element)
    {
        return high;
    }
    else 
    return -1;
    

}
int main(){
     int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int to_find;
    cin>>to_find;
    int lb= lower_bound(v,to_find);
    cout<<lb<<" "<<v[lb]<<endl;
   
    return 0;
}