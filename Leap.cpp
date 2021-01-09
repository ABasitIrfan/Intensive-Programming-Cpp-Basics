#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
printf("Enter Year: ");
scanf("%d",&a);
if(a%4==0)
{
	printf("This Year Is Leap Year");
}
else
{
	printf("It Is Not Leap Year");
}
}
