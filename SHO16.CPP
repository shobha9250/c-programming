#include<stdio.h>
#include<conio.h>
#include<math.h>
{
float n,i,j,k,y;
	for(n=1.0;n<=10000.0;n++)
	{
	 for(i=1.0;i<=50.0;i++)
	 {
	  for(j=1.0;j<=50.0;j++)
	  {
	  if(n=pow(i,3)+pow(j,3))
	  printf("\n%f=%f+%f",n,i,j);
	  }
	  }
	 for(k=1.0;k<=50.0;k++)
	 {
	  for(y=1.0;y<=50.0;y++)
	  {
	   if(n=pow(k,3)+pow(y,3))
	   printf("\n%f=%f+%f",n,k,y);
	   }
	   }
	   if(i!=j&&i!=k&&i!=y&&k!=j)
	    printf("\nn s a r no.");
	    }
getch();
return 0;
}
