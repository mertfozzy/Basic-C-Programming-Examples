#include <stdio.h>

void toplama (int a, int b){
	
	int toplam = a+b;
	printf ("Toplamlari : %d\n",toplam);
}

void cikarma (int a, int b){
	
	int cikarma = a-b;
	printf ("Farklari : %d\n",cikarma);
}

void carpma (int a, int b){
	
	int carp = a*b;
	printf ("Carpimlari : %d\n",carp);
}

void bolme (int a, int b){
	
	float bolum = (float) a/b;
	printf ("Bolumleri : %.3f\n",bolum);
}


int main()
{
	int sayi1, sayi2;
	
	printf ("Iki sayi giriniz: \n");
	scanf ("%d%d", &sayi1, &sayi2);
	
	toplama  (sayi1,sayi2);
	cikarma (sayi1,sayi2);
	carpma  (sayi1,sayi2);
	bolme   (sayi1,sayi2); 
}
