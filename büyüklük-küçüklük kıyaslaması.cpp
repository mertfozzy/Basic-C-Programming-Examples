#include <stdio.h>

void sirali(int sayi1, int sayi2)
{
	if (sayi1<sayi2)
	{
		printf ("%d < %d\n",sayi1,sayi2);
	}
	else if (sayi2<sayi1)
	{
		printf ("%d < %d\n",sayi2,sayi1);
	}
	else
	{
		printf ("%d = %d\n",sayi1,sayi2);
	}
	
}
int main ()
{
	int sayi1, sayi2;
	
	printf ("Enter two numbers: \n");
	scanf ("%d%d", &sayi1, &sayi2);
	
	sirali (sayi1, sayi2);
}
