#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<a;b++)
		{
			printf(" ");
	}
	
			for(c=1;c<=5;c++)
			{
					if(a==2&&(c==2||c==3||c==4))
				{
					printf(" ");
				}
				else if(a==3&&(c==2||c==3||c==4))
				{
					printf(" ");
				}
				else if(a==4&&(c==2||c==3||c==4))
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		
	
	printf("\n");
}
}
