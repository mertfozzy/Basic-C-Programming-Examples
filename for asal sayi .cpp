#include <stdio.h>

int main ()
{
	int sayi, i, sayac=0;
	
	printf ("Klavyeden sayi giriniz: \n");
	scanf ("%d", &sayi);
	
	for (i=2; i<sayi-1; i++)
	{
		if (sayi % i == 0)
		{
			sayac++;
		}
	}
	
	if (sayac == 0)
	{
		printf ("Sayi asaldir.");
	}
	else 
	{
		printf ("Sayi asal degildir.");
	}
}
