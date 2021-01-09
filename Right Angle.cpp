#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(b=5;b>a;b--)
		{
		printf(" ");	
		}
		for(c=1;c<=a;c++)
		{
			printf("*");
		}
		printf("\n");	
		
}
}
