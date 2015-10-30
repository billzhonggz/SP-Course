//
//  main.c
//  SP_Assignment2_1
//
//  Created by zhong on 15/10/23.
//  Copyright © 2015年 zhong. All rights reserved.
//

#include <stdio.h>

int main() {
    char input;
    printf("Please input an English letter.\n");
    scanf("%c",&input);
    input=(int)input;
    if(input>=65 && input<=90)
        input=input+32;
    else if(input>=97 && input<=122)
        input=input-32;
    else
        printf("Invalid input!");
    input=(char)input;
    printf("Output is %c\n",input);
    return 0;
}
