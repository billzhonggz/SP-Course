#include<stdio.h>
int power2(int n);
int main()
{
	//Get user's input.
	printf("Please input an integer as an exponent of 2.\n");
	int input;
	scanf_s("%d", &input);
	int output = 0;
	//Call function power2.
	output = power2(input);
	//Print out the result.
	printf("The 2 to the power of %d is %d.\n", input, output);
	return 0;
}

int power2(int n)
{
	int power = 0;
	//Set a base case.
	if (n == 0)
		return 1;
	//Set a recursion.
	power = 2 * power2(n - 1);
	return power;
}