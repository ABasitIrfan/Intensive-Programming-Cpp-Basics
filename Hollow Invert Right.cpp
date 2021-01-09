#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=5;b>=a;b--)
		{
		if(a==2&&(b==4||b==3))
    {
		printf(" ");
	}
		else if(a==3&&(b==4))
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
