#include <stdio.h>

int main ()

{
	int sayi, faktoriyel=1 , counter =1;
	
	printf ("Sayi giriniz: \n");
	scanf("%d", &sayi);
	
	while (counter<=sayi)
	{
		faktoriyel *= counter ;
		counter++;
	}
	
	printf ("Faktoriyel : %d\n", faktoriyel);
	
}
