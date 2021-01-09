#include<conio.h>
#include<stdio.h>
main()
{
	int a;
	printf("Please Enter 5 Digit Number: ");
	scanf("%d",&a);
	
  printf("%d",a%10);
  
  a=a/10;
  printf("%d",a%10);
	 
  a=a/10;
  printf("%d",a%10);
 
  a=a/10;
  printf("%d",a%10);
 
  a=a/10;
  printf("%d",a%10);
 }
