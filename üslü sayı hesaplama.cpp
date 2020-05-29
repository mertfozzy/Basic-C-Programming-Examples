#include <stdio.h>
#include <math.h>

int usHesap (int a, int b)
{
	 int usHesap = pow (a,b);
	
	printf ("Cevap:  %d\n",usHesap);
}



int main ()
{
	int sayi, us;
	
	printf ("Sayi giriniz: \n");
	scanf ("%d", &sayi);
	
	printf ("Ussu giriniz: \n");
	scanf ("%d", &us);
	
	usHesap (sayi,us);
}
