 /*calculation of marks*/
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int p,c,m,h,e,tot;
 float per;
 clrscr;
 printf("enter marks of all subjects");
 scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
 tot=p+c+m+h+e;
 per=tot/5;
 printf("total marks=%d\n",tot);
 printf("percentage=%f",per);
 getch();
 return 0;
 }
