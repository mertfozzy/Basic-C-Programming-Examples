#include <stdio.h>

int main ()

{
	int sayi1, sayi2, i, bigest, smallest;
	
	printf ("Iki sayi giriniz : \n");
	scanf ("%d%d", &sayi1, &sayi2);
	
	if(sayi1<sayi2)
	{
	  for (i=sayi1 ; i<=sayi2 ; i++ )
	   {
		printf ("%d\t", i);
	   }
	}
	
	else
	{
		for (i=sayi2 ; i<=sayi1 ; i++ )
	   {
		printf ("%d\t", i);
	   }
	}
	
}
