#include<conio.h>
#include<stdio.h>
main()
{
	int num=65,b,on=0,d,a,p;
printf("Enter Range: ");
scanf("%d",&d);
for(a=65;a<=d;a++)
{
for(p=d;p>=a;p--)
{
	printf(" ");

}
for(b=1;num!=64;b++)
{
	printf("%c",num);
	if(num==a)
	{
		on=1;
		
	}
	if(on==1)
	{
		num--;
	}
	else
	{
		num++;	
	}
	
	
}

printf("\n");
on=0;
num=65;
}
}





