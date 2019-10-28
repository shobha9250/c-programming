#include<stdio.h>
#include<conio.h>
int main()
{
int n,d,r;
printf("Enter the number:");
scanf("%d",&n);
d=1;
	while(d!=0)
      {	d=n/8;
	r=n%8;
	n=d;

	printf("\nRemainders:%d",r);
	}
getch ();
return 0;
}
