#include<conio.h>
#include<stdio.h>
main()
{
	int cy,yoj,A;
	printf("Enter Current Year: ");
	scanf("%d",&cy);
	printf("Enter The Year In Which Employee Joined: ");
	scanf("%d",&yoj);
	A=cy-yoj;
	if(A>3)
	{
		printf("You Are Eligible For The Bonus Of Rs 5000/-");
	}
	else
	{
		printf("You Are Not Eligible For The Bonus");
	}
}
