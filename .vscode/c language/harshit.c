#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
	int x;
	int y;
	int a;
	
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&a);
if (a>=x && a<y)

{
    printf("YES");
}
else{
    printf("NO");
}
t--;
    }


	return 0;
}




        