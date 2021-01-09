#include<conio.h>
#include<stdio.h>
main()
{
	float a,b=1,num,c;
	printf("Input The Number Of Terms: ");
	scanf("%f",&num);
	for(a=1;a<=num;a++)
	{
	c=b/a+c ;
	//printf("\n%f",c);	
	}
	printf("\n1/1+.....1/%.1f",num);
	printf("\nSum Of The Series Is: %f ",c);
}

