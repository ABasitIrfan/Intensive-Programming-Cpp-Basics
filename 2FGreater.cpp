#include<stdio.h>
#include<conio.h>
main()
{
	int a[4],i,j,temp=0,fi=0;
	printf("Enter Lenght: ");
	scanf("%d",&j);
	
	//	printf("%d \n",temp);
		
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	
	temp=0;
	
	printf("Enter Number You Want to find: ");
	scanf("%d",&fi);
	//printf("%d \n",temp);
	for(i=0;i<=j;i++)
	{
		if(fi==a[i])
		{
	//				printf("%d \n",temp);
		temp++;
	//		printf("%d \n",temp);
	    }
	}
	
	if(temp==0) 
	{	printf("Number Not Exist");}
		else 
		{printf("%d Comes %d Times",fi,temp);
       }
}

	

