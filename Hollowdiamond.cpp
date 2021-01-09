#include<conio.h>
#include<stdio.h>
main()
{
int a,b,len,x=1,c,check=0;
printf("Length: ");
scanf("%d",&len);
int lenS=len;
for(a=1;a<=(len*2)-1;a++)
{
	for(b=0;b<lenS;b++)
	{
		printf("*");
		
	}
	for(c=1;c<=x;c++)
	{
		printf(" ");
	}
	
		for(b=0;b<lenS;b++)
	{
		printf("*");
		
	}
	if((len*2)-1==x)
	{
	
	check=1;
    }
	
	
	if(check==1)
	{
	
	x=x-2;
	lenS++;
}
	else
	{
	x+=2;
	lenS--;
}
	printf("\n");

}
}


