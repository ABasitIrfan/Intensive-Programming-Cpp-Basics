#include<conio.h>
#include<stdio.h>
main()
{
	int C,D,E=0;
	printf("Enter The Value C: ");
	scanf("%d",&C);
	printf("Enter The Value D: ");
	scanf("%d",&D);
	E=C;
	C=D;
	D=E;
	printf("\nValue Of C After Swaping: %d",C);
	printf("\nValue Of D After Swaping: %d",D);
}
	
	

