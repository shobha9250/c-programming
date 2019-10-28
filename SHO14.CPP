#include<stdio.h>
#include<conio.h>
int main()
{
int i;
float s,x,k;
printf("Enter value of x:");
scanf("%f",&x);
k=x/(x-1);
s=0;
	for(i=2;i<=7;i++)
	{
	 s=k+s+0.5*pow(k,i);
	 }
printf("s=%f",s);
getch();
return 0;
}






