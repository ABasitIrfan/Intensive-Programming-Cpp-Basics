#include<conio.h>
#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter Lenght: ");
	scanf("%d",&d);
	for(a=1;a<=d;a++)
	{
		for(b=1;b<d;b++)
		{
			printf(" ");
		}
		for(c=1;c<=d;c++)
		{
			if(a>1&&a<d)
			{
			if(c>1&&c<d)
			{
			printf(" ");
		    }
		    else
		   	{
			printf("*");
			}}
			else
			printf("*");
		}
			printf("\n");
		}

	}




