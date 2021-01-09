#include<stdio.h>
#include<conio.h>
main()
{
int a,b,num,count=1;
printf("Enter Number: ");
scanf("%d",&num);
for(a=num;a>=1;a--)
{
	count=count*a;	
}
printf("Factorial Of %d Is %d",num,count);
}

