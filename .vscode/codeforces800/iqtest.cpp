#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
        
    }
    int differ = ar[0];
    for(int i =0;i<n;i++)
    {
        if(ar[i]%2 == 0 && differ%2 ==0)
        {
            differ = ar[i];
        }
        else if(ar[i]%2 == 0 && differ%2 !=0){
            differ = ar[i];
            break;

        }
        else if(ar[i]%2!=0 && differ %2!=0){
            differ = ar[i];
        }


    }
    return 0;
}