#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int i,j,k;
	for(i=1;i<=30;i++)
	{
	 for(j=1;j<=30;j++)
	 {
	  for(k=1;k<=30;k++)
	  {
	   if( pow(i,2)==pow(j,2)+pow(k,2))
	    printf("\n%d\t%d\t%d",i,j,k);
	   }
	   }
	   }

getch();
return 0;
}
