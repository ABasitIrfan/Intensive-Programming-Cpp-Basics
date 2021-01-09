#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int *Array (int a[]);
main()
{
	int a[5]={1,5,3,4,2},b,d,c,i,j,k;
	for(b=0;b<5;b++)
	{
	printf("%d \t",a[b]);
    }
    
    
   a[5]=*Array(a);
   
   
   printf("\n\n\n",a[b]);
   
   	for(b=0;b<5;b++)
	{
	printf("%d \t",a[b]);
    }

   
}
int *Array (int a[])
{
	int temp=0,b,i,j,k;
		for(j=0;j<5;j++)
	{
		for(k=j+1;k<5;k++)
		{
			
		if(a[j]<a[k])
		 {
		 	temp=a[j];
		 	a[j]=a[k];
		 	a[k]=temp;
		 }
		 
		 
		}
		
		
}
return a;
	

	
}
