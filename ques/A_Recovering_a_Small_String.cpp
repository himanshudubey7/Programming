//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int first , second, third;
    char arr[27];
    char ch = 'a';
    for(int i = 1;i<=26;i++){
        arr[i] = ch;
        ch++;
    }
int flag = 0;
    for(int i = 1;i<=26;i++){
       int temp = n-i;
        for(int j = 1;j<=26;j++){
           int temp2 = temp-j;
          if(temp2<=26){
            first = i;
            second = j;
            third = temp2;
            flag = 1;
            break;
          }
            

        }
        if(flag ==1 ){
            break;
        }
       
    }
    cout<<arr[first]<<arr[second]<<arr[third]<<endl;
   
}
    return 0;
}