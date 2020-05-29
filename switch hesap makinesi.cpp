#include <stdio.h>

int main(void)

{
	int rakam, sayi1, sayi2;
	double toplam, fark, carpim, bolum;
	
	while (1)
	{
	
	printf ("\nBir rakam veya isaret giriniz: \n");
	printf ("(Toplam = 1\t Fark = 2\t Carpim = 3\t Bolum = 4)\n");
	scanf ("%d",&rakam);
	
	
	switch (rakam)
	{
		case 1 : case '+' : 
		
		printf ("Toplamak istediginiz sayilari giriniz: \n");
		scanf ("%d%d", &sayi1, &sayi2);
		toplam = (double) sayi1 + sayi2;
		printf ("Toplam : %.2f\n", toplam);
		break ;
		
		case 2 : 
		printf ("Farkini almak istediginiz sayilari giriniz. \n");
		scanf ("%d%d", &sayi1, &sayi2);
		fark = (double) sayi1 - sayi2;
		printf ("Fark : %.2f\n", fark);
		break ;
		
		case 3 : 
		printf ("Carpmak istediginiz sayilari giriniz: \n");
		scanf ("%d%d", &sayi1, &sayi2);
		carpim = (double) sayi1 * sayi2;
		printf ("Carpim : %.2f\n", carpim);
		break ;
		
		case 4 : 
		printf ("Bolmek istediginiz sayilari giriniz: \n");
		scanf ("%d%d", &sayi1, &sayi2);
		bolum = (double) sayi1 / sayi2;
		printf ("Bolum : %lf\n", bolum);
		break ;
		
		default : 
		printf ("Lutfen 1-4 arasinda rakam giriniz. \n");
		break ;
		
		            
	}

}
}
