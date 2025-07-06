#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
char a[3][3];

for (int i = 0; i < 3; i++)                 
{
    for (int j = 0; j < 3; j++)
    {
        cin >> a[i][j]; 
    }   
}
int cnt=0,flag=0,temp=0;

for (int i = 0; i < 3; i++)                 
{
    for (int j = 0; j < 3; j++)
    {
        if (a[i][j]=='A'){
        cnt++;
        }
        else if (a[i][j]=='B'){
            flag++;
        }
        else if (a[i][j]=='C'){
        temp++;
        }  
    }
}
//cout<<cnt<<" "<<flag<<" "<<temp<<endl;
if (cnt<3){
   cout<<"A"<<endl;
}
else if (flag<3){
   cout<<"B"<<endl;
}
else if (temp<3){
   cout<<"C"<<endl;
}
}
}