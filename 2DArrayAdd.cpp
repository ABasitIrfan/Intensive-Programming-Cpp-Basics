#include<conio.h>
#include<stdio.h>
main()
{
	int a[3][3]={1,4,7,2,5,8,2,6,9},b[3][3]={1,2,3,1,2,3,1,2,3},r[3][3],i,j;
	printf("1st Matrix \n");
	
	//a
/*	a[0][0]=1;
	a[1][0]=4;
	a[2][0]=7;
     
	 a[0][1]=2;
	a[1][1]=5;
	a[2][1]=8;	
	
	a[0][2]=3;
	a[1][2]=6;
	a[2][2]=9;
	
	
		//b
	b[0][0]=1;
	b[1][0]=2;
	b[2][0]=3;
     
	 b[0][1]=1;
	b[1][1]=2;
	b[2][1]=3;	
	
	b[0][2]=1;
	b[1][2]=2;
	b[2][2]=3;*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			//printf("%d ",b[i][j]);
		}
		printf("\n");
		
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		//	printf("%d ",a[i][j]);
		printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	int count=0;
for(i=0;i<3;i++)
{
	while(count<3)
		{
		for(j=0;j<3;j++)
		{
		r[i][count]=r[i][count]+(a[i][j]*a[j][i]);
		}	
		count++;
	}
	count=0;
		printf("\n");
}	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		//	printf("%d ",a[i][j]);
		printf("%d ",r[i][j]);
		}
		printf("\n");
	}
	
	
	
}
}

