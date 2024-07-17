#include<stdio.h>
int main()
{
int x,y,z,k;
printf("enter x");
x=scanf("%d");
printf("enter y");
y=scanf("%d");
printf("enter z");
z=scanf("%d");
k=x+y*z/4%2-1;
printf("%d",k);
return 0;


}
