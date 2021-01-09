#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n In Reverse Order!");
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
