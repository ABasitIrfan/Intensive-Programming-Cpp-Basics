#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,d,e,f,g,h,i,j;
	printf("Value Of A: ");
	scanf("%f",&a);
	printf("\nValue Of B: ");
	scanf("%f",&b);
	printf("\nValue Of C: ");
	scanf("%f",&c);
//(-b+((b^2 -4AC)^1/2))/2A
	d=(pow(b,2)-4.0*c*a);
	e=sqrt(d);
	f=-b+(e);
	g=2.0*a;
	h=f/g;
	printf("\n%f",h);
	//(-b-((b^2 -4AC)^1/2))/2A
	i=-b-(e);
    j=i/g;
	printf("\n%f",j);
}

