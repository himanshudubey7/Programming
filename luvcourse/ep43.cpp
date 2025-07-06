/*
Lumberjack Mirko needs to chop down M metres of wood. 
It is an easy job for him since he has a nifty new woodcutting machine that can 
take down forests like wildfire. However, Mirko is only allowed 
to cut a single row of trees.

Mirko‟s machine works as follows: 
Mirko sets a height parameter H (in metres), and the machine
 raises a giant sawblade to that height and cuts off all tree parts higher 
 than H (of course, trees not higher than H meters remain intact).
  Mirko then takes the parts that were cut off. For example, 
  if the tree row contains trees with heights of 20, 15, 10, and 17 metres,
   and Mirko raises his sawblade to 15 metres, the remaining tree heights
    after cutting will be 15, 15, 10, and 15 metres, respectively, 
    while Mirko will take 5 metres off the first tree and 
    2 metres off the fourth tree (7 metres of wood in total).

Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary.
 That‟s why he wants to set his sawblade as high as possible.
  Help Mirko find the maximum integer height of the sawblade that still
   allows him to cut off at least M metres of wood.





*/


#include<bits/stdc++.h>

using namespace std;

const int N =1e6+10;
int n;
long long m;
long long trees[N];

bool isWoodsufficient(int h){// boolean function
    long long wood=0;
    for(int i=0;i<n;i++)
    {
        if(trees[i]>=h)
        {
            wood+=(trees[i]-h);// wood = wood + (trees[i]-h)
        }
    }
    return wood>=m;    /*      SHORT FORM OF --> if(wood>=m){
                                   return true;
                                   }
                                   else return false; */
                                     


}


int main(){
    cin>>n>>m;//n - no. of trees  m -> amt of wood he needs
    for(int i=0;i<n;i++)
    {
        cin>>trees[i];// to store ht. of n trees
    }
    long long lo=0, hi = 1e9/*max ht of a tree*/,mid;
    //T T T T T F F F F 
    while(hi-lo>1){
        mid = (hi+lo)/2;
        if(isWoodsufficient(mid)){
            lo =mid;
        }else{
            hi = mid-1;
        }

    }
    if(isWoodsufficient(hi)){
        cout<<hi<<endl;
    }
    else 
    {
        cout<<lo<<endl;
    }
    
    return 0;
}