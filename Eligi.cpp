#include<stdio.h>
#include<conio.h>
main()
{
	int maths,phy,chem,tot,sub;
	printf("Marks In Maths: ");
	scanf("%d",&maths);
	printf("Marks In Physics: ");
	scanf("%d",&phy);
	printf("Marks In Chemistry: ");
	scanf("%d",&chem);
	tot=maths+phy+chem;
	sub=phy+chem;
	if(maths>=65&&phy>=55&&chem>=50)
	{
		printf("You Are Eligible For Admission");
	}
	else if(tot>=180||maths+sub>=140)
	{
		printf("You Are Eligible For Admission");
	}
	else
	{
		printf("You Are Not Eligible");
	}
}
