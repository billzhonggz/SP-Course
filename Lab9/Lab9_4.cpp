#include<stdio.h>
int sequence(int a);
int main()
{
	int n;
	n = 16;
	int output;
	output = sequence(n);
	printf("The %dth number of this sequence is %d.\n", n, output);
	return 0;
}
int sequence(int a)
{
	int b = 0;
	if (a == 1)
		return 2;
	if (a == 2)
		return 4;
	if (a == 3)
		return 5;
	b = sequence(a - 1) + sequence(a - 2) + sequence(a - 3);
	return b;
}