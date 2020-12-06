#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

/*
Beykoz University - Computer Enginerring
Name: Mert Altuntas
ID : 1804010005
*/

int main()
{
	start:
 	int i, j, rows, columns, a[10][10], Sum = 0;
  
 	printf("\n Please Enter Number of rows and columns  :  \n");
 	scanf("%d %d", &i, &j);
 	
 	if (i==j){
 		
    printf("\n Please Enter the Matrix Elements (one by one) : \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	  
 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
}
	 
	else if (i!=j)
	{
		printf ("\nFor diagonal matrix, row and column has to be equal.\nPlease click enter to try again.\n");
		getch();
        system ("cls");
        goto start;
	}
 	
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}
