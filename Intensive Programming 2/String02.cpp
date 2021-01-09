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
//puts(str);
int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
        }
		else{
    printf("%s is palindrome\n", str);
}

}
}
