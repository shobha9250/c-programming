#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
clrscr();
float p,r,n,q,a;
printf("p	q	r	n");
	for(p=1.0,q=1.0,r=1.0,n=1.0;p<=10.0,q<=10.0,r<=10.0,n<=10.0;p++,q++,r++,n++)
	 {
	  printf("%f\t%f\t%f\t%f",p,q,r,n);
	  a=p*(pow((1+r/q),n*q));
	  printf("\na=%f",a);
	 }
getch();
return 0;
}
