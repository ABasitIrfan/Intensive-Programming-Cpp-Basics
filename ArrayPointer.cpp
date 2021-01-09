#include<conio.h>
#include<stdio.h>
int *sum(int a[]);
main()
{
	int a[10],i,sum1=0;
	//printf("Sum: %d",sum1);
	a[10]=*sum(a);
	sum1=0;
	for(i=0;i<10;i++)
	{
		sum1=sum1+a[i];
		//printf("Sum: %d",sum1);
	}
	printf("Sum: %d",sum1);
	//sum(a);
}
int *sum(int a[])
{
	int i,sum1=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	return a;
}
