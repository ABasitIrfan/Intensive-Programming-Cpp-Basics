#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,count=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	count=count+a[i];
	}
	printf("\nThe Sum Of Array is: %d",count);
	//count=count+1;
}
