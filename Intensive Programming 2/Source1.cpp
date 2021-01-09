#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int a,order,size,quantity,deal;
	char t,s,f,p,m,l;
	printf("                         WELCOME TO PIZZA HUT");
		printf("                         WELCOME TO PIZZA HUT");
printf("\nDo You Want To Order Deal: ");
scanf("%c",&deal);
if(deal=='y')
{
	printf("HI");
}
else if(deal=='n')
{
	printf("\n\n\t\t\t=========MENU========");
	printf("\n\n\t\t\t     ***PIZZA***");
	printf("\n* Chicken Tikka");
printf("\n* Chicken Supreme");
printf("\n* Chicken Fajita");
printf("\n\nPress T To Order Chicken Tikka");
printf("\nPress P To Order Chicken Supreme");
printf("\nPress F To Order Chicken Fajita");
scanf("\n%c",&order);
system("cls");
if(order=='t')
{
	printf(" \nSmall\t\t\t\t\tRs.300/=");
	printf(" \nMedium\t\t\t\t\tRs.600/=");
	printf(" \nLarge\t\t\t\t\tRs.1000/=");
	printf("\n\nPress S To Order Small");
printf("\nPress M To Order Medium");
printf("\nPress L To Order Large");
scanf("\n%c",&size);
system("cls");
if(size=='s')
{
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Small Chicken Tikka Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",300*quantity);
}
else if(size=='m')
{
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Medium Chicken Tikka Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",600*quantity);
}
else if(size=='l')
{
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
printf("\nYou Ordered %d Large Chicken Tikka Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",1000*quantity);
}
else
printf("\nPlease Only Press The Given Alphabets!");

}
else if(order=='p')
{
printf(" \nSmall\t\t\t\t\tRs.300/=");
	printf(" \nMedium\t\t\t\t\tRs.600/=");
	printf(" \nLarge\t\t\t\t\tRs.1000/=");
	printf("\n\nPress S To Order Small");
printf("\nPress M To Order Medium");
printf("\nPress L To Order Large");
scanf("\n%c",&size);
system("cls");
if(size=='s')
{
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Small Chicken Supreme Pizza",quantity);
	printf("\nPlease Pay Rs %d By Cash or By Card!",300*quantity);
}
else if(size=='m')
{
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Medium Chicken Supreme Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",600*quantity);

}
else if(size=='l'){
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
printf("\nYou Ordered %d Large Chicken Supreme Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",1000*quantity);
}
else
printf("\nPlease Only Press The Given Alphabets!");

}
else if(order=='f')
{
	printf(" \nSmall\t\t\t\t\tRs.300/=");
	printf(" \nMedium\t\t\t\t\tRs.600/=");
	printf(" \nLarge\t\t\t\t\tRs.1000/=");
	printf("\n\nPress S To Order Small");
printf("\nPress M To Order Medium");
printf("\nPress L To Order Large");
scanf("\n%c",&size);
system("cls");
if(size=='s')
{
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
printf("\nYou Ordered %d Small Chicken Fajita Pizza",quantity);
	printf("\nPlease Pay Rs %d By Cash or By Card!",300*quantity);
}
else if(size=='m')
{
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Medium Chicken Fajita Pizza",quantity);
	printf("\nPlease Pay Rs %d By Cash or By Card!",600*quantity);
}
else if(size=='l'){
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");

printf("\nYou Ordered %d Large Chicken Fajita Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",1000*quantity);
}

else
printf("\nPlease Only Press The Given Alphabets!");
}
else
{
printf("\nPlease Only Press The Given Alphabets!");
}
printf("\n\n\n\t\t\tThankYou For Ordering\n\t\t\tContact Us: 111-241-241\n\t\t  DineIn| Take Away| Home Delivery 	");
}
}
