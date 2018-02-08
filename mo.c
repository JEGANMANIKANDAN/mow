#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter the a value ");
scanf("%d",&a);
printf("Enter the b value");
scanf("%d",&b);

for(i=a+1;i<b;i++)
{
    if(a%2==0)
    {
        printf("%d");
    }
}
getch();
}
