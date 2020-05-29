#include <stdio.h>

int main ()

{
	int sayi, faktoriyel=1 , i;
	
	printf ("Sayi giriniz: \n");
	scanf("%d", &sayi);
	
	for (i=1; i<=sayi; i++)
	{
		faktoriyel *= i;
	}

	printf ("Faktoriyel : %d\n", faktoriyel);
	
}
