#include<conio.h>
#include<stdio.h>
main()
{
	int a[6]={30,40,5,10,70,20},i,k,j,o;
	for(i=0;i<=5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n\n\n");
	for(j=0;j<=5;j++)
	{
		for(k=0;k<=5;k++)
		{
			if(a[j]<a[k])
			{
				o=a[j];
				a[j]=a[k];
				a[k]=o;
				
			}
		}
	}
	for(i=0;i<=5;i++)
	{
		printf("\n%d",a[i]);
	}


}

