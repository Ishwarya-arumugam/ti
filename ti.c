#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
clrscr();
scanf("%d %d",&a,&b);
printf("\nBefore swapping values are: %d %d",a,b);
if(a!=b)
{
t=a;
a=b;
b=t;
printf("\nAfter swapping the values are: %d %d",a,b);
}
getch();
}
