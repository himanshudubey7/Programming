#include<stdio.h>
// 4 , 1, 6, 2, 3, 7 
int ar[100];
void merge(int ar[] , int s , int p , int e){
    int i , j , k;
    int n1 = p-s+1;
    int n2 = e-p;


    // crete left and right subarrays;
    int L[n1], R[n2];
     k = s;
    for(int i = 0;i<n1 ;i++){
        L[i] = ar[k++];
    } 
    k = p+1;

    for(int j = 0;j<n2;j++){
        R[j]  =  ar[k++];

    }
//merge two sorted arrays
// 2 , 4, 5, 6 ............ 1 ,3,7,8
//
i = 0, j = 0, k = 1;
while(i<n1 && j <n2){
    if(L[i]<=R[j]){
ar[k] = L[i];
i++;
    }
    else{
        ar[k] = R[j];
        j++;
    }
    k++;
}
while(i<n1){
    ar[k] = L[i];
    i++;
    k++;

}
while(j<n2){
    ar[k] = R[j];
    j++;
    k++;
}


}

void mergeSort(int ar[] , int s , int e ){
    if(s<=e){
        int  p = s+e/2;
        mergeSort(ar, s ,p);
        mergeSort(ar , p+1 , e);


        merge(ar , s , p , e);
        }
}
int main(){
int n;
printf("Enter the number of elements in array: \n");
scanf("%d" , &n);
printf("enter numbers\n");
for(int i = 0;i<n;i++){
    scanf("%d", &ar[i]);
}
int  s = 0;
int e = n-1;
mergeSort(ar, s , e);

printf("the sorted arrays is : \n");
    for(int i = 0;i<n;i++){
        printf("%d\n" , ar[i]);
    }

 



    return 0;
}