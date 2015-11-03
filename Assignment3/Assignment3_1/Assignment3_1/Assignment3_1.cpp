#include<stdio.h>
#include<string.h>
int main()
{
	printf("Please input a line of sentence.No longer than 100 characters in total(includes spaces).\n");
	char input[100];
	gets_s(input);
	int traversalCounter;
	char traversalTemp;
	int convert;
	for (traversalCounter = 0; traversalCounter <= 100; traversalCounter++) {
		traversalTemp = input[traversalCounter];
		if (traversalTemp = ' ') {
			convert = input[traversalCounter+1];
			convert = convert + 32;
			input[traversalCounter + 1] = (char)convert;
		}
	}
	printf("The result is\n");
	puts(input);
	return 0;
}