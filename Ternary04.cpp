#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,x;
printf("Enter First Number: ");
scanf("%d",&a);
printf("Enter Second Number: ");
scanf("%d",&b);
printf("Enter Third Number: ");
scanf("%d",&c);
x=(a>b?(a>c?a:c):(b>c?b:c));
printf("%d",x);
}
