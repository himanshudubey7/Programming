#include<bits/stdc++.h>

using namespace std;
    int p, q, r;
int main(){
    int n;
    cin>>n;
    int index[3];
    int ar[n];
    int s1[n];
    int s2 [n];
    int s3 [n];
    int t1=0 , t2=0 , t3 = 0;
   for(int i = 1;i<= n;i++){
    int x;
    cin>>x;
    ar[i-1] = x;
    if(x == 1){
        s1[p] = i;
        p++;
        t1++;
    }
    if(x ==2 ){
        s2[q] = i;
        q++;
        t2 ++;
    }
    if(x == 3 ){
        s3[r] = i;
        r++;

        t3++;
    }
   }
   int min=-1;
  int team[3] ;
  team[0] = t1;
  team[1]=t2;
  team[2] = t3;
  sort(team , team+3);
   min = team[0];
   cout<<min<<endl;
   
    int t = 0;
   while(min--){
    cout<<s1[t]<<" "<<s2[t]<<" "<<s3[t]<<endl;
    ++t;
   }
   

    return 0;
}