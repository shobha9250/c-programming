#include<stdio.h>
#include<conio.h>
int main()
{
int n=1,i,r=1;
clrscr();
	while(n<=300)
	{
	  i=2;
	  while(i<n)
	  { r=n%i;
	   i=i+1;
	   if(r==0)
	   {
	   break;
	   }
	   else if(r!=0)
	   {
	   printf("%d\t",n);
	   break;
	   }
	   }
	  n=n+1;
	  }
getch();
return 0;
}