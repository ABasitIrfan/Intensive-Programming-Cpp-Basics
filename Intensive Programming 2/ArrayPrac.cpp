#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//int array();
main()
{
	int c[5]={4,3,5,1,2},i,temp=0,j,k;
	for(i=0;i<5;i++)
	{
		printf("%d\n",c[i]);
	}
	
	printf("\n\n\n");
	
	
	for(j=0;j<5;j++)
	{
		for(k=j+1;k<5;k++)
		{
			
		if(c[j]<c[k])
		 {
		 	temp=c[j];
		 	c[j]=c[k];
		 	c[k]=temp;
		 }
		 
		 
		}
		
		
}



	for(i=0;i<5;i++)
	{
		printf("%d\n",c[i]);
	}
}
