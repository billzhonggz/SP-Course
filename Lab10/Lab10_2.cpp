#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int score;
    char major[20];
};
int main()
{
    printf("Please input your information.\n");
    struct student input[50];
    int i,j;
    int inputNumber=0;
    int breakRequire=0;
    //Get users' input.
    for (i=0;i<50;i++)
    {
        
        printf("Please input your name.\n");
        scanf("%s",input[i].name);
        printf("Please input your score.\n");
        scanf("%d",&input[i].score);
        printf("Please input your major.\n");
        scanf("%s",input[i].major);
        printf("Do you want to input more information? Type 1 to continue input, type 0 to stop input.\n");
        scanf("%d",&breakRequire);
        inputNumber++;
        if (breakRequire == 0)
            break;
    }
    //String operation. Put the smaller one to the front.
    int nameCompare=0;
    struct student temp;
    for (j=inputNumber;j>0;j--)
    {
        for (i=0;i<j-1;i++)
        {
            nameCompare = strcmp(input[i].name,input[i+1].name);
            if (nameCompare > 0)
            {
                temp=input[i+1];
                input[i+1]=input[i];
                input[i]=temp;
            }
        }
    }
    //Print out the result.
    for (i=0;i<inputNumber;i++)
    {
        printf("%s, %d, %s\n",input[i].name,input[i].score,input[i].major);
    }
    return 0;
}