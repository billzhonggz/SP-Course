#include<stdio.h>
#include<stdlib.h>
int zeroInBinary(int n);
int main()
{
    //Get user's input.
    printf("Please input a positive integer.\n");
    int input;
    scanf("%d", &input);
    int zeroInBinaryReturn = 0;
    //Judge input is positive or not.
    if (input < 0)
        printf("Invalid input!\n");
    else
    {
        //Call function zeroInBinary.
        zeroInBinaryReturn = zeroInBinary(input);
        //Print out the result.
        printf("The number of 0 in binary of %d is %d.\n", input, zeroInBinaryReturn);
    }
    return 0;
}

int zeroInBinary(int n)
{
    int binary = 0;
    //Base case.
    //When input is 0 or 1, it can be directly become binary number.
    //Here give a direct result.
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    //Set up a recursive step. By using euclidean algorithm.
    if (n % 2 == 0)
    {
        binary = 1 + zeroInBinary (n / 2);
    }
    else 
    {
        binary = 0 + zeroInBinary (n / 2);
    }
    return binary;
}