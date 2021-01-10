#include<conio.h>
#include<stdio.h>
main()
{
int i,j,k,l,sum;
int a[4][4];
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		printf("Enter Elements Of The Matrix[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
}
	for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
printf("Transpose Of a Matrix Is \n");
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
			printf("%d ",a[j][i]);
	}
	printf("\n");
}
}
		


	

