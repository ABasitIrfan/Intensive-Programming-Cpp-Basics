#include<stdio.h>
int main(void)
{
	char ch='c';
	char*chptr=&ch;
	int i=20;
	int*intptr=&i;
	float f=1.2000;
	float*fptr=&f;
	printf("\n[%c],[%d],[%f]\n",*chptr,*intptr,*fptr);
}

