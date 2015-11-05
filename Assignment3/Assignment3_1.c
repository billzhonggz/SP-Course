#include<stdio.h>
char changeCase(char a);
int main()
{
    printf("Please input a line of sentence.No longer than 100 characters in total(includes spaces).\n");
    char input[100];
    gets(input);//Get users
    int traversalCounter;
    input[0]=changeCase(input[0]);
    for (traversalCounter = 0; traversalCounter < 100; traversalCounter++) {
        if (input[traversalCounter]==' ')
            input[traversalCounter+1]=changeCase(input[traversalCounter+1]);
    }
    printf("The result is\n");
    puts(input);
    return 0;
}

char changeCase(char a)
{
    if (a>=97 && a<=122) {
        a=a-32;
    }
    return a;
}