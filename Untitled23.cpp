#include<conio.h>
#include<stdio.h>
main()
{
	long int tp=80000,totalmen,totalliteracy,literatemen,totalwomen,ilm,ilw,literatewomen;
	totalmen=(52.0/100.0)*tp;
	totalliteracy=(48.0/100.0)*tp;
	literatemen=(35.0/100.0)*tp;
	literatewomen=totalliteracy-literatemen;
	totalwomen=tp-totalmen;
	ilm=totalmen-literatewomen;
	ilw=totalwomen-literatewomen;
	printf("\n Total Number Of Illiterate men are %d",ilm);
	printf("\n Total Number Of Illiterate women are %d",ilw);
}
	
