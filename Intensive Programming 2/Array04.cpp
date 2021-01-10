#include<conio.h>
#include<stdio.h>
main()
{
int i,j,k,l,sum1,sum2,con=0;
int a[4][4];
int sum[4];
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
//sum=a[1][1]+a[1][2]+a[1][3];
//sum1=a[2][1]+a[2][2]+a[2][3];
//sum2=a[3][1]+a[3][2]+a[3][3];


for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		
	sum[i]= sum[i] + a[i][j];
	
    }
}


for(i=1;i<=3;i++)
{
	if(sum[i]==sum[i+1] && i< 3)
	{
		con++;
	}
}
printf("%d",con);

if(con+1==3)
{
	printf("The Matrix is Magic Matrix");
	}
	else
	printf("It is not a magic matrix");
}
//printf("\n Sum Of Diagonal Is:%d ",sum);



