#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Costome
{
	char C_Number[11];
char C_Name[50];
char C_Address[200];

};
struct Costome ARRAY[100];




void Call();
char pizza();
//void PAYMENT(char type,char size);

main()
{
	
	int a,order,size,quantity,deal,C_D;
	char t,s,f,p,m,l,y,n;
	
	/*int costomer=0,FIND=0;
	char p_Number[20],p_Address[200];
		for(;;)
	{

		printf("\nEnter Costomer Number");
		//scanf("%s",&p_Number);
		gets(p_Number);
		
		if(p_Number=="03002414547")
		{
				puts("papa");
		}
		for(C_D=0;C_D<=100;C_D++)
		{
			if(p_Number==ARRAY[C_D].C_Number)
			{
					printf("\nThis Member Is In The Records  ");
					printf("\n Cell Number Is %s ",ARRAY[C_D].C_Number);
					printf("\n Name Is %s ",ARRAY[C_D].C_Name);
					printf("\n Address Is %s ",ARRAY[C_D].C_Address);
				//	p_Address=ARRAY[C_D].C_Address;
					
					FIND=1;
			}
			
			 if(C_D==100&&FIND==0)
			{
					printf("\nThis Member Is Not The Records  ");
						printf("\n Plex Enter Details  ");
							printf("\n Enter Cell Number ");
							gets(ARRAY[costomer].C_Number);
									printf("\n Enter Name ");
							gets(ARRAY[costomer].C_Name);
									printf("\n Enter Address ");
								gets(ARRAY[costomer].C_Address);
								//	p_Address=ARRAY[costomer].C_Address;
								costomer++;
								
							
						
			}
		}*/
		
		
	
	
	
	
	
	printf("                         WELCOME TO PIZZA HUT");
	printf("\nDo You Want To Order Deal (y/n): ");
deal=getche();


if(deal=='y')
{
Call();////////////////////Calling Function////////////////////
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
	size=pizza();//Calling Function
//	 PAYMENT('T',size);
if(size=='s')
{
	printf("Enter Quantity: ");
	scanf("\n%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Small Chicken Tikka Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",300*quantity);
}
else if(size=='m')
{
	printf("Enter Quantity: ");
	scanf("\n%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Medium Chicken Tikka Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",600*quantity);
}
else if(size=='l')
{
	printf("Enter Quantity: ");
	scanf("\n%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
printf("\nYou Ordered %d Large Chicken Tikka Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",1000*quantity);
}
else
printf("\nPlease Only Press The Given Alphabets!");

}





else if(order=='p')
{
size=pizza();//Calling Function
if(size=='s')
{
	printf("Enter Quantity: ");
	scanf("/n%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Small Chicken Supreme Pizza",quantity);
	printf("\nPlease Pay Rs %d By Cash or By Card!",300*quantity);
}
else if(size=='m')
{
	printf("Enter Quantity: ");
	scanf("\n%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Medium Chicken Supreme Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",600*quantity);

}
else if(size=='l'){
	printf("Enter Quantity: ");
	scanf("\n%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
printf("\nYou Ordered %d Large Chicken Supreme Pizza",quantity);
printf("\nPlease Pay Rs %d By Cash or By Card!",1000*quantity);
}
else{
printf("\nPlease Only Press The Given Alphabets!");
}







}else if(order=='f')
{
size=pizza();//Calling Function
if(size=='s')
{
	printf("Enter Quantity: ");
	scanf("\n%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
printf("\nYou Ordered %d Small Chicken Fajita Pizza",quantity);
	printf("\nPlease Pay Rs %d By Cash or By Card!",300*quantity);
}
else if(size=='m')
{
	printf("Enter Quantity: ");
	scanf("\n%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Medium Chicken Fajita Pizza",quantity);
	printf("\nPlease Pay Rs %d By Cash or By Card!",600*quantity);
}
else if(size=='l'){
	printf("Enter Quantity: ");
	scanf("\n%d",&quantity);
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


//printf("Deliver On Address %s ",p_Address);
printf("\n\n\n\t\t\tThankYou For Ordering\n\t\t\tContact Us: 111-241-241\n\t\t  DineIn| Take Away| Home Delivery" );
}

//FIND=0;
//p_Address="";

}



//}
///////////////////////////////////////////////////FUNCTION///////////////////////////////////////////////////

void Call() ///f1
{
	int a,i,b;
	system("cls");
	printf("\n          =======Premium Deals=======\n");
printf("Deal 01:\t\t\tRs:300/= \n*)6'FlatBread\n*)Half Potion Appetizer*)1 Small Drink\n\n");
printf("Deal 02:\t\t\tRs:400/= \n*)20 Inch Slice\n*)Half Portion Appetizer\n*)1 Small Drink\t\t\t\n\n");
printf("Deal 03:\t\t\tRs:750/= \n10 Inch Medium\n*)Half Portion Appetizer\n*)2 Small Drinks\n*)2 Sauces\n\n");
printf("Deal 04:\t\t\tRs:2000/= \n 20 Inch Full\n*)Full Portion Appetizer\n*)1 Large Drink\n*)5 Sauces\n\n");
printf("          =======MidNight Deals=======\n");
printf("\nDeal 01:\t\t\tRs:300/= \n*)20 Inch Slice\n*)1 Small Drink\n\n");
printf("Deal 02:\t\t\tRs:600/= \n*)20 Inch Half\n*)1 Large Drink\n*)2 Sauces\n\n");
printf("Enter The Number Of Deals You Want: ");
scanf("\n%d",&a);
system("cls");
//for(i=1;i<=a;i++)
//{
	printf("\n          =======Premium Deals=======\n");
printf("Deal 01:\t\t\tRs:300/= \n*)6'FlatBread\n*)Half Potion Appetizer*)1 Small Drink\n\n");
printf("Deal 02:\t\t\tRs:400/= \n*)20 Inch Slice\n*)Half Portion Appetizer\n*)1 Small Drink\t\t\t\n\n");
printf("Deal 03:\t\t\tRs:750/= \n10 Inch Medium\n*)Half Portion Appetizer\n*)2 Small Drinks\n*)2 Sauces\n\n");
printf("Deal 04:\t\t\tRs:2000/= \n 20 Inch Full\n*)Full Portion Appetizer\n*)1 Large Drink\n*)5 Sauces\n\n");
printf("          =======MidNight Deals=======\n");
printf("\nDeal 01:\t\t\tRs:300/= \n*)20 Inch Slice\n*)1 Small Drink\n\n");
printf("Deal 02:\t\t\tRs:600/= \n*)20 Inch Half\n*)1 Large Drink\n*)2 Sauces\n\n");
printf("\nPress z To Order Premium Deal 01");
printf("\nPress y To Order Premium Deal 02");
printf("\nPress x To Order Premium Deal 03");
printf("\nPress q To Order Premium Deal 04");
printf("\nPress w To Order MidNight Deal 01");
printf("\nPress e To Order MidNight Deal 01");
b=getche();
if(b=='z')
{
	system("cls");
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 01",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",300*a);
}
else if(b=='y')
{
	system("cls");
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 02",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",400*a);
}
else if(b=='x')
{
	system("cls");
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 03",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",750*a);
}
else if(b=='q')
{
	system("cls");
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 01",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",2000*a);
}
else if(b=='w')
{
	system("cls");
printf("\n\n\t\t\t=========BILL========\n");
printf("You Ordered %d Premium Deal 01",a);
printf("\nPlease Pay Rs %d By Cash or By Card!",300*a);
}
else if(b=='e')
{
	system("cls");
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



char pizza()   ////f2
{
	char size,s,m,l;
	printf(" \nSmall\t\t\t\t\tRs.300/=");
	printf(" \nMedium\t\t\t\t\tRs.600/=");
	printf(" \nLarge\t\t\t\t\tRs.1000/=");
	printf("\n\nPress S To Order Small");
printf("\nPress M To Order Medium");
printf("\nPress L To Order Large");
scanf("\n%c",&size);
system("cls");
return size;
}



/*void PAYMENT(char type,char size)
{
	
		char Chicken[15];
	char Chicken_Tikka[15]="Chicken Tikka" ;
	
  
  if(type=='T')
  {
Chicken;cpy (Chicken,Chicken_Tikka);
  }
  else if(type=='S')
  {
  	//	Chicken_Tikka[15]= {'C', 'h', 'i', 'c', 'k','e','n',' ','S','u','p','r','e','m','e'};
  	
  }
   else if(type=='F')
  {
  	//	Chicken_Tikka[14]= {'C', 'h', 'i', 'c', 'k','e','n',' ','F','a','j','i','t','a'};
  	
  }
	int quantity;
	if(size=='s')
{ 
	printf("Enter Quantity: ");
	scanf("%d",&quantity);
	printf("\n\n\t\t\t=========BILL========\n");
	printf("\nYou Ordered %d Small %s Pizza",quantity,Chicken);
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

}*/





