#include<stdio.h>
#include<conio.h>
main()
{
int temp;
printf("Enter Temprature: ");
scanf("%d",&temp);
if(temp<0)
	printf("Freezing Weather");
}
else if(temp<=10)
{
	printf("Very Cold Weather");
}
else if(temp<=20)
{
	printf("Cold Weather");
}
else if(temp<=30)
{
	printf("Normal In Temprature");
}
else if(temp<=40)
{
	printf("Its Hot");
}
else if(temp>=40)
{
	printf("Its Very Hot");
}
}

