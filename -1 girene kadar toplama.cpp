#include <stdio.h>

int main ()
{
	float price, total=0,  highestPrice, average;
	int counter=0;
	
	while (price != -1)
	{
	printf ("Enter prices, (to stop -1) : \n");
	scanf ("%f", &price);
	counter++;
	
	total += price;
	average = total / counter;


	}
	printf ("Highest : %.2f\n", highestPrice);
	printf ("You entered %d price, total cost is %.2f, average is %.2f .\n", counter, total, average);
}
