#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
 float a,b,c,dis,d,e,f,g,h,i,i1,j,k,l,m;
	printf("Value Of A: ");
	scanf("%f",&a);
	printf("\nValue Of B: ");
	scanf("%f",&b);
	printf("\nValue Of C: ");
	scanf("%f",&c);
	dis=(b*b)-(4*a*c);
if(dis>0)
{

		e=(-b+sqrt(dis));
		f=e/(2*a);
		printf("%.2f",f);
		g=(-b-sqrt(dis));
		h=g/(2*a);
		printf("\n%.2f",h);
	}
	else if(dis==0)
	{
		i=-b/2*a;
		printf("\n%.2f",i);
	}
	
	else if(dis<0)	
	{
	
		j=-1;
		i1=j*sqrt(-dis);
		
		k=i1/(2*a);
		l=i+k;
		printf("===\n%.2f",l);
		m=i-k;
		printf("===\n%.2f",m);
		
   }
	
}
	
	
