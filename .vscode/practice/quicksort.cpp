//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;

int partition(int ar[] , int s ,  int e)
{
    int cnt = 0;
int pivot  = ar[s];
for(int i = s+1;i<=e;i++){
    if(ar[i]<=pivot){
        cnt++;
    }
}
int pivotIndex = s+cnt;
swap(ar[pivotIndex], ar[s]);

int i  = s, j = e;
while(i<pivotIndex && j > pivotIndex){
    while(ar[i]<=pivot){
        i++;
    }
    while(ar[j]>pivot){
        j--;

    }
    if(i<pivotIndex && j > pivotIndex){
        swap(ar[i] , ar[j]);
        i++;
        j--;

    }

}

return pivotIndex;

}
void quickSort(int ar[] , int s, int e){
    if(s>=e){
        return  ;
    }
    else{
        int p = partition(ar,s,e);
        //left part
        quickSort(ar, s, p-1);
        // right part
        quickSort(ar , p+1 , e);
    }

}




int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    //sorting
    int s = 0;int e = n-1;
    quickSort(ar, s, e);
    for(int i =0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}