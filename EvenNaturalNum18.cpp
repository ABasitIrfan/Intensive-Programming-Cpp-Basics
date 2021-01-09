#include<stdio.h>
#include<conio.h>
main()
{
int a,b,num,count=0;
printf("Enter N Numbers: ");
scanf("%d",&num);
for(a=1;a<=num;a++)
{
//	printf("%d",a);

printf("%d",a*2);
count=count+a*2;


	printf("\n");
}

printf("\nThe Sum Of Even Natural Numbers Upto %d Terms Are : %d",num,count);
}
