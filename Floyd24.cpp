#include<conio.h>
#include<stdio.h>
main()
{
	int a,b,num=1;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",num);
			if(num==1)
			num=0;
			else
			num=1;
		}
		printf("\n");

	}
}

