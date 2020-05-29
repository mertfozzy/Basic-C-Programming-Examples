#include <stdio.h>

int main ()

{
	int sayi, i, tektoplam=0, cifttoplam=0, teksayac=0, ciftsayac=0;
	
	for (i=0; i<5; i++)
	{
		printf ("5 adet sayi giriniz: \n");
		scanf ("%d", &sayi);
		
		if (sayi%2==0)
		{
			cifttoplam += sayi;
			ciftsayac++;
		}
		
		else
		{
			tektoplam += sayi;
			teksayac ++;
		}
		
	}
	
	printf ("%d cift sayinin toplami %d, %d tek sayinin toplami %d\n", ciftsayac,cifttoplam,teksayac,tektoplam);	
}
