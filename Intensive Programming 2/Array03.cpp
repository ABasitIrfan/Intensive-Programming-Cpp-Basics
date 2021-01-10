#include<conio.h>
#include<stdio.h>
main()
{
int i,j,k,l,sum;
int a[5][5];
for(i=1;i<=4;i++)
{
	for(j=1;j<=4;j++)
	{
		printf("Enter Elements Of The Matrix[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
}
	for(i=1;i<=4;i++)
{
	for(j=1;j<=4;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
for(k=1;k<=a[i][j];a[i][j]++)
{
sum=a[i][j]+a[i][j];}
printf("\n Sum Of Diagonal Is:%d ",sum);
}

