#include <stdio.h>

int main ()
{
	float height, weight, bmi;
	int age;
	
	
	printf ("Please enter your age: \n");
	scanf ("%d", &age);
	
	if (age>=21 && age<=28)
	{
	printf ("Please enter your weight (kg): \n");
	scanf ("%f", &weight);
	
	printf ("Please enter your height (m): \n");
	scanf ("%f", &height);
	
	bmi = weight / (height*height);
	    
	    if (bmi>=18.50 && bmi<=24.99)
	    {
	    	printf ("You can apply for job. BMI: %.2f\n", bmi);
		}
		else
		{
			printf ("You can not apply for job because of BMI. \n");
		}
	
	}
	
	else 
	{
		printf ("You can not aqpply the job because of age. \n");
	}
	

	

	
}
