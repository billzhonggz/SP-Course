#include<stdio.h>
#include<string.h>
char invert(char a[]);
int main()
{
	//Get user's input.
	printf("Please input a string. No longer than 100 characters in total.\n");
	char input[101];
	gets_s(input, 100);
	char output[101];
	output[101]=invert(input);
	printf("The output is %s.\n", output);
	return 0;
}

char invert(char a[])
{
	int i;
	int length;
	length = strlen(a);
	char t;
	for (i = 0; i < length / 2; i++)
	{
		t = a[i];
		a[i] = a[length - 1 - i];
		a[length - 1 - i] = t;
	}
	return a[];
}