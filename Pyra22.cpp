#include<conio.h>
#include<stdio.h>
main()
{
	int a,b;
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=a;b=b+2)
		{
			printf("*");
		}
		printf("\n");
	}
}
