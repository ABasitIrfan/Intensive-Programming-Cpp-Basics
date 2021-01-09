#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,num=1;
for(a=1;a<=4;a++)
{
	for(b=4;b>=a;b--)
	{
		printf(" ");
	}
	for(c=1;c<=a;c++)
	{
	//	printf(" %d",a);
		printf("* ");
		num++;
	}
	printf("\n");
}
}
