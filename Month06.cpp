#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b,c,month;
printf("Enter Month: ");
scanf("%d",&month);
switch(month)
{

case 1:
	printf("Month Is January And There Are 31 Days");
	break;
case 2:
	printf("Month Is February And There Are 28 Days");
	break;
case 3:
	printf("Month Is March And There Are 31 Days");
	break;
case 4:
	printf("Month Is April  And There Are 30 Days");
	break;
case 5:
	printf("Month Is May And There Are 31 Days");
	break;
case 6:
	printf("Month Is June And There Are 30 Days");
	break;
case 7:
	printf("Month Is July And There Are 31 Days");
	break;
case 8:
	printf("Month Is August And There Are 31 Days");
	break;
case 9:
	printf("Month Is September And There Are 30 Days");
	break;
case 10:
	printf("Month Is October And There Are 31 Days");
	break;
case 11:
	printf("Month Is November And There Are 30 Days");
	break;
case 12:
	printf("Month Is December And There Are 31 Days");
	break;
deafult:
	printf("Enter Numbers Till 12");
}
}
