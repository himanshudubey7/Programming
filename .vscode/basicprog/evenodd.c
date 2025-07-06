#include<stdio.h>
#include<string.h>



int main(){
    char  s[50];
    printf("enter your string\n");
    fgets(s,50,stdin);
    int v = 0;
    int c  = 0;
    for(int i= 0;s[i] != '\0';i++)
    {
        if(s[i]=='a' || s[i]== 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u')
        {
            ++v;
        }
        else if(s[i] == ' ')
        {
            continue;
        }
        else
        ++c;
    }
    printf("no. of vowels = %d\n",v);
    printf("no. of consonents = %d",c);
    return 0;
}