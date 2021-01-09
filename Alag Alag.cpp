#include<conio.h>
#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h,i,j;
	printf("Enter A Five Digit Number: ");
	scanf("%d",&a);
	b=a/10000;
	printf("1st Digit: %d",b);
	c=a%10000;
	d=c/1000;
	printf("\n2nd Digit: %d",d);
	e=a%1000;
	f=e/100;
	printf("\n3rd Digit: %d",f);
	g=a%100;
	h=g/10;
	printf("\n4th Digit: %d",h);
	i=a%10;
	j=i/1;
	printf("\n5th Digit: %d",i);
	printf(" \nThe Sum Is : %d",b+d+f+h+i);
	
	
}
