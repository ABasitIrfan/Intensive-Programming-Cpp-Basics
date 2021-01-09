#include<conio.h>
#include<stdio.h>
main()
{
	float B,y,d,x,z,a,A;
	printf("Enter The value Of B: ");
	scanf("%f",&B);
	printf("Enter The value Of Y: ");
	scanf("%f",&y);
	printf("Enter The value Of D: ");
	scanf("%f",&d);
	printf("Enter The value Of X: ");
	scanf("%f",&x);
	printf("Enter The value Of Z: ");
	scanf("%f",&z);
	a=(2*B*y);
	a=a/(d+1);
	A=x;
	A=A/(3*(z+y));
	a=a-A;
	printf("%f",a);	
}
