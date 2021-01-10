#include<conio.h>
#include<stdio.h>
main()
{
int i,j,k,l,sum;

int a[3][3];

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("Enter Elements Of The Matrix[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}

int count=0;
	for(j=0;j<3;j++)
	{
		sum= sum+a[j][j];
	}



printf("\n Sum Of Diagonal Is:%d ",sum);
}

