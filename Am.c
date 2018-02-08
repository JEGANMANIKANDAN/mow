#include<stdio.h>
#include<conio.h>
void main()
{
int s,n,w,r;
clrscr();
scanf("%d",&n);
s=0;
w=n;

while(n>0)
{
   r=n%10;
   s=s+r*r*r;
   n=n/10;
   }
if(s==w)
{
printf("Armstrong Number");
}
else
{
printf("Not Armstrong");
}
getch();
}

