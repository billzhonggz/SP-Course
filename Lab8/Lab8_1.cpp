#include<stdio.h>
int stringCompare(char a, char b);
int main()
{
	//Get user's input.
	printf("Please input the first string. No more than 20 characters.\n");
	char input1[21];
	gets_s(input1, 20);
	printf("Please input the second string. No more than 20 characters.\n");
	char input2[21];
	gets_s(input2, 20);
	//Foreach the string. 
	int i;
	int compareReturn = 0;
	int breakCount = 0;
	for (i = 0; i < 21; i++)
	{
		compareReturn = stringCompare(input1[i], input2[i]);
		//Judge the return of the function. When it is 1, make breakCount varible plus 1. 
		if (compareReturn == 1)
		{
			breakCount++;
		}
	}
	//Use breakCount varible to judge these two strings are totally same or not.
	if (breakCount == 0)
	{
		printf("These two strings are same.\n");
	}
	else printf("These two strings are different.\n");
	return 0;
}
//Compare function. If two inputs are same, return a 0, otherwise return a 1.
int stringCompare(char a, char b)
{
	if (a == b)
	{
		return 0;
	}
	else return 1;
}