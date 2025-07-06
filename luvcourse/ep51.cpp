/*
BIT MASKING--> BIT + MASK

1. Apple ---> 0
2. Banana -- > 1
3. Mango --> 2
4. Orange -->3

People:
1---> 2,3 ---> 1100--> 12
2---> 0,1,2 --->0111---> 7
3---> 1,3---> 1010 --> 10



Practice ques:
There are N<=5000 workers . Each worker is available during some days of this month
(whic has 30 days ). For each worker , you are given a set of numbers, each from
interval [1, 30] ,representing his / her availability . You need to assign 
an important project to two workers but they will be able to work on the
project only when they are noth available . Find two workers that are best for
the job- maximize the number of days when both these workers are avaliable.


Input:
--> no. of workers
--> no. of days worker-1 will work.                            
--->( day no. on which he will work)



5                   
4                       
1 4 7 9                           
6
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7


*/




#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> masks(n,0);//initilizing the vector with zero .
    int mask = 0;
    for(int i =0;i<n;i++)
    {
        int num_workers;//this denotes how many days the worker will work
        cin>> num_workers;
        for(int j =0;j<num_workers;++j)
        {
            int day ;
            cin>> day;
           mask = (mask|(1<<day));
    }
masks[i] = mask;
    }
int max_days= 0;
int person1 = -1;
int person2 = -1;
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++)
        {
            int intersection = (masks[i] & masks[j]);
            int com_days = __builtin_popcount(intersection);
            if(com_days>max_days)
            {
                max_days = com_days;
                person1 = i+1;
                person2 = j+1;

            }
            max_days = max(max_days, com_days);
        

        }
    }
    cout<<person1<<" "<<person2<<" "<<max_days<<endl;
    
    return 0;
}