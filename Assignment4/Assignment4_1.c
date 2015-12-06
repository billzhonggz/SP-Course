#include<stdio.h>
int stringCompare(char *str1, char *str2);
int main()
{
	//Get user input.
	printf("Please input the first string.No longer than 100 characters.\n");
	char str1[101];
	gets_s(str1);
	printf("Please input the second string.No longer than 100 characters.\n");
	char str2[101];
	gets_s(str2);
	//Call function. 
	int strCmpReturn;
	strCmpReturn = stringCompare(str1, str2);
	//Judge and print out the result.
	if (strCmpReturn == -1)
		printf("The first string is smaller than the second string.\n");
	if (strCmpReturn == 0)
		printf("Tow strings are equal.\n");
	if (strCmpReturn == 1)
		printf("The first string is bigger than the second string.\n");
	return 0;
}
int stringCompare(char *str1, char *str2)
{
	//Initialize varibles.
	int compareCount = 0;
	int i;
	//Foreach two strings. Compare one by one. 
	//Use varible compareCount to count the total number of "big","small" and "equal".
	for (i = 0; i <= 100; i++)  //"str1[i] == '\0' && str2[i] == '\0'"NO AVALIABLE?
	{
		if (str1[i] < str2[i])
			compareCount--;
		if (str1[i] == str2[i])
			compareCount;
		if (str1[i] > str2[i])
			compareCount++;
	}
	//Judge and return the result. 
	if (compareCount < 0)
		return -1;
	if (compareCount == 0)
		return 0;
	if (compareCount > 0)
		return 1;
}