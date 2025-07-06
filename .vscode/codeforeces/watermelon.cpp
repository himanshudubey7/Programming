#include<iostream>

using namespace std;
int main(){

    int w;
    //cout<<" enter of the weight of watermelon "<<endl;
    cin>>w;
    if (w%2!=0)
    {
        cout<<" NO"<<endl;

    }
    else if(w>2 && w%2==0)
    {
        cout<<" YES "<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}