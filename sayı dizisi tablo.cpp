#include <stdio.h>
#define DIM 10

int main()
{
	int s[DIM];
	int j;
	int sum = 0;
	
	
	for (j=0;j<=DIM-1;j++)//same with 16.
	{
		s[j]=2+2*j;
		sum += s[j];
	}
	
	printf ("%s\t%s\n" ,"Element", "Value");
	
	for (j=0;j<DIM;j++)//16.
	{
		printf ("%d\t%d\n", j, s[j]);
		
	}
	printf("Sum of array elements is %d\n",sum);
	
	return 0;
}

