#include<stdio.h>
#include<conio.h>

void main()
{
int n;
clrscr();

printf("Enter year to check if it is a leap year or not:");
scanf("%d",&n);

if(n%4 == 0)
{
printf("%d is leap year",n);
}
else
{
printf("%d is not leap year",n);
}
getch();
}