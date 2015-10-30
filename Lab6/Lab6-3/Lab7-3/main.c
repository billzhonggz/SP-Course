//
//  main.c
//  Lab7-3
//
//  Created by zhong on 15/10/23.
//  Copyright © 2015年 zhong. All rights reserved.
//

#include <stdio.h>

int main() {
    int row;
    int col;
    for (row=7;row>=1;row--){
        for(col=0;col<row;col++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
