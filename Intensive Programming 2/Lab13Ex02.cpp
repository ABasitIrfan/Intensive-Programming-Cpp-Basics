#include<stdio.h>
int main(void)
{
int i=3;
int*j;
j=&i;
printf("\nAddress Of i=%u",&i);
printf("\nAddress Of i=%u",j);
printf("\nAddress Of j=%u",&j);
printf("\nValue Of j=%u",j);
printf("\nValue Of i=%d",i);
printf("\nValue Of i=%d",*(&i));
printf("\nValue Of i=%d",*j);
}
