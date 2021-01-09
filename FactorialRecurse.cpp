#include<conio.h>
#include<stdio.h>

int f(int);
main()
{
	int a,d;
printf("Enter Number: ");
scanf("%d",&a);
d=f(a);
printf("Factorial is: %d",d);
}
int f(int n)
{
	if(n==1)
	return 1;
	else
	return(n*f(n-1));
}
