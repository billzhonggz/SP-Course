//
//  main.c
//  lab6-3
//
//  Created by zhong on 15/10/16.
//  Copyright © 2015年 zhong. All rights reserved.
//

#include <stdio.h>

int main() {
    char grade;
    printf("Please input a grade.\n");
    scanf("%c",&grade);
    /*Convert capital letters to lowercase.*/
    grade=(int)grade;
    if(grade>=65&&grade<=90)
        grade=grade+32;
    else(grade=grade);
    grade=(char)grade;
    /*Decision Making.*/
    switch(grade){
        case 'a':printf("Your GPA is 4.00.");
            break;
        case 'b':printf("Your GPA is 3.00.");
            break;
        case 'c':printf("Your GPA is 2.00.");
            break;
        case 'd':printf("Your GPA is 1.00.");
            break;
        case 'f':printf("Your GPA is 0.00.");
            break;
        default:printf("Invalid input!");
    }
    return 0;
}
