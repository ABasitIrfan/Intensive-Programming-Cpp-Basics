#include<stdio.h>
main()
{
	int num[]={24,34,12,44,56,17};
	int i;
	for(i=0;i<=5;i++)
	{
		printf("\naddress=%u",&num[i]);
		printf("\t\telement=%d%d",num[i],*(num+i));
		printf("%d %d",*(i+num),i[num]);
		
	}
}
