#include<conio.h>
#include<stdio.h>
main()
{
	int op1=0,op2=1,ans,i;
for(i=0;i<=10;i++)
{
	ans=op1+op2;
	//printf("%d\n",ans);
	if(i==0)
	printf("%d\n",op1);
//else if(i==1)
//	printf("%d",op2);
	else
	{
		op1=op2;
		op2=ans;
	}
	printf("%d\n",ans);
}
}
