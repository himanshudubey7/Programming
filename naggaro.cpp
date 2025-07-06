#include<bits/stdc++.h>
using namespace std;

int func(int input, int input2[]){
   int n = input;
   int ans = 0;
   int dist = input2[0];
   int pre[n];
   pre[0] = input2[0];
for(int i=1;i< n;i++){

    pre[i] = pre[i-1]+input2[i];
    ans =max(ans, ans+pre[i-1]);

   }


}
int main(){
    return 0;
}