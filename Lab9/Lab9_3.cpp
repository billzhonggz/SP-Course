#include<stdio.h>
#include<stdlib.h>
int zeroInBinary(int n);
int main()
{
	//Get user's input.
	printf("Please input a positive integer.\n");
	int input;
	scanf("%d", &input);
	int zeroInBinaryReturn = 0;
	//Judge input is positive or not.
	if (input < 0)
		printf("Invalid input!\n");
	else
	{
		//Call function zeroInBinary.
		zeroInBinaryReturn = zeroInBinary(input);
		//Print out the result.
		printf("The factorial of %d is %d.\n", input, facReturn);
	}
	return 0;
}

int zeroInBinary(int n)
{
	int binary = 0;
	//Convert a decimal number to binary.
	if (n / 2 == 0 || n / 2 == 1 && n % 2 == 0)
		return n;
	binary = zeroInBinary(n - 1) / 2;
	return binary;
}