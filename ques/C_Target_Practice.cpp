//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int score = 0;
        char ar[10][10];
        
        for(int i = 0;i<10;i++){
            for(int j= 0;j<10;j++){
                cin>>ar[i][j];
                if(i == 0 || i == 9 || j == 0 ||j ==9){
                if(ar[i][j] == 'X'){
                    score++;
                }
                }
                else if(i == 1 || i == 8 || j == 1 ||j ==8){
                    if(ar[i][j] == 'X'){
                    score+=2;
                }
                }
                else if(i == 2 || i == 7 || j == 2 ||j ==7){
                    if(ar[i][j] == 'X'){
                    score+=3;
                }
                }
                else if(i == 3 || i == 6 || j == 3 ||j ==6){
                    if(ar[i][j] == 'X'){
                    score+=4;
                }
                }
                else if(i == 4 || i == 5 || j == 4||j ==5){
                    if(ar[i][j] == 'X'){
                    score+=5;
                }
                }
                
                
               
            }
          
            
        }
        cout<<score<<endl;
    }
    return 0;
}