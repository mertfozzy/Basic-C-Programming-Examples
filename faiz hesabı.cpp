#include <math.h>
#include <stdio.h>

int main ()
{
	float a;
	float p = 1000;
	int n ;
	float r = 0.05;
	
	printf ("Ana para : %f\n" ,p);
	
	for (n=1; n<=10 ; n++)
	{
		a = (float) p * pow ((1+r),n);
		printf ("%d . yildaki miktar %.2f\n", n, a);
	}
	
	printf ("10 yil sonra birikecek miktar : %.2f", a);
}
