#include<stdio.h>
#include<string.h>
char invert(char a[]);
int main()
{
	printf("Please input a string. No longer than 100 characters in total.\n");
	char input[101];
	gets_s(input, 100);
	int strLength = 0;
	int i = 0;
	int j = 0;
	char temp;
	strLength=strlen(input);
	j = strLength - 1;
	while (j > i)
	{
		temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		j--;
		i++;
	}
	printf("The output is \n%s.\n", input);
	return 0;
}