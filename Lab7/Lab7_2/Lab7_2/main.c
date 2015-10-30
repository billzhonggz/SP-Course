#include<stdio.h>
void compare(float b[],int n);
float biggest, smallest;
int n;
int main()
{
    float inputValue[51];
    printf("Please input numbers one by one, use enter bottom to devide each numbers, no more than 50 numbers in total.\n");
    int numberCounter=0;
    for(numberCounter=0;numberCounter<51;numberCounter++){
        printf("Input a number.Type \"-1\" to stop.\n");
        scanf("%f",&inputValue[numberCounter]);
        if(inputValue[numberCounter]==-1)
            break;
    }
    n=numberCounter;
    compare(inputValue,n);
    printf("The biggest is %f, the smallest is %f.\n", biggest, smallest);
    return 0;
}
void compare(float b[],int n)
{
    float max=b[0];
    float min=b[0];
    int j;
    for(j=0;j<n;j++)
    {
        if(b[j]>max)
            max=b[j];
        if(b[j]<min)
            min=b[j];
    }
    biggest=max;
    smallest=min;
}
