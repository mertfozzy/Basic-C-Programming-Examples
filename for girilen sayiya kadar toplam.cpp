#include <stdio.h>

int main ()

{
	int sayi, i;
	float toplam=0;
	
	printf ("sayi giriniz : \n");
	scanf ("%d", &sayi);
	
	for (i=1; i<=sayi; i++)
	{
		toplam += (float) (i + 1) / i;
	}
	
	printf ("Girilen sayiya kadar toplam : %f\n ", toplam);
	
}
