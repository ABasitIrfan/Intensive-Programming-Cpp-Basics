#include<conio.h>
#include<stdio.h>
struct uit
{
	int roll;
	char Name[10];
	int sem;
	
	int Eng;
	int Math;
	int Urdu;
} 
 Arrya[3];

main()
{
	 int i=0;
	  for(i=0;i<3;i++)
	    {
	
	 printf(" enter roll number %d \n",i+1);
	 scanf("%d",&Arrya[0].roll); 
	 
	  printf("\n enter name %d \n ",i+1);
	   scanf("%s",&Arrya[0].Name); 
	  
	  
	   printf("\n enter sem %d \n",i+1);
	    scanf("%d",&Arrya[0].sem); 
	    
	    
	    	 printf(" \n enter marks Of English %d \n",i+1);
	 scanf("%d",&Arrya[0].roll); 
	 
	  printf("\n enter marks Of Maths %d \n ",i+1);
	   scanf("%s",&Arrya[0].Name); 
	  
	  
	   printf("\nenter marks Of Urdu %d \n",i+1);
	    scanf("%d",&Arrya[0].sem); 
	    
	}
	
	
	   
	    
	    for(i=0;i<3;i++)
	    {
	     printf("%d,%s,%d,Eng=%d,Maths=%d,Urdu=%d \n",Arrya[i].roll,Arrya[i].Name,Arrya[i].sem,Arrya[i].Eng,Arrya[i].Math,Arrya[i].Urdu);
		}
	 
	 
}


