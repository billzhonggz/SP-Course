#include <stdio.h>
int prime(int num);
int biggestDivisor(int num);
int main()
{
    printf("Please input an interge.\n");
    int input;
    scanf("%d",&input);
    int primeNumberReturn=0;
    int biggestDivisorReturn=0;
    //Recive the return value of prime function.
    primeNumberReturn=prime(input);
    //Judge the return value. If it is 0, go to biggest divisor, if it is 1, go to prime number.
    if (primeNumberReturn==0)
    {
        //Recive return value of biggestDivisor function and print out the value.
        biggestDivisorReturn=biggestDivisor(input);
        printf("The biggest divisor is %d.\n",biggestDivisorReturn);
    }
    if (primeNumberReturn==1)
        printf("This is a prime number!\n");
    return 0;
}
//Function to judge prime number.
int prime(int num)
{
    int i;
    int a=0; //Number of divided prime numbers.
    for (i=2;i<num;i++)
    {
        if(num%i==0)
        {
            a++;//Count the number of divided prime numbers.
        }
    }
    if (a==0)
        return 1;//Return 1 for "Prime Number".
    else return 0;//Return 0 for "Not Prime Number".
}
//Function to calculate biggest divisor.
int biggestDivisor (int num)
{
    int j;
    int temp;
    for(j=1;j<num;j++)
    {
        temp=num%j;
        //Judge whether input value can be exactly divided by increasing j.
        //If it can, break and return the value of j.
        //Otherwise, contiune looping.
        if(temp!=0)
        {
            break;
        }
    }
    //Because when j can not exactly divided num, the biggest divisor should be the value before. So return the value j-1.
    return j-1;
}