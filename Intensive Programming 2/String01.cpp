#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
	char str[7],temp;
	int i,j=0;
	printf("Enter String: ");
	gets(str);
	printf("\n");
puts(str);
i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
   printf("\nReverse string is :%s", str);
	
		
}

