#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c,x;
printf("Enter First Number: ");
scanf("%d",&a);
printf("Enter Second Number: ");
scanf("%d",&b);
printf("Enter Third Number: ");
scanf("%d",&c);
x=pow(b,2)-4*a*c;
if(x==0)
printf("%d",x);
else if(x>0)
printf("Roots Are Unequal");
else if(x<0)
printf("Roots Are Imaginary");
else
printf("%d",x);
}
