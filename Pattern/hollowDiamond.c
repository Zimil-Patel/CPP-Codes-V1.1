// C Program To Print Hollow Diamond
// Pattern using for loop
#include <stdio.h>
int main()
{

	int n = 5, rows, columns;

	// for loop is used to identify
	// the number of rows and
	// it is used to print upper triangle
	for (int i = 1; i <= n; i++){
	
		for (int j = n; j >= i; j--)
			printf("-");

		
		printf("*");
		
		for (int j = 1; j < (i - 1) * 2; j++)
			printf("-");
		
		if(i == 1)
			printf("\n");
		else
			printf("*\n");
	
	}
	
	
	for (int i = n - 1; i >= 1; i--){
	
		for (int j = i; j <= n; j++)
			printf("-");
			
		printf("*");
		
		for (int j = 1; j < (i - 1) * 2 ; j++)
			printf("-");
			
		if(i == 1)
			printf("\n");
		else
			printf("*\n");
	
	}
	return 0;
}
