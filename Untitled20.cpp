#include<conio.h>
#include<stdio.h>
main()
{
	int eng=70,urdu=65,isl=80;
	float per1=(eng*100)/100,per2=(urdu*100)/100,per3=(isl*100)/100;
	
	printf("Subject\t  Marks Obtained\t Total Marks\t Percentage 	");
	printf("\nEnglish\t");  printf("\t%d",eng);  printf("\t\t 100");  printf("\t\t %.2f",per1); 
	printf("\nUrdu\t");  printf("\t%d",urdu);  printf("\t\t 100");  printf("\t\t %.2f",per2); 
	printf("\nIslamiat\t"); printf("%d",isl);  printf("\t         100");  printf("\t\t %.2f",per3); 
printf("\nTotal Marks"); printf("\t%d",eng+urdu+isl); printf("    \t\t300"); printf("\t\t%f",(per1+per2+per3)/3);
	
}
