#include<stdio.h>
#include<string.h>
struct studentInfo
{
    char name[20];
    int score;
};
int sort(char *inputFileName, char *outputFileName);
int main()
{
    int sortReturn = 0;
    printf("Please input the source file name.\n");
    char input[20];
    gets(input);
    printf("Please input the destination file name.\n");
    char output[20];
    gets(output);
    sortReturn = sort(input, output);
    if (sortReturn == 0)
        printf("Error: can not open or write files.\n");
    if (sortReturn == 1)
        printf("Program ran successfully.\n");
    return 0;
}

int sort(char *inputFileName, char *outputFileName)
{
    FILE *res;
    FILE *dest;
    res = fopen(inputFileName, "r");
    dest = fopen(outputFileName, "w");
    if (res == NULL || dest == NULL)
    {
        printf("File cannot open.\n");
        return 0;
    }
    //Read file to arrays.
    struct studentInfo beforeSort[20];
    int i,j;
    //PROBLEMS OCCUR HERE!
    for (i = 0; i < 20; i++)
    {
        fscanf(res, "%s,%d\n", beforeSort[i].name, &beforeSort[i].score);
    }
    //PROBLEMS ABOVE
    //Sort and store in another arrays.
    struct studentInfo afterSort[20];
    for (j = 19; j >= 0; j--)
    {
        for (i = 0; i < j-1; i++)
        {
            if (beforeSort[i].name>beforeSort[i + 1].name)
            {
                strcpy(afterSort[i].name, beforeSort[i + 1].name);
                afterSort[i].score = beforeSort[i + 1].score;
            }
            else
            {
                strcpy(afterSort[i].name, beforeSort[i].name);
                afterSort[i].score = beforeSort[i].score;
            }
        }
    }
    //Write sorted result to the file.
    for (i = 0; i < 20; i++)
    {
        fprintf(dest, "%s,%d\n", afterSort[i].name, afterSort[i].score);
    }
    fclose(res);
    fclose(dest);
    return 1;
}