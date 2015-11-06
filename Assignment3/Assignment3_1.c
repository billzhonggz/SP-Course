#include<stdio.h>
char changeCase(char a);
int main()
{
    //Get user input.
    printf("Please input a line of sentence.No longer than 100 characters in total(includes spaces).\n");
    char input[100];
    gets(input);
    int traversalCounter;
    //Change the first letter into uppercase if it is lowercase.
    input[0]=changeCase(input[0]);
    //Foreach the array.
    for (traversalCounter = 0; traversalCounter < 100; traversalCounter++) {
        //Use space to detect words. Change each letter next to the spaces to uppercase.
        if (input[traversalCounter]==' ')
            input[traversalCounter+1]=changeCase(input[traversalCounter+1]);
    }
    printf("The result is\n");
    puts(input);
    return 0;
}
//Function to judge whether input is a lowercase letter. If it is, change it to uppercase, if it isn't, do nothing. 
char changeCase(char a)
{
    if (a>=97 && a<=122) {
        a=a-32;
    }
    return a;
}