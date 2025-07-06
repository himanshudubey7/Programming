  //----------------------*********memory allocations and using of arrays**********------------
  //****************program description :------>
  // this program lets the user to enter a item id and its related price 
  //program displays the item id and its corresponding price 

#include<iostream>

using namespace std;

class shop{

    int itemid[100];
    int itemprice[100];
    int counter;
    
    public:
    void initcounter(void)
    {
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};


void shop ::setprice(void){

    cout<<" enter item id of item number "<<(counter +1)<<endl;
    cin>>itemid[counter];
    cout<<" enter the price of your item "<<endl;
    cin>>itemprice[counter];
    counter++;
}


void shop :: displayprice(void){

    for(int i =0; i<counter; i++)
    {

        cout<<" the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}