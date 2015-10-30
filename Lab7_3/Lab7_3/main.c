#include<stdio.h>
int stringLength(char s[], int n);
int main()
{
    printf("Please input your characters, no longer than the string size of 50.\n");
    char input[50];
    scanf("%s", input);
    stringLength(input, 50);
    return 0;
}
int stringLength(char s[], int n)
{
    int i;
    int counter = 0;
    if (n > 50) {
        printf("Length exceeds the size!\n");
        return -1;
    }
    else {
        for (i = 0; i < n; i++) {
            if (s[i] != NULL)
                counter++;
            else break;
        }
        printf("The length of the input is %d.\n", counter);
    }	
    return 0;
}
