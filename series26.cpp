#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,x,num,Y,count=0,ONE=1;
	printf("Input The Value Of X: ");
	scanf("%d",&x);
	printf("Input The Number Of Terms: ");
	scanf("%d",&num);
	for(a=0;a<num;a++)
	{
	a+=1;
	num++;
		Y=pow((x*ONE),a);
		count=count+Y;
		printf("\n%d",Y);
		if(ONE==1)
		{
			ONE=-1;
		}
		else
		{
			ONE=1;
		}
	}
	printf("\n THE SUM IS %d",count);
}


