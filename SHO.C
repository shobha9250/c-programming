/*CALCULATION INVOLVING UNITS */
#include<stdio.h>
#include<conio.h>
int main()
{
float km,m,cm;
clrscr();
printf("enter distance in km");
scanf("%f",km);
m=1000*km;
cm=100*m;
printf("%fm %fcm",m,cm);
getch();
return 0;
}