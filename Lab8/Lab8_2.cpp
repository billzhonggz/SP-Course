#include<stdio.h>
int convertStringInteger(char a);
int main()
{
	//Get the user's input.
	printf("Please input a string. No longer than 20 characters.\n");
	char input[21];
	gets_s(input, 20);
	//Foreach the string. 
	int i;
	int convertReturn[20];
	for (i = 0; i < 21; i++)
	{
		convertReturn[i] = convertStringInteger(input[i]);
	}
	printf("The output is %d.\n",convertReturn);

}

int convertStringInteger(char a)
{
	a = (int)a;
	if (a >= 48 && a <= 57)
	{
		return a;
	}
	else return NULL;
}