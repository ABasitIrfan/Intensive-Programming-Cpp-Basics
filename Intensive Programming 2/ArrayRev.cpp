#include<conio.h>
#include<stdio.h>
main()
{
int a[5],i;
for(i=1;i<=3;i++)
{
	scanf("%d",&a[i]);
}
for(i=3;i>=1;i--)
{
	printf("%d",a[i]);
}
}

