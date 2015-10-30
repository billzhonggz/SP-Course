//
//  main.c
//  Lab7-2
//
//  Created by zhong on 15/10/23.
//  Copyright © 2015年 zhong. All rights reserved.
//

#include <stdio.h>

int main() {
    char input;
    int aCount=0;
    printf("Please type a sectence...\n");
    do{
        scanf("%c",&input);
        if(input=='\n')
            break;
        else if(input=='a')
            aCount++;
    }
    while(input!='\n');
    printf("The number of \"a\" is %d.\n",aCount);
    return 0;
}
