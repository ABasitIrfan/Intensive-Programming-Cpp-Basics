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
 float per(uit student);

main()
{
	 int i=0;
	 float p;
	  for(i=0;i<3;i++)
	    {
	
	 printf(" enter roll number %d \n",i+1);
	 scanf("%d",&Arrya[i].roll); 
	 
	  printf("\n enter name %d \n ",i+1);
	   scanf("%s",&Arrya[i].Name); 
	  
	  
	   printf("\n enter sem %d \n",i+1);
	    scanf("%d",&Arrya[i].sem); 
	    
	    
	    	 printf(" \n enter marks Of English %d \n",i+1);
	 scanf("%d",&Arrya[i].Eng); 
	 
	  printf("\n enter marks Of Maths %d \n ",i+1);
	   scanf("%d",&Arrya[i].Math); 
	  
	  
	   printf("\nenter marks Of Urdu %d \n",i+1);
	    scanf("%d",&Arrya[i].Urdu); 
	    
	}
	
	
	   
	    
	    for(i=0;i<3;i++)
	    {
	     printf("%d,%s,%d,Eng=%d,Maths=%d,Urdu=%d \n",Arrya[i].roll,Arrya[i].Name,Arrya[i].sem,Arrya[i].Eng,Arrya[i].Math,Arrya[i].Urdu);
	     //printf("\n enter the student for % :");
	     //scanf("%d",&)
		//p=float per();
		}
		int s;
		printf("\n enter the student for %% :");
	     scanf("%d",&s);
		p=per(Arrya[s]);
		printf("\n %% of Student %s = %f",Arrya[s].Name,p);
		
		
	 
	 
}
float per(uit student)
{
	float p;
	p=(student.Eng+student.Math+student.Urdu)*100;
	p=p/300;
	return p;
	
	
}


