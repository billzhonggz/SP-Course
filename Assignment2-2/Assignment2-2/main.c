//
//  Assignment2_2.c
//  Assignment2
//
//  Created by zhong on 15/10/23.
//  Copyright © 2015年 zhong. All rights reserved.
//

#include <stdio.h>
int main(){
    int input;
    int power=1;
    printf("Please input a value n to calculate the 2 to the power of n.\n");
    scanf("%d",&input);
    if (input<0)
        printf("Invaild input!");
    else{
        do{
            power=2*power;
            input--;
        }
        while(input!=0);
    }
    printf("The result is %d.\n",power);
    return 0;
}
