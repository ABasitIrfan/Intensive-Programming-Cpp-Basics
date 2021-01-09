#include<conio.h>
#include<stdio.h>
main()
{
	 int a,b=0,num,ans,d=1,count=0;
printf("Enter The Range: ");
scanf("%d",&num);
for(a=1;a<=num;a++)
{
	ans=1+b;
	b=ans*10;
//b=a+d;	
printf("%d ",ans);
count=count+b;
//ans=ans+d;	
//printf("\n%d",b);
}
printf("\n%d",count/10);
}

