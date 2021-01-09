#include<conio.h>
#include<stdio.h>
main()
{
	int fs,ss,ts;
	printf(" First Side: ");
	scanf("%d",&fs);
		printf(" Second Side: ");
	scanf("%d",&ss);
		printf(" Third Side: ");
	scanf("%d",&ts);
	if(fs==ss&&ss==ts&&ts==fs)
	{
		printf("It is Equilateral Triangle");
	}
	else
	{
		printf("It is not Equilateral Triangle");
	}
}
