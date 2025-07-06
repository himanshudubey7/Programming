#include<iostream>

using namespace std;
int main(){
    int n;
    int count = 0;
    int a, b,c ;
    cin>>n;
    while(n!=0)
    {
        cin>>a>>b>>c;
        if ((a+b+c)>=2)
        {
            count ++;
        }




        n--;
    }
    cout<<count<<endl;

    return 0;
}