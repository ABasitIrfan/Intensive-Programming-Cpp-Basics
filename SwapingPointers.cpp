#include<conio.h>
#include<stdio.h>
main()
{
	int a,*b,c,*d,temp=0;
	printf("1st Number: ");
	scanf("%d",&a);
	printf("2nd Number: ");
	scanf("%d",&c);
	b=&a;
    d=&c;
    temp=*b;
    *b=*d;
    *d=temp;
    printf("\nAfter Swaping A is: %d",*b);
    printf("\nAfter Swaping B is: %d",*d);
}
