#include<stdio.h>
void modify(int*,int*);
	main()
	{
		int a,b;
		printf("Enter Two Numbers: ");
		scanf("%d%d",&a,&b);
		modify(&a,&b);
		printf("\na and b in the main %d and %d",a,b);
	}
	void modify(int *a,int *b)
	{
		*a=*a*3;*b=*b*3;
		printf("\na and b in function %d and %d",a,b);
	}

