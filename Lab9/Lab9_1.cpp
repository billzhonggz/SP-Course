#include<stdio.h>
int fac(int n);
int main()
{
	//Get user's input.
	printf("Please input a positive integer.\n");
	int input;
	scanf("%d", &input);
	int facReturn = 0;
	//Judge input is positive or not.
	if (input < 0)
		printf("Invalid input!\n");
	else
	{
		//Call function fac.
		facReturn = fac(input);
		//Print out the result.
		printf("The factorial of %d is %d.\n", input, facReturn);
	}
	return 0;
}

int fac(int n)
{
	int factorial = 0;
	//Base case.
	if (n <= 1)
		return 1;
	//Recursive step.
	factorial=n*fac(n - 1);
	return factorial;
}