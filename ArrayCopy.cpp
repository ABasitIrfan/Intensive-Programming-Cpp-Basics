#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,count=0,j,len;
	printf("Lenght: ");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
	for(j=0;j<len;j++)
	{
		printf("\n%d",a[j]);
	}
}

