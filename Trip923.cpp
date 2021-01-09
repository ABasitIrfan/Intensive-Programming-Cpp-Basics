#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
int a,b,c,num;
printf("Input The Range: ");
scanf("%d",&num);
for(a=1;a<=num;a++)
{
	b=pow(10,a)-1;
	printf("%d ",b);
	c=c+b;
	
}
printf("\n The Sum: %d",c);
}

