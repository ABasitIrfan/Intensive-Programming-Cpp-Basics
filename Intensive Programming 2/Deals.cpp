#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{int a,i,b;
	//for(i=0;i<6;i++)
	printf("          =======Premium Deals=======\n");
printf("Deal 01:\t\t\tRs:300/= \n*)6'FlatBread\n*)Half Potion Appetizer*)1 Small Drink\n\n");
printf("Deal 02:\t\t\tRs:400/= \n*)20 Inch Slice\n*)Half Portion Appetizer\n*)1 Small Drink\t\t\t\n\n");
printf("Deal 03:\t\t\tRs:750/= \n10 Inch Medium\n*)Half Portion Appetizer\n*)2 Small Drinks\n*)2 Sauces\n\n");
printf("Deal 04:\t\t\tRs:2000/= \n 20 Inch Full\n*)Full Portion Appetizer\n*)1 Large Drink\n*)5 Sauces\n\n");
printf("          =======MidNight Deals=======\n");
printf("\nDeal 01:\t\t\tRs:300/= \n*)20 Inch Slice\n*)1 Small Drink\n\n");
printf("Deal 02:\t\t\tRs:600/= \n*)20 Inch Half\n*)1 Large Drink\n*)2 Sauces\n\n");
printf("Enter The Number Of Deals You Want: ");
scanf("%d",&a);
//for(i=1;i<=a;i++)
//{
printf("\nPress z To Order Premium Deal 01");
printf("\nPress y To Order Premium Deal 02");
printf("\nPress x To Order Premium Deal 03");
printf("\nPress q To Order Premium Deal 04");
printf("\nPress w To Order MidNight Deal 01");
printf("\nPress e To Order MidNight Deal 01");
b=getche();
if(b=='z')
{
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 01",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",300*a);
}
else if(b=='y')
{
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 02",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",400*a);
}
else if(b=='x')
{
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 03",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",750*a);
}
else if(b=='q')
{
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 01",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",2000*a);
}
else if(b=='w')
{
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 01",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",300*a);
}
else if(b=='e')
{
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 01",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",600*a);
}
else
{
printf("\nPlease Only Press The Given Alphabets!");
}
printf("\n\n\n\t\t\tThankYou For Ordering\n\t\t\tContact Us: 111-241-241\n\t\t  DineIn| Take Away| Home Delivery 	");
}




