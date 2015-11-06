#include<stdio.h>
int powerOfTen(int a);
int main()
{
	//Get the user's input.
	printf("Please input a string. No longer than 20 characters.\n");
	char input[21];
	gets_s(input,20);
	char output[21];
	int i;
	int digitCount=0;
	int result=0;
	for (i = 0; i<21; i++)
	{
		output[i] = 0;
	}
	for (i = 0; i<21; i++)
	{
		if (!(input[i] >= 48 && input[i] <= 57))
		{
			break;
		}
		else 
		{
			output[i] = input[i];
			digitCount++;
		}
	}
	for (i = 0; i<21; i++)
	{
		output[i] = output[i] - 48;
	}
	for (i = 0; i < digitCount; i++)
	{
		result = result + (int)output[i] * (powerOfTen(digitCount - i - 1));
	}
	printf("The result is %d.\n",result); 
	return 0;
}

int powerOfTen(int a)
{
	a = 1;
	int i;
	if (a == 0)
		return 1;
	for (i = 0; i < a; i++)
	{
		a = a * 10;
	}
	return a;
}