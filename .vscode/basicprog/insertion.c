#include<stdio.h>
void insertionsort(int ar[] , int n){
    int i  , key , j;
    for(int i = 1;i<n;i++){
        key = ar[i];
        j = i-1;
        while(j>=0 && ar[j]>key){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i =0;i<n;i++){
        scanf("%d", &ar[i]);
    }
    insertionsort(ar , n);
    for(int i = 0;i<n;i++){
        printf("%d\n" , ar[i]);
    }
}