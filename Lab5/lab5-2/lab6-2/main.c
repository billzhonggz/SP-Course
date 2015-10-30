//
//  main.c
//  lab6-2
//
//  Created by zhong on 15/10/16.
//  Copyright © 2015年 zhong. All rights reserved.
//

#include <stdio.h>

int main()
{
    int height;
    int weight;
    printf("Please input your height.\n");
    scanf("%d",&height);
    printf("Please input your weight.\n");
    scanf("%d",&weight);
    if (height-105>weight+20)
        printf("You are too slim.");
        else if (weight-10<height-105 && height-105<=weight+20){
            printf("You are fit.");
        }
        else printf("You are too fat.");
    return 0;
}
