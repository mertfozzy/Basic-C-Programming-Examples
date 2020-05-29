#include <stdio.h>



int square (int y);

int main()
{
	int i;
	for (i=1 ; i<=15 ; i++)
	{
		printf ("%d\n", square (i));
	}
	puts ("\n");
}

int square (int y)
{
	return y*y;
}

