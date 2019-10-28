#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int p,n,z;
char i;
printf("Enter numbers till you want and at last type 'y':");
scanf("%c",&i);
p=0;
n=0;
z=0;
	while(i!=y)
 {	i;
	if(i>0)
	 p=p+1;
	else if(i<0)
	 n=n+1;
	else if(i==0)
	 z=z+1;

}
printf("\nPositive numbers:%d",p);
printf("\nNegative numbers:%d",n);
printf("\nZeroes:%d",z);
getch();
return 0;
}