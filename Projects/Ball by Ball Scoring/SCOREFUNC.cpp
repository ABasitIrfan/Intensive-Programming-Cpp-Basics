#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 //int bowl(int i,int j,char team1[15]="Pakistan",char team2[15]="India",int over[7] );
main()
{
int format=0,over[7],i,j,a,run,count=0,count2=0,rb=0,wicket=0;
	char team1[15]="Pakistan";
char team2[15]="India";
	char wic[7]="w";
printf("                 ************Welcome To SCORE************");
printf("\n1) T-10\n2) T-20\n3) One Day International\n");
printf("\n\nEnter Format (10,20,50): ");
scanf("%d",&format);

//printf("%d",format);
if(format==10)
{system("cls");
printf("\nYou Choosed T-10 Match!");
printf("%d",format);}
else if(format==20)
{system("cls");
printf("\nYou Choosed T-20 Match!");}
else if(format==50)
{system("cls");
printf("\nYou Choosed One Day Match!");}
else if(format==4)
{system("cls");
printf("\nYou Choosed Test Match!");}
else
{system("cls");
printf("Only Enter The Above Given Numbers!");
}
//bowl();

//printf("\n\nEnter First Team: %s ",team1);
//printf("\nEnter Second Team: %s ",team2);
//printf("\n\n\n ==========Pakistan Have Won The Toss And Elected To Bat First!==========\n\n");
///*if(over[j]==8)
//{
//	wicket++;
//}*/
////system("cls");
////printf("%d",format);
//for(i=0;i<=format;i++)
//{
//	//system("cls");
//	printf("Overs Bowled (%d) PAK: %d/%d\n",i,count,wicket);
//	for(j=1;j<=6;j++)
//	{
//		
//
//		//printf("\nOver No %d",j);
//		printf("Runs By Ball (%d.%d): ",i,j);
//		scanf("%d",&over[j]);
//		
///*		if(over[j]==15)
//              {
//	wicket++;
//*/	
//    }
//	//if(wicket==10)
//	//	{
//	//		break;
//		//	printf("The Target by %s Is %d In %d Overs!",team1,count,format);
//	//	}*/
//	for(run=1;run<=5;run++)
//	{
//	count=count+over[run];
//		}
//	system("cls");//	printf("%s Is All Out..The Target Is %d In %d Overs!",team1,count,format);}
//	
//	//break;
//		//if(wicket==10)
//		//{
//		//	break;
//			//printf("%s Is All Out..The Target Is %d In %d Overs!",team1,count,format);
//		//}*/
//	//
////
////	system("cls");
//	
//}
//printf("INNING OVER!..%s scored %d Runs In %d Overs!\n%s Needed %d Runs To Win",team1,count,format,team2,count+1,format);
//}*/
//int bowl(int i,int j,char team1[15]="Pakistan",char team2[15]="India",over[7])
//{
	printf("\n\nEnter First Team: %s ",team1);
printf("\nEnter Second Team: %s ",team2);
printf("\n\n\n ==========Pakistan Have Won The Toss And Elected To Bat First!==========\n\n");
/*if(over[j]==8)
{
	wicket++;
}*/
//system("cls");
//printf("%d",format);
for(i=0;i<=format;i++)
{
	//system("cls");
	printf("Overs Bowled (%d) PAK: %d/%d\n",i,count,wicket);
	for(j=1;j<=6;j++)
	{
		

		//printf("\nOver No %d",j);
		printf("Runs By Ball (%d.%d): ",i,j);
		scanf("%d",&over[j]);
		
/*		if(over[j]==15)
              {
	wicket++;
*/	
    }
	//if(wicket==10)
	//	{
	//		break;
		//	printf("The Target by %s Is %d In %d Overs!",team1,count,format);
	//	}*/
	for(run=1;run<=6;run++)
	{
	count=count+over[run];
		}
	system("cls");//	printf("%s Is All Out..The Target Is %d In %d Overs!",team1,count,format);}
	
	//break;
		//if(wicket==10)
		//{
		//	break;
			//printf("%s Is All Out..The Target Is %d In %d Overs!",team1,count,format);
		//}*/
	//
//
//	system("cls");
	
}
printf("INNING OVER!..%s scored %d Runs In %d Overs!\n%s Needed %d Runs To Win",team1,count,format,team2,count+1,format);
for(i=0;i<=format;i++)
{
	if(count2>count)
	{
		break;
	}
	//system("cls");
	printf("\nOvers Bowled (%d) IND: %d/%d\n",i,count2,wicket);
	for(j=1;j<=6;j++)
	{
		//printf("\nOver No %d",j);
		printf("Runs By Ball (%d.%d): ",i,j);
		scanf("%d",&over[j]);
	if(count2>count)
	{
		j=7;		
	}
/*		if(over[j]==15)
              {
	wicket++;
*/	
    
    
	//if(wicket==10)
	//	{
	//		break;
		//	printf("The Target by %s Is %d In %d Overs!",team1,count,format);
	//	}*/
	for(run=1;run<=6;run++)
	{
	if(count2>count)
	{
		run=7;
		printf("India Wins");
		format=20;	
	}
	count2=count2+over[run];
	}
	
}
if(count>count2)
{
	printf("Pakistan wins");
}
}
}


	
	






	//printf("%s Is All Out..The Target Is %d In %d Overs!",team1,count,format);

//-printf("%d",format);



