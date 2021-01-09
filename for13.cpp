#include<stdio.h>
#include<conio.h>
main()
{
int a,b,num=1;
for(a=1;a<=4;a++)
{
	for(b=1;b<=a;b++)
	{
		printf("%d",num);
		num++;
	}
	printf("\n");
}
}
