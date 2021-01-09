#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add1();
void add2(int a,int b);
int add3();
float add4(float a,float b);
main()
{
	int a,b;
	float d;
	add1();
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	add2(a,b);
	a=add3();
	printf("\n%d",a);
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	d=add4(a,b);
	printf("\n%f",d);
	
}
void add1()
{
	int a,b;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	printf("\n%d",a-b);
	
}
void add2(int a,int b)
{
	printf("\n%d",a+b);
	
}
int add3()
{
	int a,b,c;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	c=a*b;
	return c;	
}
float add4(float a,float b)
{
	float c;
	c=a/b;
	return c;
}

