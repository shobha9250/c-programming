#include<stdio.h>
#include<conio.h>
int main()
{
long  n,i;
printf("Enter the number:");
scanf("%d",&n);
i=n;
while(n>=2)
{
n=n-1;
i=i*n;
}
printf("factorial=%d",i);
getch();
return 0;
}
