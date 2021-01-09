#include<conio.h>
#include<stdio.h>

void f(int a,int b);
main()
{
f(5,20);
}
void f(int a,int b)
{
	if(b>0)
	{
printf("%d\n",a);
a+=2;	
f(a,b-1);
}
}

