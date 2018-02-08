#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("Enter the a and b value");
scanf("%d%d",&a,&b);
 
 for(c=a+1;c<b;c++)
 {
 d=0;
 for(d=2;d<c;d++)
 {
     if(c%d<=0)
    {
    e++;
    }
  }
if(e==0)
printf("%d\n");
}

}
