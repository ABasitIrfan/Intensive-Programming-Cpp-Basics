#include<stdio.h>
#include<conio.h>
main()
{
int num;
printf("Enter Any Number: ");
scanf("%d",&num);
if(num>0)
printf("1");
else if(num==0)
printf("0");
else if(num<0)
printf("-1");
else
printf("Invalid");
}
