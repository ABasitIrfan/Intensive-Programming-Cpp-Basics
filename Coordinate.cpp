#include<stdio.h>
#include<conio.h>
main()
{
int X,Y,a,b;
printf("Value Of X: ");
scanf("%d",&a);
printf("Value Of Y: ");
scanf("%d",&b);
if(a>0&&b>0)
{
	printf("The Coordinate (%d,%d) lies In the first Quadrant",a,b);
}
else if(a<0&&b>0)
{
	printf("The Coordinate (%d,%d) lies In the Second Quadrant",a,b);
}
else if(a<0&&b<0)
{
	printf("The Coordinate (%d,%d) lies In the Third Quadrant",a,b);
}
else if(a<0&&b>0)
{
	printf("The Coordinate (%d,%d) lies In the Second Quadrant",a,b);
}
}


