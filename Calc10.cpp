#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	char op;
printf("Enter First Number: ");
scanf("%d",&a);
printf("Enter Sencond Number: ");
scanf("%d",&b);
printf("Enter Operator: ");
op=getche();
switch(op)
{
case'+':
	printf("\na+b:%d ",a+b);
	break;
case'-':
	printf("\na-b:%d ",a-b);
	break;
case'*':
	printf("\na*b:%d ",a*b);
	break;	
case'/':
	printf("\na/b:%d ",a/b);
	break;
case'%':
	printf("\na%%b:%d ",a%b);
	break;		
default:
		printf("\nInvalid Operator");
	}
}
