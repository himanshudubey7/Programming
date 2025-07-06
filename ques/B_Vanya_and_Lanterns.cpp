//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
     long long n, l;
    cin>>n>>l;
     long long ar[n];
    float start = 0;
    float temp = start;
    float max_diff = 0.0;
    float diff=0;
    int flag_start = 0;
    int flag_end =0;
    for(int i = 0;i<n;i++){
        cin>>ar[i];   
    }
    
    sort(ar, ar+n);
    for(int i= 0;i<n-1;i++){
         if(ar[i] == 0)
        {
            flag_start = 1;
        }
        if(ar[i] == l){
            flag_end = 1;
        }
        diff = (float)abs(ar[i]-ar[i+1])/2;
        temp = ar[i];
        max_diff = max(max_diff, diff);
    }
if(flag_start == 1 && flag_end ==1){
    cout << setprecision(11);
    cout<<(float)max_diff<<endl;
}
else if(flag_start == 0 && flag_end == 1){
     cout << setprecision(11);
    cout<<(float)(ar[0] -0)<<endl;
}
else if(flag_end == 0 && flag_start == 1){
     cout << setprecision(11);
    cout<<(float)(l-ar[n-1])<<endl;
}
else{
     cout << setprecision(11);
    cout<<(float)max(ar[0], (l-ar[n-1]));

}
    

    return 0;
}