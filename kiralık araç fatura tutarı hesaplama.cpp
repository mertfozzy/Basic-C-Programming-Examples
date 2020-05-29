#include <stdio.h>

int main ()
{
	int gun, aractipi; 
	float km, gunFiyat=0, kmFiyat=0, toplam=0;
	
	
	printf ("Aracin kiralandigi gun sayisini giriniz: \n");
	scanf ("%d", &gun);
	
	printf ("\nAracla yapilan km degerini giriniz: \n");
	scanf ("%f", &km);
	
	printf ("\nArac tipini seciniz: \n[1]-Arazi araci\t[2]-Binek araci\t[3]-Spor araci\n");
	scanf ("%d", &aractipi);
	
	switch (aractipi)
	{
		case 1 : 
		gunFiyat = gun * 60;
		kmFiyat = km * 20;
		break;
		
		case 2: 
		gunFiyat = gun * 32;
		kmFiyat = km * 22;
		break;
		
		case 3:
		gunFiyat = gun * 50;
		kmFiyat = km * 36;
		break;
		
		default : printf("Lutfen dogru secenegi giriniz.");
		break;
	}
	
	toplam = gunFiyat + kmFiyat;
	
	printf ("\n\nBorcunuz : %.2f TL'dir.\n", toplam);
	
}
