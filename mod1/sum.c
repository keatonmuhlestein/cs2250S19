#include <stdio.h>

int main()
{
	int X = 1;
	int Y = 1;

	printf("Enter in an integer value\n");
	scanf("%d", &X);
	printf("X = %d\n", X);

	printf("Please enter in another integer value\n");
	scanf("%d", &Y);
	printf("Y = %d\n", Y);
	printf("The sum of the two values %d and %d is: %d\n", X, Y, X + Y);
	return 0;
}
	
