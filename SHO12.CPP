#include<stdio.h>
#include<conio.h>
int main()
{
float x,i,y;
printf("y	x	i");
	for(y=1.0;y<=6.0;y++)
	{
	 for(x=5.5;x<=12.5;x=x+0.5)
	 {
	  i=2+(y+0.5*x);
	  printf("\n%f\t%f\t%f",y,x,i);
	 }
	}
getch();
return 0;
}
