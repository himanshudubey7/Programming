/*
IN THIS VIDEO WE WILL LEARN ABOUT THE STRING CLASS  
*/




#include<iostream>

#include<bits/stdc++.h>//This header file includes all basic header file

using namespace std;
int main(){
    char s1 [10] ="HELLO ";
   // s1 = "students "; //wrong
    strcpy(s1 , "students");
    char s2[20];
    //s2 = s1;//wrong
    strcpy(s2 , s1); 
    char s3[30];
   // s3 = s2+s1;  //wrong
   strcpy(s3 , strcat(s1,s2)); 
    return 0;
}