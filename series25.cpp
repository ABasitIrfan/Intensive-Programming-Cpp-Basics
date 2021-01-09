#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
int a,num,r,x,count=1;
float b;
printf("Enter The Value Of X: ");
scanf("%d",&x);
printf("Input Range: ");
scanf("%d",&r);
for(a=1;a<=r;a++)
{
a+=1;
r++;
//	printf("%d",a); 
	count=count*a;
	b=1+pow(x,a)/count;
}
printf("\nThe Sum Is: %f",b);
}
